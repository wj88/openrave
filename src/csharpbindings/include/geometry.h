/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/geometry.idl
 */

#ifndef __gen_geometry_h__
#define __gen_geometry_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IVectorF */
#define IVECTORF_IID_STR "00000000-0000-0000-0000-000000000000"

#define IVECTORF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IVectorF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IVECTORF_IID)

  /* attribute float X; */
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX) = 0;

  /* attribute float Y; */
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY) = 0;

  /* attribute float Z; */
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IVectorF, IVECTORF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IVECTORF \
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX); \
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX); \
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY); \
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY); \
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ); \
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IVECTORF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX) { return _to GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX) { return _to SetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY) { return _to GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY) { return _to SetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ) { return _to GetZ(aZ); } \
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ) { return _to SetZ(aZ); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IVECTORF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZ(aZ); } \
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetZ(aZ); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IVectorF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IVECTORF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IVectorF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float X; */
NS_IMETHODIMP _MYCLASS_::GetX(float *aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetX(float aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float Y; */
NS_IMETHODIMP _MYCLASS_::GetY(float *aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetY(float aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float Z; */
NS_IMETHODIMP _MYCLASS_::GetZ(float *aZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetZ(float aZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ITransformF */
#define ITRANSFORMF_IID_STR "00000000-0000-0000-0000-000000000000"

#define ITRANSFORMF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ITransformF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ITRANSFORMF_IID)

  /* attribute float W; */
  NS_SCRIPTABLE NS_IMETHOD GetW(float *aW) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetW(float aW) = 0;

  /* attribute float X; */
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX) = 0;

  /* attribute float Y; */
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY) = 0;

  /* attribute float Z; */
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ITransformF, ITRANSFORMF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ITRANSFORMF \
  NS_SCRIPTABLE NS_IMETHOD GetW(float *aW); \
  NS_SCRIPTABLE NS_IMETHOD SetW(float aW); \
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX); \
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX); \
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY); \
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY); \
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ); \
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ITRANSFORMF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetW(float *aW) { return _to GetW(aW); } \
  NS_SCRIPTABLE NS_IMETHOD SetW(float aW) { return _to SetW(aW); } \
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX) { return _to GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX) { return _to SetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY) { return _to GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY) { return _to SetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ) { return _to GetZ(aZ); } \
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ) { return _to SetZ(aZ); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ITRANSFORMF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetW(float *aW) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetW(aW); } \
  NS_SCRIPTABLE NS_IMETHOD SetW(float aW) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetW(aW); } \
  NS_SCRIPTABLE NS_IMETHOD GetX(float *aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD SetX(float aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(float *aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD SetY(float aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(float *aZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZ(aZ); } \
  NS_SCRIPTABLE NS_IMETHOD SetZ(float aZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetZ(aZ); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ITransformF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ITRANSFORMF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ITransformF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float W; */
NS_IMETHODIMP _MYCLASS_::GetW(float *aW)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetW(float aW)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float X; */
NS_IMETHODIMP _MYCLASS_::GetX(float *aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetX(float aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float Y; */
NS_IMETHODIMP _MYCLASS_::GetY(float *aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetY(float aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float Z; */
NS_IMETHODIMP _MYCLASS_::GetZ(float *aZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetZ(float aZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ITransformMatrixF */
#define ITRANSFORMMATRIXF_IID_STR "00000000-0000-0000-0000-000000000000"

#define ITRANSFORMMATRIXF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ITransformMatrixF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ITRANSFORMMATRIXF_IID)

  /* attribute float m1; */
  NS_SCRIPTABLE NS_IMETHOD GetM1(float *aM1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM1(float aM1) = 0;

  /* attribute float m2; */
  NS_SCRIPTABLE NS_IMETHOD GetM2(float *aM2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM2(float aM2) = 0;

  /* attribute float m3; */
  NS_SCRIPTABLE NS_IMETHOD GetM3(float *aM3) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM3(float aM3) = 0;

  /* attribute float m4; */
  NS_SCRIPTABLE NS_IMETHOD GetM4(float *aM4) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM4(float aM4) = 0;

  /* attribute float m5; */
  NS_SCRIPTABLE NS_IMETHOD GetM5(float *aM5) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM5(float aM5) = 0;

  /* attribute float m6; */
  NS_SCRIPTABLE NS_IMETHOD GetM6(float *aM6) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM6(float aM6) = 0;

  /* attribute float m7; */
  NS_SCRIPTABLE NS_IMETHOD GetM7(float *aM7) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM7(float aM7) = 0;

  /* attribute float m8; */
  NS_SCRIPTABLE NS_IMETHOD GetM8(float *aM8) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM8(float aM8) = 0;

  /* attribute float m9; */
  NS_SCRIPTABLE NS_IMETHOD GetM9(float *aM9) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM9(float aM9) = 0;

  /* attribute float m10; */
  NS_SCRIPTABLE NS_IMETHOD GetM10(float *aM10) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM10(float aM10) = 0;

  /* attribute float m11; */
  NS_SCRIPTABLE NS_IMETHOD GetM11(float *aM11) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM11(float aM11) = 0;

  /* attribute float m12; */
  NS_SCRIPTABLE NS_IMETHOD GetM12(float *aM12) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetM12(float aM12) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ITransformMatrixF, ITRANSFORMMATRIXF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ITRANSFORMMATRIXF \
  NS_SCRIPTABLE NS_IMETHOD GetM1(float *aM1); \
  NS_SCRIPTABLE NS_IMETHOD SetM1(float aM1); \
  NS_SCRIPTABLE NS_IMETHOD GetM2(float *aM2); \
  NS_SCRIPTABLE NS_IMETHOD SetM2(float aM2); \
  NS_SCRIPTABLE NS_IMETHOD GetM3(float *aM3); \
  NS_SCRIPTABLE NS_IMETHOD SetM3(float aM3); \
  NS_SCRIPTABLE NS_IMETHOD GetM4(float *aM4); \
  NS_SCRIPTABLE NS_IMETHOD SetM4(float aM4); \
  NS_SCRIPTABLE NS_IMETHOD GetM5(float *aM5); \
  NS_SCRIPTABLE NS_IMETHOD SetM5(float aM5); \
  NS_SCRIPTABLE NS_IMETHOD GetM6(float *aM6); \
  NS_SCRIPTABLE NS_IMETHOD SetM6(float aM6); \
  NS_SCRIPTABLE NS_IMETHOD GetM7(float *aM7); \
  NS_SCRIPTABLE NS_IMETHOD SetM7(float aM7); \
  NS_SCRIPTABLE NS_IMETHOD GetM8(float *aM8); \
  NS_SCRIPTABLE NS_IMETHOD SetM8(float aM8); \
  NS_SCRIPTABLE NS_IMETHOD GetM9(float *aM9); \
  NS_SCRIPTABLE NS_IMETHOD SetM9(float aM9); \
  NS_SCRIPTABLE NS_IMETHOD GetM10(float *aM10); \
  NS_SCRIPTABLE NS_IMETHOD SetM10(float aM10); \
  NS_SCRIPTABLE NS_IMETHOD GetM11(float *aM11); \
  NS_SCRIPTABLE NS_IMETHOD SetM11(float aM11); \
  NS_SCRIPTABLE NS_IMETHOD GetM12(float *aM12); \
  NS_SCRIPTABLE NS_IMETHOD SetM12(float aM12); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ITRANSFORMMATRIXF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetM1(float *aM1) { return _to GetM1(aM1); } \
  NS_SCRIPTABLE NS_IMETHOD SetM1(float aM1) { return _to SetM1(aM1); } \
  NS_SCRIPTABLE NS_IMETHOD GetM2(float *aM2) { return _to GetM2(aM2); } \
  NS_SCRIPTABLE NS_IMETHOD SetM2(float aM2) { return _to SetM2(aM2); } \
  NS_SCRIPTABLE NS_IMETHOD GetM3(float *aM3) { return _to GetM3(aM3); } \
  NS_SCRIPTABLE NS_IMETHOD SetM3(float aM3) { return _to SetM3(aM3); } \
  NS_SCRIPTABLE NS_IMETHOD GetM4(float *aM4) { return _to GetM4(aM4); } \
  NS_SCRIPTABLE NS_IMETHOD SetM4(float aM4) { return _to SetM4(aM4); } \
  NS_SCRIPTABLE NS_IMETHOD GetM5(float *aM5) { return _to GetM5(aM5); } \
  NS_SCRIPTABLE NS_IMETHOD SetM5(float aM5) { return _to SetM5(aM5); } \
  NS_SCRIPTABLE NS_IMETHOD GetM6(float *aM6) { return _to GetM6(aM6); } \
  NS_SCRIPTABLE NS_IMETHOD SetM6(float aM6) { return _to SetM6(aM6); } \
  NS_SCRIPTABLE NS_IMETHOD GetM7(float *aM7) { return _to GetM7(aM7); } \
  NS_SCRIPTABLE NS_IMETHOD SetM7(float aM7) { return _to SetM7(aM7); } \
  NS_SCRIPTABLE NS_IMETHOD GetM8(float *aM8) { return _to GetM8(aM8); } \
  NS_SCRIPTABLE NS_IMETHOD SetM8(float aM8) { return _to SetM8(aM8); } \
  NS_SCRIPTABLE NS_IMETHOD GetM9(float *aM9) { return _to GetM9(aM9); } \
  NS_SCRIPTABLE NS_IMETHOD SetM9(float aM9) { return _to SetM9(aM9); } \
  NS_SCRIPTABLE NS_IMETHOD GetM10(float *aM10) { return _to GetM10(aM10); } \
  NS_SCRIPTABLE NS_IMETHOD SetM10(float aM10) { return _to SetM10(aM10); } \
  NS_SCRIPTABLE NS_IMETHOD GetM11(float *aM11) { return _to GetM11(aM11); } \
  NS_SCRIPTABLE NS_IMETHOD SetM11(float aM11) { return _to SetM11(aM11); } \
  NS_SCRIPTABLE NS_IMETHOD GetM12(float *aM12) { return _to GetM12(aM12); } \
  NS_SCRIPTABLE NS_IMETHOD SetM12(float aM12) { return _to SetM12(aM12); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ITRANSFORMMATRIXF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetM1(float *aM1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM1(aM1); } \
  NS_SCRIPTABLE NS_IMETHOD SetM1(float aM1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM1(aM1); } \
  NS_SCRIPTABLE NS_IMETHOD GetM2(float *aM2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM2(aM2); } \
  NS_SCRIPTABLE NS_IMETHOD SetM2(float aM2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM2(aM2); } \
  NS_SCRIPTABLE NS_IMETHOD GetM3(float *aM3) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM3(aM3); } \
  NS_SCRIPTABLE NS_IMETHOD SetM3(float aM3) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM3(aM3); } \
  NS_SCRIPTABLE NS_IMETHOD GetM4(float *aM4) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM4(aM4); } \
  NS_SCRIPTABLE NS_IMETHOD SetM4(float aM4) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM4(aM4); } \
  NS_SCRIPTABLE NS_IMETHOD GetM5(float *aM5) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM5(aM5); } \
  NS_SCRIPTABLE NS_IMETHOD SetM5(float aM5) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM5(aM5); } \
  NS_SCRIPTABLE NS_IMETHOD GetM6(float *aM6) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM6(aM6); } \
  NS_SCRIPTABLE NS_IMETHOD SetM6(float aM6) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM6(aM6); } \
  NS_SCRIPTABLE NS_IMETHOD GetM7(float *aM7) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM7(aM7); } \
  NS_SCRIPTABLE NS_IMETHOD SetM7(float aM7) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM7(aM7); } \
  NS_SCRIPTABLE NS_IMETHOD GetM8(float *aM8) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM8(aM8); } \
  NS_SCRIPTABLE NS_IMETHOD SetM8(float aM8) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM8(aM8); } \
  NS_SCRIPTABLE NS_IMETHOD GetM9(float *aM9) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM9(aM9); } \
  NS_SCRIPTABLE NS_IMETHOD SetM9(float aM9) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM9(aM9); } \
  NS_SCRIPTABLE NS_IMETHOD GetM10(float *aM10) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM10(aM10); } \
  NS_SCRIPTABLE NS_IMETHOD SetM10(float aM10) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM10(aM10); } \
  NS_SCRIPTABLE NS_IMETHOD GetM11(float *aM11) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM11(aM11); } \
  NS_SCRIPTABLE NS_IMETHOD SetM11(float aM11) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM11(aM11); } \
  NS_SCRIPTABLE NS_IMETHOD GetM12(float *aM12) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetM12(aM12); } \
  NS_SCRIPTABLE NS_IMETHOD SetM12(float aM12) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetM12(aM12); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ITransformMatrixF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ITRANSFORMMATRIXF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ITransformMatrixF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float m1; */
