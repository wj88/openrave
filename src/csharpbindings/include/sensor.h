/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/sensor.idl
 */

#ifndef __gen_sensor_h__
#define __gen_sensor_h__


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

/* starting interface:    ICallbackSensorData */
#define ICALLBACKSENSORDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKSENSORDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackSensorData : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKSENSORDATA_IID)

  /* void Invoke (in ISensorData data); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(ISensorData *data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackSensorData, ICALLBACKSENSORDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKSENSORDATA \
  NS_SCRIPTABLE NS_IMETHOD Invoke(ISensorData *data); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKSENSORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(ISensorData *data) { return _to Invoke(data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKSENSORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(ISensorData *data) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackSensorData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKSENSORDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackSensorData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Invoke (in ISensorData data); */
NS_IMETHODIMP _MYCLASS_::Invoke(ISensorData *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorData */
#define ISENSORDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorData : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORDATA_IID)

  /* long GetType (); */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean serialize (in nsIOutputStream O); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRBool *_retval NS_OUTPARAM) = 0;

  /* attribute unsigned long long _stamp; */
  NS_SCRIPTABLE NS_IMETHOD Get_stamp(PRUint64 *a_stamp) = 0;
  NS_SCRIPTABLE NS_IMETHOD Set_stamp(PRUint64 a_stamp) = 0;

  /* attribute ITransformF _trans; */
  NS_SCRIPTABLE NS_IMETHOD Get_trans(ITransformF **a_trans) = 0;
  NS_SCRIPTABLE NS_IMETHOD Set_trans(ITransformF *a_trans) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorData, ISENSORDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORDATA \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Get_stamp(PRUint64 *a_stamp); \
  NS_SCRIPTABLE NS_IMETHOD Set_stamp(PRUint64 a_stamp); \
  NS_SCRIPTABLE NS_IMETHOD Get_trans(ITransformF **a_trans); \
  NS_SCRIPTABLE NS_IMETHOD Set_trans(ITransformF *a_trans); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return _to GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRBool *_retval NS_OUTPARAM) { return _to Serialize(O, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Get_stamp(PRUint64 *a_stamp) { return _to Get_stamp(a_stamp); } \
  NS_SCRIPTABLE NS_IMETHOD Set_stamp(PRUint64 a_stamp) { return _to Set_stamp(a_stamp); } \
  NS_SCRIPTABLE NS_IMETHOD Get_trans(ITransformF **a_trans) { return _to Get_trans(a_trans); } \
  NS_SCRIPTABLE NS_IMETHOD Set_trans(ITransformF *a_trans) { return _to Set_trans(a_trans); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(O, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Get_stamp(PRUint64 *a_stamp) { return !_to ? NS_ERROR_NULL_POINTER : _to->Get_stamp(a_stamp); } \
  NS_SCRIPTABLE NS_IMETHOD Set_stamp(PRUint64 a_stamp) { return !_to ? NS_ERROR_NULL_POINTER : _to->Set_stamp(a_stamp); } \
  NS_SCRIPTABLE NS_IMETHOD Get_trans(ITransformF **a_trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->Get_trans(a_trans); } \
  NS_SCRIPTABLE NS_IMETHOD Set_trans(ITransformF *a_trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->Set_trans(a_trans); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long GetType (); */
NS_IMETHODIMP _MYCLASS_::GetType(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean serialize (in nsIOutputStream O); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *O, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long long _stamp; */
NS_IMETHODIMP _MYCLASS_::Get_stamp(PRUint64 *a_stamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::Set_stamp(PRUint64 a_stamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF _trans; */
NS_IMETHODIMP _MYCLASS_::Get_trans(ITransformF **a_trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::Set_trans(ITransformF *a_trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorLaserData */
#define ISENSORLASERDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORLASERDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorLaserData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORLASERDATA_IID)

  /* void GetPositions (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetPositions (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, float *v) = 0;

  /* void GetRanges (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetRanges(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetRanges (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetRanges(PRUint32 count, float *v) = 0;

  /* void GetIntensity (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetIntensity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetIntensity (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetIntensity(PRUint32 count, float *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorLaserData, ISENSORLASERDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORLASERDATA \
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetRanges(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetRanges(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetIntensity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetIntensity(PRUint32 count, float *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORLASERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, float *v) { return _to SetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetRanges(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetRanges(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetRanges(PRUint32 count, float *v) { return _to SetRanges(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntensity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetIntensity(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntensity(PRUint32 count, float *v) { return _to SetIntensity(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORLASERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetRanges(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRanges(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetRanges(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRanges(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntensity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntensity(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntensity(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIntensity(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorLaserData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORLASERDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorLaserData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetPositions (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetPositions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetPositions (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetPositions(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRanges (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetRanges(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRanges (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetRanges(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetIntensity (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetIntensity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetIntensity (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetIntensity(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorCameraData */
#define ISENSORCAMERADATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORCAMERADATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorCameraData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORCAMERADATA_IID)

  /* void GetImageData (out unsigned long count, [array, size_is (count)] out octet v); */
  NS_SCRIPTABLE NS_IMETHOD GetImageData(PRUint32 *count NS_OUTPARAM, PRUint8 **v NS_OUTPARAM) = 0;

  /* void SetImageData (in unsigned long count, [array, size_is (count)] in octet v); */
  NS_SCRIPTABLE NS_IMETHOD SetImageData(PRUint32 count, PRUint8 *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorCameraData, ISENSORCAMERADATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORCAMERADATA \
  NS_SCRIPTABLE NS_IMETHOD GetImageData(PRUint32 *count NS_OUTPARAM, PRUint8 **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetImageData(PRUint32 count, PRUint8 *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORCAMERADATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetImageData(PRUint32 *count NS_OUTPARAM, PRUint8 **v NS_OUTPARAM) { return _to GetImageData(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetImageData(PRUint32 count, PRUint8 *v) { return _to SetImageData(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORCAMERADATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetImageData(PRUint32 *count NS_OUTPARAM, PRUint8 **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImageData(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetImageData(PRUint32 count, PRUint8 *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetImageData(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorCameraData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORCAMERADATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorCameraData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetImageData (out unsigned long count, [array, size_is (count)] out octet v); */
NS_IMETHODIMP _MYCLASS_::GetImageData(PRUint32 *count NS_OUTPARAM, PRUint8 **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetImageData (in unsigned long count, [array, size_is (count)] in octet v); */
NS_IMETHODIMP _MYCLASS_::SetImageData(PRUint32 count, PRUint8 *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorJontEncoderData */
#define ISENSORJONTENCODERDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORJONTENCODERDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorJontEncoderData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORJONTENCODERDATA_IID)

  /* void GetEncoderValues (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetEncoderValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetEncoderValues (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetEncoderValues(PRUint32 count, float *v) = 0;

  /* void GetEncoderVelocity (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetEncoderVelocity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetEncoderVelocity (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetEncoderVelocity(PRUint32 count, float *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorJontEncoderData, ISENSORJONTENCODERDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORJONTENCODERDATA \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetEncoderValues(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderVelocity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetEncoderVelocity(PRUint32 count, float *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORJONTENCODERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetEncoderValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetEncoderValues(PRUint32 count, float *v) { return _to SetEncoderValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderVelocity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetEncoderVelocity(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetEncoderVelocity(PRUint32 count, float *v) { return _to SetEncoderVelocity(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORJONTENCODERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEncoderValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetEncoderValues(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEncoderValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderVelocity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEncoderVelocity(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetEncoderVelocity(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEncoderVelocity(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorJontEncoderData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORJONTENCODERDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorJontEncoderData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetEncoderValues (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetEncoderValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetEncoderValues (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetEncoderValues(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetEncoderVelocity (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetEncoderVelocity(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetEncoderVelocity (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetEncoderVelocity(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorForce6DData */
#define ISENSORFORCE6DDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORFORCE6DDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorForce6DData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORFORCE6DDATA_IID)

  /* attribute IVectorF force; */
  NS_SCRIPTABLE NS_IMETHOD GetForce(IVectorF **aForce) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *aForce) = 0;

  /* attribute IVectorF torque; */
  NS_SCRIPTABLE NS_IMETHOD GetTorque(IVectorF **aTorque) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *aTorque) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorForce6DData, ISENSORFORCE6DDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORFORCE6DDATA \
  NS_SCRIPTABLE NS_IMETHOD GetForce(IVectorF **aForce); \
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *aForce); \
  NS_SCRIPTABLE NS_IMETHOD GetTorque(IVectorF **aTorque); \
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *aTorque); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORFORCE6DDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetForce(IVectorF **aForce) { return _to GetForce(aForce); } \
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *aForce) { return _to SetForce(aForce); } \
  NS_SCRIPTABLE NS_IMETHOD GetTorque(IVectorF **aTorque) { return _to GetTorque(aTorque); } \
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *aTorque) { return _to SetTorque(aTorque); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORFORCE6DDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetForce(IVectorF **aForce) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForce(aForce); } \
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *aForce) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForce(aForce); } \
  NS_SCRIPTABLE NS_IMETHOD GetTorque(IVectorF **aTorque) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTorque(aTorque); } \
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *aTorque) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTorque(aTorque); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorForce6DData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORFORCE6DDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorForce6DData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IVectorF force; */
NS_IMETHODIMP _MYCLASS_::GetForce(IVectorF **aForce)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetForce(IVectorF *aForce)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF torque; */
NS_IMETHODIMP _MYCLASS_::GetTorque(IVectorF **aTorque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTorque(IVectorF *aTorque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorIMUData */
#define ISENSORIMUDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORIMUDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorIMUData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORIMUDATA_IID)

  /* attribute IVectorF rotation; */
  NS_SCRIPTABLE NS_IMETHOD GetRotation(IVectorF **aRotation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRotation(IVectorF *aRotation) = 0;

  /* attribute IVectorF angular_velocity; */
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity) = 0;

  /* attribute IVectorF linear_acceleration; */
  NS_SCRIPTABLE NS_IMETHOD GetLinear_acceleration(IVectorF **aLinear_acceleration) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLinear_acceleration(IVectorF *aLinear_acceleration) = 0;

  /* void GetRotationCoVariance (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetRotationCoVariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetRotationCoVariance (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetRotationCoVariance(PRUint32 count, float *v) = 0;

  /* void GetAngularVelocityCovariance (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetAngularVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetAngularVelocityCovariance (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetAngularVelocityCovariance(PRUint32 count, float *v) = 0;

  /* void GetLinearAccelerationCovariance (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetLinearAccelerationCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetLinearAccelerationCovariance (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetLinearAccelerationCovariance(PRUint32 count, float *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorIMUData, ISENSORIMUDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORIMUDATA \
  NS_SCRIPTABLE NS_IMETHOD GetRotation(IVectorF **aRotation); \
  NS_SCRIPTABLE NS_IMETHOD SetRotation(IVectorF *aRotation); \
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity); \
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity); \
  NS_SCRIPTABLE NS_IMETHOD GetLinear_acceleration(IVectorF **aLinear_acceleration); \
  NS_SCRIPTABLE NS_IMETHOD SetLinear_acceleration(IVectorF *aLinear_acceleration); \
  NS_SCRIPTABLE NS_IMETHOD GetRotationCoVariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetRotationCoVariance(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetAngularVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetAngularVelocityCovariance(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetLinearAccelerationCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetLinearAccelerationCovariance(PRUint32 count, float *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORIMUDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRotation(IVectorF **aRotation) { return _to GetRotation(aRotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotation(IVectorF *aRotation) { return _to SetRotation(aRotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity) { return _to GetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity) { return _to SetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinear_acceleration(IVectorF **aLinear_acceleration) { return _to GetLinear_acceleration(aLinear_acceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinear_acceleration(IVectorF *aLinear_acceleration) { return _to SetLinear_acceleration(aLinear_acceleration); } \
  NS_SCRIPTABLE NS_IMETHOD GetRotationCoVariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetRotationCoVariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotationCoVariance(PRUint32 count, float *v) { return _to SetRotationCoVariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetAngularVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetAngularVelocityCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetAngularVelocityCovariance(PRUint32 count, float *v) { return _to SetAngularVelocityCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinearAccelerationCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetLinearAccelerationCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinearAccelerationCovariance(PRUint32 count, float *v) { return _to SetLinearAccelerationCovariance(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORIMUDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRotation(IVectorF **aRotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRotation(aRotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotation(IVectorF *aRotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRotation(aRotation); } \
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinear_acceleration(IVectorF **aLinear_acceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinear_acceleration(aLinear_acceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinear_acceleration(IVectorF *aLinear_acceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinear_acceleration(aLinear_acceleration); } \
  NS_SCRIPTABLE NS_IMETHOD GetRotationCoVariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRotationCoVariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotationCoVariance(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRotationCoVariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetAngularVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAngularVelocityCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetAngularVelocityCovariance(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAngularVelocityCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinearAccelerationCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinearAccelerationCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinearAccelerationCovariance(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinearAccelerationCovariance(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorIMUData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORIMUDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorIMUData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IVectorF rotation; */
NS_IMETHODIMP _MYCLASS_::GetRotation(IVectorF **aRotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetRotation(IVectorF *aRotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF angular_velocity; */
NS_IMETHODIMP _MYCLASS_::GetAngular_velocity(IVectorF **aAngular_velocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAngular_velocity(IVectorF *aAngular_velocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF linear_acceleration; */
NS_IMETHODIMP _MYCLASS_::GetLinear_acceleration(IVectorF **aLinear_acceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetLinear_acceleration(IVectorF *aLinear_acceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRotationCoVariance (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetRotationCoVariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRotationCoVariance (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetRotationCoVariance(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAngularVelocityCovariance (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetAngularVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAngularVelocityCovariance (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetAngularVelocityCovariance(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLinearAccelerationCovariance (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetLinearAccelerationCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLinearAccelerationCovariance (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetLinearAccelerationCovariance(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorOdometryData */
#define ISENSORODOMETRYDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORODOMETRYDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorOdometryData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORODOMETRYDATA_IID)

  /* attribute ITransformF pose; */
  NS_SCRIPTABLE NS_IMETHOD GetPose(ITransformF **aPose) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPose(ITransformF *aPose) = 0;

  /* attribute IVectorF linear_velocity; */
  NS_SCRIPTABLE NS_IMETHOD GetLinear_velocity(IVectorF **aLinear_velocity) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLinear_velocity(IVectorF *aLinear_velocity) = 0;

  /* attribute IVectorF angular_velocity; */
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity) = 0;

  /* void GetPoseCovariance (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetPoseCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetPoseCovariance (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetPoseCovariance(PRUint32 count, float *v) = 0;

  /* void GetVelocityCovariance (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetVelocityCovariance (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetVelocityCovariance(PRUint32 count, float *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorOdometryData, ISENSORODOMETRYDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORODOMETRYDATA \
  NS_SCRIPTABLE NS_IMETHOD GetPose(ITransformF **aPose); \
  NS_SCRIPTABLE NS_IMETHOD SetPose(ITransformF *aPose); \
  NS_SCRIPTABLE NS_IMETHOD GetLinear_velocity(IVectorF **aLinear_velocity); \
  NS_SCRIPTABLE NS_IMETHOD SetLinear_velocity(IVectorF *aLinear_velocity); \
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity); \
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity); \
  NS_SCRIPTABLE NS_IMETHOD GetPoseCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetPoseCovariance(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetVelocityCovariance(PRUint32 count, float *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORODOMETRYDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPose(ITransformF **aPose) { return _to GetPose(aPose); } \
  NS_SCRIPTABLE NS_IMETHOD SetPose(ITransformF *aPose) { return _to SetPose(aPose); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinear_velocity(IVectorF **aLinear_velocity) { return _to GetLinear_velocity(aLinear_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinear_velocity(IVectorF *aLinear_velocity) { return _to SetLinear_velocity(aLinear_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity) { return _to GetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity) { return _to SetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetPoseCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetPoseCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetPoseCovariance(PRUint32 count, float *v) { return _to SetPoseCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetVelocityCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocityCovariance(PRUint32 count, float *v) { return _to SetVelocityCovariance(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORODOMETRYDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPose(ITransformF **aPose) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPose(aPose); } \
  NS_SCRIPTABLE NS_IMETHOD SetPose(ITransformF *aPose) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPose(aPose); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinear_velocity(IVectorF **aLinear_velocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinear_velocity(aLinear_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinear_velocity(IVectorF *aLinear_velocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinear_velocity(aLinear_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetAngular_velocity(IVectorF **aAngular_velocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetAngular_velocity(IVectorF *aAngular_velocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAngular_velocity(aAngular_velocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetPoseCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPoseCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetPoseCovariance(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPoseCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocityCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocityCovariance(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVelocityCovariance(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorOdometryData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORODOMETRYDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorOdometryData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute ITransformF pose; */
NS_IMETHODIMP _MYCLASS_::GetPose(ITransformF **aPose)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPose(ITransformF *aPose)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF linear_velocity; */
NS_IMETHODIMP _MYCLASS_::GetLinear_velocity(IVectorF **aLinear_velocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetLinear_velocity(IVectorF *aLinear_velocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF angular_velocity; */
NS_IMETHODIMP _MYCLASS_::GetAngular_velocity(IVectorF **aAngular_velocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAngular_velocity(IVectorF *aAngular_velocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetPoseCovariance (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetPoseCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetPoseCovariance (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetPoseCovariance(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocityCovariance (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetVelocityCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetVelocityCovariance (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetVelocityCovariance(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorTactileData */
#define ISENSORTACTILEDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORTACTILEDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorTactileData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORTACTILEDATA_IID)

  /* void GetForces (out unsigned long count, [array, size_is (count)] out IVectorF v); */
  NS_SCRIPTABLE NS_IMETHOD GetForces(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM) = 0;

  /* void SetForces (in unsigned long count, [array, size_is (count)] in IVectorF v); */
  NS_SCRIPTABLE NS_IMETHOD SetForces(PRUint32 count, IVectorF **v) = 0;

  /* void GetForceCovariance (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetForceCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetForceCovariance (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetForceCovariance(PRUint32 count, float *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorTactileData, ISENSORTACTILEDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORTACTILEDATA \
  NS_SCRIPTABLE NS_IMETHOD GetForces(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetForces(PRUint32 count, IVectorF **v); \
  NS_SCRIPTABLE NS_IMETHOD GetForceCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetForceCovariance(PRUint32 count, float *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORTACTILEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetForces(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM) { return _to GetForces(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetForces(PRUint32 count, IVectorF **v) { return _to SetForces(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetForceCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetForceCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetForceCovariance(PRUint32 count, float *v) { return _to SetForceCovariance(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORTACTILEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetForces(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForces(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetForces(PRUint32 count, IVectorF **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForces(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetForceCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForceCovariance(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetForceCovariance(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForceCovariance(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorTactileData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORTACTILEDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorTactileData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetForces (out unsigned long count, [array, size_is (count)] out IVectorF v); */
NS_IMETHODIMP _MYCLASS_::GetForces(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetForces (in unsigned long count, [array, size_is (count)] in IVectorF v); */
NS_IMETHODIMP _MYCLASS_::SetForces(PRUint32 count, IVectorF **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetForceCovariance (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetForceCovariance(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetForceCovariance (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetForceCovariance(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorActuatorData */
#define ISENSORACTUATORDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORACTUATORDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorActuatorData : public ISensorData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORACTUATORDATA_IID)

  /* attribute long state; */
  NS_SCRIPTABLE NS_IMETHOD GetState(PRInt32 *aState) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetState(PRInt32 aState) = 0;

  /* attribute float measuredcurrent; */
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredcurrent(float *aMeasuredcurrent) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredcurrent(float aMeasuredcurrent) = 0;

  /* attribute float measuredtemperature; */
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredtemperature(float *aMeasuredtemperature) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredtemperature(float aMeasuredtemperature) = 0;

  /* attribute float appliedcurrent; */
  NS_SCRIPTABLE NS_IMETHOD GetAppliedcurrent(float *aAppliedcurrent) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAppliedcurrent(float aAppliedcurrent) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorActuatorData, ISENSORACTUATORDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORACTUATORDATA \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRInt32 *aState); \
  NS_SCRIPTABLE NS_IMETHOD SetState(PRInt32 aState); \
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredcurrent(float *aMeasuredcurrent); \
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredcurrent(float aMeasuredcurrent); \
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredtemperature(float *aMeasuredtemperature); \
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredtemperature(float aMeasuredtemperature); \
  NS_SCRIPTABLE NS_IMETHOD GetAppliedcurrent(float *aAppliedcurrent); \
  NS_SCRIPTABLE NS_IMETHOD SetAppliedcurrent(float aAppliedcurrent); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORACTUATORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRInt32 *aState) { return _to GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD SetState(PRInt32 aState) { return _to SetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredcurrent(float *aMeasuredcurrent) { return _to GetMeasuredcurrent(aMeasuredcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredcurrent(float aMeasuredcurrent) { return _to SetMeasuredcurrent(aMeasuredcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredtemperature(float *aMeasuredtemperature) { return _to GetMeasuredtemperature(aMeasuredtemperature); } \
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredtemperature(float aMeasuredtemperature) { return _to SetMeasuredtemperature(aMeasuredtemperature); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppliedcurrent(float *aAppliedcurrent) { return _to GetAppliedcurrent(aAppliedcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetAppliedcurrent(float aAppliedcurrent) { return _to SetAppliedcurrent(aAppliedcurrent); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORACTUATORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetState(PRInt32 *aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD SetState(PRInt32 aState) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetState(aState); } \
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredcurrent(float *aMeasuredcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMeasuredcurrent(aMeasuredcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredcurrent(float aMeasuredcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMeasuredcurrent(aMeasuredcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD GetMeasuredtemperature(float *aMeasuredtemperature) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMeasuredtemperature(aMeasuredtemperature); } \
  NS_SCRIPTABLE NS_IMETHOD SetMeasuredtemperature(float aMeasuredtemperature) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMeasuredtemperature(aMeasuredtemperature); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppliedcurrent(float *aAppliedcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppliedcurrent(aAppliedcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetAppliedcurrent(float aAppliedcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAppliedcurrent(aAppliedcurrent); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorActuatorData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORACTUATORDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorActuatorData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute long state; */
NS_IMETHODIMP _MYCLASS_::GetState(PRInt32 *aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetState(PRInt32 aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float measuredcurrent; */
NS_IMETHODIMP _MYCLASS_::GetMeasuredcurrent(float *aMeasuredcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMeasuredcurrent(float aMeasuredcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float measuredtemperature; */
NS_IMETHODIMP _MYCLASS_::GetMeasuredtemperature(float *aMeasuredtemperature)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMeasuredtemperature(float aMeasuredtemperature)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float appliedcurrent; */
NS_IMETHODIMP _MYCLASS_::GetAppliedcurrent(float *aAppliedcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAppliedcurrent(float aAppliedcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometry */
#define ISENSORGEOMETRY_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRY_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRY_IID)

  /* long GetType (); */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometry, ISENSORGEOMETRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRY \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return _to GetType(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRY

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometry)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long GetType (); */
NS_IMETHODIMP _MYCLASS_::GetType(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryLaserData */
#define ISENSORGEOMETRYLASERDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYLASERDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryLaserData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYLASERDATA_IID)

  /* void GetMinAngle (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetMinAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetMinAngle (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetMinAngle(PRUint32 count, float *v) = 0;

  /* void GetMaxAngle (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetMaxAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetMaxAngle (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetMaxAngle(PRUint32 count, float *v) = 0;

  /* void GetResolution (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetResolution (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v) = 0;

  /* attribute float min_range; */
  NS_SCRIPTABLE NS_IMETHOD GetMin_range(float *aMin_range) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMin_range(float aMin_range) = 0;

  /* attribute float max_range; */
  NS_SCRIPTABLE NS_IMETHOD GetMax_range(float *aMax_range) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMax_range(float aMax_range) = 0;

  /* attribute float time_increment; */
  NS_SCRIPTABLE NS_IMETHOD GetTime_increment(float *aTime_increment) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTime_increment(float aTime_increment) = 0;

  /* attribute float time_scan; */
  NS_SCRIPTABLE NS_IMETHOD GetTime_scan(float *aTime_scan) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTime_scan(float aTime_scan) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryLaserData, ISENSORGEOMETRYLASERDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYLASERDATA \
  NS_SCRIPTABLE NS_IMETHOD GetMinAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetMinAngle(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxAngle(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetMin_range(float *aMin_range); \
  NS_SCRIPTABLE NS_IMETHOD SetMin_range(float aMin_range); \
  NS_SCRIPTABLE NS_IMETHOD GetMax_range(float *aMax_range); \
  NS_SCRIPTABLE NS_IMETHOD SetMax_range(float aMax_range); \
  NS_SCRIPTABLE NS_IMETHOD GetTime_increment(float *aTime_increment); \
  NS_SCRIPTABLE NS_IMETHOD SetTime_increment(float aTime_increment); \
  NS_SCRIPTABLE NS_IMETHOD GetTime_scan(float *aTime_scan); \
  NS_SCRIPTABLE NS_IMETHOD SetTime_scan(float aTime_scan); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYLASERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMinAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetMinAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinAngle(PRUint32 count, float *v) { return _to SetMinAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetMaxAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxAngle(PRUint32 count, float *v) { return _to SetMaxAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v) { return _to SetResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetMin_range(float *aMin_range) { return _to GetMin_range(aMin_range); } \
  NS_SCRIPTABLE NS_IMETHOD SetMin_range(float aMin_range) { return _to SetMin_range(aMin_range); } \
  NS_SCRIPTABLE NS_IMETHOD GetMax_range(float *aMax_range) { return _to GetMax_range(aMax_range); } \
  NS_SCRIPTABLE NS_IMETHOD SetMax_range(float aMax_range) { return _to SetMax_range(aMax_range); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime_increment(float *aTime_increment) { return _to GetTime_increment(aTime_increment); } \
  NS_SCRIPTABLE NS_IMETHOD SetTime_increment(float aTime_increment) { return _to SetTime_increment(aTime_increment); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime_scan(float *aTime_scan) { return _to GetTime_scan(aTime_scan); } \
  NS_SCRIPTABLE NS_IMETHOD SetTime_scan(float aTime_scan) { return _to SetTime_scan(aTime_scan); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYLASERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMinAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinAngle(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxAngle(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxAngle(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetMin_range(float *aMin_range) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMin_range(aMin_range); } \
  NS_SCRIPTABLE NS_IMETHOD SetMin_range(float aMin_range) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMin_range(aMin_range); } \
  NS_SCRIPTABLE NS_IMETHOD GetMax_range(float *aMax_range) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMax_range(aMax_range); } \
  NS_SCRIPTABLE NS_IMETHOD SetMax_range(float aMax_range) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMax_range(aMax_range); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime_increment(float *aTime_increment) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTime_increment(aTime_increment); } \
  NS_SCRIPTABLE NS_IMETHOD SetTime_increment(float aTime_increment) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTime_increment(aTime_increment); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime_scan(float *aTime_scan) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTime_scan(aTime_scan); } \
  NS_SCRIPTABLE NS_IMETHOD SetTime_scan(float aTime_scan) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTime_scan(aTime_scan); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryLaserData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYLASERDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryLaserData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetMinAngle (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetMinAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetMinAngle (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetMinAngle(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetMaxAngle (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetMaxAngle(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetMaxAngle (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetMaxAngle(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetResolution (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetResolution (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetResolution(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float min_range; */
NS_IMETHODIMP _MYCLASS_::GetMin_range(float *aMin_range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMin_range(float aMin_range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float max_range; */
NS_IMETHODIMP _MYCLASS_::GetMax_range(float *aMax_range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMax_range(float aMax_range)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float time_increment; */
NS_IMETHODIMP _MYCLASS_::GetTime_increment(float *aTime_increment)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTime_increment(float aTime_increment)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float time_scan; */
NS_IMETHODIMP _MYCLASS_::GetTime_scan(float *aTime_scan)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTime_scan(float aTime_scan)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryCameraData */
#define ISENSORGEOMETRYCAMERADATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYCAMERADATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryCameraData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYCAMERADATA_IID)

  /* attribute ICameraIntrinsicsF KK; */
  NS_SCRIPTABLE NS_IMETHOD GetKK(ICameraIntrinsicsF **aKK) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetKK(ICameraIntrinsicsF *aKK) = 0;

  /* attribute long width; */
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth) = 0;

  /* attribute long height; */
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryCameraData, ISENSORGEOMETRYCAMERADATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYCAMERADATA \
  NS_SCRIPTABLE NS_IMETHOD GetKK(ICameraIntrinsicsF **aKK); \
  NS_SCRIPTABLE NS_IMETHOD SetKK(ICameraIntrinsicsF *aKK); \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight); \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYCAMERADATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetKK(ICameraIntrinsicsF **aKK) { return _to GetKK(aKK); } \
  NS_SCRIPTABLE NS_IMETHOD SetKK(ICameraIntrinsicsF *aKK) { return _to SetKK(aKK); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) { return _to GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth) { return _to SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) { return _to GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight) { return _to SetHeight(aHeight); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYCAMERADATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetKK(ICameraIntrinsicsF **aKK) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKK(aKK); } \
  NS_SCRIPTABLE NS_IMETHOD SetKK(ICameraIntrinsicsF *aKK) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetKK(aKK); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRInt32 aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRInt32 aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeight(aHeight); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryCameraData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYCAMERADATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryCameraData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute ICameraIntrinsicsF KK; */
NS_IMETHODIMP _MYCLASS_::GetKK(ICameraIntrinsicsF **aKK)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetKK(ICameraIntrinsicsF *aKK)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long width; */
NS_IMETHODIMP _MYCLASS_::GetWidth(PRInt32 *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetWidth(PRInt32 aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long height; */
NS_IMETHODIMP _MYCLASS_::GetHeight(PRInt32 *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetHeight(PRInt32 aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryJointEncoderData */
#define ISENSORGEOMETRYJOINTENCODERDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYJOINTENCODERDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryJointEncoderData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYJOINTENCODERDATA_IID)

  /* void GetResolution (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetResolution (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryJointEncoderData, ISENSORGEOMETRYJOINTENCODERDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYJOINTENCODERDATA \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYJOINTENCODERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v) { return _to SetResolution(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYJOINTENCODERDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResolution(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryJointEncoderData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYJOINTENCODERDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryJointEncoderData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetResolution (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetResolution (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetResolution(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryForce6DData */
#define ISENSORGEOMETRYFORCE6DDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYFORCE6DDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryForce6DData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYFORCE6DDATA_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryForce6DData, ISENSORGEOMETRYFORCE6DDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYFORCE6DDATA \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYFORCE6DDATA(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYFORCE6DDATA(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryForce6DData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYFORCE6DDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryForce6DData)

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


/* starting interface:    ISensorGeometryIMUData */
#define ISENSORGEOMETRYIMUDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYIMUDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryIMUData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYIMUDATA_IID)

  /* attribute float time_measurement; */
  NS_SCRIPTABLE NS_IMETHOD GetTime_measurement(float *aTime_measurement) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTime_measurement(float aTime_measurement) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryIMUData, ISENSORGEOMETRYIMUDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYIMUDATA \
  NS_SCRIPTABLE NS_IMETHOD GetTime_measurement(float *aTime_measurement); \
  NS_SCRIPTABLE NS_IMETHOD SetTime_measurement(float aTime_measurement); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYIMUDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTime_measurement(float *aTime_measurement) { return _to GetTime_measurement(aTime_measurement); } \
  NS_SCRIPTABLE NS_IMETHOD SetTime_measurement(float aTime_measurement) { return _to SetTime_measurement(aTime_measurement); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYIMUDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTime_measurement(float *aTime_measurement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTime_measurement(aTime_measurement); } \
  NS_SCRIPTABLE NS_IMETHOD SetTime_measurement(float aTime_measurement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTime_measurement(aTime_measurement); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryIMUData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYIMUDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryIMUData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float time_measurement; */
NS_IMETHODIMP _MYCLASS_::GetTime_measurement(float *aTime_measurement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTime_measurement(float aTime_measurement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryOdometryData */
#define ISENSORGEOMETRYODOMETRYDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYODOMETRYDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryOdometryData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYODOMETRYDATA_IID)

  /* attribute string targetid; */
  NS_SCRIPTABLE NS_IMETHOD GetTargetid(char **aTargetid) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTargetid(const char *aTargetid) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryOdometryData, ISENSORGEOMETRYODOMETRYDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYODOMETRYDATA \
  NS_SCRIPTABLE NS_IMETHOD GetTargetid(char **aTargetid); \
  NS_SCRIPTABLE NS_IMETHOD SetTargetid(const char *aTargetid); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYODOMETRYDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTargetid(char **aTargetid) { return _to GetTargetid(aTargetid); } \
  NS_SCRIPTABLE NS_IMETHOD SetTargetid(const char *aTargetid) { return _to SetTargetid(aTargetid); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYODOMETRYDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTargetid(char **aTargetid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetid(aTargetid); } \
  NS_SCRIPTABLE NS_IMETHOD SetTargetid(const char *aTargetid) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTargetid(aTargetid); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryOdometryData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYODOMETRYDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryOdometryData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute string targetid; */
NS_IMETHODIMP _MYCLASS_::GetTargetid(char **aTargetid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTargetid(const char *aTargetid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryTactileDataFriction */
#define ISENSORGEOMETRYTACTILEDATAFRICTION_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYTACTILEDATAFRICTION_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryTactileDataFriction : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYTACTILEDATAFRICTION_IID)

  /* attribute string name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) = 0;

  /* attribute float sigma_0; */
  NS_SCRIPTABLE NS_IMETHOD GetSigma_0(float *aSigma_0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSigma_0(float aSigma_0) = 0;

  /* attribute float sigma_1; */
  NS_SCRIPTABLE NS_IMETHOD GetSigma_1(float *aSigma_1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSigma_1(float aSigma_1) = 0;

  /* attribute float mu_s; */
  NS_SCRIPTABLE NS_IMETHOD GetMu_s(float *aMu_s) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMu_s(float aMu_s) = 0;

  /* attribute float mu_d; */
  NS_SCRIPTABLE NS_IMETHOD GetMu_d(float *aMu_d) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMu_d(float aMu_d) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryTactileDataFriction, ISENSORGEOMETRYTACTILEDATAFRICTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYTACTILEDATAFRICTION \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetSigma_0(float *aSigma_0); \
  NS_SCRIPTABLE NS_IMETHOD SetSigma_0(float aSigma_0); \
  NS_SCRIPTABLE NS_IMETHOD GetSigma_1(float *aSigma_1); \
  NS_SCRIPTABLE NS_IMETHOD SetSigma_1(float aSigma_1); \
  NS_SCRIPTABLE NS_IMETHOD GetMu_s(float *aMu_s); \
  NS_SCRIPTABLE NS_IMETHOD SetMu_s(float aMu_s); \
  NS_SCRIPTABLE NS_IMETHOD GetMu_d(float *aMu_d); \
  NS_SCRIPTABLE NS_IMETHOD SetMu_d(float aMu_d); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYTACTILEDATAFRICTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSigma_0(float *aSigma_0) { return _to GetSigma_0(aSigma_0); } \
  NS_SCRIPTABLE NS_IMETHOD SetSigma_0(float aSigma_0) { return _to SetSigma_0(aSigma_0); } \
  NS_SCRIPTABLE NS_IMETHOD GetSigma_1(float *aSigma_1) { return _to GetSigma_1(aSigma_1); } \
  NS_SCRIPTABLE NS_IMETHOD SetSigma_1(float aSigma_1) { return _to SetSigma_1(aSigma_1); } \
  NS_SCRIPTABLE NS_IMETHOD GetMu_s(float *aMu_s) { return _to GetMu_s(aMu_s); } \
  NS_SCRIPTABLE NS_IMETHOD SetMu_s(float aMu_s) { return _to SetMu_s(aMu_s); } \
  NS_SCRIPTABLE NS_IMETHOD GetMu_d(float *aMu_d) { return _to GetMu_d(aMu_d); } \
  NS_SCRIPTABLE NS_IMETHOD SetMu_d(float aMu_d) { return _to SetMu_d(aMu_d); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYTACTILEDATAFRICTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSigma_0(float *aSigma_0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSigma_0(aSigma_0); } \
  NS_SCRIPTABLE NS_IMETHOD SetSigma_0(float aSigma_0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSigma_0(aSigma_0); } \
  NS_SCRIPTABLE NS_IMETHOD GetSigma_1(float *aSigma_1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSigma_1(aSigma_1); } \
  NS_SCRIPTABLE NS_IMETHOD SetSigma_1(float aSigma_1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSigma_1(aSigma_1); } \
  NS_SCRIPTABLE NS_IMETHOD GetMu_s(float *aMu_s) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMu_s(aMu_s); } \
  NS_SCRIPTABLE NS_IMETHOD SetMu_s(float aMu_s) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMu_s(aMu_s); } \
  NS_SCRIPTABLE NS_IMETHOD GetMu_d(float *aMu_d) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMu_d(aMu_d); } \
  NS_SCRIPTABLE NS_IMETHOD SetMu_d(float aMu_d) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMu_d(aMu_d); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryTactileDataFriction
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYTACTILEDATAFRICTION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryTactileDataFriction)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute string name; */
NS_IMETHODIMP _MYCLASS_::GetName(char **aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetName(const char *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float sigma_0; */
NS_IMETHODIMP _MYCLASS_::GetSigma_0(float *aSigma_0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSigma_0(float aSigma_0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float sigma_1; */
NS_IMETHODIMP _MYCLASS_::GetSigma_1(float *aSigma_1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSigma_1(float aSigma_1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float mu_s; */
NS_IMETHODIMP _MYCLASS_::GetMu_s(float *aMu_s)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMu_s(float aMu_s)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float mu_d; */
NS_IMETHODIMP _MYCLASS_::GetMu_d(float *aMu_d)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMu_d(float aMu_d)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryTactileData */
#define ISENSORGEOMETRYTACTILEDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYTACTILEDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryTactileData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYTACTILEDATA_IID)

  /* void GetPositions (out unsigned long count, [array, size_is (count)] out IVectorF v); */
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM) = 0;

  /* void SetPositions (in unsigned long count, [array, size_is (count)] in IVectorF v); */
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, IVectorF **v) = 0;

  /* attribute float thickness; */
  NS_SCRIPTABLE NS_IMETHOD GetThickness(float *aThickness) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetThickness(float aThickness) = 0;

  /* void GetFrictionMap (out unsigned long count, [array, size_is (count)] out ISensorGeometryTactileDataFriction v); */
  NS_SCRIPTABLE NS_IMETHOD GetFrictionMap(PRUint32 *count NS_OUTPARAM, ISensorGeometryTactileDataFriction ***v NS_OUTPARAM) = 0;

  /* void SetFrictionMap (in unsigned long count, [array, size_is (count)] in ISensorGeometryTactileDataFriction v); */
  NS_SCRIPTABLE NS_IMETHOD SetFrictionMap(PRUint32 count, ISensorGeometryTactileDataFriction **v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryTactileData, ISENSORGEOMETRYTACTILEDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYTACTILEDATA \
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, IVectorF **v); \
  NS_SCRIPTABLE NS_IMETHOD GetThickness(float *aThickness); \
  NS_SCRIPTABLE NS_IMETHOD SetThickness(float aThickness); \
  NS_SCRIPTABLE NS_IMETHOD GetFrictionMap(PRUint32 *count NS_OUTPARAM, ISensorGeometryTactileDataFriction ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetFrictionMap(PRUint32 count, ISensorGeometryTactileDataFriction **v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYTACTILEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM) { return _to GetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, IVectorF **v) { return _to SetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetThickness(float *aThickness) { return _to GetThickness(aThickness); } \
  NS_SCRIPTABLE NS_IMETHOD SetThickness(float aThickness) { return _to SetThickness(aThickness); } \
  NS_SCRIPTABLE NS_IMETHOD GetFrictionMap(PRUint32 *count NS_OUTPARAM, ISensorGeometryTactileDataFriction ***v NS_OUTPARAM) { return _to GetFrictionMap(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetFrictionMap(PRUint32 count, ISensorGeometryTactileDataFriction **v) { return _to SetFrictionMap(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYTACTILEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPositions(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetPositions(PRUint32 count, IVectorF **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPositions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetThickness(float *aThickness) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThickness(aThickness); } \
  NS_SCRIPTABLE NS_IMETHOD SetThickness(float aThickness) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetThickness(aThickness); } \
  NS_SCRIPTABLE NS_IMETHOD GetFrictionMap(PRUint32 *count NS_OUTPARAM, ISensorGeometryTactileDataFriction ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrictionMap(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetFrictionMap(PRUint32 count, ISensorGeometryTactileDataFriction **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFrictionMap(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryTactileData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYTACTILEDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryTactileData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetPositions (out unsigned long count, [array, size_is (count)] out IVectorF v); */
NS_IMETHODIMP _MYCLASS_::GetPositions(PRUint32 *count NS_OUTPARAM, IVectorF ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetPositions (in unsigned long count, [array, size_is (count)] in IVectorF v); */
NS_IMETHODIMP _MYCLASS_::SetPositions(PRUint32 count, IVectorF **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float thickness; */
NS_IMETHODIMP _MYCLASS_::GetThickness(float *aThickness)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetThickness(float aThickness)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetFrictionMap (out unsigned long count, [array, size_is (count)] out ISensorGeometryTactileDataFriction v); */
NS_IMETHODIMP _MYCLASS_::GetFrictionMap(PRUint32 *count NS_OUTPARAM, ISensorGeometryTactileDataFriction ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetFrictionMap (in unsigned long count, [array, size_is (count)] in ISensorGeometryTactileDataFriction v); */
NS_IMETHODIMP _MYCLASS_::SetFrictionMap(PRUint32 count, ISensorGeometryTactileDataFriction **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorGeometryActuatorData */
#define ISENSORGEOMETRYACTUATORDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORGEOMETRYACTUATORDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorGeometryActuatorData : public ISensorGeometry {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORGEOMETRYACTUATORDATA_IID)

  /* attribute float maxtorque; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxtorque(float *aMaxtorque) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxtorque(float aMaxtorque) = 0;

  /* attribute float maxcurrent; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxcurrent(float *aMaxcurrent) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxcurrent(float aMaxcurrent) = 0;

  /* attribute float nominalcurrent; */
  NS_SCRIPTABLE NS_IMETHOD GetNominalcurrent(float *aNominalcurrent) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNominalcurrent(float aNominalcurrent) = 0;

  /* attribute float maxvelocity; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxvelocity(float *aMaxvelocity) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxvelocity(float aMaxvelocity) = 0;

  /* attribute float maxacceleration; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxacceleration(float *aMaxacceleration) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxacceleration(float aMaxacceleration) = 0;

  /* attribute float maxjerk; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxjerk(float *aMaxjerk) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxjerk(float aMaxjerk) = 0;

  /* attribute float staticfriction; */
  NS_SCRIPTABLE NS_IMETHOD GetStaticfriction(float *aStaticfriction) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStaticfriction(float aStaticfriction) = 0;

  /* attribute float viscousfriction; */
  NS_SCRIPTABLE NS_IMETHOD GetViscousfriction(float *aViscousfriction) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetViscousfriction(float aViscousfriction) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorGeometryActuatorData, ISENSORGEOMETRYACTUATORDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORGEOMETRYACTUATORDATA \
  NS_SCRIPTABLE NS_IMETHOD GetMaxtorque(float *aMaxtorque); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxtorque(float aMaxtorque); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxcurrent(float *aMaxcurrent); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxcurrent(float aMaxcurrent); \
  NS_SCRIPTABLE NS_IMETHOD GetNominalcurrent(float *aNominalcurrent); \
  NS_SCRIPTABLE NS_IMETHOD SetNominalcurrent(float aNominalcurrent); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxvelocity(float *aMaxvelocity); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxvelocity(float aMaxvelocity); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxacceleration(float *aMaxacceleration); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxacceleration(float aMaxacceleration); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxjerk(float *aMaxjerk); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxjerk(float aMaxjerk); \
  NS_SCRIPTABLE NS_IMETHOD GetStaticfriction(float *aStaticfriction); \
  NS_SCRIPTABLE NS_IMETHOD SetStaticfriction(float aStaticfriction); \
  NS_SCRIPTABLE NS_IMETHOD GetViscousfriction(float *aViscousfriction); \
  NS_SCRIPTABLE NS_IMETHOD SetViscousfriction(float aViscousfriction); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORGEOMETRYACTUATORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMaxtorque(float *aMaxtorque) { return _to GetMaxtorque(aMaxtorque); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxtorque(float aMaxtorque) { return _to SetMaxtorque(aMaxtorque); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxcurrent(float *aMaxcurrent) { return _to GetMaxcurrent(aMaxcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxcurrent(float aMaxcurrent) { return _to SetMaxcurrent(aMaxcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD GetNominalcurrent(float *aNominalcurrent) { return _to GetNominalcurrent(aNominalcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetNominalcurrent(float aNominalcurrent) { return _to SetNominalcurrent(aNominalcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxvelocity(float *aMaxvelocity) { return _to GetMaxvelocity(aMaxvelocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxvelocity(float aMaxvelocity) { return _to SetMaxvelocity(aMaxvelocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxacceleration(float *aMaxacceleration) { return _to GetMaxacceleration(aMaxacceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxacceleration(float aMaxacceleration) { return _to SetMaxacceleration(aMaxacceleration); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxjerk(float *aMaxjerk) { return _to GetMaxjerk(aMaxjerk); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxjerk(float aMaxjerk) { return _to SetMaxjerk(aMaxjerk); } \
  NS_SCRIPTABLE NS_IMETHOD GetStaticfriction(float *aStaticfriction) { return _to GetStaticfriction(aStaticfriction); } \
  NS_SCRIPTABLE NS_IMETHOD SetStaticfriction(float aStaticfriction) { return _to SetStaticfriction(aStaticfriction); } \
  NS_SCRIPTABLE NS_IMETHOD GetViscousfriction(float *aViscousfriction) { return _to GetViscousfriction(aViscousfriction); } \
  NS_SCRIPTABLE NS_IMETHOD SetViscousfriction(float aViscousfriction) { return _to SetViscousfriction(aViscousfriction); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORGEOMETRYACTUATORDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMaxtorque(float *aMaxtorque) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxtorque(aMaxtorque); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxtorque(float aMaxtorque) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxtorque(aMaxtorque); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxcurrent(float *aMaxcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxcurrent(aMaxcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxcurrent(float aMaxcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxcurrent(aMaxcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD GetNominalcurrent(float *aNominalcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNominalcurrent(aNominalcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD SetNominalcurrent(float aNominalcurrent) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNominalcurrent(aNominalcurrent); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxvelocity(float *aMaxvelocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxvelocity(aMaxvelocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxvelocity(float aMaxvelocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxvelocity(aMaxvelocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxacceleration(float *aMaxacceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxacceleration(aMaxacceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxacceleration(float aMaxacceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxacceleration(aMaxacceleration); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxjerk(float *aMaxjerk) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxjerk(aMaxjerk); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxjerk(float aMaxjerk) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxjerk(aMaxjerk); } \
  NS_SCRIPTABLE NS_IMETHOD GetStaticfriction(float *aStaticfriction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStaticfriction(aStaticfriction); } \
  NS_SCRIPTABLE NS_IMETHOD SetStaticfriction(float aStaticfriction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStaticfriction(aStaticfriction); } \
  NS_SCRIPTABLE NS_IMETHOD GetViscousfriction(float *aViscousfriction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetViscousfriction(aViscousfriction); } \
  NS_SCRIPTABLE NS_IMETHOD SetViscousfriction(float aViscousfriction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetViscousfriction(aViscousfriction); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorGeometryActuatorData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORGEOMETRYACTUATORDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorGeometryActuatorData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float maxtorque; */
NS_IMETHODIMP _MYCLASS_::GetMaxtorque(float *aMaxtorque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxtorque(float aMaxtorque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxcurrent; */
NS_IMETHODIMP _MYCLASS_::GetMaxcurrent(float *aMaxcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxcurrent(float aMaxcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float nominalcurrent; */
NS_IMETHODIMP _MYCLASS_::GetNominalcurrent(float *aNominalcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNominalcurrent(float aNominalcurrent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxvelocity; */
NS_IMETHODIMP _MYCLASS_::GetMaxvelocity(float *aMaxvelocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxvelocity(float aMaxvelocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxacceleration; */
NS_IMETHODIMP _MYCLASS_::GetMaxacceleration(float *aMaxacceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxacceleration(float aMaxacceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxjerk; */
NS_IMETHODIMP _MYCLASS_::GetMaxjerk(float *aMaxjerk)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxjerk(float aMaxjerk)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float staticfriction; */
NS_IMETHODIMP _MYCLASS_::GetStaticfriction(float *aStaticfriction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetStaticfriction(float aStaticfriction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float viscousfriction; */
NS_IMETHODIMP _MYCLASS_::GetViscousfriction(float *aViscousfriction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetViscousfriction(float aViscousfriction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISensorBase */
#define ISENSORBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISENSORBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISensorBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISENSORBASE_IID)

  /* long Configure (in long command, in boolean blocking); */
  NS_SCRIPTABLE NS_IMETHOD Configure(PRInt32 command, PRBool blocking, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean SimulationStep (in float fTimeElapsed); */
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed, PRBool *_retval NS_OUTPARAM) = 0;

  /* ISensorGeometry GetSensorGeometry (in long type); */
  NS_SCRIPTABLE NS_IMETHOD GetSensorGeometry(PRInt32 type, ISensorGeometry **_retval NS_OUTPARAM) = 0;

  /* ISensorData CreateSensorData (in long type); */
  NS_SCRIPTABLE NS_IMETHOD CreateSensorData(PRInt32 type, ISensorData **_retval NS_OUTPARAM) = 0;

  /* boolean GetSensorData (in ISensorData psensordata); */
  NS_SCRIPTABLE NS_IMETHOD GetSensorData(ISensorData *psensordata, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Supports (in long type); */
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM) = 0;

  /* void SetTransform (in ITransformF trans); */
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *trans) = 0;

  /* ITransformF GetTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* IUserData RegisterDataCallback (in long type, in ICallbackSensorData callback); */
  NS_SCRIPTABLE NS_IMETHOD RegisterDataCallback(PRInt32 type, ICallbackSensorData *callback, IUserData **_retval NS_OUTPARAM) = 0;

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

  /* void SetName (in string newname); */
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *newname) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISensorBase, ISENSORBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISENSORBASE \
  NS_SCRIPTABLE NS_IMETHOD Configure(PRInt32 command, PRBool blocking, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSensorGeometry(PRInt32 type, ISensorGeometry **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateSensorData(PRInt32 type, ISensorData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSensorData(ISensorData *psensordata, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *trans); \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterDataCallback(PRInt32 type, ICallbackSensorData *callback, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *newname); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISENSORBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Configure(PRInt32 command, PRBool blocking, PRInt32 *_retval NS_OUTPARAM) { return _to Configure(command, blocking, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed, PRBool *_retval NS_OUTPARAM) { return _to SimulationStep(fTimeElapsed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorGeometry(PRInt32 type, ISensorGeometry **_retval NS_OUTPARAM) { return _to GetSensorGeometry(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateSensorData(PRInt32 type, ISensorData **_retval NS_OUTPARAM) { return _to CreateSensorData(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorData(ISensorData *psensordata, PRBool *_retval NS_OUTPARAM) { return _to GetSensorData(psensordata, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM) { return _to Supports(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *trans) { return _to SetTransform(trans); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterDataCallback(PRInt32 type, ICallbackSensorData *callback, IUserData **_retval NS_OUTPARAM) { return _to RegisterDataCallback(type, callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *newname) { return _to SetName(newname); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISENSORBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Configure(PRInt32 command, PRBool blocking, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Configure(command, blocking, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SimulationStep(fTimeElapsed, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorGeometry(PRInt32 type, ISensorGeometry **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensorGeometry(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateSensorData(PRInt32 type, ISensorData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateSensorData(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorData(ISensorData *psensordata, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensorData(psensordata, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Supports(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransform(trans); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterDataCallback(PRInt32 type, ICallbackSensorData *callback, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterDataCallback(type, callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *newname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(newname); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISensorBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISENSORBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISensorBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long Configure (in long command, in boolean blocking); */
NS_IMETHODIMP _MYCLASS_::Configure(PRInt32 command, PRBool blocking, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SimulationStep (in float fTimeElapsed); */
NS_IMETHODIMP _MYCLASS_::SimulationStep(float fTimeElapsed, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ISensorGeometry GetSensorGeometry (in long type); */
NS_IMETHODIMP _MYCLASS_::GetSensorGeometry(PRInt32 type, ISensorGeometry **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ISensorData CreateSensorData (in long type); */
NS_IMETHODIMP _MYCLASS_::CreateSensorData(PRInt32 type, ISensorData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetSensorData (in ISensorData psensordata); */
NS_IMETHODIMP _MYCLASS_::GetSensorData(ISensorData *psensordata, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Supports (in long type); */
NS_IMETHODIMP _MYCLASS_::Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTransform (in ITransformF trans); */
NS_IMETHODIMP _MYCLASS_::SetTransform(ITransformF *trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetTransform (); */
NS_IMETHODIMP _MYCLASS_::GetTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterDataCallback (in long type, in ICallbackSensorData callback); */
NS_IMETHODIMP _MYCLASS_::RegisterDataCallback(PRInt32 type, ICallbackSensorData *callback, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetName (in string newname); */
NS_IMETHODIMP _MYCLASS_::SetName(const char *newname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_sensor_h__ */
