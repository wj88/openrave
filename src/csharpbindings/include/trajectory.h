/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/trajectory.idl
 */

#ifndef __gen_trajectory_h__
#define __gen_trajectory_h__


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

/* starting interface:    ITrajectoryBase */
#define ITRAJECTORYBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ITRAJECTORYBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ITrajectoryBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ITRAJECTORYBASE_IID)

  /* void Init (in IConfigurationSpecification spec); */
  NS_SCRIPTABLE NS_IMETHOD Init(IConfigurationSpecification *spec) = 0;

  /* void Insert1 (in long index, in unsigned long dataCount, [array, size_is (dataCount)] in float data, in boolean bOverwrite); */
  NS_SCRIPTABLE NS_IMETHOD Insert1(PRInt32 index, PRUint32 dataCount, float *data, PRBool bOverwrite) = 0;

  /* void Insert2 (in long index, in unsigned long dataCount, [array, size_is (dataCount)] in float data, in IConfigurationSpecification spec, in boolean bOverwrite); */
  NS_SCRIPTABLE NS_IMETHOD Insert2(PRInt32 index, PRUint32 dataCount, float *data, IConfigurationSpecification *spec, PRBool bOverwrite) = 0;

  /* void Remove (in long startindex, in long endindex); */
  NS_SCRIPTABLE NS_IMETHOD Remove(PRInt32 startindex, PRInt32 endindex) = 0;

  /* void Sample1 (out unsigned long dataCount, [array, size_is (dataCount)] out float data, in float time); */
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time) = 0;

  /* void Sample2 (out unsigned long dataCount, [array, size_is (dataCount)] out float data, in float time, in IConfigurationSpecification spec); */
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time, IConfigurationSpecification *spec) = 0;

  /* IConfigurationSpecification GetConfigurationSpecification (); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* long GetNumWaypoints (); */
  NS_SCRIPTABLE NS_IMETHOD GetNumWaypoints(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void GetWaypoints1 (in long startindex, in long endindex, out unsigned long dataCount, [array, size_is (dataCount)] out float data); */
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints1(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM) = 0;

  /* void GetWaypoints2 (in long startindex, in long endindex, out unsigned long dataCount, [array, size_is (dataCount)] out float data, in IConfigurationSpecification spec); */
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints2(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec) = 0;

  /* void GetWaypoint1 (in long index, out unsigned long dataCount, [array, size_is (dataCount)] out float data); */
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint1(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM) = 0;

  /* void GetWaypoint2 (in long index, out unsigned long dataCount, [array, size_is (dataCount)] out float data, in IConfigurationSpecification spec); */
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint2(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec) = 0;

  /* float GetDuration (); */
  NS_SCRIPTABLE NS_IMETHOD GetDuration(float *_retval NS_OUTPARAM) = 0;

  /* IInterfaceBase deserialize (in nsIInputStream I); */
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I, IInterfaceBase **_retval NS_OUTPARAM) = 0;

  /* void Swap (in ITrajectoryBase traj); */
  NS_SCRIPTABLE NS_IMETHOD Swap(ITrajectoryBase *traj) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ITrajectoryBase, ITRAJECTORYBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ITRAJECTORYBASE \
  NS_SCRIPTABLE NS_IMETHOD Init(IConfigurationSpecification *spec); \
  NS_SCRIPTABLE NS_IMETHOD Insert1(PRInt32 index, PRUint32 dataCount, float *data, PRBool bOverwrite); \
  NS_SCRIPTABLE NS_IMETHOD Insert2(PRInt32 index, PRUint32 dataCount, float *data, IConfigurationSpecification *spec, PRBool bOverwrite); \
  NS_SCRIPTABLE NS_IMETHOD Remove(PRInt32 startindex, PRInt32 endindex); \
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time); \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time, IConfigurationSpecification *spec); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNumWaypoints(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints1(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints2(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec); \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint1(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint2(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec); \
  NS_SCRIPTABLE NS_IMETHOD GetDuration(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I, IInterfaceBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Swap(ITrajectoryBase *traj); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ITRAJECTORYBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(IConfigurationSpecification *spec) { return _to Init(spec); } \
  NS_SCRIPTABLE NS_IMETHOD Insert1(PRInt32 index, PRUint32 dataCount, float *data, PRBool bOverwrite) { return _to Insert1(index, dataCount, data, bOverwrite); } \
  NS_SCRIPTABLE NS_IMETHOD Insert2(PRInt32 index, PRUint32 dataCount, float *data, IConfigurationSpecification *spec, PRBool bOverwrite) { return _to Insert2(index, dataCount, data, spec, bOverwrite); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(PRInt32 startindex, PRInt32 endindex) { return _to Remove(startindex, endindex); } \
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time) { return _to Sample1(dataCount, data, time); } \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time, IConfigurationSpecification *spec) { return _to Sample2(dataCount, data, time, spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(IConfigurationSpecification **_retval NS_OUTPARAM) { return _to GetConfigurationSpecification(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumWaypoints(PRInt32 *_retval NS_OUTPARAM) { return _to GetNumWaypoints(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints1(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM) { return _to GetWaypoints1(startindex, endindex, dataCount, data); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints2(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec) { return _to GetWaypoints2(startindex, endindex, dataCount, data, spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint1(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM) { return _to GetWaypoint1(index, dataCount, data); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint2(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec) { return _to GetWaypoint2(index, dataCount, data, spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetDuration(float *_retval NS_OUTPARAM) { return _to GetDuration(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I, IInterfaceBase **_retval NS_OUTPARAM) { return _to Deserialize(I, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Swap(ITrajectoryBase *traj) { return _to Swap(traj); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ITRAJECTORYBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(IConfigurationSpecification *spec) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(spec); } \
  NS_SCRIPTABLE NS_IMETHOD Insert1(PRInt32 index, PRUint32 dataCount, float *data, PRBool bOverwrite) { return !_to ? NS_ERROR_NULL_POINTER : _to->Insert1(index, dataCount, data, bOverwrite); } \
  NS_SCRIPTABLE NS_IMETHOD Insert2(PRInt32 index, PRUint32 dataCount, float *data, IConfigurationSpecification *spec, PRBool bOverwrite) { return !_to ? NS_ERROR_NULL_POINTER : _to->Insert2(index, dataCount, data, spec, bOverwrite); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(PRInt32 startindex, PRInt32 endindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->Remove(startindex, endindex); } \
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sample1(dataCount, data, time); } \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time, IConfigurationSpecification *spec) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sample2(dataCount, data, time, spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurationSpecification(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumWaypoints(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumWaypoints(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints1(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWaypoints1(startindex, endindex, dataCount, data); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoints2(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWaypoints2(startindex, endindex, dataCount, data, spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint1(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWaypoint1(index, dataCount, data); } \
  NS_SCRIPTABLE NS_IMETHOD GetWaypoint2(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWaypoint2(index, dataCount, data, spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetDuration(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDuration(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I, IInterfaceBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Deserialize(I, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Swap(ITrajectoryBase *traj) { return !_to ? NS_ERROR_NULL_POINTER : _to->Swap(traj); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ITrajectoryBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ITRAJECTORYBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ITrajectoryBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Init (in IConfigurationSpecification spec); */
NS_IMETHODIMP _MYCLASS_::Init(IConfigurationSpecification *spec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Insert1 (in long index, in unsigned long dataCount, [array, size_is (dataCount)] in float data, in boolean bOverwrite); */
NS_IMETHODIMP _MYCLASS_::Insert1(PRInt32 index, PRUint32 dataCount, float *data, PRBool bOverwrite)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Insert2 (in long index, in unsigned long dataCount, [array, size_is (dataCount)] in float data, in IConfigurationSpecification spec, in boolean bOverwrite); */
NS_IMETHODIMP _MYCLASS_::Insert2(PRInt32 index, PRUint32 dataCount, float *data, IConfigurationSpecification *spec, PRBool bOverwrite)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Remove (in long startindex, in long endindex); */
NS_IMETHODIMP _MYCLASS_::Remove(PRInt32 startindex, PRInt32 endindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Sample1 (out unsigned long dataCount, [array, size_is (dataCount)] out float data, in float time); */
NS_IMETHODIMP _MYCLASS_::Sample1(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Sample2 (out unsigned long dataCount, [array, size_is (dataCount)] out float data, in float time, in IConfigurationSpecification spec); */
NS_IMETHODIMP _MYCLASS_::Sample2(PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, float time, IConfigurationSpecification *spec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification GetConfigurationSpecification (); */
NS_IMETHODIMP _MYCLASS_::GetConfigurationSpecification(IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetNumWaypoints (); */
NS_IMETHODIMP _MYCLASS_::GetNumWaypoints(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetWaypoints1 (in long startindex, in long endindex, out unsigned long dataCount, [array, size_is (dataCount)] out float data); */
NS_IMETHODIMP _MYCLASS_::GetWaypoints1(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetWaypoints2 (in long startindex, in long endindex, out unsigned long dataCount, [array, size_is (dataCount)] out float data, in IConfigurationSpecification spec); */
NS_IMETHODIMP _MYCLASS_::GetWaypoints2(PRInt32 startindex, PRInt32 endindex, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetWaypoint1 (in long index, out unsigned long dataCount, [array, size_is (dataCount)] out float data); */
NS_IMETHODIMP _MYCLASS_::GetWaypoint1(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetWaypoint2 (in long index, out unsigned long dataCount, [array, size_is (dataCount)] out float data, in IConfigurationSpecification spec); */
NS_IMETHODIMP _MYCLASS_::GetWaypoint2(PRInt32 index, PRUint32 *dataCount NS_OUTPARAM, float **data NS_OUTPARAM, IConfigurationSpecification *spec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetDuration (); */
NS_IMETHODIMP _MYCLASS_::GetDuration(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IInterfaceBase deserialize (in nsIInputStream I); */
NS_IMETHODIMP _MYCLASS_::Deserialize(nsIInputStream *I, IInterfaceBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Swap (in ITrajectoryBase traj); */
NS_IMETHODIMP _MYCLASS_::Swap(ITrajectoryBase *traj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_trajectory_h__ */