NS_IMETHODIMP _MYCLASS_::GetM1(float *aM1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM1(float aM1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m2; */
NS_IMETHODIMP _MYCLASS_::GetM2(float *aM2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM2(float aM2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m3; */
NS_IMETHODIMP _MYCLASS_::GetM3(float *aM3)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM3(float aM3)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m4; */
NS_IMETHODIMP _MYCLASS_::GetM4(float *aM4)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM4(float aM4)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m5; */
NS_IMETHODIMP _MYCLASS_::GetM5(float *aM5)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM5(float aM5)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m6; */
NS_IMETHODIMP _MYCLASS_::GetM6(float *aM6)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM6(float aM6)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m7; */
NS_IMETHODIMP _MYCLASS_::GetM7(float *aM7)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM7(float aM7)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m8; */
NS_IMETHODIMP _MYCLASS_::GetM8(float *aM8)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM8(float aM8)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m9; */
NS_IMETHODIMP _MYCLASS_::GetM9(float *aM9)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM9(float aM9)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m10; */
NS_IMETHODIMP _MYCLASS_::GetM10(float *aM10)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM10(float aM10)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m11; */
NS_IMETHODIMP _MYCLASS_::GetM11(float *aM11)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM11(float aM11)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float m12; */
NS_IMETHODIMP _MYCLASS_::GetM12(float *aM12)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetM12(float aM12)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IRayF */
#define IRAYF_IID_STR "00000000-0000-0000-0000-000000000000"

#define IRAYF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IRayF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IRAYF_IID)

  /* attribute IVectorF pos; */
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos) = 0;

  /* attribute IVectorF dir; */
  NS_SCRIPTABLE NS_IMETHOD GetDir(IVectorF **aDir) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDir(IVectorF *aDir) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IRayF, IRAYF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IRAYF \
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos); \
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos); \
  NS_SCRIPTABLE NS_IMETHOD GetDir(IVectorF **aDir); \
  NS_SCRIPTABLE NS_IMETHOD SetDir(IVectorF *aDir); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IRAYF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos) { return _to GetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos) { return _to SetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD GetDir(IVectorF **aDir) { return _to GetDir(aDir); } \
  NS_SCRIPTABLE NS_IMETHOD SetDir(IVectorF *aDir) { return _to SetDir(aDir); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IRAYF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPos(IVectorF **aPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD SetPos(IVectorF *aPos) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPos(aPos); } \
  NS_SCRIPTABLE NS_IMETHOD GetDir(IVectorF **aDir) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDir(aDir); } \
  NS_SCRIPTABLE NS_IMETHOD SetDir(IVectorF *aDir) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDir(aDir); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IRayF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IRAYF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IRayF)

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

