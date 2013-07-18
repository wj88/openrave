/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/planner.idl
 */

#ifndef __gen_planner_h__
#define __gen_planner_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

#ifndef __gen_openrave_h__
#include "openrave.h"
#endif

#ifndef __gen_interface_h__
#include "interface.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ICallbackPlan */
#define ICALLBACKPLAN_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKPLAN_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackPlan : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKPLAN_IID)

  /* long Invoke (in IPlannerProgress progress); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(IPlannerProgress *progress, PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackPlan, ICALLBACKPLAN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKPLAN \
  NS_SCRIPTABLE NS_IMETHOD Invoke(IPlannerProgress *progress, PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKPLAN(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(IPlannerProgress *progress, PRInt32 *_retval NS_OUTPARAM) { return _to Invoke(progress, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKPLAN(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(IPlannerProgress *progress, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(progress, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackPlan
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKPLAN

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackPlan)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long Invoke (in IPlannerProgress progress); */
NS_IMETHODIMP _MYCLASS_::Invoke(IPlannerProgress *progress, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICallbackProcessF1 */
#define ICALLBACKPROCESSF1_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKPROCESSF1_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackProcessF1 : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKPROCESSF1_IID)

  /* float Invoke (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v, float *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackProcessF1, ICALLBACKPROCESSF1_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKPROCESSF1 \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v, float *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKPROCESSF1(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v, float *_retval NS_OUTPARAM) { return _to Invoke(count, v, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKPROCESSF1(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(count, v, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackProcessF1
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKPROCESSF1

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackProcessF1)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* float Invoke (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::Invoke(PRUint32 count, float *v, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICallbackProcessF2 */
#define ICALLBACKPROCESSF2_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKPROCESSF2_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackProcessF2 : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKPROCESSF2_IID)

  /* float Invoke (in unsigned long count1, [array, size_is (count1)] in float v1, in unsigned long count2, [array, size_is (count2)] in float v2); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count1, float *v1, PRUint32 count2, float *v2, float *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackProcessF2, ICALLBACKPROCESSF2_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKPROCESSF2 \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count1, float *v1, PRUint32 count2, float *v2, float *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKPROCESSF2(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count1, float *v1, PRUint32 count2, float *v2, float *_retval NS_OUTPARAM) { return _to Invoke(count1, v1, count2, v2, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKPROCESSF2(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count1, float *v1, PRUint32 count2, float *v2, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(count1, v1, count2, v2, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackProcessF2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKPROCESSF2

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackProcessF2)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* float Invoke (in unsigned long count1, [array, size_is (count1)] in float v1, in unsigned long count2, [array, size_is (count2)] in float v2); */
NS_IMETHODIMP _MYCLASS_::Invoke(PRUint32 count1, float *v1, PRUint32 count2, float *v2, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IConstraintFilterReturn */
#define ICONSTRAINTFILTERRETURN_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICONSTRAINTFILTERRETURN_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IConstraintFilterReturn : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICONSTRAINTFILTERRETURN_IID)

  /* void Clear (); */
  NS_SCRIPTABLE NS_IMETHOD Clear(void) = 0;

  /* void GetConfigurations (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurations(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetConfigurations (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigurations(PRUint32 count, float *v) = 0;

  /* void GetConfigurationTimes (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationTimes(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetConfigurationTimes (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationTimes(PRUint32 count, float *v) = 0;

  /* void GetInvalidValues (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetInvalidValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetInvalidValues (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetInvalidValues(PRUint32 count, float *v) = 0;

  /* void GetInvalidVelocities (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetInvalidVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetInvalidVelocities (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetInvalidVelocities(PRUint32 count, float *v) = 0;

  /* attribute float fTimeWhenInvalid; */
  NS_SCRIPTABLE NS_IMETHOD GetFTimeWhenInvalid(float *aFTimeWhenInvalid) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFTimeWhenInvalid(float aFTimeWhenInvalid) = 0;

  /* attribute long returncode; */
  NS_SCRIPTABLE NS_IMETHOD GetReturncode(PRInt32 *aReturncode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetReturncode(PRInt32 aReturncode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IConstraintFilterReturn, ICONSTRAINTFILTERRETURN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICONSTRAINTFILTERRETURN \
  NS_SCRIPTABLE NS_IMETHOD Clear(void); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurations(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurations(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationTimes(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationTimes(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetInvalidValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetInvalidValues(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetInvalidVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetInvalidVelocities(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetFTimeWhenInvalid(float *aFTimeWhenInvalid); \
  NS_SCRIPTABLE NS_IMETHOD SetFTimeWhenInvalid(float aFTimeWhenInvalid); \
  NS_SCRIPTABLE NS_IMETHOD GetReturncode(PRInt32 *aReturncode); \
  NS_SCRIPTABLE NS_IMETHOD SetReturncode(PRInt32 aReturncode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICONSTRAINTFILTERRETURN(_to) \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return _to Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurations(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigurations(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurations(PRUint32 count, float *v) { return _to SetConfigurations(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationTimes(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigurationTimes(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationTimes(PRUint32 count, float *v) { return _to SetConfigurationTimes(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetInvalidValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetInvalidValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInvalidValues(PRUint32 count, float *v) { return _to SetInvalidValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetInvalidVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetInvalidVelocities(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInvalidVelocities(PRUint32 count, float *v) { return _to SetInvalidVelocities(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetFTimeWhenInvalid(float *aFTimeWhenInvalid) { return _to GetFTimeWhenInvalid(aFTimeWhenInvalid); } \
  NS_SCRIPTABLE NS_IMETHOD SetFTimeWhenInvalid(float aFTimeWhenInvalid) { return _to SetFTimeWhenInvalid(aFTimeWhenInvalid); } \
  NS_SCRIPTABLE NS_IMETHOD GetReturncode(PRInt32 *aReturncode) { return _to GetReturncode(aReturncode); } \
  NS_SCRIPTABLE NS_IMETHOD SetReturncode(PRInt32 aReturncode) { return _to SetReturncode(aReturncode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICONSTRAINTFILTERRETURN(_to) \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurations(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurations(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurations(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigurations(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationTimes(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurationTimes(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationTimes(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigurationTimes(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetInvalidValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInvalidValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInvalidValues(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInvalidValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetInvalidVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInvalidVelocities(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInvalidVelocities(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInvalidVelocities(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetFTimeWhenInvalid(float *aFTimeWhenInvalid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFTimeWhenInvalid(aFTimeWhenInvalid); } \
  NS_SCRIPTABLE NS_IMETHOD SetFTimeWhenInvalid(float aFTimeWhenInvalid) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFTimeWhenInvalid(aFTimeWhenInvalid); } \
  NS_SCRIPTABLE NS_IMETHOD GetReturncode(PRInt32 *aReturncode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReturncode(aReturncode); } \
  NS_SCRIPTABLE NS_IMETHOD SetReturncode(PRInt32 aReturncode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReturncode(aReturncode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IConstraintFilterReturn
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICONSTRAINTFILTERRETURN

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IConstraintFilterReturn)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Clear (); */
NS_IMETHODIMP _MYCLASS_::Clear()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigurations (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigurations(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigurations (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetConfigurations(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigurationTimes (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigurationTimes(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigurationTimes (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetConfigurationTimes(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetInvalidValues (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetInvalidValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetInvalidValues (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetInvalidValues(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetInvalidVelocities (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetInvalidVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetInvalidVelocities (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetInvalidVelocities(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fTimeWhenInvalid; */
NS_IMETHODIMP _MYCLASS_::GetFTimeWhenInvalid(float *aFTimeWhenInvalid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFTimeWhenInvalid(float aFTimeWhenInvalid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long returncode; */
NS_IMETHODIMP _MYCLASS_::GetReturncode(PRInt32 *aReturncode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetReturncode(PRInt32 aReturncode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IPlannerBaseParametersStateSaver */
#define IPLANNERBASEPARAMETERSSTATESAVER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IPLANNERBASEPARAMETERSSTATESAVER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IPlannerBaseParametersStateSaver {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IPLANNERBASEPARAMETERSSTATESAVER_IID)

  /* IPlannerBaseParameters GetParameters (); */
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM) = 0;

  /* void Restore (); */
  NS_SCRIPTABLE NS_IMETHOD Restore(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IPlannerBaseParametersStateSaver, IPLANNERBASEPARAMETERSSTATESAVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPLANNERBASEPARAMETERSSTATESAVER \
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Restore(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPLANNERBASEPARAMETERSSTATESAVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM) { return _to GetParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Restore(void) { return _to Restore(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPLANNERBASEPARAMETERSSTATESAVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Restore(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Restore(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IPlannerBaseParametersStateSaver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IPLANNERBASEPARAMETERSSTATESAVER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IPlannerBaseParametersStateSaver)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IPlannerBaseParameters GetParameters (); */
NS_IMETHODIMP _MYCLASS_::GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Restore (); */
NS_IMETHODIMP _MYCLASS_::Restore()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IPlannerBaseParameters */
#define IPLANNERBASEPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IPLANNERBASEPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IPlannerBaseParameters : public IBaseXMLReader {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IPLANNERBASEPARAMETERS_IID)

  /* void copy (in IPlannerBaseParameters r); */
  NS_SCRIPTABLE NS_IMETHOD Copy(IPlannerBaseParameters *r) = 0;

  /* void SetRobotActiveJoints (in IRobotBase robot); */
  NS_SCRIPTABLE NS_IMETHOD SetRobotActiveJoints(IRobotBase *robot) = 0;

  /* void SetConfigurationSpecification (in IEnvironmentBase env, in IConfigurationSpecification spec); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationSpecification(IEnvironmentBase *env, IConfigurationSpecification *spec) = 0;

  /* void Validate (); */
  NS_SCRIPTABLE NS_IMETHOD Validate(void) = 0;

  /* attribute IConfigurationSpecification configurationspecification; */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationspecification(IConfigurationSpecification **aConfigurationspecification) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationspecification(IConfigurationSpecification *aConfigurationspecification) = 0;

  /* long CheckPathAllConstraints (in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long q1count, [array, size_is (q1count)] in float q1, in unsigned long dq0count, [array, size_is (dq0count)] in float dq0, in unsigned long dq1count, [array, size_is (dq1count)] in float dq1, in float elapsedtime, in long interval, in long options, out IConstraintFilterReturn filterreturn); */
  NS_SCRIPTABLE NS_IMETHOD CheckPathAllConstraints(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float elapsedtime, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void GetInitialConfig (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetInitialConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetInitialConfig (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetInitialConfig(PRUint32 count, float *v) = 0;

  /* void GetGoalConfig (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetGoalConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetGoalConfig (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetGoalConfig(PRUint32 count, float *v) = 0;

  /* void GetConfigLowerLimit (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigLowerLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetConfigLowerLimit (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigLowerLimit(PRUint32 count, float *v) = 0;

  /* void GetConfigUpperLimit (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigUpperLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetConfigUpperLimit (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigUpperLimit(PRUint32 count, float *v) = 0;

  /* void GetConfigVelocityLimit (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigVelocityLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetConfigVelocityLimit (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigVelocityLimit(PRUint32 count, float *v) = 0;

  /* void GetConfigAccelerationLimit (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigAccelerationLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetConfigAccelerationLimit (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigAccelerationLimit(PRUint32 count, float *v) = 0;

  /* void GetConfigResolution (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetConfigResolution (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetConfigResolution(PRUint32 count, float *v) = 0;

  /* attribute float fStepLength; */
  NS_SCRIPTABLE NS_IMETHOD GetFStepLength(float *aFStepLength) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFStepLength(float aFStepLength) = 0;

  /* attribute long nMaxIterations; */
  NS_SCRIPTABLE NS_IMETHOD GetNMaxIterations(PRInt32 *aNMaxIterations) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNMaxIterations(PRInt32 aNMaxIterations) = 0;

  /* attribute string sPostProcessingPlanner; */
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingPlanner(char **aSPostProcessingPlanner) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingPlanner(const char *aSPostProcessingPlanner) = 0;

  /* attribute string sPostProcessingParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingParameters(char **aSPostProcessingParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingParameters(const char *aSPostProcessingParameters) = 0;

  /* attribute string sExtraParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetSExtraParameters(char **aSExtraParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSExtraParameters(const char *aSExtraParameters) = 0;

  /* attribute unsigned long nRandomGeneratorSeed; */
  NS_SCRIPTABLE NS_IMETHOD GetNRandomGeneratorSeed(PRUint32 *aNRandomGeneratorSeed) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNRandomGeneratorSeed(PRUint32 aNRandomGeneratorSeed) = 0;

  /* long GetDOF (); */
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void GetInternalSamplers (out unsigned long count, [array, size_is (count)] out ISpaceSamplerBase v); */
  NS_SCRIPTABLE NS_IMETHOD GetInternalSamplers(PRUint32 *count NS_OUTPARAM, ISpaceSamplerBase ***v NS_OUTPARAM) = 0;

  /* void SetInternalSamplers (in unsigned long count, [array, size_is (count)] in ISpaceSamplerBase v); */
  NS_SCRIPTABLE NS_IMETHOD SetInternalSamplers(PRUint32 count, ISpaceSamplerBase **v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IPlannerBaseParameters, IPLANNERBASEPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPLANNERBASEPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD Copy(IPlannerBaseParameters *r); \
  NS_SCRIPTABLE NS_IMETHOD SetRobotActiveJoints(IRobotBase *robot); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationSpecification(IEnvironmentBase *env, IConfigurationSpecification *spec); \
  NS_SCRIPTABLE NS_IMETHOD Validate(void); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationspecification(IConfigurationSpecification **aConfigurationspecification); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationspecification(IConfigurationSpecification *aConfigurationspecification); \
  NS_SCRIPTABLE NS_IMETHOD CheckPathAllConstraints(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float elapsedtime, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInitialConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetInitialConfig(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetGoalConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetGoalConfig(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigLowerLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigLowerLimit(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigUpperLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigUpperLimit(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigVelocityLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigVelocityLimit(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigAccelerationLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigAccelerationLimit(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetConfigResolution(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetFStepLength(float *aFStepLength); \
  NS_SCRIPTABLE NS_IMETHOD SetFStepLength(float aFStepLength); \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxIterations(PRInt32 *aNMaxIterations); \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxIterations(PRInt32 aNMaxIterations); \
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingPlanner(char **aSPostProcessingPlanner); \
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingPlanner(const char *aSPostProcessingPlanner); \
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingParameters(char **aSPostProcessingParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingParameters(const char *aSPostProcessingParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetSExtraParameters(char **aSExtraParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetSExtraParameters(const char *aSExtraParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetNRandomGeneratorSeed(PRUint32 *aNRandomGeneratorSeed); \
  NS_SCRIPTABLE NS_IMETHOD SetNRandomGeneratorSeed(PRUint32 aNRandomGeneratorSeed); \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInternalSamplers(PRUint32 *count NS_OUTPARAM, ISpaceSamplerBase ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetInternalSamplers(PRUint32 count, ISpaceSamplerBase **v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPLANNERBASEPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD Copy(IPlannerBaseParameters *r) { return _to Copy(r); } \
  NS_SCRIPTABLE NS_IMETHOD SetRobotActiveJoints(IRobotBase *robot) { return _to SetRobotActiveJoints(robot); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationSpecification(IEnvironmentBase *env, IConfigurationSpecification *spec) { return _to SetConfigurationSpecification(env, spec); } \
  NS_SCRIPTABLE NS_IMETHOD Validate(void) { return _to Validate(); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationspecification(IConfigurationSpecification **aConfigurationspecification) { return _to GetConfigurationspecification(aConfigurationspecification); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationspecification(IConfigurationSpecification *aConfigurationspecification) { return _to SetConfigurationspecification(aConfigurationspecification); } \
  NS_SCRIPTABLE NS_IMETHOD CheckPathAllConstraints(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float elapsedtime, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return _to CheckPathAllConstraints(q0count, q0, q1count, q1, dq0count, dq0, dq1count, dq1, elapsedtime, interval, options, filterreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInitialConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetInitialConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInitialConfig(PRUint32 count, float *v) { return _to SetInitialConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetGoalConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetGoalConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetGoalConfig(PRUint32 count, float *v) { return _to SetGoalConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigLowerLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigLowerLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigLowerLimit(PRUint32 count, float *v) { return _to SetConfigLowerLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigUpperLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigUpperLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigUpperLimit(PRUint32 count, float *v) { return _to SetConfigUpperLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigVelocityLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigVelocityLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigVelocityLimit(PRUint32 count, float *v) { return _to SetConfigVelocityLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigAccelerationLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigAccelerationLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigAccelerationLimit(PRUint32 count, float *v) { return _to SetConfigAccelerationLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigResolution(PRUint32 count, float *v) { return _to SetConfigResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetFStepLength(float *aFStepLength) { return _to GetFStepLength(aFStepLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetFStepLength(float aFStepLength) { return _to SetFStepLength(aFStepLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxIterations(PRInt32 *aNMaxIterations) { return _to GetNMaxIterations(aNMaxIterations); } \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxIterations(PRInt32 aNMaxIterations) { return _to SetNMaxIterations(aNMaxIterations); } \
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingPlanner(char **aSPostProcessingPlanner) { return _to GetSPostProcessingPlanner(aSPostProcessingPlanner); } \
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingPlanner(const char *aSPostProcessingPlanner) { return _to SetSPostProcessingPlanner(aSPostProcessingPlanner); } \
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingParameters(char **aSPostProcessingParameters) { return _to GetSPostProcessingParameters(aSPostProcessingParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingParameters(const char *aSPostProcessingParameters) { return _to SetSPostProcessingParameters(aSPostProcessingParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetSExtraParameters(char **aSExtraParameters) { return _to GetSExtraParameters(aSExtraParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetSExtraParameters(const char *aSExtraParameters) { return _to SetSExtraParameters(aSExtraParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetNRandomGeneratorSeed(PRUint32 *aNRandomGeneratorSeed) { return _to GetNRandomGeneratorSeed(aNRandomGeneratorSeed); } \
  NS_SCRIPTABLE NS_IMETHOD SetNRandomGeneratorSeed(PRUint32 aNRandomGeneratorSeed) { return _to SetNRandomGeneratorSeed(aNRandomGeneratorSeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return _to GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalSamplers(PRUint32 *count NS_OUTPARAM, ISpaceSamplerBase ***v NS_OUTPARAM) { return _to GetInternalSamplers(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInternalSamplers(PRUint32 count, ISpaceSamplerBase **v) { return _to SetInternalSamplers(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPLANNERBASEPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD Copy(IPlannerBaseParameters *r) { return !_to ? NS_ERROR_NULL_POINTER : _to->Copy(r); } \
  NS_SCRIPTABLE NS_IMETHOD SetRobotActiveJoints(IRobotBase *robot) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRobotActiveJoints(robot); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationSpecification(IEnvironmentBase *env, IConfigurationSpecification *spec) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigurationSpecification(env, spec); } \
  NS_SCRIPTABLE NS_IMETHOD Validate(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Validate(); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationspecification(IConfigurationSpecification **aConfigurationspecification) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurationspecification(aConfigurationspecification); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigurationspecification(IConfigurationSpecification *aConfigurationspecification) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigurationspecification(aConfigurationspecification); } \
  NS_SCRIPTABLE NS_IMETHOD CheckPathAllConstraints(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float elapsedtime, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckPathAllConstraints(q0count, q0, q1count, q1, dq0count, dq0, dq1count, dq1, elapsedtime, interval, options, filterreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInitialConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInitialConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInitialConfig(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInitialConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetGoalConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGoalConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetGoalConfig(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGoalConfig(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigLowerLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigLowerLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigLowerLimit(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigLowerLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigUpperLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigUpperLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigUpperLimit(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigUpperLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigVelocityLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigVelocityLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigVelocityLimit(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigVelocityLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigAccelerationLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigAccelerationLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigAccelerationLimit(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigAccelerationLimit(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetConfigResolution(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetConfigResolution(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetFStepLength(float *aFStepLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFStepLength(aFStepLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetFStepLength(float aFStepLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFStepLength(aFStepLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxIterations(PRInt32 *aNMaxIterations) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNMaxIterations(aNMaxIterations); } \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxIterations(PRInt32 aNMaxIterations) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNMaxIterations(aNMaxIterations); } \
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingPlanner(char **aSPostProcessingPlanner) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSPostProcessingPlanner(aSPostProcessingPlanner); } \
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingPlanner(const char *aSPostProcessingPlanner) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSPostProcessingPlanner(aSPostProcessingPlanner); } \
  NS_SCRIPTABLE NS_IMETHOD GetSPostProcessingParameters(char **aSPostProcessingParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSPostProcessingParameters(aSPostProcessingParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetSPostProcessingParameters(const char *aSPostProcessingParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSPostProcessingParameters(aSPostProcessingParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetSExtraParameters(char **aSExtraParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSExtraParameters(aSExtraParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetSExtraParameters(const char *aSExtraParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSExtraParameters(aSExtraParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetNRandomGeneratorSeed(PRUint32 *aNRandomGeneratorSeed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNRandomGeneratorSeed(aNRandomGeneratorSeed); } \
  NS_SCRIPTABLE NS_IMETHOD SetNRandomGeneratorSeed(PRUint32 aNRandomGeneratorSeed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNRandomGeneratorSeed(aNRandomGeneratorSeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalSamplers(PRUint32 *count NS_OUTPARAM, ISpaceSamplerBase ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalSamplers(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetInternalSamplers(PRUint32 count, ISpaceSamplerBase **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInternalSamplers(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IPlannerBaseParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IPLANNERBASEPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IPlannerBaseParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void copy (in IPlannerBaseParameters r); */
NS_IMETHODIMP _MYCLASS_::Copy(IPlannerBaseParameters *r)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRobotActiveJoints (in IRobotBase robot); */
NS_IMETHODIMP _MYCLASS_::SetRobotActiveJoints(IRobotBase *robot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigurationSpecification (in IEnvironmentBase env, in IConfigurationSpecification spec); */
NS_IMETHODIMP _MYCLASS_::SetConfigurationSpecification(IEnvironmentBase *env, IConfigurationSpecification *spec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Validate (); */
NS_IMETHODIMP _MYCLASS_::Validate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IConfigurationSpecification configurationspecification; */
NS_IMETHODIMP _MYCLASS_::GetConfigurationspecification(IConfigurationSpecification **aConfigurationspecification)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetConfigurationspecification(IConfigurationSpecification *aConfigurationspecification)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long CheckPathAllConstraints (in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long q1count, [array, size_is (q1count)] in float q1, in unsigned long dq0count, [array, size_is (dq0count)] in float dq0, in unsigned long dq1count, [array, size_is (dq1count)] in float dq1, in float elapsedtime, in long interval, in long options, out IConstraintFilterReturn filterreturn); */
NS_IMETHODIMP _MYCLASS_::CheckPathAllConstraints(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float elapsedtime, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetInitialConfig (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetInitialConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetInitialConfig (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetInitialConfig(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetGoalConfig (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetGoalConfig(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetGoalConfig (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetGoalConfig(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigLowerLimit (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigLowerLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigLowerLimit (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetConfigLowerLimit(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigUpperLimit (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigUpperLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigUpperLimit (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetConfigUpperLimit(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigVelocityLimit (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigVelocityLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigVelocityLimit (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetConfigVelocityLimit(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigAccelerationLimit (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigAccelerationLimit(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigAccelerationLimit (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetConfigAccelerationLimit(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigResolution (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigResolution(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetConfigResolution (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetConfigResolution(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fStepLength; */
NS_IMETHODIMP _MYCLASS_::GetFStepLength(float *aFStepLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFStepLength(float aFStepLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long nMaxIterations; */
NS_IMETHODIMP _MYCLASS_::GetNMaxIterations(PRInt32 *aNMaxIterations)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNMaxIterations(PRInt32 aNMaxIterations)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string sPostProcessingPlanner; */
NS_IMETHODIMP _MYCLASS_::GetSPostProcessingPlanner(char **aSPostProcessingPlanner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSPostProcessingPlanner(const char *aSPostProcessingPlanner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string sPostProcessingParameters; */
NS_IMETHODIMP _MYCLASS_::GetSPostProcessingParameters(char **aSPostProcessingParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSPostProcessingParameters(const char *aSPostProcessingParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string sExtraParameters; */
NS_IMETHODIMP _MYCLASS_::GetSExtraParameters(char **aSExtraParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSExtraParameters(const char *aSExtraParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long nRandomGeneratorSeed; */
NS_IMETHODIMP _MYCLASS_::GetNRandomGeneratorSeed(PRUint32 *aNRandomGeneratorSeed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNRandomGeneratorSeed(PRUint32 aNRandomGeneratorSeed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetDOF (); */
NS_IMETHODIMP _MYCLASS_::GetDOF(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetInternalSamplers (out unsigned long count, [array, size_is (count)] out ISpaceSamplerBase v); */
NS_IMETHODIMP _MYCLASS_::GetInternalSamplers(PRUint32 *count NS_OUTPARAM, ISpaceSamplerBase ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetInternalSamplers (in unsigned long count, [array, size_is (count)] in ISpaceSamplerBase v); */
NS_IMETHODIMP _MYCLASS_::SetInternalSamplers(PRUint32 count, ISpaceSamplerBase **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IPlannerProgress */
#define IPLANNERPROGRESS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IPLANNERPROGRESS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IPlannerProgress : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IPLANNERPROGRESS_IID)

  /* attribute long iteration; */
  NS_SCRIPTABLE NS_IMETHOD GetIteration(PRInt32 *aIteration) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIteration(PRInt32 aIteration) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IPlannerProgress, IPLANNERPROGRESS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPLANNERPROGRESS \
  NS_SCRIPTABLE NS_IMETHOD GetIteration(PRInt32 *aIteration); \
  NS_SCRIPTABLE NS_IMETHOD SetIteration(PRInt32 aIteration); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPLANNERPROGRESS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIteration(PRInt32 *aIteration) { return _to GetIteration(aIteration); } \
  NS_SCRIPTABLE NS_IMETHOD SetIteration(PRInt32 aIteration) { return _to SetIteration(aIteration); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPLANNERPROGRESS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIteration(PRInt32 *aIteration) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIteration(aIteration); } \
  NS_SCRIPTABLE NS_IMETHOD SetIteration(PRInt32 aIteration) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIteration(aIteration); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IPlannerProgress
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IPLANNERPROGRESS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IPlannerProgress)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute long iteration; */
NS_IMETHODIMP _MYCLASS_::GetIteration(PRInt32 *aIteration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetIteration(PRInt32 aIteration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IPlannerBase */
#define IPLANNERBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IPLANNERBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IPlannerBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IPLANNERBASE_IID)

  /* boolean InitPlan1 (in IRobotBase robot, in IPlannerBaseParameters params); */
  NS_SCRIPTABLE NS_IMETHOD InitPlan1(IRobotBase *robot, IPlannerBaseParameters *params, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean InitPlan2 (in IRobotBase robot, in nsIInputStream isParameters); */
  NS_SCRIPTABLE NS_IMETHOD InitPlan2(IRobotBase *robot, nsIInputStream *isParameters, PRBool *_retval NS_OUTPARAM) = 0;

  /* long PlanPath (in ITrajectoryBase traj); */
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IPlannerBaseParameters GetParameters (); */
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM) = 0;

  /* IUserData RegisterPlanCallback (in ICallbackPlan callbackfn); */
  NS_SCRIPTABLE NS_IMETHOD RegisterPlanCallback(ICallbackPlan *callbackfn, IUserData **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IPlannerBase, IPLANNERBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPLANNERBASE \
  NS_SCRIPTABLE NS_IMETHOD InitPlan1(IRobotBase *robot, IPlannerBaseParameters *params, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitPlan2(IRobotBase *robot, nsIInputStream *isParameters, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterPlanCallback(ICallbackPlan *callbackfn, IUserData **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPLANNERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitPlan1(IRobotBase *robot, IPlannerBaseParameters *params, PRBool *_retval NS_OUTPARAM) { return _to InitPlan1(robot, params, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitPlan2(IRobotBase *robot, nsIInputStream *isParameters, PRBool *_retval NS_OUTPARAM) { return _to InitPlan2(robot, isParameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM) { return _to PlanPath(traj, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM) { return _to GetParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterPlanCallback(ICallbackPlan *callbackfn, IUserData **_retval NS_OUTPARAM) { return _to RegisterPlanCallback(callbackfn, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPLANNERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitPlan1(IRobotBase *robot, IPlannerBaseParameters *params, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitPlan1(robot, params, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitPlan2(IRobotBase *robot, nsIInputStream *isParameters, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitPlan2(robot, isParameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlanPath(traj, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterPlanCallback(ICallbackPlan *callbackfn, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterPlanCallback(callbackfn, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IPlannerBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IPLANNERBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IPlannerBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean InitPlan1 (in IRobotBase robot, in IPlannerBaseParameters params); */
NS_IMETHODIMP _MYCLASS_::InitPlan1(IRobotBase *robot, IPlannerBaseParameters *params, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitPlan2 (in IRobotBase robot, in nsIInputStream isParameters); */
NS_IMETHODIMP _MYCLASS_::InitPlan2(IRobotBase *robot, nsIInputStream *isParameters, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long PlanPath (in ITrajectoryBase traj); */
NS_IMETHODIMP _MYCLASS_::PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IPlannerBaseParameters GetParameters (); */
NS_IMETHODIMP _MYCLASS_::GetParameters(IPlannerBaseParameters **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterPlanCallback (in ICallbackPlan callbackfn); */
NS_IMETHODIMP _MYCLASS_::RegisterPlanCallback(ICallbackPlan *callbackfn, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_planner_h__ */
