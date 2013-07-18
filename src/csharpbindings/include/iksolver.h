/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/iksolver.idl
 */

#ifndef __gen_iksolver_h__
#define __gen_iksolver_h__


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

/* starting interface:    ICallbackIkFilter */
#define ICALLBACKIKFILTER_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKIKFILTER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackIkFilter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKIKFILTER_IID)

  /* IIkReturn Invoke (in unsigned long vcount, [array, size_is (vcount)] in float v, in IRobotManipulator m, in IIkParameterization p); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 vcount, float *v, IRobotManipulator *m, IIkParameterization *p, IIkReturn **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackIkFilter, ICALLBACKIKFILTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKIKFILTER \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 vcount, float *v, IRobotManipulator *m, IIkParameterization *p, IIkReturn **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKIKFILTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 vcount, float *v, IRobotManipulator *m, IIkParameterization *p, IIkReturn **_retval NS_OUTPARAM) { return _to Invoke(vcount, v, m, p, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKIKFILTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 vcount, float *v, IRobotManipulator *m, IIkParameterization *p, IIkReturn **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(vcount, v, m, p, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackIkFilter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKIKFILTER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackIkFilter)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IIkReturn Invoke (in unsigned long vcount, [array, size_is (vcount)] in float v, in IRobotManipulator m, in IIkParameterization p); */
