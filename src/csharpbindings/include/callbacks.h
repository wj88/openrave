/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/callbacks.idl
 */

#ifndef __gen_callbacks_h__
#define __gen_callbacks_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ICallback */
#define ICALLBACK_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACK_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACK_IID)

  /* void Invoke (); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallback, ICALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACK \
  NS_SCRIPTABLE NS_IMETHOD Invoke(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(void) { return _to Invoke(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallback)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Invoke (); */
NS_IMETHODIMP _MYCLASS_::Invoke()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICallbackUserCheck */
#define ICALLBACKUSERCHECK_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKUSERCHECK_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackUserCheck : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKUSERCHECK_IID)

  /* boolean Invoke (); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackUserCheck, ICALLBACKUSERCHECK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKUSERCHECK \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKUSERCHECK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRBool *_retval NS_OUTPARAM) { return _to Invoke(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKUSERCHECK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackUserCheck
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKUSERCHECK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackUserCheck)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean Invoke (); */
NS_IMETHODIMP _MYCLASS_::Invoke(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_callbacks_h__ */
