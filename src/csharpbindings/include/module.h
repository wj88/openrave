/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/module.idl
 */

#ifndef __gen_module_h__
#define __gen_module_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

#ifndef __gen_interface_h__
#include "interface.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IModuleBase */
#define IMODULEBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IMODULEBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IModuleBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMODULEBASE_IID)

  /* long GetInterfaceTypeStatic (); */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long main (in string cmd); */
  NS_SCRIPTABLE NS_IMETHOD Main(const char *cmd, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void Destroy (); */
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) = 0;

  /* void Reset (); */
  NS_SCRIPTABLE NS_IMETHOD Reset(void) = 0;

  /* boolean SimulationStep (in float fElapsedTime); */
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IModuleBase, IMODULEBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMODULEBASE \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Main(const char *cmd, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void); \
  NS_SCRIPTABLE NS_IMETHOD Reset(void); \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMODULEBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM) { return _to GetInterfaceTypeStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Main(const char *cmd, PRInt32 *_retval NS_OUTPARAM) { return _to Main(cmd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return _to Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return _to Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime, PRBool *_retval NS_OUTPARAM) { return _to SimulationStep(fElapsedTime, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMODULEBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceTypeStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Main(const char *cmd, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Main(cmd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SimulationStep(fElapsedTime, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IModuleBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMODULEBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IModuleBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long GetInterfaceTypeStatic (); */
NS_IMETHODIMP _MYCLASS_::GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long main (in string cmd); */
NS_IMETHODIMP _MYCLASS_::Main(const char *cmd, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Destroy (); */
NS_IMETHODIMP _MYCLASS_::Destroy()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Reset (); */
NS_IMETHODIMP _MYCLASS_::Reset()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SimulationStep (in float fElapsedTime); */
NS_IMETHODIMP _MYCLASS_::SimulationStep(float fElapsedTime, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_module_h__ */