NS_IMETHODIMP _MYCLASS_::Invoke(PRUint32 vcount, float *v, IRobotManipulator *m, IIkParameterization *p, IIkReturn **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IIkReturnCustomDataKVP */
#define IIKRETURNCUSTOMDATAKVP_IID_STR "00000000-0000-0000-0000-000000000000"

#define IIKRETURNCUSTOMDATAKVP_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IIkReturnCustomDataKVP : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IIKRETURNCUSTOMDATAKVP_IID)

  /* attribute string key; */
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey) = 0;

  /* void GetValue (out unsigned long count, [array, size_is (count)] out float value); */
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, float **value NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IIkReturnCustomDataKVP, IIKRETURNCUSTOMDATAKVP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IIKRETURNCUSTOMDATAKVP \
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey); \
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey); \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, float **value NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IIKRETURNCUSTOMDATAKVP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey) { return _to GetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey) { return _to SetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, float **value NS_OUTPARAM) { return _to GetValue(count, value); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IIKRETURNCUSTOMDATAKVP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, float **value NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(count, value); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IIkReturnCustomDataKVP
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IIKRETURNCUSTOMDATAKVP

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IIkReturnCustomDataKVP)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute string key; */
NS_IMETHODIMP _MYCLASS_::GetKey(char **aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetKey(const char *aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetValue (out unsigned long count, [array, size_is (count)] out float value); */
NS_IMETHODIMP _MYCLASS_::GetValue(PRUint32 *count NS_OUTPARAM, float **value NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IIkReturn */
#define IIKRETURN_IID_STR "00000000-0000-0000-0000-000000000000"

#define IIKRETURN_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IIkReturn : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IIKRETURN_IID)

  /* boolean Append (in long r); */
  NS_SCRIPTABLE NS_IMETHOD Append(PRInt32 r, PRBool *_retval NS_OUTPARAM) = 0;

  /* void Clear (); */
  NS_SCRIPTABLE NS_IMETHOD Clear(void) = 0;

  /* void GetSolution (out unsigned long count, [array, size_is (count)] out float solution); */
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *count NS_OUTPARAM, float **solution NS_OUTPARAM) = 0;

  /* void GetCustomData (out unsigned long count, [array, size_is (count)] out IIkReturnCustomDataKVP customdata); */
  NS_SCRIPTABLE NS_IMETHOD GetCustomData(PRUint32 *count NS_OUTPARAM, IIkReturnCustomDataKVP ***customdata NS_OUTPARAM) = 0;

  /* attribute long action; */
  NS_SCRIPTABLE NS_IMETHOD GetAction(PRInt32 *aAction) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAction(PRInt32 aAction) = 0;

  /* attribute IUserData userdata; */
  NS_SCRIPTABLE NS_IMETHOD GetUserdata(IUserData **aUserdata) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUserdata(IUserData *aUserdata) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IIkReturn, IIKRETURN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IIKRETURN \
  NS_SCRIPTABLE NS_IMETHOD Append(PRInt32 r, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Clear(void); \
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *count NS_OUTPARAM, float **solution NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCustomData(PRUint32 *count NS_OUTPARAM, IIkReturnCustomDataKVP ***customdata NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAction(PRInt32 *aAction); \
  NS_SCRIPTABLE NS_IMETHOD SetAction(PRInt32 aAction); \
  NS_SCRIPTABLE NS_IMETHOD GetUserdata(IUserData **aUserdata); \
  NS_SCRIPTABLE NS_IMETHOD SetUserdata(IUserData *aUserdata); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IIKRETURN(_to) \
  NS_SCRIPTABLE NS_IMETHOD Append(PRInt32 r, PRBool *_retval NS_OUTPARAM) { return _to Append(r, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return _to Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *count NS_OUTPARAM, float **solution NS_OUTPARAM) { return _to GetSolution(count, solution); } \
  NS_SCRIPTABLE NS_IMETHOD GetCustomData(PRUint32 *count NS_OUTPARAM, IIkReturnCustomDataKVP ***customdata NS_OUTPARAM) { return _to GetCustomData(count, customdata); } \
  NS_SCRIPTABLE NS_IMETHOD GetAction(PRInt32 *aAction) { return _to GetAction(aAction); } \
  NS_SCRIPTABLE NS_IMETHOD SetAction(PRInt32 aAction) { return _to SetAction(aAction); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserdata(IUserData **aUserdata) { return _to GetUserdata(aUserdata); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserdata(IUserData *aUserdata) { return _to SetUserdata(aUserdata); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IIKRETURN(_to) \
  NS_SCRIPTABLE NS_IMETHOD Append(PRInt32 r, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Append(r, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *count NS_OUTPARAM, float **solution NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSolution(count, solution); } \
  NS_SCRIPTABLE NS_IMETHOD GetCustomData(PRUint32 *count NS_OUTPARAM, IIkReturnCustomDataKVP ***customdata NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCustomData(count, customdata); } \
  NS_SCRIPTABLE NS_IMETHOD GetAction(PRInt32 *aAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAction(aAction); } \
  NS_SCRIPTABLE NS_IMETHOD SetAction(PRInt32 aAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAction(aAction); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserdata(IUserData **aUserdata) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserdata(aUserdata); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserdata(IUserData *aUserdata) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserdata(aUserdata); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IIkReturn
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IIKRETURN

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IIkReturn)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean Append (in long r); */
NS_IMETHODIMP _MYCLASS_::Append(PRInt32 r, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Clear (); */
NS_IMETHODIMP _MYCLASS_::Clear()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetSolution (out unsigned long count, [array, size_is (count)] out float solution); */
NS_IMETHODIMP _MYCLASS_::GetSolution(PRUint32 *count NS_OUTPARAM, float **solution NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetCustomData (out unsigned long count, [array, size_is (count)] out IIkReturnCustomDataKVP customdata); */
NS_IMETHODIMP _MYCLASS_::GetCustomData(PRUint32 *count NS_OUTPARAM, IIkReturnCustomDataKVP ***customdata NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long action; */
NS_IMETHODIMP _MYCLASS_::GetAction(PRInt32 *aAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAction(PRInt32 aAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IUserData userdata; */
NS_IMETHODIMP _MYCLASS_::GetUserdata(IUserData **aUserdata)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetUserdata(IUserData *aUserdata)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IIkSolverBaseSolution */
#define IIKSOLVERBASESOLUTION_IID_STR "00000000-0000-0000-0000-000000000000"

#define IIKSOLVERBASESOLUTION_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IIkSolverBaseSolution : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IIKSOLVERBASESOLUTION_IID)

  /* void GetSolution (out unsigned long solutionCount, [array, size_is (solutionCount)] out float solution); */
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IIkSolverBaseSolution, IIKSOLVERBASESOLUTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IIKSOLVERBASESOLUTION \
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IIKSOLVERBASESOLUTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM) { return _to GetSolution(solutionCount, solution); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IIKSOLVERBASESOLUTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSolution(PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSolution(solutionCount, solution); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IIkSolverBaseSolution
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IIKSOLVERBASESOLUTION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IIkSolverBaseSolution)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetSolution (out unsigned long solutionCount, [array, size_is (solutionCount)] out float solution); */
NS_IMETHODIMP _MYCLASS_::GetSolution(PRUint32 *solutionCount NS_OUTPARAM, float **solution NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IIkSolverBase */
#define IIKSOLVERBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IIKSOLVERBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IIkSolverBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IIKSOLVERBASE_IID)

  /* boolean Init (in IRobotManipulator pmanip); */
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotManipulator *pmanip, PRBool *_retval NS_OUTPARAM) = 0;

  /* IRobotManipulator GetManipulator (); */
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(IRobotManipulator **_retval NS_OUTPARAM) = 0;

  /* IUserData RegisterCustomFilter (in long priority, in ICallbackIkFilter filterfn); */
  NS_SCRIPTABLE NS_IMETHOD RegisterCustomFilter(PRInt32 priority, ICallbackIkFilter *filterfn, IUserData **_retval NS_OUTPARAM) = 0;

  /* long GetNumFreeParameters (); */
  NS_SCRIPTABLE NS_IMETHOD GetNumFreeParameters(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean GetFreeParameters (out unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] out float vFreeParameters); */
  NS_SCRIPTABLE NS_IMETHOD GetFreeParameters(PRUint32 *vFreeParametersCount NS_OUTPARAM, float **vFreeParameters NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Solve1 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in long filteroptions, out IIkSolverBaseSolution solution); */
  NS_SCRIPTABLE NS_IMETHOD Solve1(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Solve2 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in long filteroptions, out IIkReturn ikreturn); */
  NS_SCRIPTABLE NS_IMETHOD Solve2(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SolveAll1 (in IIkParameterization param, in long filteroptions, out unsigned long solutionCount, [array, size_is (solutionCount)] out IIkSolverBaseSolution solution); */
  NS_SCRIPTABLE NS_IMETHOD SolveAll1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SolveAll2 (in IIkParameterization param, in long filteroptions, out unsigned long ikreturnsCount, [array, size_is (ikreturnsCount)] out IIkReturn ikreturns); */
  NS_SCRIPTABLE NS_IMETHOD SolveAll2(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Solve3 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out IIkSolverBaseSolution solution); */
  NS_SCRIPTABLE NS_IMETHOD Solve3(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Solve4 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out IIkReturn ikreturn); */
  NS_SCRIPTABLE NS_IMETHOD Solve4(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SolveAll3 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out unsigned long solutionCount, [array, size_is (solutionCount)] out IIkSolverBaseSolution solution); */
  NS_SCRIPTABLE NS_IMETHOD SolveAll3(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SolveAll4 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out unsigned long ikreturnsCount, [array, size_is (ikreturnsCount)] out IIkReturn ikreturns); */
  NS_SCRIPTABLE NS_IMETHOD SolveAll4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Supports (in long iktype); */
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 iktype, PRBool *_retval NS_OUTPARAM) = 0;

  /* long CallFilters (in IIkParameterization param, out IIkReturn ikreturn); */
  NS_SCRIPTABLE NS_IMETHOD CallFilters(IIkParameterization *param, IIkReturn **ikreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IIkSolverBase, IIKSOLVERBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IIKSOLVERBASE \
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotManipulator *pmanip, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(IRobotManipulator **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterCustomFilter(PRInt32 priority, ICallbackIkFilter *filterfn, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNumFreeParameters(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFreeParameters(PRUint32 *vFreeParametersCount NS_OUTPARAM, float **vFreeParameters NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Solve1(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Solve2(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SolveAll1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SolveAll2(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Solve3(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Solve4(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SolveAll3(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SolveAll4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 iktype, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CallFilters(IIkParameterization *param, IIkReturn **ikreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IIKSOLVERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotManipulator *pmanip, PRBool *_retval NS_OUTPARAM) { return _to Init(pmanip, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(IRobotManipulator **_retval NS_OUTPARAM) { return _to GetManipulator(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterCustomFilter(PRInt32 priority, ICallbackIkFilter *filterfn, IUserData **_retval NS_OUTPARAM) { return _to RegisterCustomFilter(priority, filterfn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumFreeParameters(PRInt32 *_retval NS_OUTPARAM) { return _to GetNumFreeParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFreeParameters(PRUint32 *vFreeParametersCount NS_OUTPARAM, float **vFreeParameters NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetFreeParameters(vFreeParametersCount, vFreeParameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve1(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to Solve1(param, q0count, q0, filteroptions, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve2(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to Solve2(param, q0count, q0, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to SolveAll1(param, filteroptions, solutionCount, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll2(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to SolveAll2(param, filteroptions, ikreturnsCount, ikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve3(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to Solve3(param, q0count, q0, vFreeParametersCount, vFreeParameters, filteroptions, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve4(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to Solve4(param, q0count, q0, vFreeParametersCount, vFreeParameters, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll3(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to SolveAll3(param, vFreeParametersCount, vFreeParameters, filteroptions, solutionCount, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to SolveAll4(param, vFreeParametersCount, vFreeParameters, filteroptions, ikreturnsCount, ikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 iktype, PRBool *_retval NS_OUTPARAM) { return _to Supports(iktype, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CallFilters(IIkParameterization *param, IIkReturn **ikreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return _to CallFilters(param, ikreturn, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IIKSOLVERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(IRobotManipulator *pmanip, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(pmanip, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetManipulator(IRobotManipulator **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManipulator(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterCustomFilter(PRInt32 priority, ICallbackIkFilter *filterfn, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterCustomFilter(priority, filterfn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumFreeParameters(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumFreeParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFreeParameters(PRUint32 *vFreeParametersCount NS_OUTPARAM, float **vFreeParameters NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFreeParameters(vFreeParametersCount, vFreeParameters, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve1(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Solve1(param, q0count, q0, filteroptions, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve2(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Solve2(param, q0count, q0, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SolveAll1(param, filteroptions, solutionCount, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll2(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SolveAll2(param, filteroptions, ikreturnsCount, ikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve3(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Solve3(param, q0count, q0, vFreeParametersCount, vFreeParameters, filteroptions, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Solve4(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Solve4(param, q0count, q0, vFreeParametersCount, vFreeParameters, filteroptions, ikreturn, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll3(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SolveAll3(param, vFreeParametersCount, vFreeParameters, filteroptions, solutionCount, solution, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SolveAll4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SolveAll4(param, vFreeParametersCount, vFreeParameters, filteroptions, ikreturnsCount, ikreturns, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 iktype, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Supports(iktype, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CallFilters(IIkParameterization *param, IIkReturn **ikreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CallFilters(param, ikreturn, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IIkSolverBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IIKSOLVERBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IIkSolverBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean Init (in IRobotManipulator pmanip); */
NS_IMETHODIMP _MYCLASS_::Init(IRobotManipulator *pmanip, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRobotManipulator GetManipulator (); */
NS_IMETHODIMP _MYCLASS_::GetManipulator(IRobotManipulator **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterCustomFilter (in long priority, in ICallbackIkFilter filterfn); */
NS_IMETHODIMP _MYCLASS_::RegisterCustomFilter(PRInt32 priority, ICallbackIkFilter *filterfn, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetNumFreeParameters (); */
NS_IMETHODIMP _MYCLASS_::GetNumFreeParameters(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetFreeParameters (out unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] out float vFreeParameters); */
NS_IMETHODIMP _MYCLASS_::GetFreeParameters(PRUint32 *vFreeParametersCount NS_OUTPARAM, float **vFreeParameters NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Solve1 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in long filteroptions, out IIkSolverBaseSolution solution); */
NS_IMETHODIMP _MYCLASS_::Solve1(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Solve2 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in long filteroptions, out IIkReturn ikreturn); */
NS_IMETHODIMP _MYCLASS_::Solve2(IIkParameterization *param, PRUint32 q0count, float *q0, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SolveAll1 (in IIkParameterization param, in long filteroptions, out unsigned long solutionCount, [array, size_is (solutionCount)] out IIkSolverBaseSolution solution); */
NS_IMETHODIMP _MYCLASS_::SolveAll1(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SolveAll2 (in IIkParameterization param, in long filteroptions, out unsigned long ikreturnsCount, [array, size_is (ikreturnsCount)] out IIkReturn ikreturns); */
NS_IMETHODIMP _MYCLASS_::SolveAll2(IIkParameterization *param, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Solve3 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out IIkSolverBaseSolution solution); */
NS_IMETHODIMP _MYCLASS_::Solve3(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkSolverBaseSolution **solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Solve4 (in IIkParameterization param, in unsigned long q0count, [array, size_is (q0count)] in float q0, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out IIkReturn ikreturn); */
NS_IMETHODIMP _MYCLASS_::Solve4(IIkParameterization *param, PRUint32 q0count, float *q0, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, IIkReturn **ikreturn NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SolveAll3 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out unsigned long solutionCount, [array, size_is (solutionCount)] out IIkSolverBaseSolution solution); */
NS_IMETHODIMP _MYCLASS_::SolveAll3(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *solutionCount NS_OUTPARAM, IIkSolverBaseSolution ***solution NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SolveAll4 (in IIkParameterization param, in unsigned long vFreeParametersCount, [array, size_is (vFreeParametersCount)] in float vFreeParameters, in long filteroptions, out unsigned long ikreturnsCount, [array, size_is (ikreturnsCount)] out IIkReturn ikreturns); */
NS_IMETHODIMP _MYCLASS_::SolveAll4(IIkParameterization *param, PRUint32 vFreeParametersCount, float *vFreeParameters, PRInt32 filteroptions, PRUint32 *ikreturnsCount NS_OUTPARAM, IIkReturn ***ikreturns NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Supports (in long iktype); */
NS_IMETHODIMP _MYCLASS_::Supports(PRInt32 iktype, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long CallFilters (in IIkParameterization param, out IIkReturn ikreturn); */
NS_IMETHODIMP _MYCLASS_::CallFilters(IIkParameterization *param, IIkReturn **ikreturn NS_OUTPARAM, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_iksolver_h__ */
