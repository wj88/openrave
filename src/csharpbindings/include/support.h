/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/support.idl
 */

#ifndef __gen_support_h__
#define __gen_support_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IMutex */
#define IMUTEX_IID_STR "00000000-0000-0000-0000-000000000000"

#define IMUTEX_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IMutex : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMUTEX_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IMutex, IMUTEX_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMUTEX \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMUTEX(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMUTEX(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IMutex
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMUTEX

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IMutex)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_support_h__ */
