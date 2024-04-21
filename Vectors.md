# ocvWrapper46 

# C++ vectors and their wrapper counterparts 

Opencv does use of C++ generic vectors, and sometimes of vectors of vectors. In wrapper these are treated as standard
classes. Every C++ typed vector is flattened with these wrapper Pascal functions/procedures:     
   Function    pCvVectorTTTCreate(const n: Integer): PCvvector_TTT; cdecl;  
   Procedure   pCvVectorTTTDelete(const wrapper: PCvvector_TTT); cdecl;  
   Function    pCvVectorTTTLength(const wrapper: PCvvector_TTT): Integer; cdecl;  
   Function    pCvVectorTTTGet(const wrapper: PCvvector_TTT; const index: Integer): PCvTTT_t; cdecl;  
   Function    pCvVectorTTTSet(const wrapper: PCvvector_TTT; const index: Integer; const val: PCvTTT_t): PCvTTT_t; cdecl;  

where "TTT" is the concrete Opencv type of vector elements. Note that the concrete type could be another vector,
creating a vector of vectors.   
Parameter "n" in create is the desired number of elements. It could be 0,  this is used when the vector is an input/ouput
parameter to an Opencv function, that freely redim it.   
Length is the number of vector elements.   
Use "set" to fill an element, and "get" to read it.
IMPORTANT! "Get" function return a copy of vector element; if the element type is an Opencv class, then the returned
copy must be destroyed with regular delete procedure.
Example:   
   Function    pCvVectorMatGet(const wrapper: PCvvector_Mat; const index: Integer): PCvMat_t; cdecl;  
returns a pointer to a Mat object, after processing this object must be destroyed with:  
  procedure  pCvMatDelete (const mat: PCvMat_t); cdecl;
   
Some vectors have element type that maps well to native Pascal types, or simple records. For example, vector of int, where
int maps to integer. Or vector of Point, where element maps to a simple Point record.   
For these vectors, additional FromArray and ToArray procedures are defined. FromArray fills the vector from 
a Pascal array, ToArray inversely fills a Pascal dynamic array with (copies of) vector elements.     

   Procedure   pCvVectorTTTToArray(const wrapper: PCvvector_TTT; outvalues: OutTTT); cdecl;  
   Procedure   pCvVectorTTTFromArray(const wrapper: PCvvector_TTT; inpvalues: OutTTT); cdecl;  
 
where "TTT" is the Opencv element type ("int" or "Point" in examples), and "outTTT" is a pointer to the first array element.
The pointer type is the one of array element: this can be a simple native type, then outTTT is PInteger, PSingle, PByte, etc.
Or could be a simple record type: PCvSizeS, PCvPointS, PCvRotatedRectS, etc.  
Note that C++ strings aren't simple types in wrapper.   
Example of FromArray/ToArray:

  Procedure   pCvVectorintToArray(const wrapper: PCvvector_int; outvalues: PInteger); cdecl;  
  Procedure   pCvVectorintFromArray(const wrapper: PCvvector_int; inpvalues: PInteger); cdecl;  

  Procedure   pCvVectorcharToArray(const wrapper: PCvvector_char; outvalues: PAnsiChar); cdecl;  
  Procedure   pCvVectorcharFromArray(const wrapper: PCvvector_char; inpvalues: PAnsiChar); cdecl;  

  Procedure   pCvVectorPointToArray(const wrapper: PCvvector_Point; outvalues: PCvPointS); cdecl;  
  Procedure   pCvVectorPointFromArray(const wrapper: PCvvector_Point; inpvalues: PCvPointS); cdecl;  

# The Pascal vector classes

The TOcvVector<T, U> class (defined in files: unOcvVectors.pas, OcvVecTypes.inc, OcvVecDetails.inc) simplifies
accessing Opencv vectors from FPC or Delphi, taking care of many details.  

NOTE FOR FPC: this class use generics, and works only for FPC version 3.3.1 or greater.  

The class requires two type parameters: the type of vector "T", and the type "U" of element associated with
that vector type. So, although possible, is not advisable to use this class directly, because
it's mandatory to know the exact element type associated with vector type.  
Instead there are predefined concrete types for every possible vector type (in OcvVecTypes.inc).    
For example:  

    TCvPasvector_int      = TOcvVector<PCvvector_int, Integer>;   
    TCvPasvector_Mat      = TOcvVector<PCvvector_Mat, PCvMat_t>;   
    TCvPasvector_Point    = TOcvVector<PCvvector_Point, PCvPoint_t>;   

Public methods and properties are:

       //** Create a new vector: T is Opencv vector type, U is element type, n is number of elements  
       constructor Create(n: Integer);  overload;  
       //** Create a new vector from existing pointer of Opencv type T  
       constructor Create(ocvVec: T);   overload;  
       destructor  Destroy; override;  

       //**  Fill an array from vector elements; if the returned array has length 0, then  
       //**  the function is not defined for this vector type  
       function toArray(): TArray<U>;  
       //**  Fill vector elements from an array; if returned value is 0, then  
       //**  the function is not defined for this vector type  
       function fromArray(inpar: TArray<U>): Integer;  

       //** Return the internal pointer to Opencv vector  
       property pCvVector: T read internVector ;  
       //** Return the length (size) of vector  
       property length: Integer read getLength;  
       //** Return True if to/from array functions are defined for this vector type, else False
       property hasToFromArray: Boolean read getToFromArray;  
       //** Set or get a vector element, of type U  
       property item[i: Integer]: U read getItem write setItem;  

When invoking a wrapper function,  you have to pass the
pCvVector property in all vector type (Opencv type) parameters. 
Example: a vector of C++ type "vector_KeyPoint" is created empty, then it's passed
to wrapper function by pCvVector property (vecKeypoint1.pCvVector). The function sets the vector length
and fills its elements with data. So, after the call, the vecKeypoint1 length will be greater 0. 
   var  
   vecKeypoint1: TCvPasvector_KeyPoint;   
   .............
   vecKeypoint1:=TCvPasvector_KeyPoint.Create(0);  
   pCvORBdetectAndCompute(ptrorb.pCvClassObj, img1.PCvMatPtr, pCvDefaultMat, vecKeypoint1.pCvVector, detectors1.PCvMatPtr);  


Complete example of class use is in featureTestWithClasses program.

