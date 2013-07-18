/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/sensorsystem.idl
 */

#ifndef __gen_sensorsystem_h__
#define __gen_sensorsystem_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

#ifndef __gen_interface_h__
#include "interface.h"
#endif

#ifndef __gen_openrave_h__
#include "openrave.h"
#endif

#ifndef __gen_kinbody_h__
#include "kinbody.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ISensorSystemBase */
#define ISENSORSYSTEMBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORSYSTEMBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorSystemBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORSYSTEMBASE_IID)

  /* void Reset (); */
  NS_SCRIPTABLE NS_IMETHOD Reset(void) = 0;

  /* void AddRegisteredBodies (in unsigned long count, [array, size_is (count)] in IKinBody vbodies); */
  NS_SCRIPTABLE NS_IMETHOD AddRegisteredBodies(PRUint32 count, IKinBody **vbodies) = 0;

  /* IKinBodyManageData AddKinBody (in IKinBody pbody, in IXMLReadable pdata); */
  NS_SCRIPTABLE NS_IMETHOD AddKinBody(IKinBody *pbody, IXMLReadable *pdata, IKinBodyManageData **_retval NS_OUTPARAM) = 0;

  /* boolean RemoveKinBody (in IKinBody pbody); */
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsBodyPresent (in IKinBody pbody); */
  NS_SCRIPTABLE NS_IMETHOD IsBodyPresent(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean EnableBody (in IKinBody pbody, in boolean bEnable); */
  NS_SCRIPTABLE NS_IMETHOD EnableBody(IKinBody *pbody, PRBool bEnable, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SwitchBody (in IKinBody pbody1, in IKinBody pbody2); */
  NS_SCRIPTABLE NS_IMETHOD SwitchBody(IKinBody *pbody1, IKinBody *pbody2, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorSystemBase, ISENSORSYSTEMBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORSYSTEMBASE \
  NS_SCRIPTABLE NS_IMETHOD Reset(void); \
  NS_SCRIPTABLE NS_IMETHOD AddRegisteredBodies(PRUint32 count, IKinBody **vbodies); \
  NS_SCRIPTABLE NS_IMETHOD AddKinBody(IKinBody *pbody, IXMLReadable *pdata, IKinBodyManageData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsBodyPresent(IKinBody *pbody, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EnableBody(IKinBody *pbody, PRBool bEnable, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SwitchBody(IKinBody *pbody1, IKinBody *pbody2, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORSYSTEMBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return _to Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD AddRegisteredBodies(PRUint32 count, IKinBody **vbodies) { return _to AddRegisteredBodies(count, vbodies); } \
  NS_SCRIPTABLE NS_IMETHOD AddKinBody(IKinBody *pbody, IXMLReadable *pdata, IKinBodyManageData **_retval NS_OUTPARAM) { return _to AddKinBody(pbody, pdata, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) { return _to RemoveKinBody(pbody, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsBodyPresent(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) { return _to IsBodyPresent(pbody, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnableBody(IKinBody *pbody, PRBool bEnable, PRBool *_retval NS_OUTPARAM) { return _to EnableBody(pbody, bEnable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SwitchBody(IKinBody *pbody1, IKinBody *pbody2, PRBool *_retval NS_OUTPARAM) { return _to SwitchBody(pbody1, pbody2, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORSYSTEMBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD AddRegisteredBodies(PRUint32 count, IKinBody **vbodies) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddRegisteredBodies(count, vbodies); } \
  NS_SCRIPTABLE NS_IMETHOD AddKinBody(IKinBody *pbody, IXMLReadable *pdata, IKinBodyManageData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddKinBody(pbody, pdata, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveKinBody(pbody, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsBodyPresent(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsBodyPresent(pbody, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnableBody(IKinBody *pbody, PRBool bEnable, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableBody(pbody, bEnable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SwitchBody(IKinBody *pbody1, IKinBody *pbody2, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SwitchBody(pbody1, pbody2, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorSystemBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORSYSTEMBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorSystemBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Reset (); */
NS_IMETHODIMP _MYCLASS_::Reset()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void AddRegisteredBodies (in unsigned long count, [array, size_is (count)] in IKinBody vbodies); */
NS_IMETHODIMP _MYCLASS_::AddRegisteredBodies(PRUint32 count, IKinBody **vbodies)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyManageData AddKinBody (in IKinBody pbody, in IXMLReadable pdata); */
NS_IMETHODIMP _MYCLASS_::AddKinBody(IKinBody *pbody, IXMLReadable *pdata, IKinBodyManageData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean RemoveKinBody (in IKinBody pbody); */
NS_IMETHODIMP _MYCLASS_::RemoveKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsBodyPresent (in IKinBody pbody); */
NS_IMETHODIMP _MYCLASS_::IsBodyPresent(IKinBody *pbody, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean EnableBody (in IKinBody pbody, in boolean bEnable); */
NS_IMETHODIMP _MYCLASS_::EnableBody(IKinBody *pbody, PRBool bEnable, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SwitchBody (in IKinBody pbody1, in IKinBody pbody2); */
NS_IMETHODIMP _MYCLASS_::SwitchBody(IKinBody *pbody1, IKinBody *pbody2, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISimpleSensorSystemXMLData */
#define ISIMPLESENSORSYSTEMXMLDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISIMPLESENSORSYSTEMXMLDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISimpleSensorSystemXMLData : public IXMLReadable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISIMPLESENSORSYSTEMXMLDATA_IID)

  /* void copy (in ISimpleSensorSystemXMLData pdata); */
  NS_SCRIPTABLE NS_IMETHOD Copy(ISimpleSensorSystemXMLData *pdata) = 0;

  /* attribute string sid; */
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **aSid) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSid(const char *aSid) = 0;

  /* attribute long id; */
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetId(PRInt32 aId) = 0;

  /* attribute string strOffsetLink; */
  NS_SCRIPTABLE NS_IMETHOD GetStrOffsetLink(char **aStrOffsetLink) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStrOffsetLink(const char *aStrOffsetLink) = 0;

  /* attribute ITransformF transOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetTransOffset(ITransformF **aTransOffset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTransOffset(ITransformF *aTransOffset) = 0;

  /* attribute ITransformF transPreOffset; */
  NS_SCRIPTABLE NS_IMETHOD GetTransPreOffset(ITransformF **aTransPreOffset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTransPreOffset(ITransformF *aTransPreOffset) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISimpleSensorSystemXMLData, ISIMPLESENSORSYSTEMXMLDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISIMPLESENSORSYSTEMXMLDATA \
  NS_SCRIPTABLE NS_IMETHOD Copy(ISimpleSensorSystemXMLData *pdata); \
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **aSid); \
  NS_SCRIPTABLE NS_IMETHOD SetSid(const char *aSid); \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId); \
  NS_SCRIPTABLE NS_IMETHOD SetId(PRInt32 aId); \
  NS_SCRIPTABLE NS_IMETHOD GetStrOffsetLink(char **aStrOffsetLink); \
  NS_SCRIPTABLE NS_IMETHOD SetStrOffsetLink(const char *aStrOffsetLink); \
  NS_SCRIPTABLE NS_IMETHOD GetTransOffset(ITransformF **aTransOffset); \
  NS_SCRIPTABLE NS_IMETHOD SetTransOffset(ITransformF *aTransOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetTransPreOffset(ITransformF **aTransPreOffset); \
  NS_SCRIPTABLE NS_IMETHOD SetTransPreOffset(ITransformF *aTransPreOffset); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISIMPLESENSORSYSTEMXMLDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD Copy(ISimpleSensorSystemXMLData *pdata) { return _to Copy(pdata); } \
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **aSid) { return _to GetSid(aSid); } \
  NS_SCRIPTABLE NS_IMETHOD SetSid(const char *aSid) { return _to SetSid(aSid); } \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId) { return _to GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD SetId(PRInt32 aId) { return _to SetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetStrOffsetLink(char **aStrOffsetLink) { return _to GetStrOffsetLink(aStrOffsetLink); } \
  NS_SCRIPTABLE NS_IMETHOD SetStrOffsetLink(const char *aStrOffsetLink) { return _to SetStrOffsetLink(aStrOffsetLink); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransOffset(ITransformF **aTransOffset) { return _to GetTransOffset(aTransOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransOffset(ITransformF *aTransOffset) { return _to SetTransOffset(aTransOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransPreOffset(ITransformF **aTransPreOffset) { return _to GetTransPreOffset(aTransPreOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransPreOffset(ITransformF *aTransPreOffset) { return _to SetTransPreOffset(aTransPreOffset); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISIMPLESENSORSYSTEMXMLDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD Copy(ISimpleSensorSystemXMLData *pdata) { return !_to ? NS_ERROR_NULL_POINTER : _to->Copy(pdata); } \
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **aSid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSid(aSid); } \
  NS_SCRIPTABLE NS_IMETHOD SetSid(const char *aSid) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSid(aSid); } \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD SetId(PRInt32 aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetStrOffsetLink(char **aStrOffsetLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStrOffsetLink(aStrOffsetLink); } \
  NS_SCRIPTABLE NS_IMETHOD SetStrOffsetLink(const char *aStrOffsetLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStrOffsetLink(aStrOffsetLink); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransOffset(ITransformF **aTransOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransOffset(aTransOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransOffset(ITransformF *aTransOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransOffset(aTransOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransPreOffset(ITransformF **aTransPreOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransPreOffset(aTransPreOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransPreOffset(ITransformF *aTransPreOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransPreOffset(aTransPreOffset); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISimpleSensorSystemXMLData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISIMPLESENSORSYSTEMXMLDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISimpleSensorSystemXMLData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void copy (in ISimpleSensorSystemXMLData pdata); */
NS_IMETHODIMP _MYCLASS_::Copy(ISimpleSensorSystemXMLData *pdata)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string sid; */
NS_IMETHODIMP _MYCLASS_::GetSid(char **aSid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSid(const char *aSid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long id; */
NS_IMETHODIMP _MYCLASS_::GetId(PRInt32 *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetId(PRInt32 aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string strOffsetLink; */
NS_IMETHODIMP _MYCLASS_::GetStrOffsetLink(char **aStrOffsetLink)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetStrOffsetLink(const char *aStrOffsetLink)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF transOffset; */
NS_IMETHODIMP _MYCLASS_::GetTransOffset(ITransformF **aTransOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTransOffset(ITransformF *aTransOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF transPreOffset; */
NS_IMETHODIMP _MYCLASS_::GetTransPreOffset(ITransformF **aTransPreOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTransPreOffset(ITransformF *aTransPreOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISimpleSensorSystemBodyData */
#define ISIMPLESENSORSYSTEMBODYDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISIMPLESENSORSYSTEMBODYDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISimpleSensorSystemBodyData : public IKinBodyManageData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISIMPLESENSORSYSTEMBODYDATA_IID)

  /* long GetId (); */
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* string GetSid (); */
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetRecentTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetRecentTransform(ITransformF **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISimpleSensorSystemBodyData, ISIMPLESENSORSYSTEMBODYDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISIMPLESENSORSYSTEMBODYDATA \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRecentTransform(ITransformF **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISIMPLESENSORSYSTEMBODYDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *_retval NS_OUTPARAM) { return _to GetId(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **_retval NS_OUTPARAM) { return _to GetSid(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRecentTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetRecentTransform(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISIMPLESENSORSYSTEMBODYDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetId(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSid(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSid(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRecentTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRecentTransform(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISimpleSensorSystemBodyData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISIMPLESENSORSYSTEMBODYDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISimpleSensorSystemBodyData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long GetId (); */
NS_IMETHODIMP _MYCLASS_::GetId(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetSid (); */
NS_IMETHODIMP _MYCLASS_::GetSid(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetRecentTransform (); */
NS_IMETHODIMP _MYCLASS_::GetRecentTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISimpleSensorSystemSimpleXMLReader */
#define ISIMPLESENSORSYSTEMSIMPLEXMLREADER_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISIMPLESENSORSYSTEMSIMPLEXMLREADER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISimpleSensorSystemSimpleXMLReader : public IBaseXMLReader {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISIMPLESENSORSYSTEMSIMPLEXMLREADER_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISimpleSensorSystemSimpleXMLReader, ISIMPLESENSORSYSTEMSIMPLEXMLREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISIMPLESENSORSYSTEMSIMPLEXMLREADER \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISIMPLESENSORSYSTEMSIMPLEXMLREADER(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISIMPLESENSORSYSTEMSIMPLEXMLREADER(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISimpleSensorSystemSimpleXMLReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISIMPLESENSORSYSTEMSIMPLEXMLREADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISimpleSensorSystemSimpleXMLReader)

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


/* starting interface:    ISimpleSensorSystem */
#define ISIMPLESENSORSYSTEM_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISIMPLESENSORSYSTEM_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISimpleSensorSystem : public ISensorSystemBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISIMPLESENSORSYSTEM_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISimpleSensorSystem, ISIMPLESENSORSYSTEM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISIMPLESENSORSYSTEM \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISIMPLESENSORSYSTEM(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISIMPLESENSORSYSTEM(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISimpleSensorSystem
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISIMPLESENSORSYSTEM

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISimpleSensorSystem)

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


#endif /* __gen_sensorsystem_h__ */
