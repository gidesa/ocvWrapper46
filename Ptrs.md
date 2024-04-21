# ocvWrapper46 

# Opencv pointers (Ptr) and their wrapper counterparts 

Opencv defines a special "smart pointer" generic type, called Ptr. These are a sort of pointers to pointer; internally
they contain a regular C++ pointer to object. But Ptr can be managed by a sort of garbage collector. They are returned from some 
"factory" global functions.  
In wrapper these are treated as standard
classes. Every C++ typed Ptr is flattened with these wrapper Pascal functions/procedures:  

Function    pCvPtr_XXXCreate(const wrapper: PCXXX_t): PCvPtr_XXX; cdecl;
Procedure   pCvPtr_XXXDelete(const cptr: PCvPtr_XXX;  const wrapper: PCvXXX_t); cdecl;
Function    pCvPtr_XXXConvert(const wrapper: PCvPtr_XXX): PCvXXX_t; cdecl;

where "TTT" is the concrete Opencv type of object pointed from Ptr.
Ptr types in wrapper have a regular create and delete, and a specialized function that convert (or extract) from Ptr entity to the standard 
wrapper binding struct. This because in general all wrapper functions "understand" only the binding struct format, not Ptr.  
For example, for Ptr_Feature2d type there is a pCvPtr_Feature2dConvert function,  that has input parameter type Ptr_feature2d and
returns a pointer to a fresh Feature2d_t binding struct. When calling a method of Feature2D class (example: pCvFeature2dcompute) 
you will use the binding struct as first parameter, not the original Ptr.  
For this reason the destructor requires two parameters: the original Ptr, and the binding wrapper struct.
Example: the ORB feature descriptor is created with  

    Function   pCvORB_create(nfeatures: Integer; 
                 scaleFactor: Single; nlevels: Integer; 
                 edgeThreshold: Integer; firstLevel: Integer ; WTA_K: Integer; 
                 scoreType: TCvORB_ScoreType; patchSize: Integer ; 
                 fastThreshold: Integer ): PCvPtr_ORB; cdecl;  

that returns a PcvPtr_ORB struct.
But the procedure to extract the descriptors has the signature:   

    Procedure  pCvORBdetectAndCompute(const wrapper: PCvORB_t; image: PCvMat_t; mask: PCvMat_t; 
                 keypoints: PCvvector_KeyPoint; descriptors: PCvMat_t; 
                 useProvidedKeypoints: Boolean); cdecl;   
     
where first parameter is a PCvORB_t struct, not   PcvPtr_ORB.
You obtains the parameter of right type calling:  
   Function    pCvPtr_ORBConvert(const wrapper: PCvPtr_ORB): PCvORB_t; cdecl; 



# The Ptr  classes

The TOcvPtr<T, U> class (defined in files: unOcvPtrs.pas, OcvPtrTypes.inc, OcvPtrDetails.inc) simplifies
accessing Opencv Ptr from FPC or Delphi, taking care of many details.  

NOTE FOR FPC: this class use generics, and works only for FPC version 3.3.1 or greater.  

The class requires two type parameters: the type of Ptr "T", and the type "U" of wrapper struct associated with
that Ptr type. So, although possible, is not advisable to use this class directly, because
it's mandatory to know the exact wrapper struct type associated with Ptr type.  
Instead there are predefined concrete types for every possible Ptr type (in OcvPtrTypes.inc).      
For example:  

    TCvPasPtr_ORB             = TOcvPtr<PCvPtr_ORB, PCvORB_t>;  
    TCvPasPtr_QRCodeEncoder   = TOcvPtr<PCvPtr_QRCodeEncoder, PCvQRCodeEncoder_t>;  
    TCvPasPtr_StereoBM        = TOcvPtr<PCvPtr_StereoBM, PCvStereoBM_t>;  


Public methods and properties are:

       //** Create a new Ptr: T is Opencv Ptr type, U is wrapper struct type pointed by T
       constructor Create();  overload;
       //** Create a new Ptr from existing  Opencv Ptr of type T
       constructor Create(ocvPtr: T);   overload;
       destructor  Destroy; override;

       //** Return the internal pointer to Opencv Ptr
       property pCvPtr: T read internPtr ;
       //** Return the internal pointer to wrapper struct pointed by internPtr
       property pCvClassObj: U read internClassObj ;

As previously explained, all wrapper functions/procedures accept as parameter only wrapper
structs, not Ptr structs. But the class takes care of automatic conversion from Ptr to wrapper struct.
So, in practice, you simply use the pCvClassObj property as parameter.    
Example of use:  
var  
  ptrorb: TCvPasPtr_ORB;  
  // .......  
begin  
  ptrorb:=TCvPasPtr_ORB.Create( pCvORB_create() );  // use the second type of creator, because pCvORB_create returns a Ptr
  // ......  
  pCvORBdetectAndCompute(ptrorb.pCvClassObj, img1.PCvMatPtr, pCvDefaultMat, vecKeypoint1.pCvVector, detectors1.PCvMatPtr);  
  // ......  
  ptrorb.Free;  

Complete example of class use is in featureTestWithClasses program.

