// Example : weighted knn digit classification
// usage: prog training_data_file testing_data_file

// For use with test / training datasets : opticaldigits_ex

// Copyright (c) 2013 Toby Breckon, toby.breckon@durham.ac.uk
// School of Engineering and Computing Sciences, Durham University
// License : LGPL - http://www.gnu.org/licenses/lgpl.html

// Copyright (c) 2022 Giandomenico De Sanctis
// Converted to use OpenCV 4.6 pure C wrapper library

#define _CRT_SECURE_NO_WARNINGS  1 


#include <cstdio>
#include <corecrt_math.h>
#include <float.h>

using namespace std;

#include "..\source\ocvWrp_c_generated_const.h"
#include "..\source\ocvWrp_nativeTypes_signatures.h"
#include "..\source\ocvWrp_nativeNotGen_signatures.h"
#include "..\source\ocvWrp_c_generated_signatures.h"
#include "..\source\ocvWrp_nativeClasses_signatures.h"



/******************************************************************************/
// global definitions

#define NUMBER_OF_TRAINING_SAMPLES 3823
#define ATTRIBUTES_PER_SAMPLE 64
#define NUMBER_OF_TESTING_SAMPLES 1797

#define NUMBER_OF_CLASSES 10 // digits 0->9

// "self load" data from CSV file in Mat() objects
// filename = file to load
// data = training or testing attributes (1 sample per row)
// responses =  training or testing classes (1 sample per row)
// n_samples = number of samples in the set

int read_data_from_csv(const char* filename, Mat_t** data, Mat_t** responses, int n_samples );

/******************************************************************************/

int main( int argc, char** argv )
{
	// define data set objects

        Mat_t* training_data = 0;
        Mat_t* testing_data  = 0 ;
		Mat_t* training_responses = 0 ;
		Mat_t* testing_responses = 0;

    // load training and testing data sets (either from command line or *.{test|train} files

    if (((argc > 1) && (!(read_data_from_csv(argv[1],
                          &training_data, &training_responses, NUMBER_OF_TRAINING_SAMPLES))
                    && !(read_data_from_csv(argv[2],
                          &testing_data, &testing_responses, NUMBER_OF_TESTING_SAMPLES))))
        ||            (!(read_data_from_csv("optdigits.train",
                          &training_data, &training_responses, NUMBER_OF_TRAINING_SAMPLES))
                    && !(read_data_from_csv("optdigits.test",
                          &testing_data, &testing_responses, NUMBER_OF_TESTING_SAMPLES)))
        )
    {

 		Ptr_KNearest*  ptrknn =  pCvml_KNearest_create();
		ml_KNearest_t* knn = pCvPtr_KNearestConvert(ptrknn);
        // train kNN classifier (using training data)

		Mat_t* emptymat = pCvMatCreateEmpty();
		pCvml_KNearesttrainV2(knn, training_data, ROW_SAMPLE,  training_responses);

        // perform classifier testing and report results

        Mat_t* test_sample = pCvMatCreateEmpty();
        int correct_class = 0;
        int wrong_class = 0;
		Mat_t* false_positives = pCvMat2dCreate(NUMBER_OF_CLASSES, 1, CV_32S );
        float result;

        // for each test example i the test set
		int nrows = pCvMatGetHeight(testing_data);
        for (int tsample = 0; tsample < nrows; tsample++)
        {

            // extract a row from the testing matrix

			test_sample = pCvMatGetRow(testing_data, tsample);

            // run kNN classificaation (for k = 7)

			result = pCvml_KNearestfindNearest(  knn,  test_sample, 7, emptymat, emptymat, emptymat);

            printf("Test Example %i -> class result (digit %i)\n",
                    tsample, ((int) result));
			pCvMatDelete(test_sample);

            // if the prediction and the (true) testing classification are the same
            // (within the bounds of floating point error for cross-platfom safety)

			if (fabs(result - pCvMatGetFloat(testing_responses, tsample, 0)  >= FLT_EPSILON)  )
            {
                // if they differ more than floating point error => wrong class

                wrong_class++;
				int oldv = pCvMatGetInt(false_positives, (int)result, 0);
				pCvMatSetInt(false_positives, (int)result, 0, ++oldv);

            } else {

                // otherwise correct

                correct_class++;
            }
        }

        printf( "\nResults on the testing database: %s\n"
                "\tCorrect classification: %d (%g%%)\n"
                "\tWrong classification: %d (%g%%)\n",
                (argc > 1) ? argv[2] : "optdigits.test",
                correct_class, (double) correct_class*100/pCvMatGetHeight(testing_data),
                wrong_class, (double) wrong_class*100/ pCvMatGetHeight(testing_data)  );

        for (unsigned int c = 0; c < NUMBER_OF_CLASSES; c++)
        {
			printf("\tClass (digit %i) false positives 	%d (%g%%)\n", c,
				pCvMatGetInt(false_positives, c, 0),
				(  ((double)pCvMatGetInt(false_positives, c, 0)) * 100 / pCvMatGetHeight(testing_data)  )   );
		}

        // on MS Windows wait to exit prompt
        #ifdef WIN32
            getchar();
        #endif // WIN32

        // all OK : main returns 0
		pCvPtr_KNearestDelete(ptrknn, knn);
		pCvMatDelete(training_data);
		pCvMatDelete(testing_data);
		pCvMatDelete(training_responses);
		pCvMatDelete(testing_responses);
		pCvMatDelete(false_positives);
		pCvMatDelete(emptymat);
        return 0;
    }

    // not OK : main returns -1

    printf("usage: %s filename.train filename.test\n", argv[0]);
    printf("Failed to load training and testing data from specified files\n");
    return -1;
}
/******************************************************************************/

// loads the sample database from file (which is a CSV text file)

int read_data_from_csv(const char* filename, Mat_t** data, Mat_t** responses, int n_samples )
{
	*data = pCvMat2dCreate(n_samples, ATTRIBUTES_PER_SAMPLE, CV_32FC1  );
	*responses = pCvMat2dCreate(n_samples, 1, CV_32FC1);

    float tmp;

    // if we can't read the input file then return 0
    FILE* f = fopen( filename, "r" );
    if( !f )
    {
        printf("ERROR: cannot read file %s\n",  filename);
        return 1; // all not OK
    }

    // for each sample in the file

    for(int line = 0; line < n_samples; line++)
    {

        // for each attribute on the line in the file

        for(int attribute = 0; attribute < (ATTRIBUTES_PER_SAMPLE + 1); attribute++)
        {
            if (attribute < ATTRIBUTES_PER_SAMPLE)
            {

                // first 64 elements (0-63) in each line are the attributes

                fscanf(f, "%f,", &tmp);
				pCvMatSetFloat(*data, line, attribute,  tmp);

            }
            else if (attribute == ATTRIBUTES_PER_SAMPLE)
            {

                // attribute 65 is the class label {0 ... 9}

                fscanf(f, "%f,", &tmp);
				pCvMatSetFloat(*responses, line, 0, tmp);

            }
        }
    }

    fclose(f);

    return 0; // all OK
}

/******************************************************************************/