/* attribute IVectorF dir; */
NS_IMETHODIMP _MYCLASS_::GetDir(IVectorF **aDir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDir(IVectorF *aDir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IAABBF */
#define IAABBF_IID_STR "00000000-0000-0000-0000-000000000000"

#define IAABBF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IAABBF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IAABBF_IID)

  /* attribute IVectorF vpos; */
  NS_SCRIPTABLE NS_IMETHOD GetVpos(IVectorF **aVpos) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVpos(IVectorF *aVpos) = 0;

  /* attribute IVectorF vextents; */
  NS_SCRIPTABLE NS_IMETHOD GetVextents(IVectorF **aVextents) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVextents(IVectorF *aVextents) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IAABBF, IAABBF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IAABBF \
  NS_SCRIPTABLE NS_IMETHOD GetVpos(IVectorF **aVpos); \
  NS_SCRIPTABLE NS_IMETHOD SetVpos(IVectorF *aVpos); \
  NS_SCRIPTABLE NS_IMETHOD GetVextents(IVectorF **aVextents); \
  NS_SCRIPTABLE NS_IMETHOD SetVextents(IVectorF *aVextents); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IAABBF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVpos(IVectorF **aVpos) { return _to GetVpos(aVpos); } \
  NS_SCRIPTABLE NS_IMETHOD SetVpos(IVectorF *aVpos) { return _to SetVpos(aVpos); } \
  NS_SCRIPTABLE NS_IMETHOD GetVextents(IVectorF **aVextents) { return _to GetVextents(aVextents); } \
  NS_SCRIPTABLE NS_IMETHOD SetVextents(IVectorF *aVextents) { return _to SetVextents(aVextents); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IAABBF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVpos(IVectorF **aVpos) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVpos(aVpos); } \
  NS_SCRIPTABLE NS_IMETHOD SetVpos(IVectorF *aVpos) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVpos(aVpos); } \
  NS_SCRIPTABLE NS_IMETHOD GetVextents(IVectorF **aVextents) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVextents(aVextents); } \
  NS_SCRIPTABLE NS_IMETHOD SetVextents(IVectorF *aVextents) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVextents(aVextents); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IAABBF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IAABBF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IAABBF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IVectorF vpos; */
