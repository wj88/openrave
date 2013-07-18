/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/collisionchecker.idl
 */

#ifndef __gen_collisionchecker_h__
#define __gen_collisionchecker_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_geometry_h__
#include "geometry.h"
#endif

#ifndef __gen_interface_h__
#include "interface.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class ICollisionReport; /* forward declaration */

class ICollisionReportContact; /* forward declaration */

class ICollisionCheckerBase; /* forward declaration */

class ICollisionOptionsStateSaver; /* forward declaration */


/* starting interface:    ICollisionReportContact */
#define ICOLLISIONREPORTCONTACT_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICOLLISIONREPORTCONTACT_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICollisionReportContact : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICOLLISIONREPORTCONTACT_IID)

  /* attribute IVectorF pos; */
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos) = 0;

  /* attribute IVectorF norm; */
  NS_SCRIPTABLE NS_IMETHOD GetNorm(IVectorF **aNorm) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNorm(IVectorF *aNorm) = 0;

  /* attribute float depth; */
  NS_SCRIPTABLE NS_IMETHOD GetDepth(float *aDepth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDepth(float aDepth) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICollisionReportContact, ICOLLISIONREPORTCONTACT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICOLLISIONREPORTCONTACT \
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos); \
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos); \
  NS_SCRIPTABLE NS_IMETHOD GetNorm(IVectorF **aNorm); \
  NS_SCRIPTABLE NS_IMETHOD SetNorm(IVectorF *aNorm); \
  NS_SCRIPTABLE NS_IMETHOD GetDepth(float *aDepth); \
  NS_SCRIPTABLE NS_IMETHOD SetDepth(float aDepth); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICOLLISIONREPORTCONTACT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos) { return _to GetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos) { return _to SetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD GetNorm(IVectorF **aNorm) { return _to GetNorm(aNorm); } \
  NS_SCRIPTABLE NS_IMETHOD SetNorm(IVectorF *aNorm) { return _to SetNorm(aNorm); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepth(float *aDepth) { return _to GetDepth(aDepth); } \
  NS_SCRIPTABLE NS_IMETHOD SetDepth(float aDepth) { return _to SetDepth(aDepth); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICOLLISIONREPORTCONTACT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD GetNorm(IVectorF **aNorm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNorm(aNorm); } \
  NS_SCRIPTABLE NS_IMETHOD SetNorm(IVectorF *aNorm) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNorm(aNorm); } \
  NS_SCRIPTABLE NS_IMETHOD GetDepth(float *aDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDepth(aDepth); } \
  NS_SCRIPTABLE NS_IMETHOD SetDepth(float aDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDepth(aDepth); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICollisionReportContact
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICOLLISIONREPORTCONTACT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICollisionReportContact)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IVectorF pos; */
NS_IMETHODIMP _MYCLASS_::GetPos(IVectorF **aPos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPos(IVectorF *aPos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF norm; */
NS_IMETHODIMP _MYCLASS_::GetNorm(IVectorF **aNorm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNorm(IVectorF *aNorm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float depth; */
NS_IMETHODIMP _MYCLASS_::GetDepth(float *aDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDepth(float aDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICollisionReport */
#define ICOLLISIONREPORT_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICOLLISIONREPORT_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICollisionReport : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICOLLISIONREPORT_IID)

  /* attribute long options; */
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRInt32 *aOptions) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRInt32 aOptions) = 0;

  /* attribute IKinBodyLink plink1; */
  NS_SCRIPTABLE NS_IMETHOD GetPlink1(IKinBodyLink **aPlink1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPlink1(IKinBodyLink *aPlink1) = 0;

  /* attribute IKinBodyLink plink2; */
  NS_SCRIPTABLE NS_IMETHOD GetPlink2(IKinBodyLink **aPlink2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPlink2(IKinBodyLink *aPlink2) = 0;

  /* attribute long numCols; */
  NS_SCRIPTABLE NS_IMETHOD GetNumCols(PRInt32 *aNumCols) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNumCols(PRInt32 aNumCols) = 0;

  /* void GetLinkColliding (out unsigned long count, [array, size_is (count)] out IKinBodyLink vLinkColliding); */
  NS_SCRIPTABLE NS_IMETHOD GetLinkColliding(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vLinkColliding NS_OUTPARAM) = 0;

  /* attribute float minDistance; */
  NS_SCRIPTABLE NS_IMETHOD GetMinDistance(float *aMinDistance) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMinDistance(float aMinDistance) = 0;

  /* attribute long numWithinTol; */
  NS_SCRIPTABLE NS_IMETHOD GetNumWithinTol(PRInt32 *aNumWithinTol) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNumWithinTol(PRInt32 aNumWithinTol) = 0;

  /* void GetContacts (out unsigned long count, [array, size_is (count)] out ICollisionReportContact contacts); */
  NS_SCRIPTABLE NS_IMETHOD GetContacts(PRUint32 *count NS_OUTPARAM, ICollisionReportContact ***contacts NS_OUTPARAM) = 0;

  /* void Reset (in long coloptions); */
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 coloptions) = 0;

  /* string _str__ (); */
  NS_SCRIPTABLE NS_IMETHOD _str__(char **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICollisionReport, ICOLLISIONREPORT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICOLLISIONREPORT \
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRInt32 *aOptions); \
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRInt32 aOptions); \
  NS_SCRIPTABLE NS_IMETHOD GetPlink1(IKinBodyLink **aPlink1); \
  NS_SCRIPTABLE NS_IMETHOD SetPlink1(IKinBodyLink *aPlink1); \
  NS_SCRIPTABLE NS_IMETHOD GetPlink2(IKinBodyLink **aPlink2); \
  NS_SCRIPTABLE NS_IMETHOD SetPlink2(IKinBodyLink *aPlink2); \
  NS_SCRIPTABLE NS_IMETHOD GetNumCols(PRInt32 *aNumCols); \
  NS_SCRIPTABLE NS_IMETHOD SetNumCols(PRInt32 aNumCols); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkColliding(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vLinkColliding NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMinDistance(float *aMinDistance); \
  NS_SCRIPTABLE NS_IMETHOD SetMinDistance(float aMinDistance); \
  NS_SCRIPTABLE NS_IMETHOD GetNumWithinTol(PRInt32 *aNumWithinTol); \
  NS_SCRIPTABLE NS_IMETHOD SetNumWithinTol(PRInt32 aNumWithinTol); \
  NS_SCRIPTABLE NS_IMETHOD GetContacts(PRUint32 *count NS_OUTPARAM, ICollisionReportContact ***contacts NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 coloptions); \
  NS_SCRIPTABLE NS_IMETHOD _str__(char **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICOLLISIONREPORT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRInt32 *aOptions) { return _to GetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRInt32 aOptions) { return _to SetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlink1(IKinBodyLink **aPlink1) { return _to GetPlink1(aPlink1); } \
  NS_SCRIPTABLE NS_IMETHOD SetPlink1(IKinBodyLink *aPlink1) { return _to SetPlink1(aPlink1); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlink2(IKinBodyLink **aPlink2) { return _to GetPlink2(aPlink2); } \
  NS_SCRIPTABLE NS_IMETHOD SetPlink2(IKinBodyLink *aPlink2) { return _to SetPlink2(aPlink2); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumCols(PRInt32 *aNumCols) { return _to GetNumCols(aNumCols); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumCols(PRInt32 aNumCols) { return _to SetNumCols(aNumCols); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkColliding(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vLinkColliding NS_OUTPARAM) { return _to GetLinkColliding(count, vLinkColliding); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinDistance(float *aMinDistance) { return _to GetMinDistance(aMinDistance); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinDistance(float aMinDistance) { return _to SetMinDistance(aMinDistance); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumWithinTol(PRInt32 *aNumWithinTol) { return _to GetNumWithinTol(aNumWithinTol); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumWithinTol(PRInt32 aNumWithinTol) { return _to SetNumWithinTol(aNumWithinTol); } \
  NS_SCRIPTABLE NS_IMETHOD GetContacts(PRUint32 *count NS_OUTPARAM, ICollisionReportContact ***contacts NS_OUTPARAM) { return _to GetContacts(count, contacts); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 coloptions) { return _to Reset(coloptions); } \
  NS_SCRIPTABLE NS_IMETHOD _str__(char **_retval NS_OUTPARAM) { return _to _str__(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICOLLISIONREPORT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRInt32 *aOptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRInt32 aOptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlink1(IKinBodyLink **aPlink1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlink1(aPlink1); } \
  NS_SCRIPTABLE NS_IMETHOD SetPlink1(IKinBodyLink *aPlink1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPlink1(aPlink1); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlink2(IKinBodyLink **aPlink2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlink2(aPlink2); } \
  NS_SCRIPTABLE NS_IMETHOD SetPlink2(IKinBodyLink *aPlink2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPlink2(aPlink2); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumCols(PRInt32 *aNumCols) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumCols(aNumCols); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumCols(PRInt32 aNumCols) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNumCols(aNumCols); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkColliding(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vLinkColliding NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkColliding(count, vLinkColliding); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinDistance(float *aMinDistance) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinDistance(aMinDistance); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinDistance(float aMinDistance) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinDistance(aMinDistance); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumWithinTol(PRInt32 *aNumWithinTol) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumWithinTol(aNumWithinTol); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumWithinTol(PRInt32 aNumWithinTol) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNumWithinTol(aNumWithinTol); } \
  NS_SCRIPTABLE NS_IMETHOD GetContacts(PRUint32 *count NS_OUTPARAM, ICollisionReportContact ***contacts NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContacts(count, contacts); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(PRInt32 coloptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(coloptions); } \
  NS_SCRIPTABLE NS_IMETHOD _str__(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->_str__(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICollisionReport
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICOLLISIONREPORT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICollisionReport)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute long options; */
NS_IMETHODIMP _MYCLASS_::GetOptions(PRInt32 *aOptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetOptions(PRInt32 aOptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IKinBodyLink plink1; */
NS_IMETHODIMP _MYCLASS_::GetPlink1(IKinBodyLink **aPlink1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPlink1(IKinBodyLink *aPlink1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IKinBodyLink plink2; */
NS_IMETHODIMP _MYCLASS_::GetPlink2(IKinBodyLink **aPlink2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPlink2(IKinBodyLink *aPlink2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long numCols; */
NS_IMETHODIMP _MYCLASS_::GetNumCols(PRInt32 *aNumCols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNumCols(PRInt32 aNumCols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLinkColliding (out unsigned long count, [array, size_is (count)] out IKinBodyLink vLinkColliding); */
NS_IMETHODIMP _MYCLASS_::GetLinkColliding(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vLinkColliding NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float minDistance; */
NS_IMETHODIMP _MYCLASS_::GetMinDistance(float *aMinDistance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMinDistance(float aMinDistance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long numWithinTol; */
NS_IMETHODIMP _MYCLASS_::GetNumWithinTol(PRInt32 *aNumWithinTol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetNumWithinTol(PRInt32 aNumWithinTol)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetContacts (out unsigned long count, [array, size_is (count)] out ICollisionReportContact contacts); */
NS_IMETHODIMP _MYCLASS_::GetContacts(PRUint32 *count NS_OUTPARAM, ICollisionReportContact ***contacts NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Reset (in long coloptions); */
NS_IMETHODIMP _MYCLASS_::Reset(PRInt32 coloptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string _str__ (); */
NS_IMETHODIMP _MYCLASS_::_str__(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICollisionCheckerBase */
#define ICOLLISIONCHECKERBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICOLLISIONCHECKERBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICollisionCheckerBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICOLLISIONCHECKERBASE_IID)

  /* boolean SetCollisionOptions (in long collisionoptions); */
  NS_SCRIPTABLE NS_IMETHOD SetCollisionOptions(PRInt32 collisionoptions, PRBool *_retval NS_OUTPARAM) = 0;

  /* long GetCollisionOptions (); */
  NS_SCRIPTABLE NS_IMETHOD GetCollisionOptions(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void SetTolerance (in float tolerance); */
  NS_SCRIPTABLE NS_IMETHOD SetTolerance(float tolerance) = 0;

  /* void SetGeometryGroup (in string groupname); */
  NS_SCRIPTABLE NS_IMETHOD SetGeometryGroup(const char *groupname) = 0;

  /* string GetGeometryGroup (); */
  NS_SCRIPTABLE NS_IMETHOD GetGeometryGroup(char **_retval NS_OUTPARAM) = 0;

  /* boolean InitEnvironment (); */
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM) = 0;

  /* void DestroyEnvironment (); */
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void) = 0;

  /* boolean InitKinBody (in IKinBody pbody); */
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) = 0;

  /* void RemoveKinBody (in IKinBody pbody); */
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody) = 0;

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

  /* boolean CheckStandaloneSelfCollision1 (in IKinBody pbody, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision1(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean CheckStandaloneSelfCollision2 (in IKinBodyLink plink, out ICollisionReport report); */
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision2(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICollisionCheckerBase, ICOLLISIONCHECKERBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICOLLISIONCHECKERBASE \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionOptions(PRInt32 collisionoptions, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionOptions(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetTolerance(float tolerance); \
  NS_SCRIPTABLE NS_IMETHOD SetGeometryGroup(const char *groupname); \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryGroup(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void); \
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody); \
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
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision1(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision2(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICOLLISIONCHECKERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionOptions(PRInt32 collisionoptions, PRBool *_retval NS_OUTPARAM) { return _to SetCollisionOptions(collisionoptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionOptions(PRInt32 *_retval NS_OUTPARAM) { return _to GetCollisionOptions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTolerance(float tolerance) { return _to SetTolerance(tolerance); } \
  NS_SCRIPTABLE NS_IMETHOD SetGeometryGroup(const char *groupname) { return _to SetGeometryGroup(groupname); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryGroup(char **_retval NS_OUTPARAM) { return _to GetGeometryGroup(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM) { return _to InitEnvironment(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void) { return _to DestroyEnvironment(); } \
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) { return _to InitKinBody(pbody, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody) { return _to RemoveKinBody(pbody); } \
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
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision1(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckStandaloneSelfCollision1(pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision2(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to CheckStandaloneSelfCollision2(plink, report, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICOLLISIONCHECKERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionOptions(PRInt32 collisionoptions, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCollisionOptions(collisionoptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionOptions(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCollisionOptions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTolerance(float tolerance) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTolerance(tolerance); } \
  NS_SCRIPTABLE NS_IMETHOD SetGeometryGroup(const char *groupname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGeometryGroup(groupname); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryGroup(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGeometryGroup(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitEnvironment(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitEnvironment(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyEnvironment(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DestroyEnvironment(); } \
  NS_SCRIPTABLE NS_IMETHOD InitKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitKinBody(pbody, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveKinBody(pbody); } \
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
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision1(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckStandaloneSelfCollision1(pbody, report, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckStandaloneSelfCollision2(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckStandaloneSelfCollision2(plink, report, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICollisionCheckerBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICOLLISIONCHECKERBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICollisionCheckerBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean SetCollisionOptions (in long collisionoptions); */
NS_IMETHODIMP _MYCLASS_::SetCollisionOptions(PRInt32 collisionoptions, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetCollisionOptions (); */
NS_IMETHODIMP _MYCLASS_::GetCollisionOptions(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTolerance (in float tolerance); */
NS_IMETHODIMP _MYCLASS_::SetTolerance(float tolerance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetGeometryGroup (in string groupname); */
NS_IMETHODIMP _MYCLASS_::SetGeometryGroup(const char *groupname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetGeometryGroup (); */
NS_IMETHODIMP _MYCLASS_::GetGeometryGroup(char **_retval NS_OUTPARAM)
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

/* boolean InitKinBody (in IKinBody pbody); */
NS_IMETHODIMP _MYCLASS_::InitKinBody(IKinBody *pbody, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RemoveKinBody (in IKinBody pbody); */
NS_IMETHODIMP _MYCLASS_::RemoveKinBody(IKinBody *pbody)
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

/* boolean CheckStandaloneSelfCollision1 (in IKinBody pbody, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckStandaloneSelfCollision1(IKinBody *pbody, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckStandaloneSelfCollision2 (in IKinBodyLink plink, out ICollisionReport report); */
NS_IMETHODIMP _MYCLASS_::CheckStandaloneSelfCollision2(IKinBodyLink *plink, ICollisionReport **report NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICollisionOptionsStateSaver */
#define ICOLLISIONOPTIONSSTATESAVER_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICOLLISIONOPTIONSSTATESAVER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICollisionOptionsStateSaver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICOLLISIONOPTIONSSTATESAVER_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICollisionOptionsStateSaver, ICOLLISIONOPTIONSSTATESAVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICOLLISIONOPTIONSSTATESAVER \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICOLLISIONOPTIONSSTATESAVER(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICOLLISIONOPTIONSSTATESAVER(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICollisionOptionsStateSaver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICOLLISIONOPTIONSSTATESAVER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICollisionOptionsStateSaver)

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


#endif /* __gen_collisionchecker_h__ */
