/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/environment.idl
 */

#ifndef __gen_environment_h__
#define __gen_environment_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ICallbackCollision */
#define ICALLBACKCOLLISION_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKCOLLISION_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackCollision : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKCOLLISION_IID)

  /* long Invoke (in ICollisionReport report, in boolean collided); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(ICollisionReport *report, PRBool collided, PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackCollision, ICALLBACKCOLLISION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKCOLLISION \
  NS_SCRIPTABLE NS_IMETHOD Invoke(ICollisionReport *report, PRBool collided, PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKCOLLISION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(ICollisionReport *report, PRBool collided, PRInt32 *_retval NS_OUTPARAM) { return _to Invoke(report, collided, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKCOLLISION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(ICollisionReport *report, PRBool collided, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(report, collided, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackCollision
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKCOLLISION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackCollision)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long Invoke (in ICollisionReport report, in boolean collided); */
NS_IMETHODIMP _MYCLASS_::Invoke(ICollisionReport *report, PRBool collided, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IEnvironmentMutex */
#define IENVIRONMENTMUTEX_IID_STR "00000000-0000-0000-0000-000000000000"

#define IENVIRONMENTMUTEX_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IEnvironmentMutex : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IENVIRONMENTMUTEX_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IEnvironmentMutex, IENVIRONMENTMUTEX_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IENVIRONMENTMUTEX \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IENVIRONMENTMUTEX(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IENVIRONMENTMUTEX(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IEnvironmentMutex
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IENVIRONMENTMUTEX

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IEnvironmentMutex)

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