NS_IMETHODIMP _MYCLASS_::GetVpos(IVectorF **aVpos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVpos(IVectorF *aVpos)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vextents; */
NS_IMETHODIMP _MYCLASS_::GetVextents(IVectorF **aVextents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVextents(IVectorF *aVextents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IOrientedBoxF */
#define IORIENTEDBOXF_IID_STR "00000000-0000-0000-0000-000000000000"

#define IORIENTEDBOXF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IOrientedBoxF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IORIENTEDBOXF_IID)

  /* attribute ITransformF tranform; */
  NS_SCRIPTABLE NS_IMETHOD GetTranform(ITransformF **aTranform) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTranform(ITransformF *aTranform) = 0;

  /* attribute IVectorF extents; */
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IOrientedBoxF, IORIENTEDBOXF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IORIENTEDBOXF \
  NS_SCRIPTABLE NS_IMETHOD GetTranform(ITransformF **aTranform); \
  NS_SCRIPTABLE NS_IMETHOD SetTranform(ITransformF *aTranform); \
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents); \
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IORIENTEDBOXF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTranform(ITransformF **aTranform) { return _to GetTranform(aTranform); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranform(ITransformF *aTranform) { return _to SetTranform(aTranform); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents) { return _to GetExtents(aExtents); } \
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents) { return _to SetExtents(aExtents); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IORIENTEDBOXF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTranform(ITransformF **aTranform) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranform(aTranform); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranform(ITransformF *aTranform) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranform(aTranform); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExtents(aExtents); } \
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExtents(aExtents); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IOrientedBoxF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IORIENTEDBOXF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IOrientedBoxF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute ITransformF tranform; */
NS_IMETHODIMP _MYCLASS_::GetTranform(ITransformF **aTranform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTranform(ITransformF *aTranform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF extents; */
NS_IMETHODIMP _MYCLASS_::GetExtents(IVectorF **aExtents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetExtents(IVectorF *aExtents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IOBBF */
#define IOBBF_IID_STR "00000000-0000-0000-0000-000000000000"

#define IOBBF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IOBBF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IOBBF_IID)

  /* attribute IVectorF right; */
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight) = 0;

  /* attribute IVectorF up; */
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp) = 0;

  /* attribute IVectorF direction; */
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection) = 0;

  /* attribute IVectorF position; */
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition) = 0;

  /* attribute IVectorF extents; */
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IOBBF, IOBBF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IOBBF \
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight); \
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight); \
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp); \
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp); \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection); \
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection); \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition); \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition); \
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents); \
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IOBBF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight) { return _to GetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight) { return _to SetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp) { return _to GetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp) { return _to SetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection) { return _to GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection) { return _to SetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition) { return _to GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition) { return _to SetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents) { return _to GetExtents(aExtents); } \
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents) { return _to SetExtents(aExtents); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IOBBF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtents(IVectorF **aExtents) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExtents(aExtents); } \
  NS_SCRIPTABLE NS_IMETHOD SetExtents(IVectorF *aExtents) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExtents(aExtents); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IOBBF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IOBBF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IOBBF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IVectorF right; */
