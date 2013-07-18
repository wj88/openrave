/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/controller.idl
 */

#ifndef __gen_controller_h__
#define __gen_controller_h__


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

/* starting interface:    IControllerBase */
#define ICONTROLLERBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICONTROLLERBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IControllerBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICONTROLLERBASE_IID)

  /* boolean Init (in IRobotBase robot, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long nControlTransformation); */
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotBase *robot, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetControlDOFIndices (out unsigned long dofindicesCount, [array, size_is (dofindicesCount)] out long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetControlDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM) = 0;

  /* long IsControlTransformation (); */
  NS_SCRIPTABLE NS_IMETHOD IsControlTransformation(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IRobotBase GetRobot (); */
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) = 0;

  /* void Reset (in long options); */
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 options) = 0;

  /* boolean SetDesired (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in ITransformF trans); */
  NS_SCRIPTABLE NS_IMETHOD SetDesired(PRUint32 valuesCount, float *values, ITransformF *trans, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SetPath (in ITrajectoryBase ptraj); */
  NS_SCRIPTABLE NS_IMETHOD SetPath(ITrajectoryBase *ptraj, PRBool *_retval NS_OUTPARAM) = 0;

  /* void SimulationStep (in float fTimeElapsed); */
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed) = 0;

  /* boolean IsDone (); */
  NS_SCRIPTABLE NS_IMETHOD IsDone(PRBool *_retval NS_OUTPARAM) = 0;

  /* float GetTime (); */
  NS_SCRIPTABLE NS_IMETHOD GetTime(float *_retval NS_OUTPARAM) = 0;

  /* void GetVelocity (out unsigned long velCount, [array, size_is (velCount)] out float vel); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRUint32 *velCount NS_OUTPARAM, float **vel NS_OUTPARAM) = 0;

  /* void GetTorque (out unsigned long torqueCount, [array, size_is (torqueCount)] out float torque); */
  NS_SCRIPTABLE NS_IMETHOD GetTorque(PRUint32 *torqueCount NS_OUTPARAM, float **torque NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IControllerBase, ICONTROLLERBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICONTROLLERBASE \
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotBase *robot, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetControlDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsControlTransformation(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD SetDesired(PRUint32 valuesCount, float *values, ITransformF *trans, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetPath(ITrajectoryBase *ptraj, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed); \
  NS_SCRIPTABLE NS_IMETHOD IsDone(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTime(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRUint32 *velCount NS_OUTPARAM, float **vel NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTorque(PRUint32 *torqueCount NS_OUTPARAM, float **torque NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICONTROLLERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotBase *robot, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) { return _to Init(robot, dofindicesCount, dofindices, nControlTransformation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetControlDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM) { return _to GetControlDOFIndices(dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD IsControlTransformation(PRInt32 *_retval NS_OUTPARAM) { return _to IsControlTransformation(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) { return _to GetRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 options) { return _to Reset(options); } \
  NS_SCRIPTABLE NS_IMETHOD SetDesired(PRUint32 valuesCount, float *values, ITransformF *trans, PRBool *_retval NS_OUTPARAM) { return _to SetDesired(valuesCount, values, trans, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetPath(ITrajectoryBase *ptraj, PRBool *_retval NS_OUTPARAM) { return _to SetPath(ptraj, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed) { return _to SimulationStep(fTimeElapsed); } \
  NS_SCRIPTABLE NS_IMETHOD IsDone(PRBool *_retval NS_OUTPARAM) { return _to IsDone(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime(float *_retval NS_OUTPARAM) { return _to GetTime(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRUint32 *velCount NS_OUTPARAM, float **vel NS_OUTPARAM) { return _to GetVelocity(velCount, vel); } \
  NS_SCRIPTABLE NS_IMETHOD GetTorque(PRUint32 *torqueCount NS_OUTPARAM, float **torque NS_OUTPARAM) { return _to GetTorque(torqueCount, torque); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICONTROLLERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotBase *robot, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(robot, dofindicesCount, dofindices, nControlTransformation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetControlDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControlDOFIndices(dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD IsControlTransformation(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsControlTransformation(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(options); } \
  NS_SCRIPTABLE NS_IMETHOD SetDesired(PRUint32 valuesCount, float *values, ITransformF *trans, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDesired(valuesCount, values, trans, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetPath(ITrajectoryBase *ptraj, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPath(ptraj, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fTimeElapsed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SimulationStep(fTimeElapsed); } \
  NS_SCRIPTABLE NS_IMETHOD IsDone(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDone(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTime(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTime(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRUint32 *velCount NS_OUTPARAM, float **vel NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocity(velCount, vel); } \
  NS_SCRIPTABLE NS_IMETHOD GetTorque(PRUint32 *torqueCount NS_OUTPARAM, float **torque NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTorque(torqueCount, torque); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IControllerBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICONTROLLERBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IControllerBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean Init (in IRobotBase robot, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long nControlTransformation); */
NS_IMETHODIMP _MYCLASS_::Init(IRobotBase *robot, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetControlDOFIndices (out unsigned long dofindicesCount, [array, size_is (dofindicesCount)] out long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetControlDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long IsControlTransformation (); */
NS_IMETHODIMP _MYCLASS_::IsControlTransformation(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase GetRobot (); */
NS_IMETHODIMP _MYCLASS_::GetRobot(IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Reset (in long options); */
NS_IMETHODIMP _MYCLASS_::Reset(PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetDesired (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in ITransformF trans); */
NS_IMETHODIMP _MYCLASS_::SetDesired(PRUint32 valuesCount, float *values, ITransformF *trans, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetPath (in ITrajectoryBase ptraj); */
NS_IMETHODIMP _MYCLASS_::SetPath(ITrajectoryBase *ptraj, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SimulationStep (in float fTimeElapsed); */
NS_IMETHODIMP _MYCLASS_::SimulationStep(float fTimeElapsed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsDone (); */
NS_IMETHODIMP _MYCLASS_::IsDone(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetTime (); */
NS_IMETHODIMP _MYCLASS_::GetTime(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocity (out unsigned long velCount, [array, size_is (velCount)] out float vel); */
NS_IMETHODIMP _MYCLASS_::GetVelocity(PRUint32 *velCount NS_OUTPARAM, float **vel NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTorque (out unsigned long torqueCount, [array, size_is (torqueCount)] out float torque); */
NS_IMETHODIMP _MYCLASS_::GetTorque(PRUint32 *torqueCount NS_OUTPARAM, float **torque NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IMultiController */
#define IMULTICONTROLLER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IMULTICONTROLLER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IMultiController : public IControllerBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMULTICONTROLLER_IID)

  /* boolean AttachController (in IControllerBase controller, in unsigned long dofindicescount, [array, size_is (dofindicescount)] in long dofindices, in long nControlTransformation); */
  NS_SCRIPTABLE NS_IMETHOD AttachController(IControllerBase *controller, PRUint32 dofindicescount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) = 0;

  /* void RemoveController (in IControllerBase controller); */
  NS_SCRIPTABLE NS_IMETHOD RemoveController(IControllerBase *controller) = 0;

  /* IControllerBase GetController (in long dof); */
  NS_SCRIPTABLE NS_IMETHOD GetController(PRInt32 dof, IControllerBase **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IMultiController, IMULTICONTROLLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMULTICONTROLLER \
  NS_SCRIPTABLE NS_IMETHOD AttachController(IControllerBase *controller, PRUint32 dofindicescount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveController(IControllerBase *controller); \
  NS_SCRIPTABLE NS_IMETHOD GetController(PRInt32 dof, IControllerBase **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMULTICONTROLLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AttachController(IControllerBase *controller, PRUint32 dofindicescount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) { return _to AttachController(controller, dofindicescount, dofindices, nControlTransformation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveController(IControllerBase *controller) { return _to RemoveController(controller); } \
  NS_SCRIPTABLE NS_IMETHOD GetController(PRInt32 dof, IControllerBase **_retval NS_OUTPARAM) { return _to GetController(dof, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMULTICONTROLLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AttachController(IControllerBase *controller, PRUint32 dofindicescount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AttachController(controller, dofindicescount, dofindices, nControlTransformation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveController(IControllerBase *controller) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveController(controller); } \
  NS_SCRIPTABLE NS_IMETHOD GetController(PRInt32 dof, IControllerBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetController(dof, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IMultiController
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMULTICONTROLLER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IMultiController)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean AttachController (in IControllerBase controller, in unsigned long dofindicescount, [array, size_is (dofindicescount)] in long dofindices, in long nControlTransformation); */
NS_IMETHODIMP _MYCLASS_::AttachController(IControllerBase *controller, PRUint32 dofindicescount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RemoveController (in IControllerBase controller); */
NS_IMETHODIMP _MYCLASS_::RemoveController(IControllerBase *controller)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IControllerBase GetController (in long dof); */
NS_IMETHODIMP _MYCLASS_::GetController(PRInt32 dof, IControllerBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_controller_h__ */
