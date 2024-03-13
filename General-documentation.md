# ocvWrapper46 v 1.2

# A wrapper library around Opencv 4.6 C++ API for Delphi, Lazarus/Freepascal and C

# General documentation 
  

# Types of classes in Opencv

- standard Opencv classes: these have a standard constructor/destructor, properties with get and set, and methods.
- pointer to classes (Ptr): these pointers are returned from some "factory" global functions. So these classes
  haven't a regular constructor, and the pointer requires a type of processing different from standard class reference.
- Opencv structs: there are also some structs used among the C++ classes. These structs, in wrapper, for simplicity
  are treated as the standard classes, so they have a pseudo constructor/destructor.
- C++ vectors: Opencv sometimes use C++ vectors, and vectors of vectors. In wrapper these are treated as standard
  classes, of course with some specific methods.
  
# Wrapper implementation

Wrapper C++ code binds a special C struct to every class, is it an Opencv struct, a Ptr or a vector. The binding struct name end with \"_t\" suffix.
The struct contains internally a field with the reference to the real Opencv internal entity (class, struct, ecc.).

Every Opencv/C++ class is "flattened" to a group of C functions: one for create, one for delete, one for every method, one for
every property get, and one for every property set. The create function returns the binding struct, and the delete function release the memory
allocated for the entity, and for the struct iself. 

Only Ptr, as said, haven't the create function but only delete function.
When the C or Delphi caller program  invoke some method or function, it pass always as the first parameter the pointer to binding
struct, that was returned from the corresponding create function.

All C wrapper functions names are built by the "pCv" prefix, then the class name, and then  the original Opencv method name:

  pCv\<class name\>\<method name\>
  
Properties get and set have this standard name schema:
  
  pCv\<class name\>Set_\<property name\>
  
  pCv\<class name\>Get_\<property name\>
  
Example: the standard Mat Opencv class has the binding struct called Mat_t, a constructor called pCvMatCreate 
(indeed plus many others constructors because it's a special class), and a destructor called pCvMatDelete.
  
At last, for some very simple classes or structs, with few fields, there aren't single get/set functions for every property,
but instead only two functions FromStruct and ToStruct that get or set all members using an helper C struct with a single call. So:
  
  pCv\<class name\>FromStruct
  
  pCv\<class name\>ToStruct
  
Ptr types have another specialized function that convert from Ptr entity to the standard wrapper binding struct. This because
in general all wrapper functions "understand" only the binding struct format, not Ptr.
  
For example, for Ptr_Feature2d type there is a pCvPtr_Feature2dConvert function,  that has input parameter type Ptr_feature2d and
returns a pointer to a fresh Feature2d_t binding struct. When calling a method of Feature2D class (example: pCvFeature2dcompute) 
you will use the binding struct as first parameter, not the original Ptr.
  
Note an important aspect: all binding structs, created with create functions, must be deleted, of course. But the same is true also for
binding structs returned directly from other wrapper functions. For example, all structs returned from properties get methods. Or
all structs returned from the functions for get elements of some vectors types, ex. vector_keypoint.

All structs not properly deleted cause memory leaks.
  

# Default parameter values management

The wrapper library has a complete management of default values for function parameters. Of course Delphi/Freepascal is
capable of setting default values of simple type (integer, float). 
Many functions require a C++ object as default value. This is not a problem, in that cases
the Delphi/Freepascal program has only to pass a \"nil\" parameter, then the wrapper library internally builds the
exact C++ class object required by Opencv as default.  


# C++ exception handling

The C++ and Opencv exceptions are handled by a special handler function in wrapper. This function always print the exception message
on standard output. If the caller application is a console one, than the error messages are visible directly in application
window.  

The handler function also call an external handler function, if registered, passing the exception message. The external function can
be registered calling the DLL function:  

bool     pCvRedirectException(void * func);  

that translates in Pascal:  

function  pCvRedirectException(const proc: Pointer): Boolean; cdecl;  


If pointer "proc" \> 0 the external handler is registered, if proc = 0 the handler is unregistered.  

The signature of external handler has to be:  

void(\*customException) (string_t*)  

For convenience the main unit OPENCVWrapper.pas (see forward) during initialization registers a standard handler, that
raise a Delphi/FPC exception for every C++ or Opencv exception.

procedure cvException(msg: PCvString_t); 

But you can register a different function, with the same signature as the unit one.  

(Note that the "msg" struct must not be deleted inside cvException or other user custom handler, because after completion it returns to the caller,
i.e. the wrapper handler, and this one delete the struct).

By the way, there is a trick also for GUI  Delphi/Lazarus applications to open a console window: just insert {$APPTYPE CONSOLE}
in the project .dpr/.lpr source: the forms will be displayed normally, plus a console window will be open.

# AutoDestroy utility unit

The wrapper structs, created by the various functions around the C++ objects, have to be deleted to release memory, as noted previously.
This is same as Delphi/Freepascal, no difference.  

But note that Delphi/Freepascal memory manager does not directly create these objects, so cannot report if some
C++ object delete is missing.  

AutoDestroy unit add a useful mode to create wrapper structs without the need to manually call the corresponding wrapper delete
function. It exploits the well known reference counting of Delphi/Freepascal interfaces.  

For now there is a function to auto destroy the ubiquitous pCvMat_t object.  
Example manual delete:   
```
try   
   m := pCvMatImageCreate(w, h, CV_8UC3);     
   .............   
finally   
   pCvMatDelete(m);   
end;  
```


Example auto delete:  
```
try      
    m := CvMatAuto(pCvMatImageCreate(w, h, CV_8UC3)).AsPtr;      
    .............   
finally      
   // no delete needed     
end;       
```    

# Delphi/FPC use

To use ocvWrapper from Delphi or Fpc only add the main unit OPENCVWrapper.pas to Uses clause
of program.
Other .pas files are included directly from OPENCVWrapper.pas   
In that main unit there are many definitions of "fake" records, named as
__inter__xx . They served only as a trick to force the Delphi/Lazarus IDE and compiler to discriminate
the various "opaque" pointers to wrapper structures. 

Without the trick, all that pointers are only .... pointers, not different one from another!
So IDE cannot help in code suggestion, and compiler cannot catch wrong use.



