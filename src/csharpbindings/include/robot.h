/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/robot.idl
 */

#ifndef __gen_robot_h__
#define __gen_robot_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

#ifndef __gen_kinbody_h__
#include "kinbody.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IRobotManipulatorInfo */
#define IROBOTMANIPULATORINFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IROBOTMANIPULATORINFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRobotManipulatorInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IROBOTMANIPULATORINFO_IID)

  /* attribute string name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) = 0;

  /* attribute string sBaseLinkName; */
  NS_SCRIPTABLE NS_IMETHOD GetSBaseLinkName(char **aSBaseLinkName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSBaseLinkName(const char *aSBaseLinkName) = 0;

  /* attribute string sEffectorLinkName; */
  NS_SCRIPTABLE NS_IMETHOD GetSEffectorLinkName(char **aSEffectorLinkName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSEffectorLinkName(const char *aSEffectorLinkName) = 0;

  /* attribute ITransformF tLocalTool; */
  NS_SCRIPTABLE NS_IMETHOD GetTLocalTool(ITransformF **aTLocalTool) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTLocalTool(ITransformF *aTLocalTool) = 0;

  /* void GetClosingDirection (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetClosingDirection (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD SetClosingDirection(PRUint32 count, float *v) = 0;

  /* attribute IVectorF vdirection; */
  NS_SCRIPTABLE NS_IMETHOD GetVdirection(IVectorF **aVdirection) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVdirection(IVectorF *aVdirection) = 0;

  /* attribute string sIkSolverXMLId; */
  NS_SCRIPTABLE NS_IMETHOD GetSIkSolverXMLId(char **aSIkSolverXMLId) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSIkSolverXMLId(const char *aSIkSolverXMLId) = 0;

  /* void GetGripperJointNames (out unsigned long count, [array, size_is (count)] out string v); */
  NS_SCRIPTABLE NS_IMETHOD GetGripperJointNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) = 0;

  /* void SetGripperJointNames (in unsigned long count, [array, size_is (count)] in string v); */
  NS_SCRIPTABLE NS_IMETHOD SetGripperJointNames(PRUint32 count, const char **v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRobotManipulatorInfo, IROBOTMANIPULATORINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IROBOTMANIPULATORINFO \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetSBaseLinkName(char **aSBaseLinkName); \
  NS_SCRIPTABLE NS_IMETHOD SetSBaseLinkName(const char *aSBaseLinkName); \
  NS_SCRIPTABLE NS_IMETHOD GetSEffectorLinkName(char **aSEffectorLinkName); \
  NS_SCRIPTABLE NS_IMETHOD SetSEffectorLinkName(const char *aSEffectorLinkName); \
  NS_SCRIPTABLE NS_IMETHOD GetTLocalTool(ITransformF **aTLocalTool); \
  NS_SCRIPTABLE NS_IMETHOD SetTLocalTool(ITransformF *aTLocalTool); \
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetClosingDirection(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD GetVdirection(IVectorF **aVdirection); \
  NS_SCRIPTABLE NS_IMETHOD SetVdirection(IVectorF *aVdirection); \
  NS_SCRIPTABLE NS_IMETHOD GetSIkSolverXMLId(char **aSIkSolverXMLId); \
  NS_SCRIPTABLE NS_IMETHOD SetSIkSolverXMLId(const char *aSIkSolverXMLId); \
  NS_SCRIPTABLE NS_IMETHOD GetGripperJointNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetGripperJointNames(PRUint32 count, const char **v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IROBOTMANIPULATORINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSBaseLinkName(char **aSBaseLinkName) { return _to GetSBaseLinkName(aSBaseLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD SetSBaseLinkName(const char *aSBaseLinkName) { return _to SetSBaseLinkName(aSBaseLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSEffectorLinkName(char **aSEffectorLinkName) { return _to GetSEffectorLinkName(aSEffectorLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD SetSEffectorLinkName(const char *aSEffectorLinkName) { return _to SetSEffectorLinkName(aSEffectorLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD GetTLocalTool(ITransformF **aTLocalTool) { return _to GetTLocalTool(aTLocalTool); } \
  NS_SCRIPTABLE NS_IMETHOD SetTLocalTool(ITransformF *aTLocalTool) { return _to SetTLocalTool(aTLocalTool); } \
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetClosingDirection(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetClosingDirection(PRUint32 count, float *v) { return _to SetClosingDirection(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetVdirection(IVectorF **aVdirection) { return _to GetVdirection(aVdirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetVdirection(IVectorF *aVdirection) { return _to SetVdirection(aVdirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetSIkSolverXMLId(char **aSIkSolverXMLId) { return _to GetSIkSolverXMLId(aSIkSolverXMLId); } \
  NS_SCRIPTABLE NS_IMETHOD SetSIkSolverXMLId(const char *aSIkSolverXMLId) { return _to SetSIkSolverXMLId(aSIkSolverXMLId); } \
  NS_SCRIPTABLE NS_IMETHOD GetGripperJointNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) { return _to GetGripperJointNames(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetGripperJointNames(PRUint32 count, const char **v) { return _to SetGripperJointNames(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IROBOTMANIPULATORINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSBaseLinkName(char **aSBaseLinkName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSBaseLinkName(aSBaseLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD SetSBaseLinkName(const char *aSBaseLinkName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSBaseLinkName(aSBaseLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSEffectorLinkName(char **aSEffectorLinkName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSEffectorLinkName(aSEffectorLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD SetSEffectorLinkName(const char *aSEffectorLinkName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSEffectorLinkName(aSEffectorLinkName); } \
  NS_SCRIPTABLE NS_IMETHOD GetTLocalTool(ITransformF **aTLocalTool) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTLocalTool(aTLocalTool); } \
  NS_SCRIPTABLE NS_IMETHOD SetTLocalTool(ITransformF *aTLocalTool) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTLocalTool(aTLocalTool); } \
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClosingDirection(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetClosingDirection(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetClosingDirection(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetVdirection(IVectorF **aVdirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVdirection(aVdirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetVdirection(IVectorF *aVdirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVdirection(aVdirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetSIkSolverXMLId(char **aSIkSolverXMLId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSIkSolverXMLId(aSIkSolverXMLId); } \
  NS_SCRIPTABLE NS_IMETHOD SetSIkSolverXMLId(const char *aSIkSolverXMLId) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSIkSolverXMLId(aSIkSolverXMLId); } \
  NS_SCRIPTABLE NS_IMETHOD GetGripperJointNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGripperJointNames(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetGripperJointNames(PRUint32 count, const char **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGripperJointNames(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRobotManipulatorInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IROBOTMANIPULATORINFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRobotManipulatorInfo)

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

/* attribute string sBaseLinkName; */
NS_IMETHODIMP _MYCLASS_::GetSBaseLinkName(char **aSBaseLinkName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSBaseLinkName(const char *aSBaseLinkName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string sEffectorLinkName; */
NS_IMETHODIMP _MYCLASS_::GetSEffectorLinkName(char **aSEffectorLinkName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSEffectorLinkName(const char *aSEffectorLinkName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF tLocalTool; */
NS_IMETHODIMP _MYCLASS_::GetTLocalTool(ITransformF **aTLocalTool)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTLocalTool(ITransformF *aTLocalTool)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetClosingDirection (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetClosingDirection(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetClosingDirection (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::SetClosingDirection(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vdirection; */
NS_IMETHODIMP _MYCLASS_::GetVdirection(IVectorF **aVdirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVdirection(IVectorF *aVdirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string sIkSolverXMLId; */
NS_IMETHODIMP _MYCLASS_::GetSIkSolverXMLId(char **aSIkSolverXMLId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSIkSolverXMLId(const char *aSIkSolverXMLId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetGripperJointNames (out unsigned long count, [array, size_is (count)] out string v); */
NS_IMETHODIMP _MYCLASS_::GetGripperJointNames(PRUint32 *count NS_OUTPARAM, char ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetGripperJointNames (in unsigned long count, [array, size_is (count)] in string v); */
NS_IMETHODIMP _MYCLASS_::SetGripperJointNames(PRUint32 count, const char **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRobotManipulator */
#define IROBOTMANIPULATOR_IID_STR "00000000-0000-0000-0000-000000000000"

#define IROBOTMANIPULATOR_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRobotManipulator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IROBOTMANIPULATOR_IID)

  /* IRobotManipulatorInfo GetInfo (); */
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IRobotManipulatorInfo **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* void GetVelocity (out IVectorF v1, out IVectorF v2); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **v1 NS_OUTPARAM, IVectorF **v2 NS_OUTPARAM) = 0;

  /* ITransformF GetEndEffectorTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetEndEffectorTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

  /* IRobotBase GetRobot (); */
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) = 0;

  /* boolean SetIkSolver (in IIkSolverBase iksolver); */
  NS_SCRIPTABLE NS_IMETHOD SetIkSolver(IIkSolverBase *iksolver, PRBool *_retval NS_OUTPARAM) = 0;

  /* IIkSolverBase GetIkSolver (); */
  NS_SCRIPTABLE NS_IMETHOD GetIkSolver(IIkSolverBase **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetBase (); */
  NS_SCRIPTABLE NS_IMETHOD GetBase(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetEndEffector (); */
  NS_SCRIPTABLE NS_IMETHOD GetEndEffector(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetLocalToolTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* void SetLocalToolTransform (in ITransformF t); */
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolTransform(ITransformF *t) = 0;

  /* void SetName (in string name); */
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) = 0;

  /* void GetGripperIndices (in unsigned long count, [array, size_is (count)] in long v); */
  NS_SCRIPTABLE NS_IMETHOD GetGripperIndices(PRUint32 count, PRInt32 *v) = 0;

  /* void GetArmIndices (in unsigned long count, [array, size_is (count)] in long v); */
  NS_SCRIPTABLE NS_IMETHOD GetArmIndices(PRUint32 count, PRInt32 *v) = 0;

  /* void GetClosingDirection (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 count, float *v) = 0;

  /* void SetLocalToolDirection (in IVectorF direction); */
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolDirection(IVectorF *direction) = 0;

  /* IVectorF GetLocalToolDirection (); */
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolDirection(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetDirection (); */
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **_retval NS_OUTPARAM) = 0;

  /* boolean FindIKSolution1 (in IIkParameterization param, out unsigned long solutionCount, [array, size_is (solutionCount)] out float solution, in long filteroptions); */
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution1(IIkParameterization *param, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean FindIKSolution2 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, out unsigned long solutionCount, [array, size_is (solutionCount)] out float solution, in long filteroptions); */
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean FindIKSolution3 (in IIkParameterization param, in long filteroptions, out IIkReturn ikreturn); */
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution3(IIkParameterization *param, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean FindIKSolution4 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out IIkReturn ikreturn); */
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean FindIKSolutions1 (in IIkParameterization param, in long filteroptions, in unsigned long vikreturnsCount, [array, size_is (vikreturnsCount)] in IIkReturn vikreturns); */
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean FindIKSolutions2 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, in unsigned long vikreturnsCount, [array, size_is (vikreturnsCount)] in IIkReturn vikreturns); */
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM) = 0;

  /* IIkParameterization GetIkParameterization1 (in long type, in boolean inworld); */
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization1(PRInt32 type, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM) = 0;

  /* IIkParameterization GetIkParameterization2 (in IIkParameterization ikparam, in boolean inworld); */
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization2(IIkParameterization *ikparam, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM) = 0;

  /* void GetChildJoints (in unsigned long vjointsCount, [array, size_is (vjointsCount)] in IKinBodyJoint vjoints); */
  NS_SCRIPTABLE NS_IMETHOD GetChildJoints(PRUint32 vjointsCount, IKinBodyJoint **vjoints) = 0;

  /* void GetChildDOFIndices (in unsigned long vdofndicesCount, [array, size_is (vdofndicesCount)] in long vdofndices); */
  NS_SCRIPTABLE NS_IMETHOD GetChildDOFIndices(PRUint32 vdofndicesCount, PRInt32 *vdofndices) = 0;

  /* boolean IsChildLink (in IKinBodyLink plink); */
  NS_SCRIPTABLE NS_IMETHOD IsChildLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetChildLinks (in unsigned long vlinksCount, [array, size_is (vlinksCount)] in IKinBodyLink vlinks); */
  NS_SCRIPTABLE NS_IMETHOD GetChildLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks) = 0;

  /* void GetIndependentLinks (in unsigned long vlinksCount, [array, size_is (vlinksCount)] in IKinBodyLink vlinks); */
  NS_SCRIPTABLE NS_IMETHOD GetIndependentLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks) = 0;

  /* boolean CheckEndEffectorCollision1 (in ITransformF tEE, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckEndEffectorSelfCollision1 (in ITransformF tEE, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckEndEffectorCollision2 (in IIkParameterization ikparam, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckEndEffectorSelfCollision2 (in IIkParameterization ikparam, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckIndependentCollision3 (out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckIndependentCollision3(ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsGrabbing (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, PRBool *_retval NS_OUTPARAM) = 0;

  /* void CalculateJacobian (in unsigned long jacobianCount, [array, size_is (jacobianCount)] in float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRUint32 jacobianCount, float *jacobian) = 0;

  /* void CalculateRotationJacobian (in unsigned long jacobianCount, [array, size_is (jacobianCount)] in float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRUint32 jacobianCount, float *jacobian) = 0;

  /* void CalculateAngularVelocityJacobian (in unsigned long jacobianCount, [array, size_is (jacobianCount)] in float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRUint32 jacobianCount, float *jacobian) = 0;

  /* IConfigurationSpecification GetArmConfigurationSpecification (in string interpolation); */
  NS_SCRIPTABLE NS_IMETHOD GetArmConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* void serialize (in nsIOutputStream o, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) = 0;

  /* string GetStructureHash (); */
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM) = 0;

  /* string GetKinematicsStructureHash (); */
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsStructureHash(char **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRobotManipulator, IROBOTMANIPULATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IROBOTMANIPULATOR \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IRobotManipulatorInfo **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **v1 NS_OUTPARAM, IVectorF **v2 NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEndEffectorTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetIkSolver(IIkSolverBase *iksolver, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIkSolver(IIkSolverBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBase(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEndEffector(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolTransform(ITransformF *t); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name); \
  NS_SCRIPTABLE NS_IMETHOD GetGripperIndices(PRUint32 count, PRInt32 *v); \
  NS_SCRIPTABLE NS_IMETHOD GetArmIndices(PRUint32 count, PRInt32 *v); \
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 count, float *v); \
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolDirection(IVectorF *direction); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolDirection(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution1(IIkParameterization *param, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution3(IIkParameterization *param, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization1(PRInt32 type, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization2(IIkParameterization *ikparam, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChildJoints(PRUint32 vjointsCount, IKinBodyJoint **vjoints); \
  NS_SCRIPTABLE NS_IMETHOD GetChildDOFIndices(PRUint32 vdofndicesCount, PRInt32 *vdofndices); \
  NS_SCRIPTABLE NS_IMETHOD IsChildLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChildLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks); \
  NS_SCRIPTABLE NS_IMETHOD GetIndependentLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks); \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckIndependentCollision3(ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRUint32 jacobianCount, float *jacobian); \
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRUint32 jacobianCount, float *jacobian); \
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRUint32 jacobianCount, float *jacobian); \
  NS_SCRIPTABLE NS_IMETHOD GetArmConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsStructureHash(char **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IROBOTMANIPULATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IRobotManipulatorInfo **_retval NS_OUTPARAM) { return _to GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **v1 NS_OUTPARAM, IVectorF **v2 NS_OUTPARAM) { return _to GetVelocity(v1, v2); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndEffectorTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetEndEffectorTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) { return _to GetRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIkSolver(IIkSolverBase *iksolver, PRBool *_retval NS_OUTPARAM) { return _to SetIkSolver(iksolver, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkSolver(IIkSolverBase **_retval NS_OUTPARAM) { return _to GetIkSolver(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBase(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetBase(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndEffector(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetEndEffector(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetLocalToolTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolTransform(ITransformF *t) { return _to SetLocalToolTransform(t); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) { return _to SetName(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetGripperIndices(PRUint32 count, PRInt32 *v) { return _to GetGripperIndices(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetArmIndices(PRUint32 count, PRInt32 *v) { return _to GetArmIndices(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 count, float *v) { return _to GetClosingDirection(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolDirection(IVectorF *direction) { return _to SetLocalToolDirection(direction); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolDirection(IVectorF **_retval NS_OUTPARAM) { return _to GetLocalToolDirection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **_retval NS_OUTPARAM) { return _to GetDirection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution1(IIkParameterization *param, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM) { return _to FindIKSolution1(param, solutionCount, solution, filteroptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM) { return _to FindIKSolution2(param, vFreeParametersCount, vFreeParameters, solutionCount, solution, filteroptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution3(IIkParameterization *param, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to FindIKSolution3(param, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to FindIKSolution4(param, vFreeParametersCount, vFreeParameters, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM) { return _to FindIKSolutions1(param, filteroptions, vikreturnsCount, vikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM) { return _to FindIKSolutions2(param, vFreeParametersCount, vFreeParameters, filteroptions, vikreturnsCount, vikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization1(PRInt32 type, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM) { return _to GetIkParameterization1(type, inworld, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization2(IIkParameterization *ikparam, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM) { return _to GetIkParameterization2(ikparam, inworld, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildJoints(PRUint32 vjointsCount, IKinBodyJoint **vjoints) { return _to GetChildJoints(vjointsCount, vjoints); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildDOFIndices(PRUint32 vdofndicesCount, PRInt32 *vdofndices) { return _to GetChildDOFIndices(vdofndicesCount, vdofndices); } \
  NS_SCRIPTABLE NS_IMETHOD IsChildLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) { return _to IsChildLink(plink, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks) { return _to GetChildLinks(vlinksCount, vlinks); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndependentLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks) { return _to GetIndependentLinks(vlinksCount, vlinks); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckEndEffectorCollision1(tEE, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckEndEffectorSelfCollision1(tEE, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckEndEffectorCollision2(ikparam, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckEndEffectorSelfCollision2(ikparam, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckIndependentCollision3(ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckIndependentCollision3(report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return _to IsGrabbing(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRUint32 jacobianCount, float *jacobian) { return _to CalculateJacobian(jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRUint32 jacobianCount, float *jacobian) { return _to CalculateRotationJacobian(jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRUint32 jacobianCount, float *jacobian) { return _to CalculateAngularVelocityJacobian(jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD GetArmConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return _to GetArmConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return _to Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM) { return _to GetStructureHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsStructureHash(char **_retval NS_OUTPARAM) { return _to GetKinematicsStructureHash(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IROBOTMANIPULATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IRobotManipulatorInfo **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **v1 NS_OUTPARAM, IVectorF **v2 NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocity(v1, v2); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndEffectorTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndEffectorTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIkSolver(IIkSolverBase *iksolver, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIkSolver(iksolver, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkSolver(IIkSolverBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIkSolver(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBase(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBase(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndEffector(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndEffector(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalToolTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolTransform(ITransformF *t) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLocalToolTransform(t); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetGripperIndices(PRUint32 count, PRInt32 *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGripperIndices(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetArmIndices(PRUint32 count, PRInt32 *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetArmIndices(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetClosingDirection(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClosingDirection(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocalToolDirection(IVectorF *direction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLocalToolDirection(direction); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalToolDirection(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalToolDirection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution1(IIkParameterization *param, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindIKSolution1(param, solutionCount, solution, filteroptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindIKSolution2(param, vFreeParametersCount, vFreeParameters, solutionCount, solution, filteroptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution3(IIkParameterization *param, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindIKSolution3(param, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolution4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindIKSolution4(param, vFreeParametersCount, vFreeParameters, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindIKSolutions1(param, filteroptions, vikreturnsCount, vikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindIKSolutions2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindIKSolutions2(param, vFreeParametersCount, vFreeParameters, filteroptions, vikreturnsCount, vikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization1(PRInt32 type, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIkParameterization1(type, inworld, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkParameterization2(IIkParameterization *ikparam, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIkParameterization2(ikparam, inworld, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildJoints(PRUint32 vjointsCount, IKinBodyJoint **vjoints) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildJoints(vjointsCount, vjoints); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildDOFIndices(PRUint32 vdofndicesCount, PRInt32 *vdofndices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildDOFIndices(vdofndicesCount, vdofndices); } \
  NS_SCRIPTABLE NS_IMETHOD IsChildLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsChildLink(plink, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChildLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildLinks(vlinksCount, vlinks); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndependentLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndependentLinks(vlinksCount, vlinks); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckEndEffectorCollision1(tEE, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckEndEffectorSelfCollision1(tEE, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckEndEffectorCollision2(ikparam, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckEndEffectorSelfCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckEndEffectorSelfCollision2(ikparam, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckIndependentCollision3(ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckIndependentCollision3(report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsGrabbing(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRUint32 jacobianCount, float *jacobian) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateJacobian(jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRUint32 jacobianCount, float *jacobian) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateRotationJacobian(jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRUint32 jacobianCount, float *jacobian) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateAngularVelocityJacobian(jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD GetArmConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetArmConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStructureHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsStructureHash(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKinematicsStructureHash(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRobotManipulator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IROBOTMANIPULATOR

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRobotManipulator)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IRobotManipulatorInfo GetInfo (); */
NS_IMETHODIMP _MYCLASS_::GetInfo(IRobotManipulatorInfo **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetTransform (); */
NS_IMETHODIMP _MYCLASS_::GetTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocity (out IVectorF v1, out IVectorF v2); */
NS_IMETHODIMP _MYCLASS_::GetVelocity(IVectorF **v1 NS_OUTPARAM, IVectorF **v2 NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetEndEffectorTransform (); */
NS_IMETHODIMP _MYCLASS_::GetEndEffectorTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase GetRobot (); */
NS_IMETHODIMP _MYCLASS_::GetRobot(IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetIkSolver (in IIkSolverBase iksolver); */
NS_IMETHODIMP _MYCLASS_::SetIkSolver(IIkSolverBase *iksolver, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IIkSolverBase GetIkSolver (); */
NS_IMETHODIMP _MYCLASS_::GetIkSolver(IIkSolverBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetBase (); */
NS_IMETHODIMP _MYCLASS_::GetBase(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetEndEffector (); */
NS_IMETHODIMP _MYCLASS_::GetEndEffector(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetLocalToolTransform (); */
NS_IMETHODIMP _MYCLASS_::GetLocalToolTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLocalToolTransform (in ITransformF t); */
NS_IMETHODIMP _MYCLASS_::SetLocalToolTransform(ITransformF *t)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetName (in string name); */
NS_IMETHODIMP _MYCLASS_::SetName(const char *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetGripperIndices (in unsigned long count, [array, size_is (count)] in long v); */
NS_IMETHODIMP _MYCLASS_::GetGripperIndices(PRUint32 count, PRInt32 *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetArmIndices (in unsigned long count, [array, size_is (count)] in long v); */
NS_IMETHODIMP _MYCLASS_::GetArmIndices(PRUint32 count, PRInt32 *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetClosingDirection (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::GetClosingDirection(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLocalToolDirection (in IVectorF direction); */
NS_IMETHODIMP _MYCLASS_::SetLocalToolDirection(IVectorF *direction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetLocalToolDirection (); */
NS_IMETHODIMP _MYCLASS_::GetLocalToolDirection(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetDirection (); */
NS_IMETHODIMP _MYCLASS_::GetDirection(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean FindIKSolution1 (in IIkParameterization param, out unsigned long solutionCount, [array, size_is (solutionCount)] out float solution, in long filteroptions); */
NS_IMETHODIMP _MYCLASS_::FindIKSolution1(IIkParameterization *param, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean FindIKSolution2 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, out unsigned long solutionCount, [array, size_is (solutionCount)] out float solution, in long filteroptions); */
NS_IMETHODIMP _MYCLASS_::FindIKSolution2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM, PRInt32 filteroptions, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean FindIKSolution3 (in IIkParameterization param, in long filteroptions, out IIkReturn ikreturn); */
NS_IMETHODIMP _MYCLASS_::FindIKSolution3(IIkParameterization *param, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean FindIKSolution4 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out IIkReturn ikreturn); */
NS_IMETHODIMP _MYCLASS_::FindIKSolution4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean FindIKSolutions1 (in IIkParameterization param, in long filteroptions, in unsigned long vikreturnsCount, [array, size_is (vikreturnsCount)] in IIkReturn vikreturns); */
NS_IMETHODIMP _MYCLASS_::FindIKSolutions1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean FindIKSolutions2 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, in unsigned long vikreturnsCount, [array, size_is (vikreturnsCount)] in IIkReturn vikreturns); */
NS_IMETHODIMP _MYCLASS_::FindIKSolutions2(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 vikreturnsCount, IIkReturn **vikreturns, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IIkParameterization GetIkParameterization1 (in long type, in boolean inworld); */
NS_IMETHODIMP _MYCLASS_::GetIkParameterization1(PRInt32 type, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IIkParameterization GetIkParameterization2 (in IIkParameterization ikparam, in boolean inworld); */
NS_IMETHODIMP _MYCLASS_::GetIkParameterization2(IIkParameterization *ikparam, PRBool inworld, IIkParameterization **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetChildJoints (in unsigned long vjointsCount, [array, size_is (vjointsCount)] in IKinBodyJoint vjoints); */
NS_IMETHODIMP _MYCLASS_::GetChildJoints(PRUint32 vjointsCount, IKinBodyJoint **vjoints)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetChildDOFIndices (in unsigned long vdofndicesCount, [array, size_is (vdofndicesCount)] in long vdofndices); */
NS_IMETHODIMP _MYCLASS_::GetChildDOFIndices(PRUint32 vdofndicesCount, PRInt32 *vdofndices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsChildLink (in IKinBodyLink plink); */
NS_IMETHODIMP _MYCLASS_::IsChildLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetChildLinks (in unsigned long vlinksCount, [array, size_is (vlinksCount)] in IKinBodyLink vlinks); */
NS_IMETHODIMP _MYCLASS_::GetChildLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetIndependentLinks (in unsigned long vlinksCount, [array, size_is (vlinksCount)] in IKinBodyLink vlinks); */
NS_IMETHODIMP _MYCLASS_::GetIndependentLinks(PRUint32 vlinksCount, IKinBodyLink **vlinks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckEndEffectorCollision1 (in ITransformF tEE, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckEndEffectorCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckEndEffectorSelfCollision1 (in ITransformF tEE, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckEndEffectorSelfCollision1(ITransformF *tEE, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckEndEffectorCollision2 (in IIkParameterization ikparam, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckEndEffectorCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckEndEffectorSelfCollision2 (in IIkParameterization ikparam, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckEndEffectorSelfCollision2(IIkParameterization *ikparam, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckIndependentCollision3 (out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckIndependentCollision3(ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsGrabbing (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::IsGrabbing(IKinBody *body, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateJacobian (in unsigned long jacobianCount, [array, size_is (jacobianCount)] in float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateJacobian(PRUint32 jacobianCount, float *jacobian)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateRotationJacobian (in unsigned long jacobianCount, [array, size_is (jacobianCount)] in float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateRotationJacobian(PRUint32 jacobianCount, float *jacobian)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateAngularVelocityJacobian (in unsigned long jacobianCount, [array, size_is (jacobianCount)] in float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateAngularVelocityJacobian(PRUint32 jacobianCount, float *jacobian)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification GetArmConfigurationSpecification (in string interpolation); */
NS_IMETHODIMP _MYCLASS_::GetArmConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void serialize (in nsIOutputStream o, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *o, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetStructureHash (); */
NS_IMETHODIMP _MYCLASS_::GetStructureHash(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetKinematicsStructureHash (); */
NS_IMETHODIMP _MYCLASS_::GetKinematicsStructureHash(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRobotAttachedSensorInfo */
#define IROBOTATTACHEDSENSORINFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IROBOTATTACHEDSENSORINFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRobotAttachedSensorInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IROBOTATTACHEDSENSORINFO_IID)

  /* attribute string name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) = 0;

  /* attribute string linkname; */
  NS_SCRIPTABLE NS_IMETHOD GetLinkname(char **aLinkname) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLinkname(const char *aLinkname) = 0;

  /* attribute ITransformF trelative; */
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative) = 0;

  /* attribute string sensorname; */
  NS_SCRIPTABLE NS_IMETHOD GetSensorname(char **aSensorname) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSensorname(const char *aSensorname) = 0;

  /* attribute ISensorGeometry sensorgeometry; */
  NS_SCRIPTABLE NS_IMETHOD GetSensorgeometry(ISensorGeometry **aSensorgeometry) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSensorgeometry(ISensorGeometry *aSensorgeometry) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRobotAttachedSensorInfo, IROBOTATTACHEDSENSORINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IROBOTATTACHEDSENSORINFO \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname(char **aLinkname); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname(const char *aLinkname); \
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative); \
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative); \
  NS_SCRIPTABLE NS_IMETHOD GetSensorname(char **aSensorname); \
  NS_SCRIPTABLE NS_IMETHOD SetSensorname(const char *aSensorname); \
  NS_SCRIPTABLE NS_IMETHOD GetSensorgeometry(ISensorGeometry **aSensorgeometry); \
  NS_SCRIPTABLE NS_IMETHOD SetSensorgeometry(ISensorGeometry *aSensorgeometry); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IROBOTATTACHEDSENSORINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname(char **aLinkname) { return _to GetLinkname(aLinkname); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname(const char *aLinkname) { return _to SetLinkname(aLinkname); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative) { return _to GetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative) { return _to SetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorname(char **aSensorname) { return _to GetSensorname(aSensorname); } \
  NS_SCRIPTABLE NS_IMETHOD SetSensorname(const char *aSensorname) { return _to SetSensorname(aSensorname); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorgeometry(ISensorGeometry **aSensorgeometry) { return _to GetSensorgeometry(aSensorgeometry); } \
  NS_SCRIPTABLE NS_IMETHOD SetSensorgeometry(ISensorGeometry *aSensorgeometry) { return _to SetSensorgeometry(aSensorgeometry); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IROBOTATTACHEDSENSORINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname(char **aLinkname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkname(aLinkname); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname(const char *aLinkname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkname(aLinkname); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorname(char **aSensorname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensorname(aSensorname); } \
  NS_SCRIPTABLE NS_IMETHOD SetSensorname(const char *aSensorname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSensorname(aSensorname); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensorgeometry(ISensorGeometry **aSensorgeometry) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensorgeometry(aSensorgeometry); } \
  NS_SCRIPTABLE NS_IMETHOD SetSensorgeometry(ISensorGeometry *aSensorgeometry) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSensorgeometry(aSensorgeometry); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRobotAttachedSensorInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IROBOTATTACHEDSENSORINFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRobotAttachedSensorInfo)

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

/* attribute string linkname; */
NS_IMETHODIMP _MYCLASS_::GetLinkname(char **aLinkname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetLinkname(const char *aLinkname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF trelative; */
NS_IMETHODIMP _MYCLASS_::GetTrelative(ITransformF **aTrelative)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTrelative(ITransformF *aTrelative)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string sensorname; */
NS_IMETHODIMP _MYCLASS_::GetSensorname(char **aSensorname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSensorname(const char *aSensorname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ISensorGeometry sensorgeometry; */
NS_IMETHODIMP _MYCLASS_::GetSensorgeometry(ISensorGeometry **aSensorgeometry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSensorgeometry(ISensorGeometry *aSensorgeometry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRobotAttachedSensor */
#define IROBOTATTACHEDSENSOR_IID_STR "00000000-0000-0000-0000-000000000000"

#define IROBOTATTACHEDSENSOR_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRobotAttachedSensor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IROBOTATTACHEDSENSOR_IID)

  /* ISensorBase GetSensor (); */
  NS_SCRIPTABLE NS_IMETHOD GetSensor(ISensorBase **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetAttachingLink (); */
  NS_SCRIPTABLE NS_IMETHOD GetAttachingLink(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetRelativeTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetRelativeTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* IRobotBase GetRobot (); */
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) = 0;

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

  /* ISensorData GetData (); */
  NS_SCRIPTABLE NS_IMETHOD GetData(ISensorData **_retval NS_OUTPARAM) = 0;

  /* void SetRelativeTransform (in ITransformF t); */
  NS_SCRIPTABLE NS_IMETHOD SetRelativeTransform(ITransformF *t) = 0;

  /* void serialize (in nsIOutputStream o, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) = 0;

  /* string GetStructureHash (); */
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRobotAttachedSensor, IROBOTATTACHEDSENSOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IROBOTATTACHEDSENSOR \
  NS_SCRIPTABLE NS_IMETHOD GetSensor(ISensorBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttachingLink(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRelativeTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetData(ISensorData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetRelativeTransform(ITransformF *t); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IROBOTATTACHEDSENSOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSensor(ISensorBase **_retval NS_OUTPARAM) { return _to GetSensor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttachingLink(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetAttachingLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelativeTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetRelativeTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) { return _to GetRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(ISensorData **_retval NS_OUTPARAM) { return _to GetData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRelativeTransform(ITransformF *t) { return _to SetRelativeTransform(t); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return _to Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM) { return _to GetStructureHash(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IROBOTATTACHEDSENSOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSensor(ISensorBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttachingLink(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttachingLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelativeTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelativeTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(ISensorData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRelativeTransform(ITransformF *t) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRelativeTransform(t); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetStructureHash(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStructureHash(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRobotAttachedSensor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IROBOTATTACHEDSENSOR

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRobotAttachedSensor)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* ISensorBase GetSensor (); */
NS_IMETHODIMP _MYCLASS_::GetSensor(ISensorBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetAttachingLink (); */
NS_IMETHODIMP _MYCLASS_::GetAttachingLink(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetRelativeTransform (); */
NS_IMETHODIMP _MYCLASS_::GetRelativeTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetTransform (); */
NS_IMETHODIMP _MYCLASS_::GetTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase GetRobot (); */
NS_IMETHODIMP _MYCLASS_::GetRobot(IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ISensorData GetData (); */
NS_IMETHODIMP _MYCLASS_::GetData(ISensorData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRelativeTransform (in ITransformF t); */
NS_IMETHODIMP _MYCLASS_::SetRelativeTransform(ITransformF *t)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void serialize (in nsIOutputStream o, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *o, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetStructureHash (); */
NS_IMETHODIMP _MYCLASS_::GetStructureHash(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRobotGrabbedInfo */
#define IROBOTGRABBEDINFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IROBOTGRABBEDINFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRobotGrabbedInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IROBOTGRABBEDINFO_IID)

  /* attribute string grabbedname; */
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedname(char **aGrabbedname) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetGrabbedname(const char *aGrabbedname) = 0;

  /* attribute string robotlinkname; */
  NS_SCRIPTABLE NS_IMETHOD GetRobotlinkname(char **aRobotlinkname) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRobotlinkname(const char *aRobotlinkname) = 0;

  /* attribute ITransformF trelative; */
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative) = 0;

  /* void GetRobotLinksToIgnore (out unsigned long count, [array, size_is (count)] out long v); */
  NS_SCRIPTABLE NS_IMETHOD GetRobotLinksToIgnore(PRUint32 *count NS_OUTPARAM, PRInt32 **v NS_OUTPARAM) = 0;

  /* void SetRobotLinksToIgnore (in unsigned long count, [array, size_is (count)] in long v); */
  NS_SCRIPTABLE NS_IMETHOD SetRobotLinksToIgnore(PRUint32 count, PRInt32 *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRobotGrabbedInfo, IROBOTGRABBEDINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IROBOTGRABBEDINFO \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedname(char **aGrabbedname); \
  NS_SCRIPTABLE NS_IMETHOD SetGrabbedname(const char *aGrabbedname); \
  NS_SCRIPTABLE NS_IMETHOD GetRobotlinkname(char **aRobotlinkname); \
  NS_SCRIPTABLE NS_IMETHOD SetRobotlinkname(const char *aRobotlinkname); \
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative); \
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative); \
  NS_SCRIPTABLE NS_IMETHOD GetRobotLinksToIgnore(PRUint32 *count NS_OUTPARAM, PRInt32 **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetRobotLinksToIgnore(PRUint32 count, PRInt32 *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IROBOTGRABBEDINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedname(char **aGrabbedname) { return _to GetGrabbedname(aGrabbedname); } \
  NS_SCRIPTABLE NS_IMETHOD SetGrabbedname(const char *aGrabbedname) { return _to SetGrabbedname(aGrabbedname); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobotlinkname(char **aRobotlinkname) { return _to GetRobotlinkname(aRobotlinkname); } \
  NS_SCRIPTABLE NS_IMETHOD SetRobotlinkname(const char *aRobotlinkname) { return _to SetRobotlinkname(aRobotlinkname); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative) { return _to GetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative) { return _to SetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobotLinksToIgnore(PRUint32 *count NS_OUTPARAM, PRInt32 **v NS_OUTPARAM) { return _to GetRobotLinksToIgnore(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetRobotLinksToIgnore(PRUint32 count, PRInt32 *v) { return _to SetRobotLinksToIgnore(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IROBOTGRABBEDINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedname(char **aGrabbedname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGrabbedname(aGrabbedname); } \
  NS_SCRIPTABLE NS_IMETHOD SetGrabbedname(const char *aGrabbedname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGrabbedname(aGrabbedname); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobotlinkname(char **aRobotlinkname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobotlinkname(aRobotlinkname); } \
  NS_SCRIPTABLE NS_IMETHOD SetRobotlinkname(const char *aRobotlinkname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRobotlinkname(aRobotlinkname); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrelative(ITransformF **aTrelative) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrelative(ITransformF *aTrelative) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTrelative(aTrelative); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobotLinksToIgnore(PRUint32 *count NS_OUTPARAM, PRInt32 **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobotLinksToIgnore(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetRobotLinksToIgnore(PRUint32 count, PRInt32 *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRobotLinksToIgnore(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRobotGrabbedInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IROBOTGRABBEDINFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRobotGrabbedInfo)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute string grabbedname; */
NS_IMETHODIMP _MYCLASS_::GetGrabbedname(char **aGrabbedname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetGrabbedname(const char *aGrabbedname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string robotlinkname; */
NS_IMETHODIMP _MYCLASS_::GetRobotlinkname(char **aRobotlinkname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetRobotlinkname(const char *aRobotlinkname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF trelative; */
NS_IMETHODIMP _MYCLASS_::GetTrelative(ITransformF **aTrelative)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTrelative(ITransformF *aTrelative)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRobotLinksToIgnore (out unsigned long count, [array, size_is (count)] out long v); */
NS_IMETHODIMP _MYCLASS_::GetRobotLinksToIgnore(PRUint32 *count NS_OUTPARAM, PRInt32 **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRobotLinksToIgnore (in unsigned long count, [array, size_is (count)] in long v); */
NS_IMETHODIMP _MYCLASS_::SetRobotLinksToIgnore(PRUint32 count, PRInt32 *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRobotStateSaver */
#define IROBOTSTATESAVER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IROBOTSTATESAVER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRobotStateSaver : public IKinBodyStateSaver {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IROBOTSTATESAVER_IID)

  /* void RestoreRobot (in IRobotBase robot); */
  NS_SCRIPTABLE NS_IMETHOD RestoreRobot(IRobotBase *robot) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRobotStateSaver, IROBOTSTATESAVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IROBOTSTATESAVER \
  NS_SCRIPTABLE NS_IMETHOD RestoreRobot(IRobotBase *robot); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IROBOTSTATESAVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD RestoreRobot(IRobotBase *robot) { return _to RestoreRobot(robot); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IROBOTSTATESAVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD RestoreRobot(IRobotBase *robot) { return !_to ? NS_ERROR_NULL_POINTER : _to->RestoreRobot(robot); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRobotStateSaver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IROBOTSTATESAVER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRobotStateSaver)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void RestoreRobot (in IRobotBase robot); */
NS_IMETHODIMP _MYCLASS_::RestoreRobot(IRobotBase *robot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRobotBase */
#define IROBOTBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IROBOTBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRobotBase : public IKinBody {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IROBOTBASE_IID)

  /* boolean InitB (in unsigned long linkinfosCount, [array, size_is (linkinfosCount)] in IKinBodyLinkInfo linkinfos, in unsigned long jointinfosCount, [array, size_is (jointinfosCount)] in IKinBodyJointInfo jointinfos, in unsigned long manipinfosCount, [array, size_is (manipinfosCount)] in IRobotManipulatorInfo manipinfos, in unsigned long attachedsensorinfosCount, [array, size_is (attachedsensorinfosCount)] in IRobotAttachedSensorInfo attachedsensorinfos); */
  NS_SCRIPTABLE NS_IMETHOD InitB(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRUint32 manipinfosCount, IRobotManipulatorInfo **manipinfos, PRUint32 attachedsensorinfosCount, IRobotAttachedSensorInfo **attachedsensorinfos, PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetManipulators (out unsigned long count, [array, size_is (count)] out IRobotManipulator m); */
  NS_SCRIPTABLE NS_IMETHOD GetManipulators(PRUint32 *count NS_OUTPARAM, IRobotManipulator ***m NS_OUTPARAM) = 0;

  /* IRobotManipulator GetManipulator (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(const char *name, IRobotManipulator **_retval NS_OUTPARAM) = 0;

  /* void GetAttachedSensors (out unsigned long count, [array, size_is (count)] out IRobotAttachedSensorInfo v); */
  NS_SCRIPTABLE NS_IMETHOD GetAttachedSensors(PRUint32 *count NS_OUTPARAM, IRobotAttachedSensorInfo ***v NS_OUTPARAM) = 0;

  /* void SetActiveDOFs1 (in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long affine); */
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs1(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine) = 0;

  /* void SetActiveDOFs2 (in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long affine, in IVectorF rotationaxis); */
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs2(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine, IVectorF *rotationaxis) = 0;

  /* long GetActiveDOF (); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOF(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long GetAffineDOF (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineDOF(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IConfigurationSpecification GetActiveConfigurationSpecification (in string interpolation); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* void GetActiveDOFIndices (out unsigned long dofindicesCount, [array, size_is (dofindicesCount)] out long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotationAxis (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxis(IVectorF **_retval NS_OUTPARAM) = 0;

  /* void SetAffineTranslationLimits (in IVectorF lower, in IVectorF upper); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationLimits(IVectorF *lower, IVectorF *upper) = 0;

  /* void SetAffineRotationAxisLimits (in IVectorF lower, in IVectorF upper); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisLimits(IVectorF *lower, IVectorF *upper) = 0;

  /* void SetAffineRotation3DLimits (in IVectorF lower, in IVectorF upper); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DLimits(IVectorF *lower, IVectorF *upper) = 0;

  /* void SetAffineRotationQuatLimits (in IVectorF quatangle); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatLimits(IVectorF *quatangle) = 0;

  /* void SetAffineTranslationMaxVels (in IVectorF vels); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationMaxVels(IVectorF *vels) = 0;

  /* void SetAffineRotationAxisMaxVels (in IVectorF vels); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisMaxVels(IVectorF *vels) = 0;

  /* void SetAffineRotation3DMaxVels (in IVectorF vels); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DMaxVels(IVectorF *vels) = 0;

  /* void SetAffineRotationQuatMaxVels (in float vels); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatMaxVels(float vels) = 0;

  /* void SetAffineTranslationResolution (in IVectorF resolution); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationResolution(IVectorF *resolution) = 0;

  /* void SetAffineRotationAxisResolution (in IVectorF resolution); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisResolution(IVectorF *resolution) = 0;

  /* void SetAffineRotation3DResolution (in IVectorF resolution); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DResolution(IVectorF *resolution) = 0;

  /* void SetAffineRotationQuatResolution (in float resolution); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatResolution(float resolution) = 0;

  /* void SetAffineTranslationWeights (in IVectorF weights); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationWeights(IVectorF *weights) = 0;

  /* void SetAffineRotationAxisWeights (in IVectorF weights); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisWeights(IVectorF *weights) = 0;

  /* void SetAffineRotation3DWeights (in IVectorF weights); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DWeights(IVectorF *weights) = 0;

  /* void SetAffineRotationQuatWeights (in float weights); */
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatWeights(float weights) = 0;

  /* void GetAffineTranslationLimits (out IVectorF lower, out IVectorF upper); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) = 0;

  /* void GetAffineRotationAxisLimits (out IVectorF lower, out IVectorF upper); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) = 0;

  /* void GetAffineRotation3DLimits (out IVectorF lower, out IVectorF upper); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotationQuatLimits (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatLimits(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineTranslationMaxVels (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationMaxVels(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotationAxisMaxVels (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisMaxVels(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotation3DMaxVels (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DMaxVels(IVectorF **_retval NS_OUTPARAM) = 0;

  /* float GetAffineRotationQuatMaxVels (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatMaxVels(float *_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineTranslationResolution (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationResolution(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotationAxisResolution (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisResolution(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotation3DResolution (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DResolution(IVectorF **_retval NS_OUTPARAM) = 0;

  /* float GetAffineRotationQuatResolution (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatResolution(float *_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineTranslationWeights (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationWeights(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotationAxisWeights (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisWeights(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAffineRotation3DWeights (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DWeights(IVectorF **_retval NS_OUTPARAM) = 0;

  /* float GetAffineRotationQuatWeights (); */
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatWeights(float *_retval NS_OUTPARAM) = 0;

  /* void SetActiveDOFValues (in unsigned long count, [array, size_is (count)] in float v, in unsigned long checklimits); */
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFValues(PRUint32 count, float *v, PRUint32 checklimits) = 0;

  /* void GetActiveDOFValues (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SetActiveDOFVelocities (in unsigned long count, [array, size_is (count)] in float v, in unsigned long checklimits); */
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFVelocities(PRUint32 count, float *v, PRUint32 checklimits) = 0;

  /* void GetActiveDOFVelocities (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void GetActiveDOFLimits (out unsigned long lowerCount, [array, size_is (lowerCount)] out float lower, out unsigned long upperCount, [array, size_is (upperCount)] out float upper); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFLimits(PRUint32 *lowerCount NS_OUTPARAM, float **lower NS_OUTPARAM, PRUint32 *upperCount NS_OUTPARAM, float **upper NS_OUTPARAM) = 0;

  /* void GetActiveDOFResolutions (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFResolutions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void GetActiveDOFWeights (out unsigned long count, [array, size_is (count)] out float vv); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFWeights(PRUint32 *count NS_OUTPARAM, float **vv NS_OUTPARAM) = 0;

  /* void GetActiveDOFVelocityLimits (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocityLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void GetActiveDOFAccelerationLimits (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFAccelerationLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void GetActiveDOFMaxVel (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxVel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void GetActiveDOFMaxAccel (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxAccel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void SubtractActiveDOFValues (out unsigned long q1Count, [array, size_is (q1Count)] out float q1, out unsigned long q2Count, [array, size_is (q2Count)] out float q2); */
  NS_SCRIPTABLE NS_IMETHOD SubtractActiveDOFValues(PRUint32 *q1Count NS_OUTPARAM, float **q1 NS_OUTPARAM, PRUint32 *q2Count NS_OUTPARAM, float **q2 NS_OUTPARAM) = 0;

  /* IRobotManipulator SetActiveManipulator1 (in string manipname); */
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator1(const char *manipname, IRobotManipulator **_retval NS_OUTPARAM) = 0;

  /* void SetActiveManipulator2 (in IRobotManipulator pmanip); */
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator2(IRobotManipulator *pmanip) = 0;

  /* IRobotManipulator GetActiveManipulator (); */
  NS_SCRIPTABLE NS_IMETHOD GetActiveManipulator(IRobotManipulator **_retval NS_OUTPARAM) = 0;

  /* IRobotManipulator AddManipulator (in IRobotManipulatorInfo manipinfo); */
  NS_SCRIPTABLE NS_IMETHOD AddManipulator(IRobotManipulatorInfo *manipinfo, IRobotManipulator **_retval NS_OUTPARAM) = 0;

  /* void RemoveManipulator (in IRobotManipulator manip); */
  NS_SCRIPTABLE NS_IMETHOD RemoveManipulator(IRobotManipulator *manip) = 0;

  /* void CalculateActiveJacobian (in long index, in IVectorF offset, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveJacobian(PRInt32 index, IVectorF *offset, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) = 0;

  /* void CalculateActiveRotationJacobian (in long index, in IVectorF qInitialRot, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveRotationJacobian(PRInt32 index, IVectorF *qInitialRot, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) = 0;

  /* void CalculateActiveAngularVelocityJacobian (in long index, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveAngularVelocityJacobian(PRInt32 index, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) = 0;

  /* boolean Grab1 (in IKinBody body, in IKinBodyLink pRobotLinkToGrabWith, in unsigned long setRobotLinksToIgnoreCount, [array, size_is (setRobotLinksToIgnoreCount)] in long setRobotLinksToIgnore); */
  NS_SCRIPTABLE NS_IMETHOD Grab1(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Grab2 (in IKinBody body, in IKinBodyLink pRobotLinkToGrabWith); */
  NS_SCRIPTABLE NS_IMETHOD Grab2(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Grab3 (in IKinBody body, in unsigned long setRobotLinksToIgnoreCount, [array, size_is (setRobotLinksToIgnoreCount)] in long setRobotLinksToIgnore); */
  NS_SCRIPTABLE NS_IMETHOD Grab3(IKinBody *body, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Grab4 (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD Grab4(IKinBody *body, PRBool *_retval NS_OUTPARAM) = 0;

  /* void ReleaseRobot (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD ReleaseRobot(IKinBody *body) = 0;

  /* void ReleaseAllGrabbed (); */
  NS_SCRIPTABLE NS_IMETHOD ReleaseAllGrabbed(void) = 0;

  /* void RegrabAll (); */
  NS_SCRIPTABLE NS_IMETHOD RegrabAll(void) = 0;

  /* IKinBodyLink IsGrabbing (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* void GetGrabbed (out unsigned long vbodiesCount, [array, size_is (vbodiesCount)] out IKinBody vbodies); */
  NS_SCRIPTABLE NS_IMETHOD GetGrabbed(PRUint32 *vbodiesCount NS_OUTPARAM, IKinBody ***vbodies NS_OUTPARAM) = 0;

  /* void GetGrabbedInfo (out unsigned long vgrabbedinfoCount, [array, size_is (vgrabbedinfoCount)] out IRobotGrabbedInfo vgrabbedinfo); */
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedInfo(PRUint32 *vgrabbedinfoCount NS_OUTPARAM, IRobotGrabbedInfo ***vgrabbedinfo NS_OUTPARAM) = 0;

  /* void ResetGrabbed (in unsigned long vgrabbedinfoCount, [array, size_is (vgrabbedinfoCount)] in IRobotGrabbedInfo vgrabbedinfo); */
  NS_SCRIPTABLE NS_IMETHOD ResetGrabbed(PRUint32 vgrabbedinfoCount, IRobotGrabbedInfo **vgrabbedinfo) = 0;

  /* void GetIgnoredLinksOfGrabbed (in IKinBody body, out unsigned long ignorelinksCount, [array, size_is (ignorelinksCount)] out IKinBodyLink ignorelinks); */
  NS_SCRIPTABLE NS_IMETHOD GetIgnoredLinksOfGrabbed(IKinBody *body, PRUint32 *ignorelinksCount NS_OUTPARAM, IKinBodyLink ***ignorelinks NS_OUTPARAM) = 0;

  /* boolean CheckLinkCollision (in long IKinBodyLinkindex, in ITransformF tlinktrans, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckLinkCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckLinkSelfCollision (in long IKinBodyLinkindex, in ITransformF tlinktrans, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckLinkSelfCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* string GetRobotStructureHash (); */
  NS_SCRIPTABLE NS_IMETHOD GetRobotStructureHash(char **_retval NS_OUTPARAM) = 0;

  /* IControllerBase GetController (); */
  NS_SCRIPTABLE NS_IMETHOD GetController(IControllerBase **_retval NS_OUTPARAM) = 0;

  /* boolean SetController (in IControllerBase controller, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long nControlTransformation); */
  NS_SCRIPTABLE NS_IMETHOD SetController(IControllerBase *controller, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRobotBase, IROBOTBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IROBOTBASE \
  NS_SCRIPTABLE NS_IMETHOD InitB(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRUint32 manipinfosCount, IRobotManipulatorInfo **manipinfos, PRUint32 attachedsensorinfosCount, IRobotAttachedSensorInfo **attachedsensorinfos, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetManipulators(PRUint32 *count NS_OUTPARAM, IRobotManipulator ***m NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(const char *name, IRobotManipulator **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttachedSensors(PRUint32 *count NS_OUTPARAM, IRobotAttachedSensorInfo ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs1(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs2(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine, IVectorF *rotationaxis); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOF(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineDOF(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxis(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationLimits(IVectorF *lower, IVectorF *upper); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisLimits(IVectorF *lower, IVectorF *upper); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DLimits(IVectorF *lower, IVectorF *upper); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatLimits(IVectorF *quatangle); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationMaxVels(IVectorF *vels); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisMaxVels(IVectorF *vels); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DMaxVels(IVectorF *vels); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatMaxVels(float vels); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationResolution(IVectorF *resolution); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisResolution(IVectorF *resolution); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DResolution(IVectorF *resolution); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatResolution(float resolution); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationWeights(IVectorF *weights); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisWeights(IVectorF *weights); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DWeights(IVectorF *weights); \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatWeights(float weights); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatLimits(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationMaxVels(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisMaxVels(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DMaxVels(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatMaxVels(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationResolution(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisResolution(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DResolution(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatResolution(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationWeights(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisWeights(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DWeights(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatWeights(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFValues(PRUint32 count, float *v, PRUint32 checklimits); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFVelocities(PRUint32 count, float *v, PRUint32 checklimits); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFLimits(PRUint32 *lowerCount NS_OUTPARAM, float **lower NS_OUTPARAM, PRUint32 *upperCount NS_OUTPARAM, float **upper NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFResolutions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFWeights(PRUint32 *count NS_OUTPARAM, float **vv NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocityLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFAccelerationLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxVel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxAccel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SubtractActiveDOFValues(PRUint32 *q1Count NS_OUTPARAM, float **q1 NS_OUTPARAM, PRUint32 *q2Count NS_OUTPARAM, float **q2 NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator1(const char *manipname, IRobotManipulator **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator2(IRobotManipulator *pmanip); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveManipulator(IRobotManipulator **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddManipulator(IRobotManipulatorInfo *manipinfo, IRobotManipulator **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveManipulator(IRobotManipulator *manip); \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveJacobian(PRInt32 index, IVectorF *offset, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveRotationJacobian(PRInt32 index, IVectorF *qInitialRot, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveAngularVelocityJacobian(PRInt32 index, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Grab1(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Grab2(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Grab3(IKinBody *body, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Grab4(IKinBody *body, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReleaseRobot(IKinBody *body); \
  NS_SCRIPTABLE NS_IMETHOD ReleaseAllGrabbed(void); \
  NS_SCRIPTABLE NS_IMETHOD RegrabAll(void); \
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbed(PRUint32 *vbodiesCount NS_OUTPARAM, IKinBody ***vbodies NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedInfo(PRUint32 *vgrabbedinfoCount NS_OUTPARAM, IRobotGrabbedInfo ***vgrabbedinfo NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ResetGrabbed(PRUint32 vgrabbedinfoCount, IRobotGrabbedInfo **vgrabbedinfo); \
  NS_SCRIPTABLE NS_IMETHOD GetIgnoredLinksOfGrabbed(IKinBody *body, PRUint32 *ignorelinksCount NS_OUTPARAM, IKinBodyLink ***ignorelinks NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckLinkCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckLinkSelfCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRobotStructureHash(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetController(IControllerBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetController(IControllerBase *controller, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IROBOTBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitB(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRUint32 manipinfosCount, IRobotManipulatorInfo **manipinfos, PRUint32 attachedsensorinfosCount, IRobotAttachedSensorInfo **attachedsensorinfos, PRBool *_retval NS_OUTPARAM) { return _to InitB(linkinfosCount, linkinfos, jointinfosCount, jointinfos, manipinfosCount, manipinfos, attachedsensorinfosCount, attachedsensorinfos, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetManipulators(PRUint32 *count NS_OUTPARAM, IRobotManipulator ***m NS_OUTPARAM) { return _to GetManipulators(count, m); } \
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(const char *name, IRobotManipulator **_retval NS_OUTPARAM) { return _to GetManipulator(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttachedSensors(PRUint32 *count NS_OUTPARAM, IRobotAttachedSensorInfo ***v NS_OUTPARAM) { return _to GetAttachedSensors(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs1(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine) { return _to SetActiveDOFs1(dofindicesCount, dofindices, affine); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs2(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine, IVectorF *rotationaxis) { return _to SetActiveDOFs2(dofindicesCount, dofindices, affine, rotationaxis); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOF(PRInt32 *_retval NS_OUTPARAM) { return _to GetActiveDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineDOF(PRInt32 *_retval NS_OUTPARAM) { return _to GetAffineDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return _to GetActiveConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM) { return _to GetActiveDOFIndices(dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxis(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotationAxis(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationLimits(IVectorF *lower, IVectorF *upper) { return _to SetAffineTranslationLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisLimits(IVectorF *lower, IVectorF *upper) { return _to SetAffineRotationAxisLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DLimits(IVectorF *lower, IVectorF *upper) { return _to SetAffineRotation3DLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatLimits(IVectorF *quatangle) { return _to SetAffineRotationQuatLimits(quatangle); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationMaxVels(IVectorF *vels) { return _to SetAffineTranslationMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisMaxVels(IVectorF *vels) { return _to SetAffineRotationAxisMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DMaxVels(IVectorF *vels) { return _to SetAffineRotation3DMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatMaxVels(float vels) { return _to SetAffineRotationQuatMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationResolution(IVectorF *resolution) { return _to SetAffineTranslationResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisResolution(IVectorF *resolution) { return _to SetAffineRotationAxisResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DResolution(IVectorF *resolution) { return _to SetAffineRotation3DResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatResolution(float resolution) { return _to SetAffineRotationQuatResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationWeights(IVectorF *weights) { return _to SetAffineTranslationWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisWeights(IVectorF *weights) { return _to SetAffineRotationAxisWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DWeights(IVectorF *weights) { return _to SetAffineRotation3DWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatWeights(float weights) { return _to SetAffineRotationQuatWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) { return _to GetAffineTranslationLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) { return _to GetAffineRotationAxisLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) { return _to GetAffineRotation3DLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatLimits(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotationQuatLimits(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationMaxVels(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineTranslationMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisMaxVels(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotationAxisMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DMaxVels(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotation3DMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatMaxVels(float *_retval NS_OUTPARAM) { return _to GetAffineRotationQuatMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationResolution(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineTranslationResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisResolution(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotationAxisResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DResolution(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotation3DResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatResolution(float *_retval NS_OUTPARAM) { return _to GetAffineRotationQuatResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationWeights(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineTranslationWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisWeights(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotationAxisWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DWeights(IVectorF **_retval NS_OUTPARAM) { return _to GetAffineRotation3DWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatWeights(float *_retval NS_OUTPARAM) { return _to GetAffineRotationQuatWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFValues(PRUint32 count, float *v, PRUint32 checklimits) { return _to SetActiveDOFValues(count, v, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetActiveDOFValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFVelocities(PRUint32 count, float *v, PRUint32 checklimits) { return _to SetActiveDOFVelocities(count, v, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetActiveDOFVelocities(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFLimits(PRUint32 *lowerCount NS_OUTPARAM, float **lower NS_OUTPARAM, PRUint32 *upperCount NS_OUTPARAM, float **upper NS_OUTPARAM) { return _to GetActiveDOFLimits(lowerCount, lower, upperCount, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFResolutions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetActiveDOFResolutions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFWeights(PRUint32 *count NS_OUTPARAM, float **vv NS_OUTPARAM) { return _to GetActiveDOFWeights(count, vv); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocityLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetActiveDOFVelocityLimits(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFAccelerationLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetActiveDOFAccelerationLimits(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxVel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetActiveDOFMaxVel(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxAccel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetActiveDOFMaxAccel(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractActiveDOFValues(PRUint32 *q1Count NS_OUTPARAM, float **q1 NS_OUTPARAM, PRUint32 *q2Count NS_OUTPARAM, float **q2 NS_OUTPARAM) { return _to SubtractActiveDOFValues(q1Count, q1, q2Count, q2); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator1(const char *manipname, IRobotManipulator **_retval NS_OUTPARAM) { return _to SetActiveManipulator1(manipname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator2(IRobotManipulator *pmanip) { return _to SetActiveManipulator2(pmanip); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveManipulator(IRobotManipulator **_retval NS_OUTPARAM) { return _to GetActiveManipulator(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddManipulator(IRobotManipulatorInfo *manipinfo, IRobotManipulator **_retval NS_OUTPARAM) { return _to AddManipulator(manipinfo, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveManipulator(IRobotManipulator *manip) { return _to RemoveManipulator(manip); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveJacobian(PRInt32 index, IVectorF *offset, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return _to CalculateActiveJacobian(index, offset, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveRotationJacobian(PRInt32 index, IVectorF *qInitialRot, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return _to CalculateActiveRotationJacobian(index, qInitialRot, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveAngularVelocityJacobian(PRInt32 index, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return _to CalculateActiveAngularVelocityJacobian(index, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD Grab1(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM) { return _to Grab1(body, pRobotLinkToGrabWith, setRobotLinksToIgnoreCount, setRobotLinksToIgnore, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Grab2(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRBool *_retval NS_OUTPARAM) { return _to Grab2(body, pRobotLinkToGrabWith, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Grab3(IKinBody *body, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM) { return _to Grab3(body, setRobotLinksToIgnoreCount, setRobotLinksToIgnore, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Grab4(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return _to Grab4(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseRobot(IKinBody *body) { return _to ReleaseRobot(body); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseAllGrabbed(void) { return _to ReleaseAllGrabbed(); } \
  NS_SCRIPTABLE NS_IMETHOD RegrabAll(void) { return _to RegrabAll(); } \
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, IKinBodyLink **_retval NS_OUTPARAM) { return _to IsGrabbing(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbed(PRUint32 *vbodiesCount NS_OUTPARAM, IKinBody ***vbodies NS_OUTPARAM) { return _to GetGrabbed(vbodiesCount, vbodies); } \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedInfo(PRUint32 *vgrabbedinfoCount NS_OUTPARAM, IRobotGrabbedInfo ***vgrabbedinfo NS_OUTPARAM) { return _to GetGrabbedInfo(vgrabbedinfoCount, vgrabbedinfo); } \
  NS_SCRIPTABLE NS_IMETHOD ResetGrabbed(PRUint32 vgrabbedinfoCount, IRobotGrabbedInfo **vgrabbedinfo) { return _to ResetGrabbed(vgrabbedinfoCount, vgrabbedinfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnoredLinksOfGrabbed(IKinBody *body, PRUint32 *ignorelinksCount NS_OUTPARAM, IKinBodyLink ***ignorelinks NS_OUTPARAM) { return _to GetIgnoredLinksOfGrabbed(body, ignorelinksCount, ignorelinks); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLinkCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckLinkCollision(IKinBodyLinkindex, tlinktrans, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLinkSelfCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckLinkSelfCollision(IKinBodyLinkindex, tlinktrans, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobotStructureHash(char **_retval NS_OUTPARAM) { return _to GetRobotStructureHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetController(IControllerBase **_retval NS_OUTPARAM) { return _to GetController(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetController(IControllerBase *controller, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) { return _to SetController(controller, dofindicesCount, dofindices, nControlTransformation, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IROBOTBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitB(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRUint32 manipinfosCount, IRobotManipulatorInfo **manipinfos, PRUint32 attachedsensorinfosCount, IRobotAttachedSensorInfo **attachedsensorinfos, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitB(linkinfosCount, linkinfos, jointinfosCount, jointinfos, manipinfosCount, manipinfos, attachedsensorinfosCount, attachedsensorinfos, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetManipulators(PRUint32 *count NS_OUTPARAM, IRobotManipulator ***m NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManipulators(count, m); } \
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(const char *name, IRobotManipulator **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManipulator(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttachedSensors(PRUint32 *count NS_OUTPARAM, IRobotAttachedSensorInfo ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttachedSensors(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs1(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveDOFs1(dofindicesCount, dofindices, affine); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFs2(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine, IVectorF *rotationaxis) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveDOFs2(dofindicesCount, dofindices, affine, rotationaxis); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOF(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineDOF(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFIndices(dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxis(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationAxis(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationLimits(IVectorF *lower, IVectorF *upper) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineTranslationLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisLimits(IVectorF *lower, IVectorF *upper) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationAxisLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DLimits(IVectorF *lower, IVectorF *upper) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotation3DLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatLimits(IVectorF *quatangle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationQuatLimits(quatangle); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationMaxVels(IVectorF *vels) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineTranslationMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisMaxVels(IVectorF *vels) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationAxisMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DMaxVels(IVectorF *vels) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotation3DMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatMaxVels(float vels) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationQuatMaxVels(vels); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationResolution(IVectorF *resolution) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineTranslationResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisResolution(IVectorF *resolution) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationAxisResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DResolution(IVectorF *resolution) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotation3DResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatResolution(float resolution) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationQuatResolution(resolution); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineTranslationWeights(IVectorF *weights) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineTranslationWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationAxisWeights(IVectorF *weights) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationAxisWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotation3DWeights(IVectorF *weights) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotation3DWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD SetAffineRotationQuatWeights(float weights) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAffineRotationQuatWeights(weights); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineTranslationLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationAxisLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotation3DLimits(lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatLimits(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationQuatLimits(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationMaxVels(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineTranslationMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisMaxVels(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationAxisMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DMaxVels(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotation3DMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatMaxVels(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationQuatMaxVels(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationResolution(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineTranslationResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisResolution(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationAxisResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DResolution(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotation3DResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatResolution(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationQuatResolution(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineTranslationWeights(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineTranslationWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationAxisWeights(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationAxisWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotation3DWeights(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotation3DWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAffineRotationQuatWeights(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAffineRotationQuatWeights(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFValues(PRUint32 count, float *v, PRUint32 checklimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveDOFValues(count, v, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFValues(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveDOFVelocities(PRUint32 count, float *v, PRUint32 checklimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveDOFVelocities(count, v, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFVelocities(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFLimits(PRUint32 *lowerCount NS_OUTPARAM, float **lower NS_OUTPARAM, PRUint32 *upperCount NS_OUTPARAM, float **upper NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFLimits(lowerCount, lower, upperCount, upper); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFResolutions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFResolutions(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFWeights(PRUint32 *count NS_OUTPARAM, float **vv NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFWeights(count, vv); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFVelocityLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFVelocityLimits(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFAccelerationLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFAccelerationLimits(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxVel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFMaxVel(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDOFMaxAccel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDOFMaxAccel(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractActiveDOFValues(PRUint32 *q1Count NS_OUTPARAM, float **q1 NS_OUTPARAM, PRUint32 *q2Count NS_OUTPARAM, float **q2 NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubtractActiveDOFValues(q1Count, q1, q2Count, q2); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator1(const char *manipname, IRobotManipulator **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveManipulator1(manipname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetActiveManipulator2(IRobotManipulator *pmanip) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveManipulator2(pmanip); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveManipulator(IRobotManipulator **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveManipulator(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddManipulator(IRobotManipulatorInfo *manipinfo, IRobotManipulator **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddManipulator(manipinfo, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveManipulator(IRobotManipulator *manip) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveManipulator(manip); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveJacobian(PRInt32 index, IVectorF *offset, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateActiveJacobian(index, offset, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveRotationJacobian(PRInt32 index, IVectorF *qInitialRot, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateActiveRotationJacobian(index, qInitialRot, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateActiveAngularVelocityJacobian(PRInt32 index, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateActiveAngularVelocityJacobian(index, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD Grab1(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Grab1(body, pRobotLinkToGrabWith, setRobotLinksToIgnoreCount, setRobotLinksToIgnore, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Grab2(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Grab2(body, pRobotLinkToGrabWith, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Grab3(IKinBody *body, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Grab3(body, setRobotLinksToIgnoreCount, setRobotLinksToIgnore, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Grab4(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Grab4(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseRobot(IKinBody *body) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseRobot(body); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseAllGrabbed(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseAllGrabbed(); } \
  NS_SCRIPTABLE NS_IMETHOD RegrabAll(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegrabAll(); } \
  NS_SCRIPTABLE NS_IMETHOD IsGrabbing(IKinBody *body, IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsGrabbing(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbed(PRUint32 *vbodiesCount NS_OUTPARAM, IKinBody ***vbodies NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGrabbed(vbodiesCount, vbodies); } \
  NS_SCRIPTABLE NS_IMETHOD GetGrabbedInfo(PRUint32 *vgrabbedinfoCount NS_OUTPARAM, IRobotGrabbedInfo ***vgrabbedinfo NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGrabbedInfo(vgrabbedinfoCount, vgrabbedinfo); } \
  NS_SCRIPTABLE NS_IMETHOD ResetGrabbed(PRUint32 vgrabbedinfoCount, IRobotGrabbedInfo **vgrabbedinfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetGrabbed(vgrabbedinfoCount, vgrabbedinfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetIgnoredLinksOfGrabbed(IKinBody *body, PRUint32 *ignorelinksCount NS_OUTPARAM, IKinBodyLink ***ignorelinks NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIgnoredLinksOfGrabbed(body, ignorelinksCount, ignorelinks); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLinkCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLinkCollision(IKinBodyLinkindex, tlinktrans, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLinkSelfCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLinkSelfCollision(IKinBodyLinkindex, tlinktrans, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobotStructureHash(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobotStructureHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetController(IControllerBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetController(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetController(IControllerBase *controller, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetController(controller, dofindicesCount, dofindices, nControlTransformation, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRobotBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IROBOTBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRobotBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean InitB (in unsigned long linkinfosCount, [array, size_is (linkinfosCount)] in IKinBodyLinkInfo linkinfos, in unsigned long jointinfosCount, [array, size_is (jointinfosCount)] in IKinBodyJointInfo jointinfos, in unsigned long manipinfosCount, [array, size_is (manipinfosCount)] in IRobotManipulatorInfo manipinfos, in unsigned long attachedsensorinfosCount, [array, size_is (attachedsensorinfosCount)] in IRobotAttachedSensorInfo attachedsensorinfos); */
NS_IMETHODIMP _MYCLASS_::InitB(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRUint32 manipinfosCount, IRobotManipulatorInfo **manipinfos, PRUint32 attachedsensorinfosCount, IRobotAttachedSensorInfo **attachedsensorinfos, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetManipulators (out unsigned long count, [array, size_is (count)] out IRobotManipulator m); */
NS_IMETHODIMP _MYCLASS_::GetManipulators(PRUint32 *count NS_OUTPARAM, IRobotManipulator ***m NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotManipulator GetManipulator (in string name); */
NS_IMETHODIMP _MYCLASS_::GetManipulator(const char *name, IRobotManipulator **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAttachedSensors (out unsigned long count, [array, size_is (count)] out IRobotAttachedSensorInfo v); */
NS_IMETHODIMP _MYCLASS_::GetAttachedSensors(PRUint32 *count NS_OUTPARAM, IRobotAttachedSensorInfo ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetActiveDOFs1 (in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long affine); */
NS_IMETHODIMP _MYCLASS_::SetActiveDOFs1(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetActiveDOFs2 (in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long affine, in IVectorF rotationaxis); */
NS_IMETHODIMP _MYCLASS_::SetActiveDOFs2(PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 affine, IVectorF *rotationaxis)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetActiveDOF (); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOF(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetAffineDOF (); */
NS_IMETHODIMP _MYCLASS_::GetAffineDOF(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification GetActiveConfigurationSpecification (in string interpolation); */
NS_IMETHODIMP _MYCLASS_::GetActiveConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFIndices (out unsigned long dofindicesCount, [array, size_is (dofindicesCount)] out long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFIndices(PRUint32 *dofindicesCount NS_OUTPARAM, PRInt32 **dofindices NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotationAxis (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationAxis(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineTranslationLimits (in IVectorF lower, in IVectorF upper); */
NS_IMETHODIMP _MYCLASS_::SetAffineTranslationLimits(IVectorF *lower, IVectorF *upper)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationAxisLimits (in IVectorF lower, in IVectorF upper); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationAxisLimits(IVectorF *lower, IVectorF *upper)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotation3DLimits (in IVectorF lower, in IVectorF upper); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotation3DLimits(IVectorF *lower, IVectorF *upper)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationQuatLimits (in IVectorF quatangle); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationQuatLimits(IVectorF *quatangle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineTranslationMaxVels (in IVectorF vels); */
NS_IMETHODIMP _MYCLASS_::SetAffineTranslationMaxVels(IVectorF *vels)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationAxisMaxVels (in IVectorF vels); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationAxisMaxVels(IVectorF *vels)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotation3DMaxVels (in IVectorF vels); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotation3DMaxVels(IVectorF *vels)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationQuatMaxVels (in float vels); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationQuatMaxVels(float vels)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineTranslationResolution (in IVectorF resolution); */
NS_IMETHODIMP _MYCLASS_::SetAffineTranslationResolution(IVectorF *resolution)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationAxisResolution (in IVectorF resolution); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationAxisResolution(IVectorF *resolution)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotation3DResolution (in IVectorF resolution); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotation3DResolution(IVectorF *resolution)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationQuatResolution (in float resolution); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationQuatResolution(float resolution)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineTranslationWeights (in IVectorF weights); */
NS_IMETHODIMP _MYCLASS_::SetAffineTranslationWeights(IVectorF *weights)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationAxisWeights (in IVectorF weights); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationAxisWeights(IVectorF *weights)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotation3DWeights (in IVectorF weights); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotation3DWeights(IVectorF *weights)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAffineRotationQuatWeights (in float weights); */
NS_IMETHODIMP _MYCLASS_::SetAffineRotationQuatWeights(float weights)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAffineTranslationLimits (out IVectorF lower, out IVectorF upper); */
NS_IMETHODIMP _MYCLASS_::GetAffineTranslationLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAffineRotationAxisLimits (out IVectorF lower, out IVectorF upper); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationAxisLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAffineRotation3DLimits (out IVectorF lower, out IVectorF upper); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotation3DLimits(IVectorF **lower NS_OUTPARAM, IVectorF **upper NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotationQuatLimits (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationQuatLimits(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineTranslationMaxVels (); */
NS_IMETHODIMP _MYCLASS_::GetAffineTranslationMaxVels(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotationAxisMaxVels (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationAxisMaxVels(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotation3DMaxVels (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotation3DMaxVels(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetAffineRotationQuatMaxVels (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationQuatMaxVels(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineTranslationResolution (); */
NS_IMETHODIMP _MYCLASS_::GetAffineTranslationResolution(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotationAxisResolution (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationAxisResolution(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotation3DResolution (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotation3DResolution(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetAffineRotationQuatResolution (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationQuatResolution(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineTranslationWeights (); */
NS_IMETHODIMP _MYCLASS_::GetAffineTranslationWeights(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotationAxisWeights (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationAxisWeights(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAffineRotation3DWeights (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotation3DWeights(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetAffineRotationQuatWeights (); */
NS_IMETHODIMP _MYCLASS_::GetAffineRotationQuatWeights(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetActiveDOFValues (in unsigned long count, [array, size_is (count)] in float v, in unsigned long checklimits); */
NS_IMETHODIMP _MYCLASS_::SetActiveDOFValues(PRUint32 count, float *v, PRUint32 checklimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFValues (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFValues(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetActiveDOFVelocities (in unsigned long count, [array, size_is (count)] in float v, in unsigned long checklimits); */
NS_IMETHODIMP _MYCLASS_::SetActiveDOFVelocities(PRUint32 count, float *v, PRUint32 checklimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFVelocities (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFVelocities(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFLimits (out unsigned long lowerCount, [array, size_is (lowerCount)] out float lower, out unsigned long upperCount, [array, size_is (upperCount)] out float upper); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFLimits(PRUint32 *lowerCount NS_OUTPARAM, float **lower NS_OUTPARAM, PRUint32 *upperCount NS_OUTPARAM, float **upper NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFResolutions (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFResolutions(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFWeights (out unsigned long count, [array, size_is (count)] out float vv); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFWeights(PRUint32 *count NS_OUTPARAM, float **vv NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFVelocityLimits (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFVelocityLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFAccelerationLimits (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFAccelerationLimits(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFMaxVel (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFMaxVel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetActiveDOFMaxAccel (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetActiveDOFMaxAccel(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SubtractActiveDOFValues (out unsigned long q1Count, [array, size_is (q1Count)] out float q1, out unsigned long q2Count, [array, size_is (q2Count)] out float q2); */
NS_IMETHODIMP _MYCLASS_::SubtractActiveDOFValues(PRUint32 *q1Count NS_OUTPARAM, float **q1 NS_OUTPARAM, PRUint32 *q2Count NS_OUTPARAM, float **q2 NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotManipulator SetActiveManipulator1 (in string manipname); */
NS_IMETHODIMP _MYCLASS_::SetActiveManipulator1(const char *manipname, IRobotManipulator **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetActiveManipulator2 (in IRobotManipulator pmanip); */
NS_IMETHODIMP _MYCLASS_::SetActiveManipulator2(IRobotManipulator *pmanip)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotManipulator GetActiveManipulator (); */
NS_IMETHODIMP _MYCLASS_::GetActiveManipulator(IRobotManipulator **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotManipulator AddManipulator (in IRobotManipulatorInfo manipinfo); */
NS_IMETHODIMP _MYCLASS_::AddManipulator(IRobotManipulatorInfo *manipinfo, IRobotManipulator **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RemoveManipulator (in IRobotManipulator manip); */
NS_IMETHODIMP _MYCLASS_::RemoveManipulator(IRobotManipulator *manip)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateActiveJacobian (in long index, in IVectorF offset, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateActiveJacobian(PRInt32 index, IVectorF *offset, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateActiveRotationJacobian (in long index, in IVectorF qInitialRot, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateActiveRotationJacobian(PRInt32 index, IVectorF *qInitialRot, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateActiveAngularVelocityJacobian (in long index, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateActiveAngularVelocityJacobian(PRInt32 index, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Grab1 (in IKinBody body, in IKinBodyLink pRobotLinkToGrabWith, in unsigned long setRobotLinksToIgnoreCount, [array, size_is (setRobotLinksToIgnoreCount)] in long setRobotLinksToIgnore); */
NS_IMETHODIMP _MYCLASS_::Grab1(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Grab2 (in IKinBody body, in IKinBodyLink pRobotLinkToGrabWith); */
NS_IMETHODIMP _MYCLASS_::Grab2(IKinBody *body, IKinBodyLink *pRobotLinkToGrabWith, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Grab3 (in IKinBody body, in unsigned long setRobotLinksToIgnoreCount, [array, size_is (setRobotLinksToIgnoreCount)] in long setRobotLinksToIgnore); */
NS_IMETHODIMP _MYCLASS_::Grab3(IKinBody *body, PRUint32 setRobotLinksToIgnoreCount, PRInt32 *setRobotLinksToIgnore, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Grab4 (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::Grab4(IKinBody *body, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ReleaseRobot (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::ReleaseRobot(IKinBody *body)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ReleaseAllGrabbed (); */
NS_IMETHODIMP _MYCLASS_::ReleaseAllGrabbed()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RegrabAll (); */
NS_IMETHODIMP _MYCLASS_::RegrabAll()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink IsGrabbing (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::IsGrabbing(IKinBody *body, IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetGrabbed (out unsigned long vbodiesCount, [array, size_is (vbodiesCount)] out IKinBody vbodies); */
NS_IMETHODIMP _MYCLASS_::GetGrabbed(PRUint32 *vbodiesCount NS_OUTPARAM, IKinBody ***vbodies NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetGrabbedInfo (out unsigned long vgrabbedinfoCount, [array, size_is (vgrabbedinfoCount)] out IRobotGrabbedInfo vgrabbedinfo); */
NS_IMETHODIMP _MYCLASS_::GetGrabbedInfo(PRUint32 *vgrabbedinfoCount NS_OUTPARAM, IRobotGrabbedInfo ***vgrabbedinfo NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ResetGrabbed (in unsigned long vgrabbedinfoCount, [array, size_is (vgrabbedinfoCount)] in IRobotGrabbedInfo vgrabbedinfo); */
NS_IMETHODIMP _MYCLASS_::ResetGrabbed(PRUint32 vgrabbedinfoCount, IRobotGrabbedInfo **vgrabbedinfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetIgnoredLinksOfGrabbed (in IKinBody body, out unsigned long ignorelinksCount, [array, size_is (ignorelinksCount)] out IKinBodyLink ignorelinks); */
NS_IMETHODIMP _MYCLASS_::GetIgnoredLinksOfGrabbed(IKinBody *body, PRUint32 *ignorelinksCount NS_OUTPARAM, IKinBodyLink ***ignorelinks NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckLinkCollision (in long IKinBodyLinkindex, in ITransformF tlinktrans, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckLinkCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckLinkSelfCollision (in long IKinBodyLinkindex, in ITransformF tlinktrans, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckLinkSelfCollision(PRInt32 IKinBodyLinkindex, ITransformF *tlinktrans, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetRobotStructureHash (); */
NS_IMETHODIMP _MYCLASS_::GetRobotStructureHash(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IControllerBase GetController (); */
NS_IMETHODIMP _MYCLASS_::GetController(IControllerBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetController (in IControllerBase controller, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices, in long nControlTransformation); */
NS_IMETHODIMP _MYCLASS_::SetController(IControllerBase *controller, PRUint32 dofindicesCount, PRInt32 *dofindices, PRInt32 nControlTransformation, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_robot_h__ */