/* starting interface:    IEnvironmentBase */
#define IENVIRONMENTBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IENVIRONMENTBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IEnvironmentBase : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IENVIRONMENTBASE_IID)

  /* void Destroy (); */
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) = 0;

  /* void Reset (); */
  NS_SCRIPTABLE NS_IMETHOD Reset(void) = 0;

  /* void SetUserData (in IUserData data); */
  NS_SCRIPTABLE NS_IMETHOD SetUserData(IUserData *data) = 0;

  /* IUserData GetUserData (); */
  NS_SCRIPTABLE NS_IMETHOD GetUserData(IUserData **_retval NS_OUTPARAM) = 0;

  /* IUserData GlobalState (); */
  NS_SCRIPTABLE NS_IMETHOD GlobalState(IUserData **_retval NS_OUTPARAM) = 0;

  /* void OwnInterface (in IInterfaceBase pinterface); */
  NS_SCRIPTABLE NS_IMETHOD OwnInterface(IInterfaceBase *pinterface) = 0;

  /* void DisownInterface (in IInterfaceBase pinterface); */
  NS_SCRIPTABLE NS_IMETHOD DisownInterface(IInterfaceBase *pinterface) = 0;

  /* IEnvironmentBase CloneSelf (in long options); */
  NS_SCRIPTABLE NS_IMETHOD CloneSelf(PRInt32 options, IEnvironmentBase **_retval NS_OUTPARAM) = 0;

  /* void Clone (in IEnvironmentBase preference, in long cloningoptions); */
  NS_SCRIPTABLE NS_IMETHOD Clone(IEnvironmentBase *preference, PRInt32 cloningoptions) = 0;

  /* boolean SetCollisionChecker (in ICollisionCheckerBase pchecker); */
  NS_SCRIPTABLE NS_IMETHOD SetCollisionChecker(ICollisionCheckerBase *pchecker, PRBool *_retval NS_OUTPARAM) = 0;

  /* ICollisionCheckerBase GetCollisionChecker (); */
  NS_SCRIPTABLE NS_IMETHOD GetCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision1 (in IKinBody pbody1, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision1(IKinBody *pbody1, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision2 (in IKinBody pbody1, in IKinBody pbody2, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision2(IKinBody *pbody1, IKinBody *pbody2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision3 (in IKinBodyLink plink, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision3(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision4 (in IKinBodyLink plink1, in IKinBodyLink plink2, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision4(IKinBodyLink *plink1, IKinBodyLink *plink2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision5 (in IKinBodyLink plink, in IKinBody pbody, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision5(IKinBodyLink *plink, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision6 (in IKinBodyLink plink, in unsigned long vbodyexcludedcount, [array, size_is (vbodyexcludedcount)] in IKinBody vbodyexcluded, in unsigned long vlinkexcludedcount, [array, size_is (vlinkexcludedcount)] in IKinBodyLink vlinkexcluded, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision6(IKinBodyLink *plink, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision7 (in IKinBody pbody, in unsigned long vbodyexcludedcount, [array, size_is (vbodyexcludedcount)] in IKinBody vbodyexcluded, in unsigned long vlinkexcludedcount, [array, size_is (vlinkexcludedcount)] in IKinBodyLink vlinkexcluded, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision7(IKinBody *pbody, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision8 (in IRayF ray, in IKinBodyLink plink, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision8(IRayF *ray, IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision9 (in IRayF ray, in IKinBody pbody, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision9(IRayF *ray, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckCollision10 (in IRayF ray, in ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckCollision10(IRayF *ray, ICollisionReport *report, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckStandaloneSelfCollision (in IKinBody pbody, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* IUserData RegisterCollisionCallback (in ICallbackCollision callback); */
  NS_SCRIPTABLE NS_IMETHOD RegisterCollisionCallback(ICallbackCollision *callback, IUserData **_retval NS_OUTPARAM) = 0;

  /* boolean HasRegisteredCollisionCallbacks (); */
  NS_SCRIPTABLE NS_IMETHOD HasRegisteredCollisionCallbacks(PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetRegisteredCollisionCallbacks (out unsigned long count, [array, size_is (count)] out ICallbackCollision functions); */
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredCollisionCallbacks(PRUint32 *count NS_OUTPARAM, ICallbackCollision ***functions NS_OUTPARAM) = 0;

  /* boolean SetPhysicsEngine (in IPhysicsEngineBase physics); */
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsEngine(IPhysicsEngineBase *physics, PRBool *_retval NS_OUTPARAM) = 0;

  /* IPhysicsEngineBase GetPhysicsEngine (); */
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsEngine(IPhysicsEngineBase **_retval NS_OUTPARAM) = 0;

  /* void StepSimulation (in float timeStep); */
  NS_SCRIPTABLE NS_IMETHOD StepSimulation(float timeStep) = 0;

  /* void StartSimulation (in float fDeltaTime, in boolean bRealTime); */
  NS_SCRIPTABLE NS_IMETHOD StartSimulation(float fDeltaTime, PRBool bRealTime) = 0;

  /* void StopSimulation (); */
  NS_SCRIPTABLE NS_IMETHOD StopSimulation(void) = 0;

  /* boolean IsSimulationRunning (); */
  NS_SCRIPTABLE NS_IMETHOD IsSimulationRunning(PRBool *_retval NS_OUTPARAM) = 0;

  /* unsigned long long GetSimulationTime (); */
  NS_SCRIPTABLE NS_IMETHOD GetSimulationTime(PRUint64 *_retval NS_OUTPARAM) = 0;

  /* boolean Load (in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD Load(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean LoadURI (in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD LoadURI(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean LoadData (in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD LoadData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean LoadXMLData (in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD LoadXMLData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) = 0;

  /* void Save (in string filename, in long options, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD Save(const char *filename, PRInt32 options, nsIProperties *atts) = 0;

  /* IRobotBase ReadRobotURI1 (in IRobotBase robot, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) = 0;

  /* IRobotBase ReadRobotXMLFile1 (in IRobotBase robot, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) = 0;

  /* IRobotBase ReadRobotURI2 (in string filename); */
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI2(const char *filename, IRobotBase **_retval NS_OUTPARAM) = 0;

  /* IRobotBase ReadRobotXMLFile2 (in string filename); */
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile2(const char *filename, IRobotBase **_retval NS_OUTPARAM) = 0;

  /* IRobotBase ReadRobotData3 (in IRobotBase robot, in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadRobotData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) = 0;

  /* IRobotBase ReadRobotXMLData3 (in IRobotBase robot, in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) = 0;

  /* IKinBody ReadKinBodyURI1 (in IKinBody body, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) = 0;

  /* IKinBody ReadKinBodyXMLFile1 (in IKinBody body, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) = 0;

  /* IKinBody ReadKinBodyURI2 (in string filename); */
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI2(const char *filename, IKinBody **_retval NS_OUTPARAM) = 0;

  /* IKinBody ReadKinBodyXMLFile2 (in string filename); */
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile2(const char *filename, IKinBody **_retval NS_OUTPARAM) = 0;

  /* IKinBody ReadKinBodyData3 (in IKinBody body, in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) = 0;

  /* IKinBody ReadKinBodyXMLData3 (in IKinBody body, in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) = 0;

  /* IInterfaceBase ReadInterfaceURI1 (in IInterfaceBase pinterface, in long type, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) = 0;

  /* IInterfaceBase ReadInterfaceXMLFile1 (in IInterfaceBase pinterface, in long type, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) = 0;

  /* IInterfaceBase ReadInterfaceURI2 (in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) = 0;

  /* IInterfaceBase ReadInterfaceXMLFile2 (in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) = 0;

  /* IInterfaceBase ReadInterfaceData3 (in IInterfaceBase pinterface, in long type, in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) = 0;

  /* IInterfaceBase ReadInterfaceXMLData3 (in IInterfaceBase pinterface, in long type, in string data, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) = 0;

  /* ITriMesh ReadTrimeshURI (in ITriMesh ptrimesh, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshURI(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM) = 0;

  /* ITriMesh ReadTrimeshFile (in ITriMesh ptrimesh, in string filename, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshFile(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM) = 0;

  /* void Add (in IInterfaceBase pinterface, in boolean bAnonymous, in string cmdargs); */
  NS_SCRIPTABLE NS_IMETHOD Add(IInterfaceBase *pinterface, PRBool bAnonymous, const char *cmdargs) = 0;

  /* void GetSensors (out unsigned long count, [array, size_is (count)] out ISensorBase sensors, in unsigned long long timeout); */
  NS_SCRIPTABLE NS_IMETHOD GetSensors(PRUint32 *count NS_OUTPARAM, ISensorBase ***sensors NS_OUTPARAM, PRUint64 timeout) = 0;

  /* boolean Remove (in IInterfaceBase obj); */
  NS_SCRIPTABLE NS_IMETHOD Remove(IInterfaceBase *obj, PRBool *_retval NS_OUTPARAM) = 0;

  /* IKinBody GetKinBody (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetKinBody(const char *name, IKinBody **_retval NS_OUTPARAM) = 0;

  /* ISensorBase GetSensor (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetSensor(const char *name, ISensorBase **_retval NS_OUTPARAM) = 0;

  /* IRobotBase GetRobot (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetRobot(const char *name, IRobotBase **_retval NS_OUTPARAM) = 0;

  /* void GetBodies (out unsigned long count, [array, size_is (count)] out IKinBody bodies, in unsigned long long timeout); */
  NS_SCRIPTABLE NS_IMETHOD GetBodies(PRUint32 *count NS_OUTPARAM, IKinBody ***bodies NS_OUTPARAM, PRUint64 timeout) = 0;

  /* void GetRobots (out unsigned long count, [array, size_is (count)] out IRobotBase robots, in unsigned long long timeout); */
  NS_SCRIPTABLE NS_IMETHOD GetRobots(PRUint32 *count NS_OUTPARAM, IRobotBase ***robots NS_OUTPARAM, PRUint64 timeout) = 0;

  /* void GetPublishedBodies (out unsigned long count, [array, size_is (count)] out IKinBodyState vbodies, in unsigned long long timeout); */
  NS_SCRIPTABLE NS_IMETHOD GetPublishedBodies(PRUint32 *count NS_OUTPARAM, IKinBodyState ***vbodies NS_OUTPARAM, PRUint64 timeout) = 0;

  /* void UpdatePublishedBodies (in unsigned long long timeout); */
  NS_SCRIPTABLE NS_IMETHOD UpdatePublishedBodies(PRUint64 timeout) = 0;

  /* IKinBody GetBodyFromEnvironmentId (in long id); */
  NS_SCRIPTABLE NS_IMETHOD GetBodyFromEnvironmentId(PRInt32 id, IKinBody **_retval NS_OUTPARAM) = 0;

  /* void Triangulate (out ITriMesh trimesh, in IKinBody pbody); */
  NS_SCRIPTABLE NS_IMETHOD Triangulate(ITriMesh **trimesh NS_OUTPARAM, IKinBody *pbody) = 0;

  /* void TriangulateScene (out ITriMesh trimesh, in long options, in string selectname); */
  NS_SCRIPTABLE NS_IMETHOD TriangulateScene(ITriMesh **trimesh NS_OUTPARAM, PRInt32 options, const char *selectname) = 0;

  /* long AddModule (in IModuleBase mod, in string cmdargs); */
  NS_SCRIPTABLE NS_IMETHOD AddModule(IModuleBase *mod, const char *cmdargs, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void GetModules (out unsigned long count, [array, size_is (count)] out IModuleBase listModules, in unsigned long long timeout); */
  NS_SCRIPTABLE NS_IMETHOD GetModules(PRUint32 *count NS_OUTPARAM, IModuleBase ***listModules NS_OUTPARAM, PRUint64 timeout) = 0;

  /* IEnvironmentMutex GetMutex (); */
  NS_SCRIPTABLE NS_IMETHOD GetMutex(IEnvironmentMutex **_retval NS_OUTPARAM) = 0;

  /* IViewerBase GetViewer (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetViewer(const char *name, IViewerBase **_retval NS_OUTPARAM) = 0;

  /* void GetViewers (out unsigned long count, [array, size_is (count)] out IViewerBase listViewers); */
  NS_SCRIPTABLE NS_IMETHOD GetViewers(PRUint32 *count NS_OUTPARAM, IViewerBase ***listViewers NS_OUTPARAM) = 0;

  /* IGraphHandle plot3a ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fPointSize, in IVectorF color, in long drawstyle); */
  NS_SCRIPTABLE NS_IMETHOD Plot3a(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, IVectorF *color, PRInt32 drawstyle, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle plot3b ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fPointSize, [array, size_is (colorscount)] in float colors, in unsigned long colorscount, in long drawstyle, in boolean bhasalpha); */
  NS_SCRIPTABLE NS_IMETHOD Plot3b(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, float *colors, PRUint32 colorscount, PRInt32 drawstyle, PRBool bhasalpha, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawlinestripa ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, in IVectorF color); */
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripa(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawlinestripb ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, [array, size_is (colorscount)] in float colors, in unsigned long colorscount); */
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawlinelista ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, in IVectorF color); */
  NS_SCRIPTABLE NS_IMETHOD Drawlinelista(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawlinelistb ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, [array, size_is (colorscount)] in float colors, in unsigned long colorscount); */
  NS_SCRIPTABLE NS_IMETHOD Drawlinelistb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawarrow (in IVectorF p1, in IVectorF p2, in float fwidth, in IVectorF color); */
  NS_SCRIPTABLE NS_IMETHOD Drawarrow(IVectorF *p1, IVectorF *p2, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawbox (in IVectorF vpos, in IVectorF vextents); */
  NS_SCRIPTABLE NS_IMETHOD Drawbox(IVectorF *vpos, IVectorF *vextents, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawplane (in ITransformF tplane, in IVectorF vextents, [array, size_is (vtexturecount)] in float vtexture, in unsigned long vtexturecount); */
  NS_SCRIPTABLE NS_IMETHOD Drawplane(ITransformF *tplane, IVectorF *vextents, float *vtexture, PRUint32 vtexturecount, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawtrimesha ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, [array, size_is (indicescount)] in long pIndices, in unsigned long indicescount, in IVectorF color); */
  NS_SCRIPTABLE NS_IMETHOD Drawtrimesha(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) = 0;

  /* IGraphHandle drawtrimeshb ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, [array, size_is (indicescount)] in long pIndices, in unsigned long indicescount, [array, size_is (colorscount)] in float colors, in unsigned long colorscount); */
  NS_SCRIPTABLE NS_IMETHOD Drawtrimeshb(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IEnvironmentBase, IENVIRONMENTBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IENVIRONMENTBASE \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void); \
  NS_SCRIPTABLE NS_IMETHOD Reset(void); \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(IUserData *data); \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GlobalState(IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OwnInterface(IInterfaceBase *pinterface); \
  NS_SCRIPTABLE NS_IMETHOD DisownInterface(IInterfaceBase *pinterface); \
  NS_SCRIPTABLE NS_IMETHOD CloneSelf(PRInt32 options, IEnvironmentBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Clone(IEnvironmentBase *preference, PRInt32 cloningoptions); \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionChecker(ICollisionCheckerBase *pchecker, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision1(IKinBody *pbody1, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision2(IKinBody *pbody1, IKinBody *pbody2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision3(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision4(IKinBodyLink *plink1, IKinBodyLink *plink2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision5(IKinBodyLink *plink, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision6(IKinBodyLink *plink, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision7(IKinBody *pbody, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision8(IRayF *ray, IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision9(IRayF *ray, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision10(IRayF *ray, ICollisionReport *report, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterCollisionCallback(ICallbackCollision *callback, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasRegisteredCollisionCallbacks(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredCollisionCallbacks(PRUint32 *count NS_OUTPARAM, ICallbackCollision ***functions NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsEngine(IPhysicsEngineBase *physics, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsEngine(IPhysicsEngineBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD StepSimulation(float timeStep); \
  NS_SCRIPTABLE NS_IMETHOD StartSimulation(float fDeltaTime, PRBool bRealTime); \
  NS_SCRIPTABLE NS_IMETHOD StopSimulation(void); \
  NS_SCRIPTABLE NS_IMETHOD IsSimulationRunning(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSimulationTime(PRUint64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Load(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LoadURI(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LoadData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LoadXMLData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Save(const char *filename, PRInt32 options, nsIProperties *atts); \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI2(const char *filename, IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile2(const char *filename, IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI2(const char *filename, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile2(const char *filename, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshURI(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshFile(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Add(IInterfaceBase *pinterface, PRBool bAnonymous, const char *cmdargs); \
  NS_SCRIPTABLE NS_IMETHOD GetSensors(PRUint32 *count NS_OUTPARAM, ISensorBase ***sensors NS_OUTPARAM, PRUint64 timeout); \
  NS_SCRIPTABLE NS_IMETHOD Remove(IInterfaceBase *obj, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetKinBody(const char *name, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSensor(const char *name, ISensorBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(const char *name, IRobotBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBodies(PRUint32 *count NS_OUTPARAM, IKinBody ***bodies NS_OUTPARAM, PRUint64 timeout); \
  NS_SCRIPTABLE NS_IMETHOD GetRobots(PRUint32 *count NS_OUTPARAM, IRobotBase ***robots NS_OUTPARAM, PRUint64 timeout); \
  NS_SCRIPTABLE NS_IMETHOD GetPublishedBodies(PRUint32 *count NS_OUTPARAM, IKinBodyState ***vbodies NS_OUTPARAM, PRUint64 timeout); \
  NS_SCRIPTABLE NS_IMETHOD UpdatePublishedBodies(PRUint64 timeout); \
  NS_SCRIPTABLE NS_IMETHOD GetBodyFromEnvironmentId(PRInt32 id, IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Triangulate(ITriMesh **trimesh NS_OUTPARAM, IKinBody *pbody); \
  NS_SCRIPTABLE NS_IMETHOD TriangulateScene(ITriMesh **trimesh NS_OUTPARAM, PRInt32 options, const char *selectname); \
  NS_SCRIPTABLE NS_IMETHOD AddModule(IModuleBase *mod, const char *cmdargs, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetModules(PRUint32 *count NS_OUTPARAM, IModuleBase ***listModules NS_OUTPARAM, PRUint64 timeout); \
  NS_SCRIPTABLE NS_IMETHOD GetMutex(IEnvironmentMutex **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetViewer(const char *name, IViewerBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetViewers(PRUint32 *count NS_OUTPARAM, IViewerBase ***listViewers NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Plot3a(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, IVectorF *color, PRInt32 drawstyle, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Plot3b(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, float *colors, PRUint32 colorscount, PRInt32 drawstyle, PRBool bhasalpha, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripa(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawlinelista(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawlinelistb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawarrow(IVectorF *p1, IVectorF *p2, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawbox(IVectorF *vpos, IVectorF *vextents, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawplane(ITransformF *tplane, IVectorF *vextents, float *vtexture, PRUint32 vtexturecount, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawtrimesha(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drawtrimeshb(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IENVIRONMENTBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return _to Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return _to Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(IUserData *data) { return _to SetUserData(data); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(IUserData **_retval NS_OUTPARAM) { return _to GetUserData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GlobalState(IUserData **_retval NS_OUTPARAM) { return _to GlobalState(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD OwnInterface(IInterfaceBase *pinterface) { return _to OwnInterface(pinterface); } \
  NS_SCRIPTABLE NS_IMETHOD DisownInterface(IInterfaceBase *pinterface) { return _to DisownInterface(pinterface); } \
  NS_SCRIPTABLE NS_IMETHOD CloneSelf(PRInt32 options, IEnvironmentBase **_retval NS_OUTPARAM) { return _to CloneSelf(options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(IEnvironmentBase *preference, PRInt32 cloningoptions) { return _to Clone(preference, cloningoptions); } \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionChecker(ICollisionCheckerBase *pchecker, PRBool *_retval NS_OUTPARAM) { return _to SetCollisionChecker(pchecker, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM) { return _to GetCollisionChecker(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision1(IKinBody *pbody1, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision1(pbody1, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision2(IKinBody *pbody1, IKinBody *pbody2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision2(pbody1, pbody2, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision3(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision3(plink, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision4(IKinBodyLink *plink1, IKinBodyLink *plink2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision4(plink1, plink2, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision5(IKinBodyLink *plink, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision5(plink, pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision6(IKinBodyLink *plink, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision6(plink, vbodyexcludedcount, vbodyexcluded, vlinkexcludedcount, vlinkexcluded, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision7(IKinBody *pbody, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision7(pbody, vbodyexcludedcount, vbodyexcluded, vlinkexcludedcount, vlinkexcluded, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision8(IRayF *ray, IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision8(ray, plink, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision9(IRayF *ray, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision9(ray, pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision10(IRayF *ray, ICollisionReport *report, PRBool *_retval NS_OUTPARAM) { return _to CheckCollision10(ray, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckStandaloneSelfCollision(pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterCollisionCallback(ICallbackCollision *callback, IUserData **_retval NS_OUTPARAM) { return _to RegisterCollisionCallback(callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasRegisteredCollisionCallbacks(PRBool *_retval NS_OUTPARAM) { return _to HasRegisteredCollisionCallbacks(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredCollisionCallbacks(PRUint32 *count NS_OUTPARAM, ICallbackCollision ***functions NS_OUTPARAM) { return _to GetRegisteredCollisionCallbacks(count, functions); } \
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsEngine(IPhysicsEngineBase *physics, PRBool *_retval NS_OUTPARAM) { return _to SetPhysicsEngine(physics, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsEngine(IPhysicsEngineBase **_retval NS_OUTPARAM) { return _to GetPhysicsEngine(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD StepSimulation(float timeStep) { return _to StepSimulation(timeStep); } \
  NS_SCRIPTABLE NS_IMETHOD StartSimulation(float fDeltaTime, PRBool bRealTime) { return _to StartSimulation(fDeltaTime, bRealTime); } \
  NS_SCRIPTABLE NS_IMETHOD StopSimulation(void) { return _to StopSimulation(); } \
  NS_SCRIPTABLE NS_IMETHOD IsSimulationRunning(PRBool *_retval NS_OUTPARAM) { return _to IsSimulationRunning(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSimulationTime(PRUint64 *_retval NS_OUTPARAM) { return _to GetSimulationTime(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Load(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return _to Load(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadURI(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return _to LoadURI(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return _to LoadData(data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadXMLData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return _to LoadXMLData(data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Save(const char *filename, PRInt32 options, nsIProperties *atts) { return _to Save(filename, options, atts); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return _to ReadRobotURI1(robot, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return _to ReadRobotXMLFile1(robot, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI2(const char *filename, IRobotBase **_retval NS_OUTPARAM) { return _to ReadRobotURI2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile2(const char *filename, IRobotBase **_retval NS_OUTPARAM) { return _to ReadRobotXMLFile2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return _to ReadRobotData3(robot, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return _to ReadRobotXMLData3(robot, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return _to ReadKinBodyURI1(body, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return _to ReadKinBodyXMLFile1(body, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI2(const char *filename, IKinBody **_retval NS_OUTPARAM) { return _to ReadKinBodyURI2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile2(const char *filename, IKinBody **_retval NS_OUTPARAM) { return _to ReadKinBodyXMLFile2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return _to ReadKinBodyData3(body, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return _to ReadKinBodyXMLData3(body, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return _to ReadInterfaceURI1(pinterface, type, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return _to ReadInterfaceXMLFile1(pinterface, type, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return _to ReadInterfaceURI2(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return _to ReadInterfaceXMLFile2(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return _to ReadInterfaceData3(pinterface, type, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return _to ReadInterfaceXMLData3(pinterface, type, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshURI(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM) { return _to ReadTrimeshURI(ptrimesh, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshFile(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM) { return _to ReadTrimeshFile(ptrimesh, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Add(IInterfaceBase *pinterface, PRBool bAnonymous, const char *cmdargs) { return _to Add(pinterface, bAnonymous, cmdargs); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensors(PRUint32 *count NS_OUTPARAM, ISensorBase ***sensors NS_OUTPARAM, PRUint64 timeout) { return _to GetSensors(count, sensors, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(IInterfaceBase *obj, PRBool *_retval NS_OUTPARAM) { return _to Remove(obj, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKinBody(const char *name, IKinBody **_retval NS_OUTPARAM) { return _to GetKinBody(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensor(const char *name, ISensorBase **_retval NS_OUTPARAM) { return _to GetSensor(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(const char *name, IRobotBase **_retval NS_OUTPARAM) { return _to GetRobot(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBodies(PRUint32 *count NS_OUTPARAM, IKinBody ***bodies NS_OUTPARAM, PRUint64 timeout) { return _to GetBodies(count, bodies, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobots(PRUint32 *count NS_OUTPARAM, IRobotBase ***robots NS_OUTPARAM, PRUint64 timeout) { return _to GetRobots(count, robots, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetPublishedBodies(PRUint32 *count NS_OUTPARAM, IKinBodyState ***vbodies NS_OUTPARAM, PRUint64 timeout) { return _to GetPublishedBodies(count, vbodies, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD UpdatePublishedBodies(PRUint64 timeout) { return _to UpdatePublishedBodies(timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetBodyFromEnvironmentId(PRInt32 id, IKinBody **_retval NS_OUTPARAM) { return _to GetBodyFromEnvironmentId(id, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Triangulate(ITriMesh **trimesh NS_OUTPARAM, IKinBody *pbody) { return _to Triangulate(trimesh, pbody); } \
  NS_SCRIPTABLE NS_IMETHOD TriangulateScene(ITriMesh **trimesh NS_OUTPARAM, PRInt32 options, const char *selectname) { return _to TriangulateScene(trimesh, options, selectname); } \
  NS_SCRIPTABLE NS_IMETHOD AddModule(IModuleBase *mod, const char *cmdargs, PRInt32 *_retval NS_OUTPARAM) { return _to AddModule(mod, cmdargs, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetModules(PRUint32 *count NS_OUTPARAM, IModuleBase ***listModules NS_OUTPARAM, PRUint64 timeout) { return _to GetModules(count, listModules, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetMutex(IEnvironmentMutex **_retval NS_OUTPARAM) { return _to GetMutex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewer(const char *name, IViewerBase **_retval NS_OUTPARAM) { return _to GetViewer(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewers(PRUint32 *count NS_OUTPARAM, IViewerBase ***listViewers NS_OUTPARAM) { return _to GetViewers(count, listViewers); } \
  NS_SCRIPTABLE NS_IMETHOD Plot3a(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, IVectorF *color, PRInt32 drawstyle, IGraphHandle **_retval NS_OUTPARAM) { return _to Plot3a(ppoints, numPoints, stride, fPointSize, color, drawstyle, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Plot3b(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, float *colors, PRUint32 colorscount, PRInt32 drawstyle, PRBool bhasalpha, IGraphHandle **_retval NS_OUTPARAM) { return _to Plot3b(ppoints, numPoints, stride, fPointSize, colors, colorscount, drawstyle, bhasalpha, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripa(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawlinestripa(ppoints, numPoints, stride, fwidth, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawlinestripb(ppoints, numPoints, stride, fwidth, colors, colorscount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinelista(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawlinelista(ppoints, numPoints, stride, fwidth, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinelistb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawlinelistb(ppoints, numPoints, stride, fwidth, colors, colorscount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawarrow(IVectorF *p1, IVectorF *p2, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawarrow(p1, p2, fwidth, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawbox(IVectorF *vpos, IVectorF *vextents, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawbox(vpos, vextents, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawplane(ITransformF *tplane, IVectorF *vextents, float *vtexture, PRUint32 vtexturecount, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawplane(tplane, vextents, vtexture, vtexturecount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawtrimesha(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawtrimesha(ppoints, numPoints, stride, pIndices, indicescount, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawtrimeshb(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) { return _to Drawtrimeshb(ppoints, numPoints, stride, pIndices, indicescount, colors, colorscount, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IENVIRONMENTBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(IUserData *data) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserData(data); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GlobalState(IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GlobalState(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD OwnInterface(IInterfaceBase *pinterface) { return !_to ? NS_ERROR_NULL_POINTER : _to->OwnInterface(pinterface); } \
  NS_SCRIPTABLE NS_IMETHOD DisownInterface(IInterfaceBase *pinterface) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisownInterface(pinterface); } \
  NS_SCRIPTABLE NS_IMETHOD CloneSelf(PRInt32 options, IEnvironmentBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneSelf(options, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(IEnvironmentBase *preference, PRInt32 cloningoptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(preference, cloningoptions); } \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionChecker(ICollisionCheckerBase *pchecker, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCollisionChecker(pchecker, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCollisionChecker(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision1(IKinBody *pbody1, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision1(pbody1, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision2(IKinBody *pbody1, IKinBody *pbody2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision2(pbody1, pbody2, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision3(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision3(plink, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision4(IKinBodyLink *plink1, IKinBodyLink *plink2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision4(plink1, plink2, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision5(IKinBodyLink *plink, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision5(plink, pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision6(IKinBodyLink *plink, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision6(plink, vbodyexcludedcount, vbodyexcluded, vlinkexcludedcount, vlinkexcluded, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision7(IKinBody *pbody, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision7(pbody, vbodyexcludedcount, vbodyexcluded, vlinkexcludedcount, vlinkexcluded, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision8(IRayF *ray, IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision8(ray, plink, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision9(IRayF *ray, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision9(ray, pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckCollision10(IRayF *ray, ICollisionReport *report, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCollision10(ray, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckStandaloneSelfCollision(pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterCollisionCallback(ICallbackCollision *callback, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterCollisionCallback(callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasRegisteredCollisionCallbacks(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasRegisteredCollisionCallbacks(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRegisteredCollisionCallbacks(PRUint32 *count NS_OUTPARAM, ICallbackCollision ***functions NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRegisteredCollisionCallbacks(count, functions); } \
  NS_SCRIPTABLE NS_IMETHOD SetPhysicsEngine(IPhysicsEngineBase *physics, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPhysicsEngine(physics, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPhysicsEngine(IPhysicsEngineBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPhysicsEngine(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD StepSimulation(float timeStep) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepSimulation(timeStep); } \
  NS_SCRIPTABLE NS_IMETHOD StartSimulation(float fDeltaTime, PRBool bRealTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartSimulation(fDeltaTime, bRealTime); } \
  NS_SCRIPTABLE NS_IMETHOD StopSimulation(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopSimulation(); } \
  NS_SCRIPTABLE NS_IMETHOD IsSimulationRunning(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSimulationRunning(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSimulationTime(PRUint64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSimulationTime(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Load(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Load(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadURI(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadURI(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadData(data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadXMLData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadXMLData(data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Save(const char *filename, PRInt32 options, nsIProperties *atts) { return !_to ? NS_ERROR_NULL_POINTER : _to->Save(filename, options, atts); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadRobotURI1(robot, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadRobotXMLFile1(robot, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotURI2(const char *filename, IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadRobotURI2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLFile2(const char *filename, IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadRobotXMLFile2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadRobotData3(robot, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadRobotXMLData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadRobotXMLData3(robot, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadKinBodyURI1(body, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadKinBodyXMLFile1(body, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyURI2(const char *filename, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadKinBodyURI2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLFile2(const char *filename, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadKinBodyXMLFile2(filename, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadKinBodyData3(body, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadKinBodyXMLData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadKinBodyXMLData3(body, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadInterfaceURI1(pinterface, type, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadInterfaceXMLFile1(pinterface, type, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceURI2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadInterfaceURI2(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLFile2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadInterfaceXMLFile2(filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadInterfaceData3(pinterface, type, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadInterfaceXMLData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadInterfaceXMLData3(pinterface, type, data, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshURI(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadTrimeshURI(ptrimesh, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadTrimeshFile(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadTrimeshFile(ptrimesh, filename, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Add(IInterfaceBase *pinterface, PRBool bAnonymous, const char *cmdargs) { return !_to ? NS_ERROR_NULL_POINTER : _to->Add(pinterface, bAnonymous, cmdargs); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensors(PRUint32 *count NS_OUTPARAM, ISensorBase ***sensors NS_OUTPARAM, PRUint64 timeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensors(count, sensors, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD Remove(IInterfaceBase *obj, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Remove(obj, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKinBody(const char *name, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKinBody(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSensor(const char *name, ISensorBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensor(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobot(const char *name, IRobotBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobot(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBodies(PRUint32 *count NS_OUTPARAM, IKinBody ***bodies NS_OUTPARAM, PRUint64 timeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBodies(count, bodies, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetRobots(PRUint32 *count NS_OUTPARAM, IRobotBase ***robots NS_OUTPARAM, PRUint64 timeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRobots(count, robots, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetPublishedBodies(PRUint32 *count NS_OUTPARAM, IKinBodyState ***vbodies NS_OUTPARAM, PRUint64 timeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPublishedBodies(count, vbodies, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD UpdatePublishedBodies(PRUint64 timeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdatePublishedBodies(timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetBodyFromEnvironmentId(PRInt32 id, IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBodyFromEnvironmentId(id, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Triangulate(ITriMesh **trimesh NS_OUTPARAM, IKinBody *pbody) { return !_to ? NS_ERROR_NULL_POINTER : _to->Triangulate(trimesh, pbody); } \
  NS_SCRIPTABLE NS_IMETHOD TriangulateScene(ITriMesh **trimesh NS_OUTPARAM, PRInt32 options, const char *selectname) { return !_to ? NS_ERROR_NULL_POINTER : _to->TriangulateScene(trimesh, options, selectname); } \
  NS_SCRIPTABLE NS_IMETHOD AddModule(IModuleBase *mod, const char *cmdargs, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddModule(mod, cmdargs, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetModules(PRUint32 *count NS_OUTPARAM, IModuleBase ***listModules NS_OUTPARAM, PRUint64 timeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetModules(count, listModules, timeout); } \
  NS_SCRIPTABLE NS_IMETHOD GetMutex(IEnvironmentMutex **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMutex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewer(const char *name, IViewerBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetViewer(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetViewers(PRUint32 *count NS_OUTPARAM, IViewerBase ***listViewers NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetViewers(count, listViewers); } \
  NS_SCRIPTABLE NS_IMETHOD Plot3a(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, IVectorF *color, PRInt32 drawstyle, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Plot3a(ppoints, numPoints, stride, fPointSize, color, drawstyle, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Plot3b(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, float *colors, PRUint32 colorscount, PRInt32 drawstyle, PRBool bhasalpha, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Plot3b(ppoints, numPoints, stride, fPointSize, colors, colorscount, drawstyle, bhasalpha, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripa(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawlinestripa(ppoints, numPoints, stride, fwidth, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinestripb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawlinestripb(ppoints, numPoints, stride, fwidth, colors, colorscount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinelista(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawlinelista(ppoints, numPoints, stride, fwidth, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawlinelistb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawlinelistb(ppoints, numPoints, stride, fwidth, colors, colorscount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawarrow(IVectorF *p1, IVectorF *p2, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawarrow(p1, p2, fwidth, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawbox(IVectorF *vpos, IVectorF *vextents, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawbox(vpos, vextents, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawplane(ITransformF *tplane, IVectorF *vextents, float *vtexture, PRUint32 vtexturecount, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawplane(tplane, vextents, vtexture, vtexturecount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawtrimesha(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawtrimesha(ppoints, numPoints, stride, pIndices, indicescount, color, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drawtrimeshb(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drawtrimeshb(ppoints, numPoints, stride, pIndices, indicescount, colors, colorscount, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IEnvironmentBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IENVIRONMENTBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IEnvironmentBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Destroy (); */
NS_IMETHODIMP _MYCLASS_::Destroy()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Reset (); */
NS_IMETHODIMP _MYCLASS_::Reset()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetUserData (in IUserData data); */
NS_IMETHODIMP _MYCLASS_::SetUserData(IUserData *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData GetUserData (); */
NS_IMETHODIMP _MYCLASS_::GetUserData(IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData GlobalState (); */
NS_IMETHODIMP _MYCLASS_::GlobalState(IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void OwnInterface (in IInterfaceBase pinterface); */
NS_IMETHODIMP _MYCLASS_::OwnInterface(IInterfaceBase *pinterface)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void DisownInterface (in IInterfaceBase pinterface); */
NS_IMETHODIMP _MYCLASS_::DisownInterface(IInterfaceBase *pinterface)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IEnvironmentBase CloneSelf (in long options); */
NS_IMETHODIMP _MYCLASS_::CloneSelf(PRInt32 options, IEnvironmentBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Clone (in IEnvironmentBase preference, in long cloningoptions); */
NS_IMETHODIMP _MYCLASS_::Clone(IEnvironmentBase *preference, PRInt32 cloningoptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetCollisionChecker (in ICollisionCheckerBase pchecker); */
NS_IMETHODIMP _MYCLASS_::SetCollisionChecker(ICollisionCheckerBase *pchecker, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ICollisionCheckerBase GetCollisionChecker (); */
NS_IMETHODIMP _MYCLASS_::GetCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision1 (in IKinBody pbody1, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision1(IKinBody *pbody1, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision2 (in IKinBody pbody1, in IKinBody pbody2, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision2(IKinBody *pbody1, IKinBody *pbody2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision3 (in IKinBodyLink plink, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision3(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision4 (in IKinBodyLink plink1, in IKinBodyLink plink2, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision4(IKinBodyLink *plink1, IKinBodyLink *plink2, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision5 (in IKinBodyLink plink, in IKinBody pbody, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision5(IKinBodyLink *plink, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision6 (in IKinBodyLink plink, in unsigned long vbodyexcludedcount, [array, size_is (vbodyexcludedcount)] in IKinBody vbodyexcluded, in unsigned long vlinkexcludedcount, [array, size_is (vlinkexcludedcount)] in IKinBodyLink vlinkexcluded, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision6(IKinBodyLink *plink, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision7 (in IKinBody pbody, in unsigned long vbodyexcludedcount, [array, size_is (vbodyexcludedcount)] in IKinBody vbodyexcluded, in unsigned long vlinkexcludedcount, [array, size_is (vlinkexcludedcount)] in IKinBodyLink vlinkexcluded, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision7(IKinBody *pbody, PRUint32 vbodyexcludedcount, IKinBody **vbodyexcluded, PRUint32 vlinkexcludedcount, IKinBodyLink **vlinkexcluded, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision8 (in IRayF ray, in IKinBodyLink plink, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision8(IRayF *ray, IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision9 (in IRayF ray, in IKinBody pbody, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision9(IRayF *ray, IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckCollision10 (in IRayF ray, in ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckCollision10(IRayF *ray, ICollisionReport *report, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckStandaloneSelfCollision (in IKinBody pbody, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckStandaloneSelfCollision(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterCollisionCallback (in ICallbackCollision callback); */
NS_IMETHODIMP _MYCLASS_::RegisterCollisionCallback(ICallbackCollision *callback, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean HasRegisteredCollisionCallbacks (); */
NS_IMETHODIMP _MYCLASS_::HasRegisteredCollisionCallbacks(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRegisteredCollisionCallbacks (out unsigned long count, [array, size_is (count)] out ICallbackCollision functions); */
NS_IMETHODIMP _MYCLASS_::GetRegisteredCollisionCallbacks(PRUint32 *count NS_OUTPARAM, ICallbackCollision ***functions NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetPhysicsEngine (in IPhysicsEngineBase physics); */
NS_IMETHODIMP _MYCLASS_::SetPhysicsEngine(IPhysicsEngineBase *physics, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IPhysicsEngineBase GetPhysicsEngine (); */
NS_IMETHODIMP _MYCLASS_::GetPhysicsEngine(IPhysicsEngineBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void StepSimulation (in float timeStep); */
NS_IMETHODIMP _MYCLASS_::StepSimulation(float timeStep)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void StartSimulation (in float fDeltaTime, in boolean bRealTime); */
NS_IMETHODIMP _MYCLASS_::StartSimulation(float fDeltaTime, PRBool bRealTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void StopSimulation (); */
NS_IMETHODIMP _MYCLASS_::StopSimulation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsSimulationRunning (); */
NS_IMETHODIMP _MYCLASS_::IsSimulationRunning(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long long GetSimulationTime (); */
NS_IMETHODIMP _MYCLASS_::GetSimulationTime(PRUint64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Load (in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::Load(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean LoadURI (in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::LoadURI(const char *filename, nsIProperties *atts, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean LoadData (in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::LoadData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean LoadXMLData (in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::LoadXMLData(const char *data, nsIProperties *atts, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Save (in string filename, in long options, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::Save(const char *filename, PRInt32 options, nsIProperties *atts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase ReadRobotURI1 (in IRobotBase robot, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadRobotURI1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase ReadRobotXMLFile1 (in IRobotBase robot, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadRobotXMLFile1(IRobotBase *robot, const char *filename, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase ReadRobotURI2 (in string filename); */
NS_IMETHODIMP _MYCLASS_::ReadRobotURI2(const char *filename, IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase ReadRobotXMLFile2 (in string filename); */
NS_IMETHODIMP _MYCLASS_::ReadRobotXMLFile2(const char *filename, IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase ReadRobotData3 (in IRobotBase robot, in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadRobotData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase ReadRobotXMLData3 (in IRobotBase robot, in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadRobotXMLData3(IRobotBase *robot, const char *data, nsIProperties *atts, IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody ReadKinBodyURI1 (in IKinBody body, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadKinBodyURI1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody ReadKinBodyXMLFile1 (in IKinBody body, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadKinBodyXMLFile1(IKinBody *body, const char *filename, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody ReadKinBodyURI2 (in string filename); */
NS_IMETHODIMP _MYCLASS_::ReadKinBodyURI2(const char *filename, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody ReadKinBodyXMLFile2 (in string filename); */
NS_IMETHODIMP _MYCLASS_::ReadKinBodyXMLFile2(const char *filename, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody ReadKinBodyData3 (in IKinBody body, in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadKinBodyData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody ReadKinBodyXMLData3 (in IKinBody body, in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadKinBodyXMLData3(IKinBody *body, const char *data, nsIProperties *atts, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IInterfaceBase ReadInterfaceURI1 (in IInterfaceBase pinterface, in long type, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadInterfaceURI1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IInterfaceBase ReadInterfaceXMLFile1 (in IInterfaceBase pinterface, in long type, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadInterfaceXMLFile1(IInterfaceBase *pinterface, PRInt32 type, const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IInterfaceBase ReadInterfaceURI2 (in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadInterfaceURI2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IInterfaceBase ReadInterfaceXMLFile2 (in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadInterfaceXMLFile2(const char *filename, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IInterfaceBase ReadInterfaceData3 (in IInterfaceBase pinterface, in long type, in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadInterfaceData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IInterfaceBase ReadInterfaceXMLData3 (in IInterfaceBase pinterface, in long type, in string data, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadInterfaceXMLData3(IInterfaceBase *pinterface, PRInt32 type, const char *data, nsIProperties *atts, IInterfaceBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITriMesh ReadTrimeshURI (in ITriMesh ptrimesh, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadTrimeshURI(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITriMesh ReadTrimeshFile (in ITriMesh ptrimesh, in string filename, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::ReadTrimeshFile(ITriMesh *ptrimesh, const char *filename, nsIProperties *atts, ITriMesh **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Add (in IInterfaceBase pinterface, in boolean bAnonymous, in string cmdargs); */
NS_IMETHODIMP _MYCLASS_::Add(IInterfaceBase *pinterface, PRBool bAnonymous, const char *cmdargs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetSensors (out unsigned long count, [array, size_is (count)] out ISensorBase sensors, in unsigned long long timeout); */
NS_IMETHODIMP _MYCLASS_::GetSensors(PRUint32 *count NS_OUTPARAM, ISensorBase ***sensors NS_OUTPARAM, PRUint64 timeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Remove (in IInterfaceBase obj); */
NS_IMETHODIMP _MYCLASS_::Remove(IInterfaceBase *obj, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody GetKinBody (in string name); */
NS_IMETHODIMP _MYCLASS_::GetKinBody(const char *name, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ISensorBase GetSensor (in string name); */
NS_IMETHODIMP _MYCLASS_::GetSensor(const char *name, ISensorBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotBase GetRobot (in string name); */
NS_IMETHODIMP _MYCLASS_::GetRobot(const char *name, IRobotBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetBodies (out unsigned long count, [array, size_is (count)] out IKinBody bodies, in unsigned long long timeout); */
NS_IMETHODIMP _MYCLASS_::GetBodies(PRUint32 *count NS_OUTPARAM, IKinBody ***bodies NS_OUTPARAM, PRUint64 timeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRobots (out unsigned long count, [array, size_is (count)] out IRobotBase robots, in unsigned long long timeout); */
NS_IMETHODIMP _MYCLASS_::GetRobots(PRUint32 *count NS_OUTPARAM, IRobotBase ***robots NS_OUTPARAM, PRUint64 timeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetPublishedBodies (out unsigned long count, [array, size_is (count)] out IKinBodyState vbodies, in unsigned long long timeout); */
NS_IMETHODIMP _MYCLASS_::GetPublishedBodies(PRUint32 *count NS_OUTPARAM, IKinBodyState ***vbodies NS_OUTPARAM, PRUint64 timeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void UpdatePublishedBodies (in unsigned long long timeout); */
NS_IMETHODIMP _MYCLASS_::UpdatePublishedBodies(PRUint64 timeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody GetBodyFromEnvironmentId (in long id); */
NS_IMETHODIMP _MYCLASS_::GetBodyFromEnvironmentId(PRInt32 id, IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Triangulate (out ITriMesh trimesh, in IKinBody pbody); */
NS_IMETHODIMP _MYCLASS_::Triangulate(ITriMesh **trimesh NS_OUTPARAM, IKinBody *pbody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void TriangulateScene (out ITriMesh trimesh, in long options, in string selectname); */
NS_IMETHODIMP _MYCLASS_::TriangulateScene(ITriMesh **trimesh NS_OUTPARAM, PRInt32 options, const char *selectname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long AddModule (in IModuleBase mod, in string cmdargs); */
NS_IMETHODIMP _MYCLASS_::AddModule(IModuleBase *mod, const char *cmdargs, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetModules (out unsigned long count, [array, size_is (count)] out IModuleBase listModules, in unsigned long long timeout); */
NS_IMETHODIMP _MYCLASS_::GetModules(PRUint32 *count NS_OUTPARAM, IModuleBase ***listModules NS_OUTPARAM, PRUint64 timeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IEnvironmentMutex GetMutex (); */
NS_IMETHODIMP _MYCLASS_::GetMutex(IEnvironmentMutex **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IViewerBase GetViewer (in string name); */
NS_IMETHODIMP _MYCLASS_::GetViewer(const char *name, IViewerBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetViewers (out unsigned long count, [array, size_is (count)] out IViewerBase listViewers); */
NS_IMETHODIMP _MYCLASS_::GetViewers(PRUint32 *count NS_OUTPARAM, IViewerBase ***listViewers NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle plot3a ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fPointSize, in IVectorF color, in long drawstyle); */
NS_IMETHODIMP _MYCLASS_::Plot3a(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, IVectorF *color, PRInt32 drawstyle, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle plot3b ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fPointSize, [array, size_is (colorscount)] in float colors, in unsigned long colorscount, in long drawstyle, in boolean bhasalpha); */
NS_IMETHODIMP _MYCLASS_::Plot3b(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fPointSize, float *colors, PRUint32 colorscount, PRInt32 drawstyle, PRBool bhasalpha, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawlinestripa ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, in IVectorF color); */
NS_IMETHODIMP _MYCLASS_::Drawlinestripa(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawlinestripb ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, [array, size_is (colorscount)] in float colors, in unsigned long colorscount); */
NS_IMETHODIMP _MYCLASS_::Drawlinestripb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawlinelista ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, in IVectorF color); */
NS_IMETHODIMP _MYCLASS_::Drawlinelista(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawlinelistb ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, in float fwidth, [array, size_is (colorscount)] in float colors, in unsigned long colorscount); */
NS_IMETHODIMP _MYCLASS_::Drawlinelistb(float *ppoints, PRUint32 numPoints, PRInt32 stride, float fwidth, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawarrow (in IVectorF p1, in IVectorF p2, in float fwidth, in IVectorF color); */
NS_IMETHODIMP _MYCLASS_::Drawarrow(IVectorF *p1, IVectorF *p2, float fwidth, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawbox (in IVectorF vpos, in IVectorF vextents); */
NS_IMETHODIMP _MYCLASS_::Drawbox(IVectorF *vpos, IVectorF *vextents, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawplane (in ITransformF tplane, in IVectorF vextents, [array, size_is (vtexturecount)] in float vtexture, in unsigned long vtexturecount); */
NS_IMETHODIMP _MYCLASS_::Drawplane(ITransformF *tplane, IVectorF *vextents, float *vtexture, PRUint32 vtexturecount, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawtrimesha ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, [array, size_is (indicescount)] in long pIndices, in unsigned long indicescount, in IVectorF color); */
NS_IMETHODIMP _MYCLASS_::Drawtrimesha(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, IVectorF *color, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IGraphHandle drawtrimeshb ([array, size_is (numPoints)] in float ppoints, in unsigned long numPoints, in long stride, [array, size_is (indicescount)] in long pIndices, in unsigned long indicescount, [array, size_is (colorscount)] in float colors, in unsigned long colorscount); */
NS_IMETHODIMP _MYCLASS_::Drawtrimeshb(float *ppoints, PRUint32 numPoints, PRInt32 stride, PRInt32 *pIndices, PRUint32 indicescount, float *colors, PRUint32 colorscount, IGraphHandle **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_environment_h__ */
