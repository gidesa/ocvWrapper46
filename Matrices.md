# ocvWrapper46 v 1.2

# A wrapper library around Opencv 4.6 C++ API for Delphi, Lazarus/Freepascal and C

# Use of Opencv matrices and Delphi/FPC classes documentation
  
  
# The Mat class in Opencv

The Mat class is the main one in Opencv. It is a matrix class, that contains images. Every Mat image
has 2 dimensions, with a width (number of columns); an height (number of rows); a channels number, where 
every channel is for a color, plus optionally an alpha channel for transparence.
So gray images have 1 channel, normal color images have 3 channels, color images
with alpha have 4 channels. 
The data type of image matrix cell normally is  unsigned byte.

But Mat class is also used to exchange parametric data in input to functions/methods, and as
 a container for various numeric output results. The Mat objects used as input/output parameters often
has more than 2 dimensions, and data type different from unsigned byte; for example in many cases
the type is C/C++ 32 bit signed float. 

In Opencv the data type of matrix elements/cells is merged with channel numbers, obtaining constants
fro every combination. For example, CV_8UC3 is used to create a matrix having data type unsigned byte 
with 3 channels.

Note that there exists a UMat class, too. It's defined to use transparently the GPU.  


# The Mat class in wrapper

Inside the wrapper the Mat class is "flattened" in many simple C functions, beginning
from the creator (pCvMatCreate with various signatures) and the destructor (pCvMatDelete).
There are functions to get Mat width, height, channels number (number of color for images),
to get single row or column, to read/write a single element/cell, etc. etc.
  
# The Pascal classes for Mat

There are two Pascal classes wrapping the original Mat class:  
- TOcvImage is used when working with a regular 2-d image
- TOcvParamMat is used when working with parametric matrices in input or output to 
  Opencv functions/methods. 

These classes simplify the management of Mat objects. They wrap many base and special constructors.
Among them, there is one to create an instance passing an existing Mat pointer (PCvMat_t type); this
is useful when a wrapper function return such pointer.
TOcvImage contains many methods  typically used on images; for example: load from and save to file;
translate to/from  Bmp; crop; resize; split/merge color channels; transform color image to/from gray;
flip; rotate; sharpen; etc.  

TOcvParamMat contains methods ".at[row, col, channel]", ".atInt[row, col, channel]", ".atDbl[row, col, channel]" to access 
one element/cell, automatically performing type conversion from single/double to integer and viceversa (Note: on 2-d matrices). 
The constructor of matrices with different data types and channels requires only the simple type
and channels number, then internally the constructor itself find the correct Opencv constant.

A very important property of TOcvImage and TOcvParamMat is PCvMatPtr. It's the pointer to the wrapper Mat struct
(the one that contains a reference to Opencv C** Mat object). This property is used when calling a wrapper function
that requires a PCvMat_t parameter.