NS_IMETHODIMP _MYCLASS_::GetRight(IVectorF **aRight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetRight(IVectorF *aRight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF up; */
NS_IMETHODIMP _MYCLASS_::GetUp(IVectorF **aUp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetUp(IVectorF *aUp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF direction; */
NS_IMETHODIMP _MYCLASS_::GetDirection(IVectorF **aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDirection(IVectorF *aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF position; */
NS_IMETHODIMP _MYCLASS_::GetPosition(IVectorF **aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPosition(IVectorF *aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF extents; */
NS_IMETHODIMP _MYCLASS_::GetExtents(IVectorF **aExtents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetExtents(IVectorF *aExtents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ITriangleF */
#define ITRIANGLEF_IID_STR "00000000-0000-0000-0000-000000000000"

#define ITRIANGLEF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ITriangleF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ITRIANGLEF_IID)

  /* attribute IVectorF v1; */
  NS_SCRIPTABLE NS_IMETHOD GetV1(IVectorF **aV1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetV1(IVectorF *aV1) = 0;

  /* attribute IVectorF v2; */
  NS_SCRIPTABLE NS_IMETHOD GetV2(IVectorF **aV2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetV2(IVectorF *aV2) = 0;

  /* attribute IVectorF v3; */
  NS_SCRIPTABLE NS_IMETHOD GetV3(IVectorF **aV3) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetV3(IVectorF *aV3) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ITriangleF, ITRIANGLEF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ITRIANGLEF \
  NS_SCRIPTABLE NS_IMETHOD GetV1(IVectorF **aV1); \
  NS_SCRIPTABLE NS_IMETHOD SetV1(IVectorF *aV1); \
  NS_SCRIPTABLE NS_IMETHOD GetV2(IVectorF **aV2); \
  NS_SCRIPTABLE NS_IMETHOD SetV2(IVectorF *aV2); \
  NS_SCRIPTABLE NS_IMETHOD GetV3(IVectorF **aV3); \
  NS_SCRIPTABLE NS_IMETHOD SetV3(IVectorF *aV3); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ITRIANGLEF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetV1(IVectorF **aV1) { return _to GetV1(aV1); } \
  NS_SCRIPTABLE NS_IMETHOD SetV1(IVectorF *aV1) { return _to SetV1(aV1); } \
  NS_SCRIPTABLE NS_IMETHOD GetV2(IVectorF **aV2) { return _to GetV2(aV2); } \
  NS_SCRIPTABLE NS_IMETHOD SetV2(IVectorF *aV2) { return _to SetV2(aV2); } \
  NS_SCRIPTABLE NS_IMETHOD GetV3(IVectorF **aV3) { return _to GetV3(aV3); } \
  NS_SCRIPTABLE NS_IMETHOD SetV3(IVectorF *aV3) { return _to SetV3(aV3); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ITRIANGLEF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetV1(IVectorF **aV1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetV1(aV1); } \
  NS_SCRIPTABLE NS_IMETHOD SetV1(IVectorF *aV1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetV1(aV1); } \
  NS_SCRIPTABLE NS_IMETHOD GetV2(IVectorF **aV2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetV2(aV2); } \
  NS_SCRIPTABLE NS_IMETHOD SetV2(IVectorF *aV2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetV2(aV2); } \
  NS_SCRIPTABLE NS_IMETHOD GetV3(IVectorF **aV3) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetV3(aV3); } \
  NS_SCRIPTABLE NS_IMETHOD SetV3(IVectorF *aV3) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetV3(aV3); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ITriangleF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ITRIANGLEF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ITriangleF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IVectorF v1; */
NS_IMETHODIMP _MYCLASS_::GetV1(IVectorF **aV1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetV1(IVectorF *aV1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF v2; */
NS_IMETHODIMP _MYCLASS_::GetV2(IVectorF **aV2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetV2(IVectorF *aV2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF v3; */
NS_IMETHODIMP _MYCLASS_::GetV3(IVectorF **aV3)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetV3(IVectorF *aV3)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IFrustamF */
#define IFRUSTAMF_IID_STR "00000000-0000-0000-0000-000000000000"

#define IFRUSTAMF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IFrustamF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IFRUSTAMF_IID)

  /* attribute IVectorF right; */
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight) = 0;

  /* attribute IVectorF up; */
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp) = 0;

  /* attribute IVectorF direction; */
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection) = 0;

  /* attribute IVectorF position; */
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition) = 0;

  /* attribute float fnear; */
  NS_SCRIPTABLE NS_IMETHOD GetFnear(float *aFnear) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFnear(float aFnear) = 0;

  /* attribute float ffar; */
  NS_SCRIPTABLE NS_IMETHOD GetFfar(float *aFfar) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFfar(float aFfar) = 0;

  /* attribute float ffovx; */
  NS_SCRIPTABLE NS_IMETHOD GetFfovx(float *aFfovx) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFfovx(float aFfovx) = 0;

  /* attribute float ffovy; */
  NS_SCRIPTABLE NS_IMETHOD GetFfovy(float *aFfovy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFfovy(float aFfovy) = 0;

  /* attribute float fcosfovx; */
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovx(float *aFcosfovx) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovx(float aFcosfovx) = 0;

  /* attribute float fsinfovx; */
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovx(float *aFsinfovx) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovx(float aFsinfovx) = 0;

  /* attribute float fcosfovy; */
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovy(float *aFcosfovy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovy(float aFcosfovy) = 0;

  /* attribute float fsinfovy; */
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovy(float *aFsinfovy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovy(float aFsinfovy) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IFrustamF, IFRUSTAMF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IFRUSTAMF \
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight); \
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight); \
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp); \
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp); \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection); \
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection); \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition); \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition); \
  NS_SCRIPTABLE NS_IMETHOD GetFnear(float *aFnear); \
  NS_SCRIPTABLE NS_IMETHOD SetFnear(float aFnear); \
  NS_SCRIPTABLE NS_IMETHOD GetFfar(float *aFfar); \
  NS_SCRIPTABLE NS_IMETHOD SetFfar(float aFfar); \
  NS_SCRIPTABLE NS_IMETHOD GetFfovx(float *aFfovx); \
  NS_SCRIPTABLE NS_IMETHOD SetFfovx(float aFfovx); \
  NS_SCRIPTABLE NS_IMETHOD GetFfovy(float *aFfovy); \
  NS_SCRIPTABLE NS_IMETHOD SetFfovy(float aFfovy); \
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovx(float *aFcosfovx); \
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovx(float aFcosfovx); \
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovx(float *aFsinfovx); \
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovx(float aFsinfovx); \
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovy(float *aFcosfovy); \
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovy(float aFcosfovy); \
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovy(float *aFsinfovy); \
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovy(float aFsinfovy); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IFRUSTAMF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight) { return _to GetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight) { return _to SetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp) { return _to GetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp) { return _to SetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection) { return _to GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection) { return _to SetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition) { return _to GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition) { return _to SetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetFnear(float *aFnear) { return _to GetFnear(aFnear); } \
  NS_SCRIPTABLE NS_IMETHOD SetFnear(float aFnear) { return _to SetFnear(aFnear); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfar(float *aFfar) { return _to GetFfar(aFfar); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfar(float aFfar) { return _to SetFfar(aFfar); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfovx(float *aFfovx) { return _to GetFfovx(aFfovx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfovx(float aFfovx) { return _to SetFfovx(aFfovx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfovy(float *aFfovy) { return _to GetFfovy(aFfovy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfovy(float aFfovy) { return _to SetFfovy(aFfovy); } \
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovx(float *aFcosfovx) { return _to GetFcosfovx(aFcosfovx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovx(float aFcosfovx) { return _to SetFcosfovx(aFcosfovx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovx(float *aFsinfovx) { return _to GetFsinfovx(aFsinfovx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovx(float aFsinfovx) { return _to SetFsinfovx(aFsinfovx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovy(float *aFcosfovy) { return _to GetFcosfovy(aFcosfovy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovy(float aFcosfovy) { return _to SetFcosfovy(aFcosfovy); } \
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovy(float *aFsinfovy) { return _to GetFsinfovy(aFsinfovy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovy(float aFsinfovy) { return _to SetFsinfovy(aFsinfovy); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IFRUSTAMF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRight(IVectorF **aRight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD SetRight(IVectorF *aRight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRight(aRight); } \
  NS_SCRIPTABLE NS_IMETHOD GetUp(IVectorF **aUp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD SetUp(IVectorF *aUp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUp(aUp); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(IVectorF **aDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirection(IVectorF *aDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(IVectorF **aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetPosition(IVectorF *aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetFnear(float *aFnear) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFnear(aFnear); } \
  NS_SCRIPTABLE NS_IMETHOD SetFnear(float aFnear) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFnear(aFnear); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfar(float *aFfar) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFfar(aFfar); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfar(float aFfar) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFfar(aFfar); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfovx(float *aFfovx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFfovx(aFfovx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfovx(float aFfovx) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFfovx(aFfovx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFfovy(float *aFfovy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFfovy(aFfovy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFfovy(float aFfovy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFfovy(aFfovy); } \
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovx(float *aFcosfovx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFcosfovx(aFcosfovx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovx(float aFcosfovx) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFcosfovx(aFcosfovx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovx(float *aFsinfovx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFsinfovx(aFsinfovx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovx(float aFsinfovx) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFsinfovx(aFsinfovx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFcosfovy(float *aFcosfovy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFcosfovy(aFcosfovy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFcosfovy(float aFcosfovy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFcosfovy(aFcosfovy); } \
  NS_SCRIPTABLE NS_IMETHOD GetFsinfovy(float *aFsinfovy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFsinfovy(aFsinfovy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFsinfovy(float aFsinfovy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFsinfovy(aFsinfovy); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IFrustamF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IFRUSTAMF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IFrustamF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IVectorF right; */
NS_IMETHODIMP _MYCLASS_::GetRight(IVectorF **aRight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetRight(IVectorF *aRight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF up; */
NS_IMETHODIMP _MYCLASS_::GetUp(IVectorF **aUp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetUp(IVectorF *aUp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF direction; */
NS_IMETHODIMP _MYCLASS_::GetDirection(IVectorF **aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDirection(IVectorF *aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF position; */
NS_IMETHODIMP _MYCLASS_::GetPosition(IVectorF **aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPosition(IVectorF *aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fnear; */
NS_IMETHODIMP _MYCLASS_::GetFnear(float *aFnear)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFnear(float aFnear)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ffar; */
NS_IMETHODIMP _MYCLASS_::GetFfar(float *aFfar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFfar(float aFfar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ffovx; */
NS_IMETHODIMP _MYCLASS_::GetFfovx(float *aFfovx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFfovx(float aFfovx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float ffovy; */
NS_IMETHODIMP _MYCLASS_::GetFfovy(float *aFfovy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFfovy(float aFfovy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fcosfovx; */
NS_IMETHODIMP _MYCLASS_::GetFcosfovx(float *aFcosfovx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFcosfovx(float aFcosfovx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fsinfovx; */
NS_IMETHODIMP _MYCLASS_::GetFsinfovx(float *aFsinfovx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFsinfovx(float aFsinfovx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fcosfovy; */
NS_IMETHODIMP _MYCLASS_::GetFcosfovy(float *aFcosfovy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFcosfovy(float aFcosfovy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fsinfovy; */
NS_IMETHODIMP _MYCLASS_::GetFsinfovy(float *aFsinfovy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFsinfovy(float aFsinfovy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICameraIntrinsicsF */
#define ICAMERAINTRINSICSF_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICAMERAINTRINSICSF_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICameraIntrinsicsF : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICAMERAINTRINSICSF_IID)

  /* attribute float fx; */
  NS_SCRIPTABLE NS_IMETHOD GetFx(float *aFx) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFx(float aFx) = 0;

  /* attribute float fy; */
  NS_SCRIPTABLE NS_IMETHOD GetFy(float *aFy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFy(float aFy) = 0;

  /* attribute float cx; */
  NS_SCRIPTABLE NS_IMETHOD GetCx(float *aCx) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCx(float aCx) = 0;

  /* attribute float cy; */
  NS_SCRIPTABLE NS_IMETHOD GetCy(float *aCy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCy(float aCy) = 0;

  /* attribute string distortion_model; */
  NS_SCRIPTABLE NS_IMETHOD GetDistortion_model(char **aDistortion_model) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDistortion_model(const char *aDistortion_model) = 0;

  /* void GetDistortionCoeffs (out unsigned long count, [array, size_is (count)] out float distortion_coeffs); */
  NS_SCRIPTABLE NS_IMETHOD GetDistortionCoeffs(PRUint32 *count NS_OUTPARAM, float **distortion_coeffs NS_OUTPARAM) = 0;

  /* void SetDistortionCoeffs (in unsigned long count, [array, size_is (count)] in float distortion_coeffs); */
  NS_SCRIPTABLE NS_IMETHOD SetDistortionCoeffs(PRUint32 count, float *distortion_coeffs) = 0;

  /* attribute float focal_length; */
  NS_SCRIPTABLE NS_IMETHOD GetFocal_length(float *aFocal_length) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFocal_length(float aFocal_length) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICameraIntrinsicsF, ICAMERAINTRINSICSF_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICAMERAINTRINSICSF \
  NS_SCRIPTABLE NS_IMETHOD GetFx(float *aFx); \
  NS_SCRIPTABLE NS_IMETHOD SetFx(float aFx); \
  NS_SCRIPTABLE NS_IMETHOD GetFy(float *aFy); \
  NS_SCRIPTABLE NS_IMETHOD SetFy(float aFy); \
  NS_SCRIPTABLE NS_IMETHOD GetCx(float *aCx); \
  NS_SCRIPTABLE NS_IMETHOD SetCx(float aCx); \
  NS_SCRIPTABLE NS_IMETHOD GetCy(float *aCy); \
  NS_SCRIPTABLE NS_IMETHOD SetCy(float aCy); \
  NS_SCRIPTABLE NS_IMETHOD GetDistortion_model(char **aDistortion_model); \
  NS_SCRIPTABLE NS_IMETHOD SetDistortion_model(const char *aDistortion_model); \
  NS_SCRIPTABLE NS_IMETHOD GetDistortionCoeffs(PRUint32 *count NS_OUTPARAM, float **distortion_coeffs NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetDistortionCoeffs(PRUint32 count, float *distortion_coeffs); \
  NS_SCRIPTABLE NS_IMETHOD GetFocal_length(float *aFocal_length); \
  NS_SCRIPTABLE NS_IMETHOD SetFocal_length(float aFocal_length); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICAMERAINTRINSICSF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFx(float *aFx) { return _to GetFx(aFx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFx(float aFx) { return _to SetFx(aFx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFy(float *aFy) { return _to GetFy(aFy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFy(float aFy) { return _to SetFy(aFy); } \
  NS_SCRIPTABLE NS_IMETHOD GetCx(float *aCx) { return _to GetCx(aCx); } \
  NS_SCRIPTABLE NS_IMETHOD SetCx(float aCx) { return _to SetCx(aCx); } \
  NS_SCRIPTABLE NS_IMETHOD GetCy(float *aCy) { return _to GetCy(aCy); } \
  NS_SCRIPTABLE NS_IMETHOD SetCy(float aCy) { return _to SetCy(aCy); } \
  NS_SCRIPTABLE NS_IMETHOD GetDistortion_model(char **aDistortion_model) { return _to GetDistortion_model(aDistortion_model); } \
  NS_SCRIPTABLE NS_IMETHOD SetDistortion_model(const char *aDistortion_model) { return _to SetDistortion_model(aDistortion_model); } \
  NS_SCRIPTABLE NS_IMETHOD GetDistortionCoeffs(PRUint32 *count NS_OUTPARAM, float **distortion_coeffs NS_OUTPARAM) { return _to GetDistortionCoeffs(count, distortion_coeffs); } \
  NS_SCRIPTABLE NS_IMETHOD SetDistortionCoeffs(PRUint32 count, float *distortion_coeffs) { return _to SetDistortionCoeffs(count, distortion_coeffs); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocal_length(float *aFocal_length) { return _to GetFocal_length(aFocal_length); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocal_length(float aFocal_length) { return _to SetFocal_length(aFocal_length); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICAMERAINTRINSICSF(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFx(float *aFx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFx(aFx); } \
  NS_SCRIPTABLE NS_IMETHOD SetFx(float aFx) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFx(aFx); } \
  NS_SCRIPTABLE NS_IMETHOD GetFy(float *aFy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFy(aFy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFy(float aFy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFy(aFy); } \
  NS_SCRIPTABLE NS_IMETHOD GetCx(float *aCx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCx(aCx); } \
  NS_SCRIPTABLE NS_IMETHOD SetCx(float aCx) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCx(aCx); } \
  NS_SCRIPTABLE NS_IMETHOD GetCy(float *aCy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCy(aCy); } \
  NS_SCRIPTABLE NS_IMETHOD SetCy(float aCy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCy(aCy); } \
  NS_SCRIPTABLE NS_IMETHOD GetDistortion_model(char **aDistortion_model) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDistortion_model(aDistortion_model); } \
  NS_SCRIPTABLE NS_IMETHOD SetDistortion_model(const char *aDistortion_model) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDistortion_model(aDistortion_model); } \
  NS_SCRIPTABLE NS_IMETHOD GetDistortionCoeffs(PRUint32 *count NS_OUTPARAM, float **distortion_coeffs NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDistortionCoeffs(count, distortion_coeffs); } \
  NS_SCRIPTABLE NS_IMETHOD SetDistortionCoeffs(PRUint32 count, float *distortion_coeffs) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDistortionCoeffs(count, distortion_coeffs); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocal_length(float *aFocal_length) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocal_length(aFocal_length); } \
  NS_SCRIPTABLE NS_IMETHOD SetFocal_length(float aFocal_length) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocal_length(aFocal_length); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICameraIntrinsicsF
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICAMERAINTRINSICSF

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICameraIntrinsicsF)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute float fx; */
NS_IMETHODIMP _MYCLASS_::GetFx(float *aFx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFx(float aFx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fy; */
NS_IMETHODIMP _MYCLASS_::GetFy(float *aFy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFy(float aFy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float cx; */
NS_IMETHODIMP _MYCLASS_::GetCx(float *aCx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetCx(float aCx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float cy; */
NS_IMETHODIMP _MYCLASS_::GetCy(float *aCy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetCy(float aCy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string distortion_model; */
NS_IMETHODIMP _MYCLASS_::GetDistortion_model(char **aDistortion_model)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDistortion_model(const char *aDistortion_model)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDistortionCoeffs (out unsigned long count, [array, size_is (count)] out float distortion_coeffs); */
NS_IMETHODIMP _MYCLASS_::GetDistortionCoeffs(PRUint32 *count NS_OUTPARAM, float **distortion_coeffs NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDistortionCoeffs (in unsigned long count, [array, size_is (count)] in float distortion_coeffs); */
NS_IMETHODIMP _MYCLASS_::SetDistortionCoeffs(PRUint32 count, float *distortion_coeffs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float focal_length; */
NS_IMETHODIMP _MYCLASS_::GetFocal_length(float *aFocal_length)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFocal_length(float aFocal_length)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_geometry_h__ */
