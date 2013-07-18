/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/plugininfo.idl
 */

#ifndef __gen_plugininfo_h__
#define __gen_plugininfo_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IPluginInfoMap */
#define IPLUGININFOMAP_IID_STR "00000000-0000-0000-0000-000000000000"

#define IPLUGININFOMAP_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IPluginInfoMap : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IPLUGININFOMAP_IID)

  /* attribute long InterfaceType; */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *aInterfaceType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInterfaceType(PRInt32 aInterfaceType) = 0;

  /* void GetInterfaceNames (out unsigned long count, [array, size_is (count)] out string v); */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IPluginInfoMap, IPLUGININFOMAP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPLUGININFOMAP \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *aInterfaceType); \
  NS_SCRIPTABLE NS_IMETHOD SetInterfaceType(PRInt32 aInterfaceType); \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPLUGININFOMAP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *aInterfaceType) { return _to GetInterfaceType(aInterfaceType); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterfaceType(PRInt32 aInterfaceType) { return _to SetInterfaceType(aInterfaceType); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) { return _to GetInterfaceNames(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPLUGININFOMAP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *aInterfaceType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceType(aInterfaceType); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterfaceType(PRInt32 aInterfaceType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInterfaceType(aInterfaceType); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceNames(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IPluginInfoMap
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IPLUGININFOMAP

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IPluginInfoMap)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute long InterfaceType; */
NS_IMETHODIMP _MYCLASS_::GetInterfaceType(PRInt32 *aInterfaceType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetInterfaceType(PRInt32 aInterfaceType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetInterfaceNames (out unsigned long count, [array, size_is (count)] out string v); */
NS_IMETHODIMP _MYCLASS_::GetInterfaceNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IPluginInfo */
#define IPLUGININFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IPLUGININFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IPluginInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IPLUGININFO_IID)

  /* void GetInterfaceNames (out unsigned long count, [array, size_is (count)] out IPluginInfoMap v); */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, IPluginInfoMap ***v NS_OUTPARAM) = 0;

  /* attribute long version; */
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IPluginInfo, IPLUGININFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPLUGININFO \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, IPluginInfoMap ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion); \
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPLUGININFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, IPluginInfoMap ***v NS_OUTPARAM) { return _to GetInterfaceNames(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) { return _to GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion) { return _to SetVersion(aVersion); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPLUGININFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceNames(PRUint32 *count NS_OUTPARAM, IPluginInfoMap ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceNames(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVersion(aVersion); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IPluginInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IPLUGININFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IPluginInfo)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetInterfaceNames (out unsigned long count, [array, size_is (count)] out IPluginInfoMap v); */
NS_IMETHODIMP _MYCLASS_::GetInterfaceNames(PRUint32 *count NS_OUTPARAM, IPluginInfoMap ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long version; */
NS_IMETHODIMP _MYCLASS_::GetVersion(PRInt32 *aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVersion(PRInt32 aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_plugininfo_h__ */
