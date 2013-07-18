/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/plannerparameters.idl
 */

#ifndef __gen_plannerparameters_h__
#define __gen_plannerparameters_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

#ifndef __gen_planner_h__
#include "planner.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IExplorationParameters */
#define IEXPLORATIONPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IEXPLORATIONPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IExplorationParameters : public IPlannerBaseParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IEXPLORATIONPARAMETERS_IID)

  /* attribute float fExploreProb; */
  NS_SCRIPTABLE NS_IMETHOD GetFExploreProb(float *aFExploreProb) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFExploreProb(float aFExploreProb) = 0;

  /* attribute long nExpectedDataSize; */
  NS_SCRIPTABLE NS_IMETHOD GetNExpectedDataSize(PRInt32 *aNExpectedDataSize) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNExpectedDataSize(PRInt32 aNExpectedDataSize) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IExplorationParameters, IEXPLORATIONPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IEXPLORATIONPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetFExploreProb(float *aFExploreProb); \
  NS_SCRIPTABLE NS_IMETHOD SetFExploreProb(float aFExploreProb); \
  NS_SCRIPTABLE NS_IMETHOD GetNExpectedDataSize(PRInt32 *aNExpectedDataSize); \
  NS_SCRIPTABLE NS_IMETHOD SetNExpectedDataSize(PRInt32 aNExpectedDataSize); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IEXPLORATIONPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFExploreProb(float *aFExploreProb) { return _to GetFExploreProb(aFExploreProb); } \
  NS_SCRIPTABLE NS_IMETHOD SetFExploreProb(float aFExploreProb) { return _to SetFExploreProb(aFExploreProb); } \
  NS_SCRIPTABLE NS_IMETHOD GetNExpectedDataSize(PRInt32 *aNExpectedDataSize) { return _to GetNExpectedDataSize(aNExpectedDataSize); } \
  NS_SCRIPTABLE NS_IMETHOD SetNExpectedDataSize(PRInt32 aNExpectedDataSize) { return _to SetNExpectedDataSize(aNExpectedDataSize); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IEXPLORATIONPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFExploreProb(float *aFExploreProb) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFExploreProb(aFExploreProb); } \
  NS_SCRIPTABLE NS_IMETHOD SetFExploreProb(float aFExploreProb) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFExploreProb(aFExploreProb); } \
  NS_SCRIPTABLE NS_IMETHOD GetNExpectedDataSize(PRInt32 *aNExpectedDataSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNExpectedDataSize(aNExpectedDataSize); } \
  NS_SCRIPTABLE NS_IMETHOD SetNExpectedDataSize(PRInt32 aNExpectedDataSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNExpectedDataSize(aNExpectedDataSize); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IExplorationParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IEXPLORATIONPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IExplorationParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float fExploreProb; */
NS_IMETHODIMP _MYCLASS_::GetFExploreProb(float *aFExploreProb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFExploreProb(float aFExploreProb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long nExpectedDataSize; */
NS_IMETHODIMP _MYCLASS_::GetNExpectedDataSize(PRInt32 *aNExpectedDataSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNExpectedDataSize(PRInt32 aNExpectedDataSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRAStarParameters */
#define IRASTARPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IRASTARPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRAStarParameters : public IPlannerBaseParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IRASTARPARAMETERS_IID)

  /* attribute float fRadius; */
  NS_SCRIPTABLE NS_IMETHOD GetFRadius(float *aFRadius) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFRadius(float aFRadius) = 0;

  /* attribute float fDistThresh; */
  NS_SCRIPTABLE NS_IMETHOD GetFDistThresh(float *aFDistThresh) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFDistThresh(float aFDistThresh) = 0;

  /* attribute float fGoalCoeff; */
  NS_SCRIPTABLE NS_IMETHOD GetFGoalCoeff(float *aFGoalCoeff) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFGoalCoeff(float aFGoalCoeff) = 0;

  /* attribute long nMaxChildren; */
  NS_SCRIPTABLE NS_IMETHOD GetNMaxChildren(PRInt32 *aNMaxChildren) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNMaxChildren(PRInt32 aNMaxChildren) = 0;

  /* attribute long nMaxSampleTries; */
  NS_SCRIPTABLE NS_IMETHOD GetNMaxSampleTries(PRInt32 *aNMaxSampleTries) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNMaxSampleTries(PRInt32 aNMaxSampleTries) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRAStarParameters, IRASTARPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IRASTARPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetFRadius(float *aFRadius); \
  NS_SCRIPTABLE NS_IMETHOD SetFRadius(float aFRadius); \
  NS_SCRIPTABLE NS_IMETHOD GetFDistThresh(float *aFDistThresh); \
  NS_SCRIPTABLE NS_IMETHOD SetFDistThresh(float aFDistThresh); \
  NS_SCRIPTABLE NS_IMETHOD GetFGoalCoeff(float *aFGoalCoeff); \
  NS_SCRIPTABLE NS_IMETHOD SetFGoalCoeff(float aFGoalCoeff); \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxChildren(PRInt32 *aNMaxChildren); \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxChildren(PRInt32 aNMaxChildren); \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxSampleTries(PRInt32 *aNMaxSampleTries); \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxSampleTries(PRInt32 aNMaxSampleTries); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IRASTARPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFRadius(float *aFRadius) { return _to GetFRadius(aFRadius); } \
  NS_SCRIPTABLE NS_IMETHOD SetFRadius(float aFRadius) { return _to SetFRadius(aFRadius); } \
  NS_SCRIPTABLE NS_IMETHOD GetFDistThresh(float *aFDistThresh) { return _to GetFDistThresh(aFDistThresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetFDistThresh(float aFDistThresh) { return _to SetFDistThresh(aFDistThresh); } \
  NS_SCRIPTABLE NS_IMETHOD GetFGoalCoeff(float *aFGoalCoeff) { return _to GetFGoalCoeff(aFGoalCoeff); } \
  NS_SCRIPTABLE NS_IMETHOD SetFGoalCoeff(float aFGoalCoeff) { return _to SetFGoalCoeff(aFGoalCoeff); } \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxChildren(PRInt32 *aNMaxChildren) { return _to GetNMaxChildren(aNMaxChildren); } \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxChildren(PRInt32 aNMaxChildren) { return _to SetNMaxChildren(aNMaxChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxSampleTries(PRInt32 *aNMaxSampleTries) { return _to GetNMaxSampleTries(aNMaxSampleTries); } \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxSampleTries(PRInt32 aNMaxSampleTries) { return _to SetNMaxSampleTries(aNMaxSampleTries); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IRASTARPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFRadius(float *aFRadius) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFRadius(aFRadius); } \
  NS_SCRIPTABLE NS_IMETHOD SetFRadius(float aFRadius) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFRadius(aFRadius); } \
  NS_SCRIPTABLE NS_IMETHOD GetFDistThresh(float *aFDistThresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFDistThresh(aFDistThresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetFDistThresh(float aFDistThresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFDistThresh(aFDistThresh); } \
  NS_SCRIPTABLE NS_IMETHOD GetFGoalCoeff(float *aFGoalCoeff) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFGoalCoeff(aFGoalCoeff); } \
  NS_SCRIPTABLE NS_IMETHOD SetFGoalCoeff(float aFGoalCoeff) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFGoalCoeff(aFGoalCoeff); } \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxChildren(PRInt32 *aNMaxChildren) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNMaxChildren(aNMaxChildren); } \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxChildren(PRInt32 aNMaxChildren) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNMaxChildren(aNMaxChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetNMaxSampleTries(PRInt32 *aNMaxSampleTries) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNMaxSampleTries(aNMaxSampleTries); } \
  NS_SCRIPTABLE NS_IMETHOD SetNMaxSampleTries(PRInt32 aNMaxSampleTries) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNMaxSampleTries(aNMaxSampleTries); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRAStarParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IRASTARPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRAStarParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float fRadius; */
NS_IMETHODIMP _MYCLASS_::GetFRadius(float *aFRadius)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFRadius(float aFRadius)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fDistThresh; */
NS_IMETHODIMP _MYCLASS_::GetFDistThresh(float *aFDistThresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFDistThresh(float aFDistThresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fGoalCoeff; */
NS_IMETHODIMP _MYCLASS_::GetFGoalCoeff(float *aFGoalCoeff)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFGoalCoeff(float aFGoalCoeff)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long nMaxChildren; */
NS_IMETHODIMP _MYCLASS_::GetNMaxChildren(PRInt32 *aNMaxChildren)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNMaxChildren(PRInt32 aNMaxChildren)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long nMaxSampleTries; */
NS_IMETHODIMP _MYCLASS_::GetNMaxSampleTries(PRInt32 *aNMaxSampleTries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNMaxSampleTries(PRInt32 aNMaxSampleTries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IGraspSetParameters */
#define IGRASPSETPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IGRASPSETPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IGraspSetParameters : public IPlannerBaseParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IGRASPSETPARAMETERS_IID)

  /* void GetGrasps (out unsigned long count, [array, size_is (count)] out ITransformF v); */
  NS_SCRIPTABLE NS_IMETHOD GetGrasps(PRUint32 *count NS_OUTPARAM, ITransformF ***v NS_OUTPARAM) = 0;

  /* void SetGrasps (in unsigned long count, [array, size_is (count)] in ITransformF v); */
  NS_SCRIPTABLE NS_IMETHOD SetGrasps(PRUint32 count, ITransformF **v) = 0;

  /* attribute IKinBody ptarget; */
  NS_SCRIPTABLE NS_IMETHOD GetPtarget(IKinBody **aPtarget) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPtarget(IKinBody *aPtarget) = 0;

  /* attribute long nGradientSamples; */
  NS_SCRIPTABLE NS_IMETHOD GetNGradientSamples(PRInt32 *aNGradientSamples) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNGradientSamples(PRInt32 aNGradientSamples) = 0;

  /* attribute float fVisibiltyGraspThresh; */
  NS_SCRIPTABLE NS_IMETHOD GetFVisibiltyGraspThresh(float *aFVisibiltyGraspThresh) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFVisibiltyGraspThresh(float aFVisibiltyGraspThresh) = 0;

  /* attribute float fGraspDistThresh; */
  NS_SCRIPTABLE NS_IMETHOD GetFGraspDistThresh(float *aFGraspDistThresh) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFGraspDistThresh(float aFGraspDistThresh) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IGraspSetParameters, IGRASPSETPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IGRASPSETPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetGrasps(PRUint32 *count NS_OUTPARAM, ITransformF ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetGrasps(PRUint32 count, ITransformF **v); \
  NS_SCRIPTABLE NS_IMETHOD GetPtarget(IKinBody **aPtarget); \
  NS_SCRIPTABLE NS_IMETHOD SetPtarget(IKinBody *aPtarget); \
  NS_SCRIPTABLE NS_IMETHOD GetNGradientSamples(PRInt32 *aNGradientSamples); \
  NS_SCRIPTABLE NS_IMETHOD SetNGradientSamples(PRInt32 aNGradientSamples); \
  NS_SCRIPTABLE NS_IMETHOD GetFVisibiltyGraspThresh(float *aFVisibiltyGraspThresh); \
  NS_SCRIPTABLE NS_IMETHOD SetFVisibiltyGraspThresh(float aFVisibiltyGraspThresh); \
  NS_SCRIPTABLE NS_IMETHOD GetFGraspDistThresh(float *aFGraspDistThresh); \
  NS_SCRIPTABLE NS_IMETHOD SetFGraspDistThresh(float aFGraspDistThresh); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IGRASPSETPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGrasps(PRUint32 *count NS_OUTPARAM, ITransformF ***v NS_OUTPARAM) { return _to GetGrasps(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetGrasps(PRUint32 count, ITransformF **v) { return _to SetGrasps(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetPtarget(IKinBody **aPtarget) { return _to GetPtarget(aPtarget); } \
  NS_SCRIPTABLE NS_IMETHOD SetPtarget(IKinBody *aPtarget) { return _to SetPtarget(aPtarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetNGradientSamples(PRInt32 *aNGradientSamples) { return _to GetNGradientSamples(aNGradientSamples); } \
  NS_SCRIPTABLE NS_IMETHOD SetNGradientSamples(PRInt32 aNGradientSamples) { return _to SetNGradientSamples(aNGradientSamples); } \
  NS_SCRIPTABLE NS_IMETHOD GetFVisibiltyGraspThresh(float *aFVisibiltyGraspThresh) { return _to GetFVisibiltyGraspThresh(aFVisibiltyGraspThresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetFVisibiltyGraspThresh(float aFVisibiltyGraspThresh) { return _to SetFVisibiltyGraspThresh(aFVisibiltyGraspThresh); } \
  NS_SCRIPTABLE NS_IMETHOD GetFGraspDistThresh(float *aFGraspDistThresh) { return _to GetFGraspDistThresh(aFGraspDistThresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetFGraspDistThresh(float aFGraspDistThresh) { return _to SetFGraspDistThresh(aFGraspDistThresh); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IGRASPSETPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGrasps(PRUint32 *count NS_OUTPARAM, ITransformF ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGrasps(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetGrasps(PRUint32 count, ITransformF **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGrasps(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetPtarget(IKinBody **aPtarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPtarget(aPtarget); } \
  NS_SCRIPTABLE NS_IMETHOD SetPtarget(IKinBody *aPtarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPtarget(aPtarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetNGradientSamples(PRInt32 *aNGradientSamples) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNGradientSamples(aNGradientSamples); } \
  NS_SCRIPTABLE NS_IMETHOD SetNGradientSamples(PRInt32 aNGradientSamples) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNGradientSamples(aNGradientSamples); } \
  NS_SCRIPTABLE NS_IMETHOD GetFVisibiltyGraspThresh(float *aFVisibiltyGraspThresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFVisibiltyGraspThresh(aFVisibiltyGraspThresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetFVisibiltyGraspThresh(float aFVisibiltyGraspThresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFVisibiltyGraspThresh(aFVisibiltyGraspThresh); } \
  NS_SCRIPTABLE NS_IMETHOD GetFGraspDistThresh(float *aFGraspDistThresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFGraspDistThresh(aFGraspDistThresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetFGraspDistThresh(float aFGraspDistThresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFGraspDistThresh(aFGraspDistThresh); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IGraspSetParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IGRASPSETPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IGraspSetParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetGrasps (out unsigned long count, [array, size_is (count)] out ITransformF v); */
NS_IMETHODIMP _MYCLASS_::GetGrasps(PRUint32 *count NS_OUTPARAM, ITransformF ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetGrasps (in unsigned long count, [array, size_is (count)] in ITransformF v); */
NS_IMETHODIMP _MYCLASS_::SetGrasps(PRUint32 count, ITransformF **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IKinBody ptarget; */
NS_IMETHODIMP _MYCLASS_::GetPtarget(IKinBody **aPtarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPtarget(IKinBody *aPtarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long nGradientSamples; */
NS_IMETHODIMP _MYCLASS_::GetNGradientSamples(PRInt32 *aNGradientSamples)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNGradientSamples(PRInt32 aNGradientSamples)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fVisibiltyGraspThresh; */
NS_IMETHODIMP _MYCLASS_::GetFVisibiltyGraspThresh(float *aFVisibiltyGraspThresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFVisibiltyGraspThresh(float aFVisibiltyGraspThresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fGraspDistThresh; */
NS_IMETHODIMP _MYCLASS_::GetFGraspDistThresh(float *aFGraspDistThresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFGraspDistThresh(float aFGraspDistThresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IGraspParameters */
#define IGRASPPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IGRASPPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IGraspParameters : public IPlannerBaseParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IGRASPPARAMETERS_IID)

  /* attribute float fstandoff; */
  NS_SCRIPTABLE NS_IMETHOD GetFstandoff(float *aFstandoff) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFstandoff(float aFstandoff) = 0;

  /* attribute IKinBody targetbody; */
  NS_SCRIPTABLE NS_IMETHOD GetTargetbody(IKinBody **aTargetbody) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTargetbody(IKinBody *aTargetbody) = 0;

  /* attribute float ftargetroll; */
  NS_SCRIPTABLE NS_IMETHOD GetFtargetroll(float *aFtargetroll) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFtargetroll(float aFtargetroll) = 0;

  /* attribute IVectorF vtargetdirection; */
  NS_SCRIPTABLE NS_IMETHOD GetVtargetdirection(IVectorF **aVtargetdirection) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVtargetdirection(IVectorF *aVtargetdirection) = 0;

  /* attribute IVectorF vtargetposition; */
  NS_SCRIPTABLE NS_IMETHOD GetVtargetposition(IVectorF **aVtargetposition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVtargetposition(IVectorF *aVtargetposition) = 0;

  /* attribute IVectorF vmanipulatordirection; */
  NS_SCRIPTABLE NS_IMETHOD GetVmanipulatordirection(IVectorF **aVmanipulatordirection) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmanipulatordirection(IVectorF *aVmanipulatordirection) = 0;

  /* attribute boolean btransformrobot; */
  NS_SCRIPTABLE NS_IMETHOD GetBtransformrobot(PRBool *aBtransformrobot) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBtransformrobot(PRBool aBtransformrobot) = 0;

  /* attribute boolean breturntrajectory; */
  NS_SCRIPTABLE NS_IMETHOD GetBreturntrajectory(PRBool *aBreturntrajectory) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBreturntrajectory(PRBool aBreturntrajectory) = 0;

  /* attribute boolean bonlycontacttarget; */
  NS_SCRIPTABLE NS_IMETHOD GetBonlycontacttarget(PRBool *aBonlycontacttarget) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBonlycontacttarget(PRBool aBonlycontacttarget) = 0;

  /* attribute boolean btightgrasp; */
  NS_SCRIPTABLE NS_IMETHOD GetBtightgrasp(PRBool *aBtightgrasp) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBtightgrasp(PRBool aBtightgrasp) = 0;

  /* attribute boolean bavoidcontact; */
  NS_SCRIPTABLE NS_IMETHOD GetBavoidcontact(PRBool *aBavoidcontact) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBavoidcontact(PRBool aBavoidcontact) = 0;

  /* void GetAvoidLinkGeometry (out unsigned long count, [array, size_is (count)] out string v); */
  NS_SCRIPTABLE NS_IMETHOD GetAvoidLinkGeometry(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) = 0;

  /* void SetAvoidLinkGeometry (in unsigned long count, [array, size_is (count)] in string v); */
  NS_SCRIPTABLE NS_IMETHOD SetAvoidLinkGeometry(PRUint32 count, const char **v) = 0;

  /* attribute float fcoarsestep; */
  NS_SCRIPTABLE NS_IMETHOD GetFcoarsestep(float *aFcoarsestep) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFcoarsestep(float aFcoarsestep) = 0;

  /* attribute float ffinestep; */
  NS_SCRIPTABLE NS_IMETHOD GetFfinestep(float *aFfinestep) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFfinestep(float aFfinestep) = 0;

  /* attribute float ftranslationstepmult; */
  NS_SCRIPTABLE NS_IMETHOD GetFtranslationstepmult(float *aFtranslationstepmult) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFtranslationstepmult(float aFtranslationstepmult) = 0;

  /* attribute float fgraspingnoise; */
  NS_SCRIPTABLE NS_IMETHOD GetFgraspingnoise(float *aFgraspingnoise) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFgraspingnoise(float aFgraspingnoise) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IGraspParameters, IGRASPPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IGRASPPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetFstandoff(float *aFstandoff); \
  NS_SCRIPTABLE NS_IMETHOD SetFstandoff(float aFstandoff); \
  NS_SCRIPTABLE NS_IMETHOD GetTargetbody(IKinBody **aTargetbody); \
  NS_SCRIPTABLE NS_IMETHOD SetTargetbody(IKinBody *aTargetbody); \
  NS_SCRIPTABLE NS_IMETHOD GetFtargetroll(float *aFtargetroll); \
  NS_SCRIPTABLE NS_IMETHOD SetFtargetroll(float aFtargetroll); \
  NS_SCRIPTABLE NS_IMETHOD GetVtargetdirection(IVectorF **aVtargetdirection); \
  NS_SCRIPTABLE NS_IMETHOD SetVtargetdirection(IVectorF *aVtargetdirection); \
  NS_SCRIPTABLE NS_IMETHOD GetVtargetposition(IVectorF **aVtargetposition); \
  NS_SCRIPTABLE NS_IMETHOD SetVtargetposition(IVectorF *aVtargetposition); \
  NS_SCRIPTABLE NS_IMETHOD GetVmanipulatordirection(IVectorF **aVmanipulatordirection); \
  NS_SCRIPTABLE NS_IMETHOD SetVmanipulatordirection(IVectorF *aVmanipulatordirection); \
  NS_SCRIPTABLE NS_IMETHOD GetBtransformrobot(PRBool *aBtransformrobot); \
  NS_SCRIPTABLE NS_IMETHOD SetBtransformrobot(PRBool aBtransformrobot); \
  NS_SCRIPTABLE NS_IMETHOD GetBreturntrajectory(PRBool *aBreturntrajectory); \
  NS_SCRIPTABLE NS_IMETHOD SetBreturntrajectory(PRBool aBreturntrajectory); \
  NS_SCRIPTABLE NS_IMETHOD GetBonlycontacttarget(PRBool *aBonlycontacttarget); \
  NS_SCRIPTABLE NS_IMETHOD SetBonlycontacttarget(PRBool aBonlycontacttarget); \
  NS_SCRIPTABLE NS_IMETHOD GetBtightgrasp(PRBool *aBtightgrasp); \
  NS_SCRIPTABLE NS_IMETHOD SetBtightgrasp(PRBool aBtightgrasp); \
  NS_SCRIPTABLE NS_IMETHOD GetBavoidcontact(PRBool *aBavoidcontact); \
  NS_SCRIPTABLE NS_IMETHOD SetBavoidcontact(PRBool aBavoidcontact); \
  NS_SCRIPTABLE NS_IMETHOD GetAvoidLinkGeometry(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetAvoidLinkGeometry(PRUint32 count, const char **v); \
  NS_SCRIPTABLE NS_IMETHOD GetFcoarsestep(float *aFcoarsestep); \
  NS_SCRIPTABLE NS_IMETHOD SetFcoarsestep(float aFcoarsestep); \
  NS_SCRIPTABLE NS_IMETHOD GetFfinestep(float *aFfinestep); \
  NS_SCRIPTABLE NS_IMETHOD SetFfinestep(float aFfinestep); \
  NS_SCRIPTABLE NS_IMETHOD GetFtranslationstepmult(float *aFtranslationstepmult); \
  NS_SCRIPTABLE NS_IMETHOD SetFtranslationstepmult(float aFtranslationstepmult); \
  NS_SCRIPTABLE NS_IMETHOD GetFgraspingnoise(float *aFgraspingnoise); \
  NS_SCRIPTABLE NS_IMETHOD SetFgraspingnoise(float aFgraspingnoise); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IGRASPPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFstandoff(float *aFstandoff) { return _to GetFstandoff(aFstandoff); } \
  NS_SCRIPTABLE NS_IMETHOD SetFstandoff(float aFstandoff) { return _to SetFstandoff(aFstandoff); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetbody(IKinBody **aTargetbody) { return _to GetTargetbody(aTargetbody); } \
  NS_SCRIPTABLE NS_IMETHOD SetTargetbody(IKinBody *aTargetbody) { return _to SetTargetbody(aTargetbody); } \
  NS_SCRIPTABLE NS_IMETHOD GetFtargetroll(float *aFtargetroll) { return _to GetFtargetroll(aFtargetroll); } \
  NS_SCRIPTABLE NS_IMETHOD SetFtargetroll(float aFtargetroll) { return _to SetFtargetroll(aFtargetroll); } \
  NS_SCRIPTABLE NS_IMETHOD GetVtargetdirection(IVectorF **aVtargetdirection) { return _to GetVtargetdirection(aVtargetdirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetVtargetdirection(IVectorF *aVtargetdirection) { return _to SetVtargetdirection(aVtargetdirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetVtargetposition(IVectorF **aVtargetposition) { return _to GetVtargetposition(aVtargetposition); } \
  NS_SCRIPTABLE NS_IMETHOD SetVtargetposition(IVectorF *aVtargetposition) { return _to SetVtargetposition(aVtargetposition); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmanipulatordirection(IVectorF **aVmanipulatordirection) { return _to GetVmanipulatordirection(aVmanipulatordirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmanipulatordirection(IVectorF *aVmanipulatordirection) { return _to SetVmanipulatordirection(aVmanipulatordirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetBtransformrobot(PRBool *aBtransformrobot) { return _to GetBtransformrobot(aBtransformrobot); } \
  NS_SCRIPTABLE NS_IMETHOD SetBtransformrobot(PRBool aBtransformrobot) { return _to SetBtransformrobot(aBtransformrobot); } \
  NS_SCRIPTABLE NS_IMETHOD GetBreturntrajectory(PRBool *aBreturntrajectory) { return _to GetBreturntrajectory(aBreturntrajectory); } \
  NS_SCRIPTABLE NS_IMETHOD SetBreturntrajectory(PRBool aBreturntrajectory) { return _to SetBreturntrajectory(aBreturntrajectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetBonlycontacttarget(PRBool *aBonlycontacttarget) { return _to GetBonlycontacttarget(aBonlycontacttarget); } \
  NS_SCRIPTABLE NS_IMETHOD SetBonlycontacttarget(PRBool aBonlycontacttarget) { return _to SetBonlycontacttarget(aBonlycontacttarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetBtightgrasp(PRBool *aBtightgrasp) { return _to GetBtightgrasp(aBtightgrasp); } \
  NS_SCRIPTABLE NS_IMETHOD SetBtightgrasp(PRBool aBtightgrasp) { return _to SetBtightgrasp(aBtightgrasp); } \
  NS_SCRIPTABLE NS_IMETHOD GetBavoidcontact(PRBool *aBavoidcontact) { return _to GetBavoidcontact(aBavoidcontact); } \
  NS_SCRIPTABLE NS_IMETHOD SetBavoidcontact(PRBool aBavoidcontact) { return _to SetBavoidcontact(aBavoidcontact); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvoidLinkGeometry(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) { return _to GetAvoidLinkGeometry(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetAvoidLinkGeometry(PRUint32 count, const char **v) { return _to SetAvoidLinkGeometry(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetFcoarsestep(float *aFcoarsestep) { return _to GetFcoarsestep(aFcoarsestep); } \
  NS_SCRIPTABLE NS_IMETHOD SetFcoarsestep(float aFcoarsestep) { return _to SetFcoarsestep(aFcoarsestep); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfinestep(float *aFfinestep) { return _to GetFfinestep(aFfinestep); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfinestep(float aFfinestep) { return _to SetFfinestep(aFfinestep); } \
  NS_SCRIPTABLE NS_IMETHOD GetFtranslationstepmult(float *aFtranslationstepmult) { return _to GetFtranslationstepmult(aFtranslationstepmult); } \
  NS_SCRIPTABLE NS_IMETHOD SetFtranslationstepmult(float aFtranslationstepmult) { return _to SetFtranslationstepmult(aFtranslationstepmult); } \
  NS_SCRIPTABLE NS_IMETHOD GetFgraspingnoise(float *aFgraspingnoise) { return _to GetFgraspingnoise(aFgraspingnoise); } \
  NS_SCRIPTABLE NS_IMETHOD SetFgraspingnoise(float aFgraspingnoise) { return _to SetFgraspingnoise(aFgraspingnoise); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IGRASPPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFstandoff(float *aFstandoff) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFstandoff(aFstandoff); } \
  NS_SCRIPTABLE NS_IMETHOD SetFstandoff(float aFstandoff) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFstandoff(aFstandoff); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetbody(IKinBody **aTargetbody) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetbody(aTargetbody); } \
  NS_SCRIPTABLE NS_IMETHOD SetTargetbody(IKinBody *aTargetbody) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTargetbody(aTargetbody); } \
  NS_SCRIPTABLE NS_IMETHOD GetFtargetroll(float *aFtargetroll) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFtargetroll(aFtargetroll); } \
  NS_SCRIPTABLE NS_IMETHOD SetFtargetroll(float aFtargetroll) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFtargetroll(aFtargetroll); } \
  NS_SCRIPTABLE NS_IMETHOD GetVtargetdirection(IVectorF **aVtargetdirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVtargetdirection(aVtargetdirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetVtargetdirection(IVectorF *aVtargetdirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVtargetdirection(aVtargetdirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetVtargetposition(IVectorF **aVtargetposition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVtargetposition(aVtargetposition); } \
  NS_SCRIPTABLE NS_IMETHOD SetVtargetposition(IVectorF *aVtargetposition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVtargetposition(aVtargetposition); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmanipulatordirection(IVectorF **aVmanipulatordirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmanipulatordirection(aVmanipulatordirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmanipulatordirection(IVectorF *aVmanipulatordirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmanipulatordirection(aVmanipulatordirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetBtransformrobot(PRBool *aBtransformrobot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBtransformrobot(aBtransformrobot); } \
  NS_SCRIPTABLE NS_IMETHOD SetBtransformrobot(PRBool aBtransformrobot) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBtransformrobot(aBtransformrobot); } \
  NS_SCRIPTABLE NS_IMETHOD GetBreturntrajectory(PRBool *aBreturntrajectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBreturntrajectory(aBreturntrajectory); } \
  NS_SCRIPTABLE NS_IMETHOD SetBreturntrajectory(PRBool aBreturntrajectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBreturntrajectory(aBreturntrajectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetBonlycontacttarget(PRBool *aBonlycontacttarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBonlycontacttarget(aBonlycontacttarget); } \
  NS_SCRIPTABLE NS_IMETHOD SetBonlycontacttarget(PRBool aBonlycontacttarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBonlycontacttarget(aBonlycontacttarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetBtightgrasp(PRBool *aBtightgrasp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBtightgrasp(aBtightgrasp); } \
  NS_SCRIPTABLE NS_IMETHOD SetBtightgrasp(PRBool aBtightgrasp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBtightgrasp(aBtightgrasp); } \
  NS_SCRIPTABLE NS_IMETHOD GetBavoidcontact(PRBool *aBavoidcontact) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBavoidcontact(aBavoidcontact); } \
  NS_SCRIPTABLE NS_IMETHOD SetBavoidcontact(PRBool aBavoidcontact) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBavoidcontact(aBavoidcontact); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvoidLinkGeometry(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvoidLinkGeometry(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetAvoidLinkGeometry(PRUint32 count, const char **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAvoidLinkGeometry(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetFcoarsestep(float *aFcoarsestep) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFcoarsestep(aFcoarsestep); } \
  NS_SCRIPTABLE NS_IMETHOD SetFcoarsestep(float aFcoarsestep) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFcoarsestep(aFcoarsestep); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfinestep(float *aFfinestep) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFfinestep(aFfinestep); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfinestep(float aFfinestep) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFfinestep(aFfinestep); } \
  NS_SCRIPTABLE NS_IMETHOD GetFtranslationstepmult(float *aFtranslationstepmult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFtranslationstepmult(aFtranslationstepmult); } \
  NS_SCRIPTABLE NS_IMETHOD SetFtranslationstepmult(float aFtranslationstepmult) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFtranslationstepmult(aFtranslationstepmult); } \
  NS_SCRIPTABLE NS_IMETHOD GetFgraspingnoise(float *aFgraspingnoise) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFgraspingnoise(aFgraspingnoise); } \
  NS_SCRIPTABLE NS_IMETHOD SetFgraspingnoise(float aFgraspingnoise) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFgraspingnoise(aFgraspingnoise); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IGraspParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IGRASPPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IGraspParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float fstandoff; */
NS_IMETHODIMP _MYCLASS_::GetFstandoff(float *aFstandoff)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFstandoff(float aFstandoff)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IKinBody targetbody; */
NS_IMETHODIMP _MYCLASS_::GetTargetbody(IKinBody **aTargetbody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTargetbody(IKinBody *aTargetbody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ftargetroll; */
NS_IMETHODIMP _MYCLASS_::GetFtargetroll(float *aFtargetroll)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFtargetroll(float aFtargetroll)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vtargetdirection; */
NS_IMETHODIMP _MYCLASS_::GetVtargetdirection(IVectorF **aVtargetdirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVtargetdirection(IVectorF *aVtargetdirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vtargetposition; */
NS_IMETHODIMP _MYCLASS_::GetVtargetposition(IVectorF **aVtargetposition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVtargetposition(IVectorF *aVtargetposition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vmanipulatordirection; */
NS_IMETHODIMP _MYCLASS_::GetVmanipulatordirection(IVectorF **aVmanipulatordirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmanipulatordirection(IVectorF *aVmanipulatordirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean btransformrobot; */
NS_IMETHODIMP _MYCLASS_::GetBtransformrobot(PRBool *aBtransformrobot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBtransformrobot(PRBool aBtransformrobot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean breturntrajectory; */
NS_IMETHODIMP _MYCLASS_::GetBreturntrajectory(PRBool *aBreturntrajectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBreturntrajectory(PRBool aBreturntrajectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean bonlycontacttarget; */
NS_IMETHODIMP _MYCLASS_::GetBonlycontacttarget(PRBool *aBonlycontacttarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBonlycontacttarget(PRBool aBonlycontacttarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean btightgrasp; */
NS_IMETHODIMP _MYCLASS_::GetBtightgrasp(PRBool *aBtightgrasp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBtightgrasp(PRBool aBtightgrasp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean bavoidcontact; */
NS_IMETHODIMP _MYCLASS_::GetBavoidcontact(PRBool *aBavoidcontact)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBavoidcontact(PRBool aBavoidcontact)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAvoidLinkGeometry (out unsigned long count, [array, size_is (count)] out string v); */
NS_IMETHODIMP _MYCLASS_::GetAvoidLinkGeometry(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAvoidLinkGeometry (in unsigned long count, [array, size_is (count)] in string v); */
NS_IMETHODIMP _MYCLASS_::SetAvoidLinkGeometry(PRUint32 count, const char **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fcoarsestep; */
NS_IMETHODIMP _MYCLASS_::GetFcoarsestep(float *aFcoarsestep)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFcoarsestep(float aFcoarsestep)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ffinestep; */
NS_IMETHODIMP _MYCLASS_::GetFfinestep(float *aFfinestep)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFfinestep(float aFfinestep)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ftranslationstepmult; */
NS_IMETHODIMP _MYCLASS_::GetFtranslationstepmult(float *aFtranslationstepmult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFtranslationstepmult(float aFtranslationstepmult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fgraspingnoise; */
NS_IMETHODIMP _MYCLASS_::GetFgraspingnoise(float *aFgraspingnoise)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFgraspingnoise(float aFgraspingnoise)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ITrajectoryTimingParameters */
#define ITRAJECTORYTIMINGPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define ITRAJECTORYTIMINGPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ITrajectoryTimingParameters : public IPlannerBaseParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ITRAJECTORYTIMINGPARAMETERS_IID)

  /* attribute string interpolation; */
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation) = 0;

  /* attribute float pointtolerance; */
  NS_SCRIPTABLE NS_IMETHOD GetPointtolerance(float *aPointtolerance) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPointtolerance(float aPointtolerance) = 0;

  /* attribute boolean hastimestamps; */
  NS_SCRIPTABLE NS_IMETHOD GetHastimestamps(PRBool *aHastimestamps) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHastimestamps(PRBool aHastimestamps) = 0;

  /* attribute boolean hasvelocities; */
  NS_SCRIPTABLE NS_IMETHOD GetHasvelocities(PRBool *aHasvelocities) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHasvelocities(PRBool aHasvelocities) = 0;

  /* attribute boolean outputaccelchanges; */
  NS_SCRIPTABLE NS_IMETHOD GetOutputaccelchanges(PRBool *aOutputaccelchanges) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOutputaccelchanges(PRBool aOutputaccelchanges) = 0;

  /* attribute long multidofinterp; */
  NS_SCRIPTABLE NS_IMETHOD GetMultidofinterp(PRInt32 *aMultidofinterp) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMultidofinterp(PRInt32 aMultidofinterp) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ITrajectoryTimingParameters, ITRAJECTORYTIMINGPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ITRAJECTORYTIMINGPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation); \
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation); \
  NS_SCRIPTABLE NS_IMETHOD GetPointtolerance(float *aPointtolerance); \
  NS_SCRIPTABLE NS_IMETHOD SetPointtolerance(float aPointtolerance); \
  NS_SCRIPTABLE NS_IMETHOD GetHastimestamps(PRBool *aHastimestamps); \
  NS_SCRIPTABLE NS_IMETHOD SetHastimestamps(PRBool aHastimestamps); \
  NS_SCRIPTABLE NS_IMETHOD GetHasvelocities(PRBool *aHasvelocities); \
  NS_SCRIPTABLE NS_IMETHOD SetHasvelocities(PRBool aHasvelocities); \
  NS_SCRIPTABLE NS_IMETHOD GetOutputaccelchanges(PRBool *aOutputaccelchanges); \
  NS_SCRIPTABLE NS_IMETHOD SetOutputaccelchanges(PRBool aOutputaccelchanges); \
  NS_SCRIPTABLE NS_IMETHOD GetMultidofinterp(PRInt32 *aMultidofinterp); \
  NS_SCRIPTABLE NS_IMETHOD SetMultidofinterp(PRInt32 aMultidofinterp); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ITRAJECTORYTIMINGPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation) { return _to GetInterpolation(aInterpolation); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation) { return _to SetInterpolation(aInterpolation); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointtolerance(float *aPointtolerance) { return _to GetPointtolerance(aPointtolerance); } \
  NS_SCRIPTABLE NS_IMETHOD SetPointtolerance(float aPointtolerance) { return _to SetPointtolerance(aPointtolerance); } \
  NS_SCRIPTABLE NS_IMETHOD GetHastimestamps(PRBool *aHastimestamps) { return _to GetHastimestamps(aHastimestamps); } \
  NS_SCRIPTABLE NS_IMETHOD SetHastimestamps(PRBool aHastimestamps) { return _to SetHastimestamps(aHastimestamps); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasvelocities(PRBool *aHasvelocities) { return _to GetHasvelocities(aHasvelocities); } \
  NS_SCRIPTABLE NS_IMETHOD SetHasvelocities(PRBool aHasvelocities) { return _to SetHasvelocities(aHasvelocities); } \
  NS_SCRIPTABLE NS_IMETHOD GetOutputaccelchanges(PRBool *aOutputaccelchanges) { return _to GetOutputaccelchanges(aOutputaccelchanges); } \
  NS_SCRIPTABLE NS_IMETHOD SetOutputaccelchanges(PRBool aOutputaccelchanges) { return _to SetOutputaccelchanges(aOutputaccelchanges); } \
  NS_SCRIPTABLE NS_IMETHOD GetMultidofinterp(PRInt32 *aMultidofinterp) { return _to GetMultidofinterp(aMultidofinterp); } \
  NS_SCRIPTABLE NS_IMETHOD SetMultidofinterp(PRInt32 aMultidofinterp) { return _to SetMultidofinterp(aMultidofinterp); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ITRAJECTORYTIMINGPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterpolation(aInterpolation); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInterpolation(aInterpolation); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointtolerance(float *aPointtolerance) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPointtolerance(aPointtolerance); } \
  NS_SCRIPTABLE NS_IMETHOD SetPointtolerance(float aPointtolerance) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPointtolerance(aPointtolerance); } \
  NS_SCRIPTABLE NS_IMETHOD GetHastimestamps(PRBool *aHastimestamps) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHastimestamps(aHastimestamps); } \
  NS_SCRIPTABLE NS_IMETHOD SetHastimestamps(PRBool aHastimestamps) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHastimestamps(aHastimestamps); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasvelocities(PRBool *aHasvelocities) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasvelocities(aHasvelocities); } \
  NS_SCRIPTABLE NS_IMETHOD SetHasvelocities(PRBool aHasvelocities) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHasvelocities(aHasvelocities); } \
  NS_SCRIPTABLE NS_IMETHOD GetOutputaccelchanges(PRBool *aOutputaccelchanges) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOutputaccelchanges(aOutputaccelchanges); } \
  NS_SCRIPTABLE NS_IMETHOD SetOutputaccelchanges(PRBool aOutputaccelchanges) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOutputaccelchanges(aOutputaccelchanges); } \
  NS_SCRIPTABLE NS_IMETHOD GetMultidofinterp(PRInt32 *aMultidofinterp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMultidofinterp(aMultidofinterp); } \
  NS_SCRIPTABLE NS_IMETHOD SetMultidofinterp(PRInt32 aMultidofinterp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMultidofinterp(aMultidofinterp); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ITrajectoryTimingParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ITRAJECTORYTIMINGPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ITrajectoryTimingParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute string interpolation; */
NS_IMETHODIMP _MYCLASS_::GetInterpolation(char **aInterpolation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetInterpolation(const char *aInterpolation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float pointtolerance; */
NS_IMETHODIMP _MYCLASS_::GetPointtolerance(float *aPointtolerance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPointtolerance(float aPointtolerance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean hastimestamps; */
NS_IMETHODIMP _MYCLASS_::GetHastimestamps(PRBool *aHastimestamps)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetHastimestamps(PRBool aHastimestamps)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean hasvelocities; */
NS_IMETHODIMP _MYCLASS_::GetHasvelocities(PRBool *aHasvelocities)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetHasvelocities(PRBool aHasvelocities)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean outputaccelchanges; */
NS_IMETHODIMP _MYCLASS_::GetOutputaccelchanges(PRBool *aOutputaccelchanges)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetOutputaccelchanges(PRBool aOutputaccelchanges)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long multidofinterp; */
NS_IMETHODIMP _MYCLASS_::GetMultidofinterp(PRInt32 *aMultidofinterp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMultidofinterp(PRInt32 aMultidofinterp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IConstraintTrajectoryTimingParameters */
#define ICONSTRAINTTRAJECTORYTIMINGPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICONSTRAINTTRAJECTORYTIMINGPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IConstraintTrajectoryTimingParameters : public ITrajectoryTimingParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICONSTRAINTTRAJECTORYTIMINGPARAMETERS_IID)

  /* attribute float maxlinkspeed; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkspeed(float *aMaxlinkspeed) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkspeed(float aMaxlinkspeed) = 0;

  /* attribute float maxlinkaccel; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkaccel(float *aMaxlinkaccel) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkaccel(float aMaxlinkaccel) = 0;

  /* attribute float maxmanipspeed; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipspeed(float *aMaxmanipspeed) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipspeed(float aMaxmanipspeed) = 0;

  /* attribute float maxmanipaccel; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipaccel(float *aMaxmanipaccel) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipaccel(float aMaxmanipaccel) = 0;

  /* attribute float mingripperdistance; */
  NS_SCRIPTABLE NS_IMETHOD GetMingripperdistance(float *aMingripperdistance) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMingripperdistance(float aMingripperdistance) = 0;

  /* attribute float velocitydistancethresh; */
  NS_SCRIPTABLE NS_IMETHOD GetVelocitydistancethresh(float *aVelocitydistancethresh) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVelocitydistancethresh(float aVelocitydistancethresh) = 0;

  /* attribute long maxmergeiterations; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxmergeiterations(PRInt32 *aMaxmergeiterations) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxmergeiterations(PRInt32 aMaxmergeiterations) = 0;

  /* attribute float minswitchtime; */
  NS_SCRIPTABLE NS_IMETHOD GetMinswitchtime(float *aMinswitchtime) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMinswitchtime(float aMinswitchtime) = 0;

  /* attribute long nshortcutcycles; */
  NS_SCRIPTABLE NS_IMETHOD GetNshortcutcycles(PRInt32 *aNshortcutcycles) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNshortcutcycles(PRInt32 aNshortcutcycles) = 0;

  /* attribute long verifyinitialpath; */
  NS_SCRIPTABLE NS_IMETHOD GetVerifyinitialpath(PRInt32 *aVerifyinitialpath) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVerifyinitialpath(PRInt32 aVerifyinitialpath) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IConstraintTrajectoryTimingParameters, ICONSTRAINTTRAJECTORYTIMINGPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICONSTRAINTTRAJECTORYTIMINGPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkspeed(float *aMaxlinkspeed); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkspeed(float aMaxlinkspeed); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkaccel(float *aMaxlinkaccel); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkaccel(float aMaxlinkaccel); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipspeed(float *aMaxmanipspeed); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipspeed(float aMaxmanipspeed); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipaccel(float *aMaxmanipaccel); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipaccel(float aMaxmanipaccel); \
  NS_SCRIPTABLE NS_IMETHOD GetMingripperdistance(float *aMingripperdistance); \
  NS_SCRIPTABLE NS_IMETHOD SetMingripperdistance(float aMingripperdistance); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocitydistancethresh(float *aVelocitydistancethresh); \
  NS_SCRIPTABLE NS_IMETHOD SetVelocitydistancethresh(float aVelocitydistancethresh); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmergeiterations(PRInt32 *aMaxmergeiterations); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmergeiterations(PRInt32 aMaxmergeiterations); \
  NS_SCRIPTABLE NS_IMETHOD GetMinswitchtime(float *aMinswitchtime); \
  NS_SCRIPTABLE NS_IMETHOD SetMinswitchtime(float aMinswitchtime); \
  NS_SCRIPTABLE NS_IMETHOD GetNshortcutcycles(PRInt32 *aNshortcutcycles); \
  NS_SCRIPTABLE NS_IMETHOD SetNshortcutcycles(PRInt32 aNshortcutcycles); \
  NS_SCRIPTABLE NS_IMETHOD GetVerifyinitialpath(PRInt32 *aVerifyinitialpath); \
  NS_SCRIPTABLE NS_IMETHOD SetVerifyinitialpath(PRInt32 aVerifyinitialpath); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICONSTRAINTTRAJECTORYTIMINGPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkspeed(float *aMaxlinkspeed) { return _to GetMaxlinkspeed(aMaxlinkspeed); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkspeed(float aMaxlinkspeed) { return _to SetMaxlinkspeed(aMaxlinkspeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkaccel(float *aMaxlinkaccel) { return _to GetMaxlinkaccel(aMaxlinkaccel); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkaccel(float aMaxlinkaccel) { return _to SetMaxlinkaccel(aMaxlinkaccel); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipspeed(float *aMaxmanipspeed) { return _to GetMaxmanipspeed(aMaxmanipspeed); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipspeed(float aMaxmanipspeed) { return _to SetMaxmanipspeed(aMaxmanipspeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipaccel(float *aMaxmanipaccel) { return _to GetMaxmanipaccel(aMaxmanipaccel); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipaccel(float aMaxmanipaccel) { return _to SetMaxmanipaccel(aMaxmanipaccel); } \
  NS_SCRIPTABLE NS_IMETHOD GetMingripperdistance(float *aMingripperdistance) { return _to GetMingripperdistance(aMingripperdistance); } \
  NS_SCRIPTABLE NS_IMETHOD SetMingripperdistance(float aMingripperdistance) { return _to SetMingripperdistance(aMingripperdistance); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocitydistancethresh(float *aVelocitydistancethresh) { return _to GetVelocitydistancethresh(aVelocitydistancethresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocitydistancethresh(float aVelocitydistancethresh) { return _to SetVelocitydistancethresh(aVelocitydistancethresh); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmergeiterations(PRInt32 *aMaxmergeiterations) { return _to GetMaxmergeiterations(aMaxmergeiterations); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmergeiterations(PRInt32 aMaxmergeiterations) { return _to SetMaxmergeiterations(aMaxmergeiterations); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinswitchtime(float *aMinswitchtime) { return _to GetMinswitchtime(aMinswitchtime); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinswitchtime(float aMinswitchtime) { return _to SetMinswitchtime(aMinswitchtime); } \
  NS_SCRIPTABLE NS_IMETHOD GetNshortcutcycles(PRInt32 *aNshortcutcycles) { return _to GetNshortcutcycles(aNshortcutcycles); } \
  NS_SCRIPTABLE NS_IMETHOD SetNshortcutcycles(PRInt32 aNshortcutcycles) { return _to SetNshortcutcycles(aNshortcutcycles); } \
  NS_SCRIPTABLE NS_IMETHOD GetVerifyinitialpath(PRInt32 *aVerifyinitialpath) { return _to GetVerifyinitialpath(aVerifyinitialpath); } \
  NS_SCRIPTABLE NS_IMETHOD SetVerifyinitialpath(PRInt32 aVerifyinitialpath) { return _to SetVerifyinitialpath(aVerifyinitialpath); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICONSTRAINTTRAJECTORYTIMINGPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkspeed(float *aMaxlinkspeed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxlinkspeed(aMaxlinkspeed); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkspeed(float aMaxlinkspeed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxlinkspeed(aMaxlinkspeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxlinkaccel(float *aMaxlinkaccel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxlinkaccel(aMaxlinkaccel); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxlinkaccel(float aMaxlinkaccel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxlinkaccel(aMaxlinkaccel); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipspeed(float *aMaxmanipspeed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxmanipspeed(aMaxmanipspeed); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipspeed(float aMaxmanipspeed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxmanipspeed(aMaxmanipspeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmanipaccel(float *aMaxmanipaccel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxmanipaccel(aMaxmanipaccel); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmanipaccel(float aMaxmanipaccel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxmanipaccel(aMaxmanipaccel); } \
  NS_SCRIPTABLE NS_IMETHOD GetMingripperdistance(float *aMingripperdistance) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMingripperdistance(aMingripperdistance); } \
  NS_SCRIPTABLE NS_IMETHOD SetMingripperdistance(float aMingripperdistance) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMingripperdistance(aMingripperdistance); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocitydistancethresh(float *aVelocitydistancethresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocitydistancethresh(aVelocitydistancethresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocitydistancethresh(float aVelocitydistancethresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVelocitydistancethresh(aVelocitydistancethresh); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxmergeiterations(PRInt32 *aMaxmergeiterations) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxmergeiterations(aMaxmergeiterations); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxmergeiterations(PRInt32 aMaxmergeiterations) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxmergeiterations(aMaxmergeiterations); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinswitchtime(float *aMinswitchtime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinswitchtime(aMinswitchtime); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinswitchtime(float aMinswitchtime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinswitchtime(aMinswitchtime); } \
  NS_SCRIPTABLE NS_IMETHOD GetNshortcutcycles(PRInt32 *aNshortcutcycles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNshortcutcycles(aNshortcutcycles); } \
  NS_SCRIPTABLE NS_IMETHOD SetNshortcutcycles(PRInt32 aNshortcutcycles) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNshortcutcycles(aNshortcutcycles); } \
  NS_SCRIPTABLE NS_IMETHOD GetVerifyinitialpath(PRInt32 *aVerifyinitialpath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVerifyinitialpath(aVerifyinitialpath); } \
  NS_SCRIPTABLE NS_IMETHOD SetVerifyinitialpath(PRInt32 aVerifyinitialpath) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVerifyinitialpath(aVerifyinitialpath); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IConstraintTrajectoryTimingParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICONSTRAINTTRAJECTORYTIMINGPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IConstraintTrajectoryTimingParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float maxlinkspeed; */
NS_IMETHODIMP _MYCLASS_::GetMaxlinkspeed(float *aMaxlinkspeed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxlinkspeed(float aMaxlinkspeed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxlinkaccel; */
NS_IMETHODIMP _MYCLASS_::GetMaxlinkaccel(float *aMaxlinkaccel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxlinkaccel(float aMaxlinkaccel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxmanipspeed; */
NS_IMETHODIMP _MYCLASS_::GetMaxmanipspeed(float *aMaxmanipspeed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxmanipspeed(float aMaxmanipspeed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxmanipaccel; */
NS_IMETHODIMP _MYCLASS_::GetMaxmanipaccel(float *aMaxmanipaccel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxmanipaccel(float aMaxmanipaccel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float mingripperdistance; */
NS_IMETHODIMP _MYCLASS_::GetMingripperdistance(float *aMingripperdistance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMingripperdistance(float aMingripperdistance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float velocitydistancethresh; */
NS_IMETHODIMP _MYCLASS_::GetVelocitydistancethresh(float *aVelocitydistancethresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVelocitydistancethresh(float aVelocitydistancethresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long maxmergeiterations; */
NS_IMETHODIMP _MYCLASS_::GetMaxmergeiterations(PRInt32 *aMaxmergeiterations)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxmergeiterations(PRInt32 aMaxmergeiterations)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float minswitchtime; */
NS_IMETHODIMP _MYCLASS_::GetMinswitchtime(float *aMinswitchtime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMinswitchtime(float aMinswitchtime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long nshortcutcycles; */
NS_IMETHODIMP _MYCLASS_::GetNshortcutcycles(PRInt32 *aNshortcutcycles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNshortcutcycles(PRInt32 aNshortcutcycles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long verifyinitialpath; */
NS_IMETHODIMP _MYCLASS_::GetVerifyinitialpath(PRInt32 *aVerifyinitialpath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVerifyinitialpath(PRInt32 aVerifyinitialpath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IWorkspaceTrajectoryParameters */
#define IWORKSPACETRAJECTORYPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IWORKSPACETRAJECTORYPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IWorkspaceTrajectoryParameters : public IPlannerBaseParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IWORKSPACETRAJECTORYPARAMETERS_IID)

  /* IEnvironmentBase GetEnv (); */
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM) = 0;

  /* attribute float maxdeviationangle; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxdeviationangle(float *aMaxdeviationangle) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxdeviationangle(float aMaxdeviationangle) = 0;

  /* attribute boolean maintaintiming; */
  NS_SCRIPTABLE NS_IMETHOD GetMaintaintiming(PRBool *aMaintaintiming) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaintaintiming(PRBool aMaintaintiming) = 0;

  /* attribute boolean greedysearch; */
  NS_SCRIPTABLE NS_IMETHOD GetGreedysearch(PRBool *aGreedysearch) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetGreedysearch(PRBool aGreedysearch) = 0;

  /* attribute float ignorefirstcollision; */
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollision(float *aIgnorefirstcollision) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollision(float aIgnorefirstcollision) = 0;

  /* attribute float ignorefirstcollisionee; */
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollisionee(float *aIgnorefirstcollisionee) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollisionee(float aIgnorefirstcollisionee) = 0;

  /* attribute float ignorelastcollisionee; */
  NS_SCRIPTABLE NS_IMETHOD GetIgnorelastcollisionee(float *aIgnorelastcollisionee) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIgnorelastcollisionee(float aIgnorelastcollisionee) = 0;

  /* attribute float minimumcompletetime; */
  NS_SCRIPTABLE NS_IMETHOD GetMinimumcompletetime(float *aMinimumcompletetime) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMinimumcompletetime(float aMinimumcompletetime) = 0;

  /* attribute ITrajectoryBase workspacetraj; */
  NS_SCRIPTABLE NS_IMETHOD GetWorkspacetraj(ITrajectoryBase **aWorkspacetraj) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWorkspacetraj(ITrajectoryBase *aWorkspacetraj) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IWorkspaceTrajectoryParameters, IWORKSPACETRAJECTORYPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IWORKSPACETRAJECTORYPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxdeviationangle(float *aMaxdeviationangle); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxdeviationangle(float aMaxdeviationangle); \
  NS_SCRIPTABLE NS_IMETHOD GetMaintaintiming(PRBool *aMaintaintiming); \
  NS_SCRIPTABLE NS_IMETHOD SetMaintaintiming(PRBool aMaintaintiming); \
  NS_SCRIPTABLE NS_IMETHOD GetGreedysearch(PRBool *aGreedysearch); \
  NS_SCRIPTABLE NS_IMETHOD SetGreedysearch(PRBool aGreedysearch); \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollision(float *aIgnorefirstcollision); \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollision(float aIgnorefirstcollision); \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollisionee(float *aIgnorefirstcollisionee); \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollisionee(float aIgnorefirstcollisionee); \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorelastcollisionee(float *aIgnorelastcollisionee); \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorelastcollisionee(float aIgnorelastcollisionee); \
  NS_SCRIPTABLE NS_IMETHOD GetMinimumcompletetime(float *aMinimumcompletetime); \
  NS_SCRIPTABLE NS_IMETHOD SetMinimumcompletetime(float aMinimumcompletetime); \
  NS_SCRIPTABLE NS_IMETHOD GetWorkspacetraj(ITrajectoryBase **aWorkspacetraj); \
  NS_SCRIPTABLE NS_IMETHOD SetWorkspacetraj(ITrajectoryBase *aWorkspacetraj); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IWORKSPACETRAJECTORYPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM) { return _to GetEnv(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxdeviationangle(float *aMaxdeviationangle) { return _to GetMaxdeviationangle(aMaxdeviationangle); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxdeviationangle(float aMaxdeviationangle) { return _to SetMaxdeviationangle(aMaxdeviationangle); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaintaintiming(PRBool *aMaintaintiming) { return _to GetMaintaintiming(aMaintaintiming); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaintaintiming(PRBool aMaintaintiming) { return _to SetMaintaintiming(aMaintaintiming); } \
  NS_SCRIPTABLE NS_IMETHOD GetGreedysearch(PRBool *aGreedysearch) { return _to GetGreedysearch(aGreedysearch); } \
  NS_SCRIPTABLE NS_IMETHOD SetGreedysearch(PRBool aGreedysearch) { return _to SetGreedysearch(aGreedysearch); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollision(float *aIgnorefirstcollision) { return _to GetIgnorefirstcollision(aIgnorefirstcollision); } \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollision(float aIgnorefirstcollision) { return _to SetIgnorefirstcollision(aIgnorefirstcollision); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollisionee(float *aIgnorefirstcollisionee) { return _to GetIgnorefirstcollisionee(aIgnorefirstcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollisionee(float aIgnorefirstcollisionee) { return _to SetIgnorefirstcollisionee(aIgnorefirstcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorelastcollisionee(float *aIgnorelastcollisionee) { return _to GetIgnorelastcollisionee(aIgnorelastcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorelastcollisionee(float aIgnorelastcollisionee) { return _to SetIgnorelastcollisionee(aIgnorelastcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinimumcompletetime(float *aMinimumcompletetime) { return _to GetMinimumcompletetime(aMinimumcompletetime); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinimumcompletetime(float aMinimumcompletetime) { return _to SetMinimumcompletetime(aMinimumcompletetime); } \
  NS_SCRIPTABLE NS_IMETHOD GetWorkspacetraj(ITrajectoryBase **aWorkspacetraj) { return _to GetWorkspacetraj(aWorkspacetraj); } \
  NS_SCRIPTABLE NS_IMETHOD SetWorkspacetraj(ITrajectoryBase *aWorkspacetraj) { return _to SetWorkspacetraj(aWorkspacetraj); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IWORKSPACETRAJECTORYPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnv(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxdeviationangle(float *aMaxdeviationangle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxdeviationangle(aMaxdeviationangle); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxdeviationangle(float aMaxdeviationangle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxdeviationangle(aMaxdeviationangle); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaintaintiming(PRBool *aMaintaintiming) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaintaintiming(aMaintaintiming); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaintaintiming(PRBool aMaintaintiming) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaintaintiming(aMaintaintiming); } \
  NS_SCRIPTABLE NS_IMETHOD GetGreedysearch(PRBool *aGreedysearch) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGreedysearch(aGreedysearch); } \
  NS_SCRIPTABLE NS_IMETHOD SetGreedysearch(PRBool aGreedysearch) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGreedysearch(aGreedysearch); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollision(float *aIgnorefirstcollision) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIgnorefirstcollision(aIgnorefirstcollision); } \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollision(float aIgnorefirstcollision) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIgnorefirstcollision(aIgnorefirstcollision); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorefirstcollisionee(float *aIgnorefirstcollisionee) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIgnorefirstcollisionee(aIgnorefirstcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorefirstcollisionee(float aIgnorefirstcollisionee) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIgnorefirstcollisionee(aIgnorefirstcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnorelastcollisionee(float *aIgnorelastcollisionee) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIgnorelastcollisionee(aIgnorelastcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD SetIgnorelastcollisionee(float aIgnorelastcollisionee) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIgnorelastcollisionee(aIgnorelastcollisionee); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinimumcompletetime(float *aMinimumcompletetime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinimumcompletetime(aMinimumcompletetime); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinimumcompletetime(float aMinimumcompletetime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinimumcompletetime(aMinimumcompletetime); } \
  NS_SCRIPTABLE NS_IMETHOD GetWorkspacetraj(ITrajectoryBase **aWorkspacetraj) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWorkspacetraj(aWorkspacetraj); } \
  NS_SCRIPTABLE NS_IMETHOD SetWorkspacetraj(ITrajectoryBase *aWorkspacetraj) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWorkspacetraj(aWorkspacetraj); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IWorkspaceTrajectoryParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IWORKSPACETRAJECTORYPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IWorkspaceTrajectoryParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IEnvironmentBase GetEnv (); */
NS_IMETHODIMP _MYCLASS_::GetEnv(IEnvironmentBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float maxdeviationangle; */
NS_IMETHODIMP _MYCLASS_::GetMaxdeviationangle(float *aMaxdeviationangle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaxdeviationangle(float aMaxdeviationangle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean maintaintiming; */
NS_IMETHODIMP _MYCLASS_::GetMaintaintiming(PRBool *aMaintaintiming)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMaintaintiming(PRBool aMaintaintiming)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean greedysearch; */
NS_IMETHODIMP _MYCLASS_::GetGreedysearch(PRBool *aGreedysearch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetGreedysearch(PRBool aGreedysearch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ignorefirstcollision; */
NS_IMETHODIMP _MYCLASS_::GetIgnorefirstcollision(float *aIgnorefirstcollision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetIgnorefirstcollision(float aIgnorefirstcollision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ignorefirstcollisionee; */
NS_IMETHODIMP _MYCLASS_::GetIgnorefirstcollisionee(float *aIgnorefirstcollisionee)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetIgnorefirstcollisionee(float aIgnorefirstcollisionee)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ignorelastcollisionee; */
NS_IMETHODIMP _MYCLASS_::GetIgnorelastcollisionee(float *aIgnorelastcollisionee)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetIgnorelastcollisionee(float aIgnorelastcollisionee)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float minimumcompletetime; */
NS_IMETHODIMP _MYCLASS_::GetMinimumcompletetime(float *aMinimumcompletetime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMinimumcompletetime(float aMinimumcompletetime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITrajectoryBase workspacetraj; */
NS_IMETHODIMP _MYCLASS_::GetWorkspacetraj(ITrajectoryBase **aWorkspacetraj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetWorkspacetraj(ITrajectoryBase *aWorkspacetraj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRRTParameters */
#define IRRTPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IRRTPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRRTParameters : public IPlannerBaseParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IRRTPARAMETERS_IID)

  /* attribute long minimumgoalpaths; */
  NS_SCRIPTABLE NS_IMETHOD GetMinimumgoalpaths(PRInt32 *aMinimumgoalpaths) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMinimumgoalpaths(PRInt32 aMinimumgoalpaths) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRRTParameters, IRRTPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IRRTPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetMinimumgoalpaths(PRInt32 *aMinimumgoalpaths); \
  NS_SCRIPTABLE NS_IMETHOD SetMinimumgoalpaths(PRInt32 aMinimumgoalpaths); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IRRTPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMinimumgoalpaths(PRInt32 *aMinimumgoalpaths) { return _to GetMinimumgoalpaths(aMinimumgoalpaths); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinimumgoalpaths(PRInt32 aMinimumgoalpaths) { return _to SetMinimumgoalpaths(aMinimumgoalpaths); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IRRTPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMinimumgoalpaths(PRInt32 *aMinimumgoalpaths) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinimumgoalpaths(aMinimumgoalpaths); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinimumgoalpaths(PRInt32 aMinimumgoalpaths) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinimumgoalpaths(aMinimumgoalpaths); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRRTParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IRRTPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRRTParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute long minimumgoalpaths; */
NS_IMETHODIMP _MYCLASS_::GetMinimumgoalpaths(PRInt32 *aMinimumgoalpaths)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMinimumgoalpaths(PRInt32 aMinimumgoalpaths)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IBasicRRTParameters */
#define IBASICRRTPARAMETERS_IID_STR "00000000-0000-0000-0000-000000000000"

#define IBASICRRTPARAMETERS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IBasicRRTParameters : public IRRTParameters {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IBASICRRTPARAMETERS_IID)

  /* attribute float fGoalBiasProb; */
  NS_SCRIPTABLE NS_IMETHOD GetFGoalBiasProb(float *aFGoalBiasProb) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFGoalBiasProb(float aFGoalBiasProb) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IBasicRRTParameters, IBASICRRTPARAMETERS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IBASICRRTPARAMETERS \
  NS_SCRIPTABLE NS_IMETHOD GetFGoalBiasProb(float *aFGoalBiasProb); \
  NS_SCRIPTABLE NS_IMETHOD SetFGoalBiasProb(float aFGoalBiasProb); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IBASICRRTPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFGoalBiasProb(float *aFGoalBiasProb) { return _to GetFGoalBiasProb(aFGoalBiasProb); } \
  NS_SCRIPTABLE NS_IMETHOD SetFGoalBiasProb(float aFGoalBiasProb) { return _to SetFGoalBiasProb(aFGoalBiasProb); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IBASICRRTPARAMETERS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFGoalBiasProb(float *aFGoalBiasProb) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFGoalBiasProb(aFGoalBiasProb); } \
  NS_SCRIPTABLE NS_IMETHOD SetFGoalBiasProb(float aFGoalBiasProb) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFGoalBiasProb(aFGoalBiasProb); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IBasicRRTParameters
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IBASICRRTPARAMETERS

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IBasicRRTParameters)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float fGoalBiasProb; */
NS_IMETHODIMP _MYCLASS_::GetFGoalBiasProb(float *aFGoalBiasProb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFGoalBiasProb(float aFGoalBiasProb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_plannerparameters_h__ */
