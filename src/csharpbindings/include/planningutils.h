/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/planningutils.idl
 */

#ifndef __gen_planningutils_h__
#define __gen_planningutils_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IActiveDOFTrajectorySmoother */
#define IACTIVEDOFTRAJECTORYSMOOTHER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IACTIVEDOFTRAJECTORYSMOOTHER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IActiveDOFTrajectorySmoother : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IACTIVEDOFTRAJECTORYSMOOTHER_IID)

  /* long PlanPath (in ITrajectoryBase traj); */
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IActiveDOFTrajectorySmoother, IACTIVEDOFTRAJECTORYSMOOTHER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IACTIVEDOFTRAJECTORYSMOOTHER \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IACTIVEDOFTRAJECTORYSMOOTHER(_to) \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM) { return _to PlanPath(traj, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IACTIVEDOFTRAJECTORYSMOOTHER(_to) \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlanPath(traj, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IActiveDOFTrajectorySmoother
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IACTIVEDOFTRAJECTORYSMOOTHER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IActiveDOFTrajectorySmoother)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long PlanPath (in ITrajectoryBase traj); */
NS_IMETHODIMP _MYCLASS_::PlanPath(ITrajectoryBase *traj, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IActiveDOFTrajectoryRetimer */
#define IACTIVEDOFTRAJECTORYRETIMER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IACTIVEDOFTRAJECTORYRETIMER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IActiveDOFTrajectoryRetimer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IACTIVEDOFTRAJECTORYRETIMER_IID)

  /* long PlanPath (in ITrajectoryBase traj, in boolean hastimestamps); */
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IActiveDOFTrajectoryRetimer, IACTIVEDOFTRAJECTORYRETIMER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IACTIVEDOFTRAJECTORYRETIMER \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IACTIVEDOFTRAJECTORYRETIMER(_to) \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM) { return _to PlanPath(traj, hastimestamps, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IACTIVEDOFTRAJECTORYRETIMER(_to) \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlanPath(traj, hastimestamps, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IActiveDOFTrajectoryRetimer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IACTIVEDOFTRAJECTORYRETIMER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IActiveDOFTrajectoryRetimer)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long PlanPath (in ITrajectoryBase traj, in boolean hastimestamps); */
NS_IMETHODIMP _MYCLASS_::PlanPath(ITrajectoryBase *traj, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IAffineTrajectoryRetimer */
#define IAFFINETRAJECTORYRETIMER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IAFFINETRAJECTORYRETIMER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IAffineTrajectoryRetimer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IAFFINETRAJECTORYRETIMER_IID)

  /* void SetPlanner (in string plannername, in string plannerparameters); */
  NS_SCRIPTABLE NS_IMETHOD SetPlanner(const char *plannername, const char *plannerparameters) = 0;

  /* long PlanPath (in ITrajectoryBase traj, inout unsigned long maxvelocitiesCount, [array, size_is (maxvelocitiesCount)] inout float maxvelocities, inout unsigned long maxaccelerationsCount, [array, size_is (maxaccelerationsCount)] inout float maxaccelerations, in boolean hastimestamps); */
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRUint32 *maxvelocitiesCount NS_INOUTPARAM, float **maxvelocities NS_INOUTPARAM, PRUint32 *maxaccelerationsCount NS_INOUTPARAM, float **maxaccelerations NS_INOUTPARAM, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IAffineTrajectoryRetimer, IAFFINETRAJECTORYRETIMER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IAFFINETRAJECTORYRETIMER \
  NS_SCRIPTABLE NS_IMETHOD SetPlanner(const char *plannername, const char *plannerparameters); \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRUint32 *maxvelocitiesCount NS_INOUTPARAM, float **maxvelocities NS_INOUTPARAM, PRUint32 *maxaccelerationsCount NS_INOUTPARAM, float **maxaccelerations NS_INOUTPARAM, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IAFFINETRAJECTORYRETIMER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPlanner(const char *plannername, const char *plannerparameters) { return _to SetPlanner(plannername, plannerparameters); } \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRUint32 *maxvelocitiesCount NS_INOUTPARAM, float **maxvelocities NS_INOUTPARAM, PRUint32 *maxaccelerationsCount NS_INOUTPARAM, float **maxaccelerations NS_INOUTPARAM, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM) { return _to PlanPath(traj, maxvelocitiesCount, maxvelocities, maxaccelerationsCount, maxaccelerations, hastimestamps, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IAFFINETRAJECTORYRETIMER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPlanner(const char *plannername, const char *plannerparameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPlanner(plannername, plannerparameters); } \
  NS_SCRIPTABLE NS_IMETHOD PlanPath(ITrajectoryBase *traj, PRUint32 *maxvelocitiesCount NS_INOUTPARAM, float **maxvelocities NS_INOUTPARAM, PRUint32 *maxaccelerationsCount NS_INOUTPARAM, float **maxaccelerations NS_INOUTPARAM, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlanPath(traj, maxvelocitiesCount, maxvelocities, maxaccelerationsCount, maxaccelerations, hastimestamps, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IAffineTrajectoryRetimer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IAFFINETRAJECTORYRETIMER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IAffineTrajectoryRetimer)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void SetPlanner (in string plannername, in string plannerparameters); */
NS_IMETHODIMP _MYCLASS_::SetPlanner(const char *plannername, const char *plannerparameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long PlanPath (in ITrajectoryBase traj, inout unsigned long maxvelocitiesCount, [array, size_is (maxvelocitiesCount)] inout float maxvelocities, inout unsigned long maxaccelerationsCount, [array, size_is (maxaccelerationsCount)] inout float maxaccelerations, in boolean hastimestamps); */
NS_IMETHODIMP _MYCLASS_::PlanPath(ITrajectoryBase *traj, PRUint32 *maxvelocitiesCount NS_INOUTPARAM, float **maxvelocities NS_INOUTPARAM, PRUint32 *maxaccelerationsCount NS_INOUTPARAM, float **maxaccelerations NS_INOUTPARAM, PRBool hastimestamps, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IDHParameter */
#define IDHPARAMETER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IDHPARAMETER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IDHParameter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IDHPARAMETER_IID)

  /* attribute IKinBodyJoint joint; */
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBodyJoint **aJoint) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetJoint(IKinBodyJoint *aJoint) = 0;

  /* attribute long parentindex; */
  NS_SCRIPTABLE NS_IMETHOD GetParentindex(PRInt32 *aParentindex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetParentindex(PRInt32 aParentindex) = 0;

  /* attribute ITransformF transform; */
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **aTransform) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *aTransform) = 0;

  /* attribute float d; */
  NS_SCRIPTABLE NS_IMETHOD GetD(float *aD) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetD(float aD) = 0;

  /* attribute float a; */
  NS_SCRIPTABLE NS_IMETHOD GetA(float *aA) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetA(float aA) = 0;

  /* attribute float theta; */
  NS_SCRIPTABLE NS_IMETHOD GetTheta(float *aTheta) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTheta(float aTheta) = 0;

  /* attribute float alpha; */
  NS_SCRIPTABLE NS_IMETHOD GetAlpha(float *aAlpha) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAlpha(float aAlpha) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IDHParameter, IDHPARAMETER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IDHPARAMETER \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBodyJoint **aJoint); \
  NS_SCRIPTABLE NS_IMETHOD SetJoint(IKinBodyJoint *aJoint); \
  NS_SCRIPTABLE NS_IMETHOD GetParentindex(PRInt32 *aParentindex); \
  NS_SCRIPTABLE NS_IMETHOD SetParentindex(PRInt32 aParentindex); \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **aTransform); \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *aTransform); \
  NS_SCRIPTABLE NS_IMETHOD GetD(float *aD); \
  NS_SCRIPTABLE NS_IMETHOD SetD(float aD); \
  NS_SCRIPTABLE NS_IMETHOD GetA(float *aA); \
  NS_SCRIPTABLE NS_IMETHOD SetA(float aA); \
  NS_SCRIPTABLE NS_IMETHOD GetTheta(float *aTheta); \
  NS_SCRIPTABLE NS_IMETHOD SetTheta(float aTheta); \
  NS_SCRIPTABLE NS_IMETHOD GetAlpha(float *aAlpha); \
  NS_SCRIPTABLE NS_IMETHOD SetAlpha(float aAlpha); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IDHPARAMETER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBodyJoint **aJoint) { return _to GetJoint(aJoint); } \
  NS_SCRIPTABLE NS_IMETHOD SetJoint(IKinBodyJoint *aJoint) { return _to SetJoint(aJoint); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentindex(PRInt32 *aParentindex) { return _to GetParentindex(aParentindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetParentindex(PRInt32 aParentindex) { return _to SetParentindex(aParentindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **aTransform) { return _to GetTransform(aTransform); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *aTransform) { return _to SetTransform(aTransform); } \
  NS_SCRIPTABLE NS_IMETHOD GetD(float *aD) { return _to GetD(aD); } \
  NS_SCRIPTABLE NS_IMETHOD SetD(float aD) { return _to SetD(aD); } \
  NS_SCRIPTABLE NS_IMETHOD GetA(float *aA) { return _to GetA(aA); } \
  NS_SCRIPTABLE NS_IMETHOD SetA(float aA) { return _to SetA(aA); } \
  NS_SCRIPTABLE NS_IMETHOD GetTheta(float *aTheta) { return _to GetTheta(aTheta); } \
  NS_SCRIPTABLE NS_IMETHOD SetTheta(float aTheta) { return _to SetTheta(aTheta); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlpha(float *aAlpha) { return _to GetAlpha(aAlpha); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlpha(float aAlpha) { return _to SetAlpha(aAlpha); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IDHPARAMETER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBodyJoint **aJoint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJoint(aJoint); } \
  NS_SCRIPTABLE NS_IMETHOD SetJoint(IKinBodyJoint *aJoint) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJoint(aJoint); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentindex(PRInt32 *aParentindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentindex(aParentindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetParentindex(PRInt32 aParentindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParentindex(aParentindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **aTransform) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform(aTransform); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *aTransform) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransform(aTransform); } \
  NS_SCRIPTABLE NS_IMETHOD GetD(float *aD) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetD(aD); } \
  NS_SCRIPTABLE NS_IMETHOD SetD(float aD) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetD(aD); } \
  NS_SCRIPTABLE NS_IMETHOD GetA(float *aA) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetA(aA); } \
  NS_SCRIPTABLE NS_IMETHOD SetA(float aA) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetA(aA); } \
  NS_SCRIPTABLE NS_IMETHOD GetTheta(float *aTheta) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTheta(aTheta); } \
  NS_SCRIPTABLE NS_IMETHOD SetTheta(float aTheta) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTheta(aTheta); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlpha(float *aAlpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlpha(aAlpha); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlpha(float aAlpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlpha(aAlpha); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IDHParameter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IDHPARAMETER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IDHParameter)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IKinBodyJoint joint; */
NS_IMETHODIMP _MYCLASS_::GetJoint(IKinBodyJoint **aJoint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetJoint(IKinBodyJoint *aJoint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long parentindex; */
NS_IMETHODIMP _MYCLASS_::GetParentindex(PRInt32 *aParentindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetParentindex(PRInt32 aParentindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF transform; */
NS_IMETHODIMP _MYCLASS_::GetTransform(ITransformF **aTransform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTransform(ITransformF *aTransform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float d; */
NS_IMETHODIMP _MYCLASS_::GetD(float *aD)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetD(float aD)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float a; */
NS_IMETHODIMP _MYCLASS_::GetA(float *aA)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetA(float aA)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float theta; */
NS_IMETHODIMP _MYCLASS_::GetTheta(float *aTheta)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTheta(float aTheta)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float alpha; */
NS_IMETHODIMP _MYCLASS_::GetAlpha(float *aAlpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAlpha(float aAlpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IDynamicsCollisionConstraint */
#define IDYNAMICSCOLLISIONCONSTRAINT_IID_STR "00000000-0000-0000-0000-000000000000"

#define IDYNAMICSCOLLISIONCONSTRAINT_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IDynamicsCollisionConstraint : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IDYNAMICSCOLLISIONCONSTRAINT_IID)

  /* void SetPlannerParameters (in IPlannerBaseParameters parameters); */
  NS_SCRIPTABLE NS_IMETHOD SetPlannerParameters(IPlannerBaseParameters *parameters) = 0;

  /* void SetFilterMask (in long filtermask); */
  NS_SCRIPTABLE NS_IMETHOD SetFilterMask(PRInt32 filtermask) = 0;

  /* void SetPerturbation (in float perturbation); */
  NS_SCRIPTABLE NS_IMETHOD SetPerturbation(float perturbation) = 0;

  /* void SetUserCheckFunction (in ICallbackUserCheck usercheckfn, in boolean bCallAfterCheckCollision); */
  NS_SCRIPTABLE NS_IMETHOD SetUserCheckFunction(ICallbackUserCheck *usercheckfn, PRBool bCallAfterCheckCollision) = 0;

  /* long Check (in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long q1count, [array, size_is (q1count)] in float q1, in unsigned long dq0count, [array, size_is (dq0count)] in float dq0, in unsigned long dq1count, [array, size_is (dq1count)] in float dq1, in float timeelapsed, in long interval, in long options, out IConstraintFilterReturn filterreturn); */
  NS_SCRIPTABLE NS_IMETHOD Check(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float timeelapsed, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* ICollisionReport GetReport (); */
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IDynamicsCollisionConstraint, IDYNAMICSCOLLISIONCONSTRAINT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IDYNAMICSCOLLISIONCONSTRAINT \
  NS_SCRIPTABLE NS_IMETHOD SetPlannerParameters(IPlannerBaseParameters *parameters); \
  NS_SCRIPTABLE NS_IMETHOD SetFilterMask(PRInt32 filtermask); \
  NS_SCRIPTABLE NS_IMETHOD SetPerturbation(float perturbation); \
  NS_SCRIPTABLE NS_IMETHOD SetUserCheckFunction(ICallbackUserCheck *usercheckfn, PRBool bCallAfterCheckCollision); \
  NS_SCRIPTABLE NS_IMETHOD Check(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float timeelapsed, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IDYNAMICSCOLLISIONCONSTRAINT(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPlannerParameters(IPlannerBaseParameters *parameters) { return _to SetPlannerParameters(parameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterMask(PRInt32 filtermask) { return _to SetFilterMask(filtermask); } \
  NS_SCRIPTABLE NS_IMETHOD SetPerturbation(float perturbation) { return _to SetPerturbation(perturbation); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserCheckFunction(ICallbackUserCheck *usercheckfn, PRBool bCallAfterCheckCollision) { return _to SetUserCheckFunction(usercheckfn, bCallAfterCheckCollision); } \
  NS_SCRIPTABLE NS_IMETHOD Check(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float timeelapsed, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return _to Check(q0count, q0, q1count, q1, dq0count, dq0, dq1count, dq1, timeelapsed, interval, options, filterreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM) { return _to GetReport(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IDYNAMICSCOLLISIONCONSTRAINT(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPlannerParameters(IPlannerBaseParameters *parameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPlannerParameters(parameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterMask(PRInt32 filtermask) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilterMask(filtermask); } \
  NS_SCRIPTABLE NS_IMETHOD SetPerturbation(float perturbation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPerturbation(perturbation); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserCheckFunction(ICallbackUserCheck *usercheckfn, PRBool bCallAfterCheckCollision) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserCheckFunction(usercheckfn, bCallAfterCheckCollision); } \
  NS_SCRIPTABLE NS_IMETHOD Check(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float timeelapsed, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Check(q0count, q0, q1count, q1, dq0count, dq0, dq1count, dq1, timeelapsed, interval, options, filterreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReport(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IDynamicsCollisionConstraint
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IDYNAMICSCOLLISIONCONSTRAINT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IDynamicsCollisionConstraint)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void SetPlannerParameters (in IPlannerBaseParameters parameters); */
NS_IMETHODIMP _MYCLASS_::SetPlannerParameters(IPlannerBaseParameters *parameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetFilterMask (in long filtermask); */
NS_IMETHODIMP _MYCLASS_::SetFilterMask(PRInt32 filtermask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetPerturbation (in float perturbation); */
NS_IMETHODIMP _MYCLASS_::SetPerturbation(float perturbation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetUserCheckFunction (in ICallbackUserCheck usercheckfn, in boolean bCallAfterCheckCollision); */
NS_IMETHODIMP _MYCLASS_::SetUserCheckFunction(ICallbackUserCheck *usercheckfn, PRBool bCallAfterCheckCollision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long Check (in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long q1count, [array, size_is (q1count)] in float q1, in unsigned long dq0count, [array, size_is (dq0count)] in float dq0, in unsigned long dq1count, [array, size_is (dq1count)] in float dq1, in float timeelapsed, in long interval, in long options, out IConstraintFilterReturn filterreturn); */
NS_IMETHODIMP _MYCLASS_::Check(PRUint32 q0count, float *q0, PRUint32 q1count, float *q1, PRUint32 dq0count, float *dq0, PRUint32 dq1count, float *dq1, float timeelapsed, PRInt32 interval, PRInt32 options, IConstraintFilterReturn **filterreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ICollisionReport GetReport (); */
NS_IMETHODIMP _MYCLASS_::GetReport(ICollisionReport **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ILineCollisionConstraint */
#define ILINECOLLISIONCONSTRAINT_IID_STR "00000000-0000-0000-0000-000000000000"

#define ILINECOLLISIONCONSTRAINT_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ILineCollisionConstraint : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ILINECOLLISIONCONSTRAINT_IID)

  /* ICollisionReport GetReport (); */
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ILineCollisionConstraint, ILINECOLLISIONCONSTRAINT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ILINECOLLISIONCONSTRAINT \
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ILINECOLLISIONCONSTRAINT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM) { return _to GetReport(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ILINECOLLISIONCONSTRAINT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReport(ICollisionReport **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReport(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ILineCollisionConstraint
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ILINECOLLISIONCONSTRAINT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ILineCollisionConstraint)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* ICollisionReport GetReport (); */
NS_IMETHODIMP _MYCLASS_::GetReport(ICollisionReport **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISimpleDistanceMetric */
#define ISIMPLEDISTANCEMETRIC_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISIMPLEDISTANCEMETRIC_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISimpleDistanceMetric : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISIMPLEDISTANCEMETRIC_IID)

  /* float Eval (in unsigned long c0count, [array, size_is (c0count)] in float c0, in unsigned long c1count, [array, size_is (c1count)] in float c1); */
  NS_SCRIPTABLE NS_IMETHOD Eval(PRUint32 c0count, float *c0, PRUint32 c1count, float *c1, float *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISimpleDistanceMetric, ISIMPLEDISTANCEMETRIC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISIMPLEDISTANCEMETRIC \
  NS_SCRIPTABLE NS_IMETHOD Eval(PRUint32 c0count, float *c0, PRUint32 c1count, float *c1, float *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISIMPLEDISTANCEMETRIC(_to) \
  NS_SCRIPTABLE NS_IMETHOD Eval(PRUint32 c0count, float *c0, PRUint32 c1count, float *c1, float *_retval NS_OUTPARAM) { return _to Eval(c0count, c0, c1count, c1, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISIMPLEDISTANCEMETRIC(_to) \
  NS_SCRIPTABLE NS_IMETHOD Eval(PRUint32 c0count, float *c0, PRUint32 c1count, float *c1, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Eval(c0count, c0, c1count, c1, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISimpleDistanceMetric
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISIMPLEDISTANCEMETRIC

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISimpleDistanceMetric)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* float Eval (in unsigned long c0count, [array, size_is (c0count)] in float c0, in unsigned long c1count, [array, size_is (c1count)] in float c1); */
NS_IMETHODIMP _MYCLASS_::Eval(PRUint32 c0count, float *c0, PRUint32 c1count, float *c1, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ISimpleNeighborhoodSampler */
#define ISIMPLENEIGHBORHOODSAMPLER_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISIMPLENEIGHBORHOODSAMPLER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISimpleNeighborhoodSampler : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISIMPLENEIGHBORHOODSAMPLER_IID)

  /* boolean Sample1 (in unsigned long newSampleCount, [array, size_is (newSampleCount)] in float newSample, in unsigned long curSampleCount, [array, size_is (curSampleCount)] in float curSample, in float fRadius); */
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 newSampleCount, float *newSample, PRUint32 curSampleCount, float *curSample, float fRadius, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Sample2 (in unsigned long samplesCount, [array, size_is (samplesCount)] in float samples); */
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 samplesCount, float *samples, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISimpleNeighborhoodSampler, ISIMPLENEIGHBORHOODSAMPLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISIMPLENEIGHBORHOODSAMPLER \
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 newSampleCount, float *newSample, PRUint32 curSampleCount, float *curSample, float fRadius, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 samplesCount, float *samples, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISIMPLENEIGHBORHOODSAMPLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 newSampleCount, float *newSample, PRUint32 curSampleCount, float *curSample, float fRadius, PRBool *_retval NS_OUTPARAM) { return _to Sample1(newSampleCount, newSample, curSampleCount, curSample, fRadius, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 samplesCount, float *samples, PRBool *_retval NS_OUTPARAM) { return _to Sample2(samplesCount, samples, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISIMPLENEIGHBORHOODSAMPLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Sample1(PRUint32 newSampleCount, float *newSample, PRUint32 curSampleCount, float *curSample, float fRadius, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sample1(newSampleCount, newSample, curSampleCount, curSample, fRadius, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 samplesCount, float *samples, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sample2(samplesCount, samples, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISimpleNeighborhoodSampler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISIMPLENEIGHBORHOODSAMPLER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISimpleNeighborhoodSampler)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean Sample1 (in unsigned long newSampleCount, [array, size_is (newSampleCount)] in float newSample, in unsigned long curSampleCount, [array, size_is (curSampleCount)] in float curSample, in float fRadius); */
NS_IMETHODIMP _MYCLASS_::Sample1(PRUint32 newSampleCount, float *newSample, PRUint32 curSampleCount, float *curSample, float fRadius, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Sample2 (in unsigned long samplesCount, [array, size_is (samplesCount)] in float samples); */
NS_IMETHODIMP _MYCLASS_::Sample2(PRUint32 samplesCount, float *samples, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IManipulatorIKGoalSampler */
#define IMANIPULATORIKGOALSAMPLER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IMANIPULATORIKGOALSAMPLER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IManipulatorIKGoalSampler : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMANIPULATORIKGOALSAMPLER_IID)

  /* IIkReturn Sample1 (); */
  NS_SCRIPTABLE NS_IMETHOD Sample1(IIkReturn **_retval NS_OUTPARAM) = 0;

  /* boolean Sample2 (in unsigned long vgoalCount, [array, size_is (vgoalCount)] in float vgoal); */
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 vgoalCount, float *vgoal, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SampleAll (in unsigned long samplesCount, [array, size_is (samplesCount)] in IIkReturn samples, in long maxsamples, in long maxchecksamples); */
  NS_SCRIPTABLE NS_IMETHOD SampleAll(PRUint32 samplesCount, IIkReturn **samples, PRInt32 maxsamples, PRInt32 maxchecksamples, PRBool *_retval NS_OUTPARAM) = 0;

  /* long GetIkParameterizationIndex (in long index); */
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterizationIndex(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void SetSamplingProb (in float fsampleprob); */
  NS_SCRIPTABLE NS_IMETHOD SetSamplingProb(float fsampleprob) = 0;

  /* void SetJitter (in float maxdist); */
  NS_SCRIPTABLE NS_IMETHOD SetJitter(float maxdist) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IManipulatorIKGoalSampler, IMANIPULATORIKGOALSAMPLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMANIPULATORIKGOALSAMPLER \
  NS_SCRIPTABLE NS_IMETHOD Sample1(IIkReturn **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 vgoalCount, float *vgoal, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SampleAll(PRUint32 samplesCount, IIkReturn **samples, PRInt32 maxsamples, PRInt32 maxchecksamples, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterizationIndex(PRInt32 index, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetSamplingProb(float fsampleprob); \
  NS_SCRIPTABLE NS_IMETHOD SetJitter(float maxdist); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMANIPULATORIKGOALSAMPLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Sample1(IIkReturn **_retval NS_OUTPARAM) { return _to Sample1(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 vgoalCount, float *vgoal, PRBool *_retval NS_OUTPARAM) { return _to Sample2(vgoalCount, vgoal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleAll(PRUint32 samplesCount, IIkReturn **samples, PRInt32 maxsamples, PRInt32 maxchecksamples, PRBool *_retval NS_OUTPARAM) { return _to SampleAll(samplesCount, samples, maxsamples, maxchecksamples, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterizationIndex(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) { return _to GetIkParameterizationIndex(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetSamplingProb(float fsampleprob) { return _to SetSamplingProb(fsampleprob); } \
  NS_SCRIPTABLE NS_IMETHOD SetJitter(float maxdist) { return _to SetJitter(maxdist); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMANIPULATORIKGOALSAMPLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Sample1(IIkReturn **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sample1(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Sample2(PRUint32 vgoalCount, float *vgoal, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sample2(vgoalCount, vgoal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleAll(PRUint32 samplesCount, IIkReturn **samples, PRInt32 maxsamples, PRInt32 maxchecksamples, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SampleAll(samplesCount, samples, maxsamples, maxchecksamples, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterizationIndex(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIkParameterizationIndex(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetSamplingProb(float fsampleprob) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSamplingProb(fsampleprob); } \
  NS_SCRIPTABLE NS_IMETHOD SetJitter(float maxdist) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJitter(maxdist); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IManipulatorIKGoalSampler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMANIPULATORIKGOALSAMPLER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IManipulatorIKGoalSampler)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IIkReturn Sample1 (); */
NS_IMETHODIMP _MYCLASS_::Sample1(IIkReturn **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Sample2 (in unsigned long vgoalCount, [array, size_is (vgoalCount)] in float vgoal); */
NS_IMETHODIMP _MYCLASS_::Sample2(PRUint32 vgoalCount, float *vgoal, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SampleAll (in unsigned long samplesCount, [array, size_is (samplesCount)] in IIkReturn samples, in long maxsamples, in long maxchecksamples); */
NS_IMETHODIMP _MYCLASS_::SampleAll(PRUint32 samplesCount, IIkReturn **samples, PRInt32 maxsamples, PRInt32 maxchecksamples, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetIkParameterizationIndex (in long index); */
NS_IMETHODIMP _MYCLASS_::GetIkParameterizationIndex(PRInt32 index, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetSamplingProb (in float fsampleprob); */
NS_IMETHODIMP _MYCLASS_::SetSamplingProb(float fsampleprob)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetJitter (in float maxdist); */
NS_IMETHODIMP _MYCLASS_::SetJitter(float maxdist)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_planningutils_h__ */
