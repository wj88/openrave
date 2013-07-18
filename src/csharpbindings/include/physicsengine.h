/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/physicsengine.idl
 */

#ifndef __gen_physicsengine_h__
#define __gen_physicsengine_h__


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

/* starting interface:    IPhysicsEngineBase */
#define IPHYSICSENGINEBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IPHYSICSENGINEBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IPhysicsEngineBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IPHYSICSENGINEBASE_IID)

  /* boolean SetPhysicsOptions (in long physicsoptions); */
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsOptions(PRInt32 physicsoptions, PRBool *_retval NS_OUTPARAM) = 0;

  /* long GetPhysicsOptions (); */
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsOptions(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean InitEnvironment (); */
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM) = 0;

  /* void DestroyEnvironment (); */
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void) = 0;

  /* boolean InitKinBody (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *body, PRBool *_retval NS_OUTPARAM) = 0;

  /* void RemoveKinBody (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *body) = 0;

  /* boolean SetLinkVelocity (in IKinBodyLink link, in IVectorF linearvel, in IVectorF angularvel); */
  NS_SCRIPTABLE NS_IMETHOD SetLinkVelocity(IKinBodyLink *link, IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean GetLinkVelocity (in IKinBodyLink link, out IVectorF linearvel, out IVectorF angularvel); */
  NS_SCRIPTABLE NS_IMETHOD GetLinkVelocity(IKinBodyLink *link, IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SetBodyForce (in IKinBodyLink link, in IVectorF force, in IVectorF position, in boolean bAdd); */
  NS_SCRIPTABLE NS_IMETHOD SetBodyForce(IKinBodyLink *link, IVectorF *force, IVectorF *position, PRBool bAdd, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SetBodyTorque (in IKinBodyLink link, in IVectorF torque, in boolean bAdd); */
  NS_SCRIPTABLE NS_IMETHOD SetBodyTorque(IKinBodyLink *link, IVectorF *torque, PRBool bAdd, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean AddJointTorque (in IKinBodyJoint pjoint, in unsigned long countTorques, [array, size_is (countTorques)] out float pTorques); */
  NS_SCRIPTABLE NS_IMETHOD AddJointTorque(IKinBodyJoint *pjoint, PRUint32 countTorques, float **pTorques NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean GetJointForceTorque (in IKinBodyJoint joint, out IVectorF force, out IVectorF torque); */
  NS_SCRIPTABLE NS_IMETHOD GetJointForceTorque(IKinBodyJoint *joint, IVectorF **force NS_OUTPARAM, IVectorF **torque NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* void SetGravity (in IVectorF gravity); */
  NS_SCRIPTABLE NS_IMETHOD SetGravity(IVectorF *gravity) = 0;

  /* IVectorF GetGravity (); */
  NS_SCRIPTABLE NS_IMETHOD GetGravity(IVectorF **_retval NS_OUTPARAM) = 0;

  /* void SimulateStep (in float fTimeElapsed); */
  NS_SCRIPTABLE NS_IMETHOD SimulateStep(float fTimeElapsed) = 0;

  /* boolean SetBodyVelocity (in IKinBody body, in unsigned long vLinearVelocitiesCount, [array, size_is (vLinearVelocitiesCount)] in IVectorF vLinearVelocities, in unsigned long vAngularVelocitiesCount, [array, size_is (vAngularVelocitiesCount)] in IVectorF vAngularVelocities); */
  NS_SCRIPTABLE NS_IMETHOD SetBodyVelocity(IKinBody *body, PRUint32 vLinearVelocitiesCount, IVectorF **vLinearVelocities, PRUint32 vAngularVelocitiesCount, IVectorF **vAngularVelocities, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IPhysicsEngineBase, IPHYSICSENGINEBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPHYSICSENGINEBASE \
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsOptions(PRInt32 physicsoptions, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsOptions(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void); \
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *body, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *body); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkVelocity(IKinBodyLink *link, IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkVelocity(IKinBodyLink *link, IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetBodyForce(IKinBodyLink *link, IVectorF *force, IVectorF *position, PRBool bAdd, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetBodyTorque(IKinBodyLink *link, IVectorF *torque, PRBool bAdd, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddJointTorque(IKinBodyJoint *pjoint, PRUint32 countTorques, float **pTorques NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetJointForceTorque(IKinBodyJoint *joint, IVectorF **force NS_OUTPARAM, IVectorF **torque NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetGravity(IVectorF *gravity); \
  NS_SCRIPTABLE NS_IMETHOD GetGravity(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SimulateStep(float fTimeElapsed); \
  NS_SCRIPTABLE NS_IMETHOD SetBodyVelocity(IKinBody *body, PRUint32 vLinearVelocitiesCount, IVectorF **vLinearVelocities, PRUint32 vAngularVelocitiesCount, IVectorF **vAngularVelocities, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPHYSICSENGINEBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsOptions(PRInt32 physicsoptions, PRBool *_retval NS_OUTPARAM) { return _to SetPhysicsOptions(physicsoptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsOptions(PRInt32 *_retval NS_OUTPARAM) { return _to GetPhysicsOptions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM) { return _to InitEnvironment(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void) { return _to DestroyEnvironment(); } \
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return _to InitKinBody(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *body) { return _to RemoveKinBody(body); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkVelocity(IKinBodyLink *link, IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM) { return _to SetLinkVelocity(link, linearvel, angularvel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkVelocity(IKinBodyLink *link, IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetLinkVelocity(link, linearvel, angularvel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyForce(IKinBodyLink *link, IVectorF *force, IVectorF *position, PRBool bAdd, PRBool *_retval NS_OUTPARAM) { return _to SetBodyForce(link, force, position, bAdd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyTorque(IKinBodyLink *link, IVectorF *torque, PRBool bAdd, PRBool *_retval NS_OUTPARAM) { return _to SetBodyTorque(link, torque, bAdd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddJointTorque(IKinBodyJoint *pjoint, PRUint32 countTorques, float **pTorques NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to AddJointTorque(pjoint, countTorques, pTorques, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointForceTorque(IKinBodyJoint *joint, IVectorF **force NS_OUTPARAM, IVectorF **torque NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetJointForceTorque(joint, force, torque, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetGravity(IVectorF *gravity) { return _to SetGravity(gravity); } \
  NS_SCRIPTABLE NS_IMETHOD GetGravity(IVectorF **_retval NS_OUTPARAM) { return _to GetGravity(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulateStep(float fTimeElapsed) { return _to SimulateStep(fTimeElapsed); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyVelocity(IKinBody *body, PRUint32 vLinearVelocitiesCount, IVectorF **vLinearVelocities, PRUint32 vAngularVelocitiesCount, IVectorF **vAngularVelocities, PRBool *_retval NS_OUTPARAM) { return _to SetBodyVelocity(body, vLinearVelocitiesCount, vLinearVelocities, vAngularVelocitiesCount, vAngularVelocities, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPHYSICSENGINEBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsOptions(PRInt32 physicsoptions, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPhysicsOptions(physicsoptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsOptions(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPhysicsOptions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitEnvironment(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DestroyEnvironment(); } \
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitKinBody(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *body) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveKinBody(body); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkVelocity(IKinBodyLink *link, IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkVelocity(link, linearvel, angularvel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkVelocity(IKinBodyLink *link, IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkVelocity(link, linearvel, angularvel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyForce(IKinBodyLink *link, IVectorF *force, IVectorF *position, PRBool bAdd, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBodyForce(link, force, position, bAdd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyTorque(IKinBodyLink *link, IVectorF *torque, PRBool bAdd, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBodyTorque(link, torque, bAdd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddJointTorque(IKinBodyJoint *pjoint, PRUint32 countTorques, float **pTorques NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddJointTorque(pjoint, countTorques, pTorques, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointForceTorque(IKinBodyJoint *joint, IVectorF **force NS_OUTPARAM, IVectorF **torque NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJointForceTorque(joint, force, torque, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetGravity(IVectorF *gravity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGravity(gravity); } \
  NS_SCRIPTABLE NS_IMETHOD GetGravity(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGravity(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulateStep(float fTimeElapsed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SimulateStep(fTimeElapsed); } \
  NS_SCRIPTABLE NS_IMETHOD SetBodyVelocity(IKinBody *body, PRUint32 vLinearVelocitiesCount, IVectorF **vLinearVelocities, PRUint32 vAngularVelocitiesCount, IVectorF **vAngularVelocities, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBodyVelocity(body, vLinearVelocitiesCount, vLinearVelocities, vAngularVelocitiesCount, vAngularVelocities, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IPhysicsEngineBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IPHYSICSENGINEBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IPhysicsEngineBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean SetPhysicsOptions (in long physicsoptions); */
NS_IMETHODIMP _MYCLASS_::SetPhysicsOptions(PRInt32 physicsoptions, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetPhysicsOptions (); */
NS_IMETHODIMP _MYCLASS_::GetPhysicsOptions(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitEnvironment (); */
NS_IMETHODIMP _MYCLASS_::InitEnvironment(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void DestroyEnvironment (); */
NS_IMETHODIMP _MYCLASS_::DestroyEnvironment()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitKinBody (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::InitKinBody(IKinBody *body, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RemoveKinBody (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::RemoveKinBody(IKinBody *body)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetLinkVelocity (in IKinBodyLink link, in IVectorF linearvel, in IVectorF angularvel); */
NS_IMETHODIMP _MYCLASS_::SetLinkVelocity(IKinBodyLink *link, IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetLinkVelocity (in IKinBodyLink link, out IVectorF linearvel, out IVectorF angularvel); */
NS_IMETHODIMP _MYCLASS_::GetLinkVelocity(IKinBodyLink *link, IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetBodyForce (in IKinBodyLink link, in IVectorF force, in IVectorF position, in boolean bAdd); */
NS_IMETHODIMP _MYCLASS_::SetBodyForce(IKinBodyLink *link, IVectorF *force, IVectorF *position, PRBool bAdd, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetBodyTorque (in IKinBodyLink link, in IVectorF torque, in boolean bAdd); */
NS_IMETHODIMP _MYCLASS_::SetBodyTorque(IKinBodyLink *link, IVectorF *torque, PRBool bAdd, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean AddJointTorque (in IKinBodyJoint pjoint, in unsigned long countTorques, [array, size_is (countTorques)] out float pTorques); */
NS_IMETHODIMP _MYCLASS_::AddJointTorque(IKinBodyJoint *pjoint, PRUint32 countTorques, float **pTorques NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetJointForceTorque (in IKinBodyJoint joint, out IVectorF force, out IVectorF torque); */
NS_IMETHODIMP _MYCLASS_::GetJointForceTorque(IKinBodyJoint *joint, IVectorF **force NS_OUTPARAM, IVectorF **torque NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetGravity (in IVectorF gravity); */
NS_IMETHODIMP _MYCLASS_::SetGravity(IVectorF *gravity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetGravity (); */
NS_IMETHODIMP _MYCLASS_::GetGravity(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SimulateStep (in float fTimeElapsed); */
NS_IMETHODIMP _MYCLASS_::SimulateStep(float fTimeElapsed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetBodyVelocity (in IKinBody body, in unsigned long vLinearVelocitiesCount, [array, size_is (vLinearVelocitiesCount)] in IVectorF vLinearVelocities, in unsigned long vAngularVelocitiesCount, [array, size_is (vAngularVelocitiesCount)] in IVectorF vAngularVelocities); */
NS_IMETHODIMP _MYCLASS_::SetBodyVelocity(IKinBody *body, PRUint32 vLinearVelocitiesCount, IVectorF **vLinearVelocities, PRUint32 vAngularVelocitiesCount, IVectorF **vAngularVelocities, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_physicsengine_h__ */
