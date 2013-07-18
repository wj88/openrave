/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/kinbody.idl
 */

#ifndef __gen_kinbody_h__
#define __gen_kinbody_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

#ifndef __gen_openrave_h__
#include "openrave.h"
#endif

#ifndef __gen_interface_h__
#include "interface.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IKinBodyGeometryInfo */
#define IKINBODYGEOMETRYINFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYGEOMETRYINFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyGeometryInfo : public IXMLReadable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYGEOMETRYINFO_IID)

  /* boolean InitCollisionMesh (in float fTessellation); */
  NS_SCRIPTABLE NS_IMETHOD InitCollisionMesh(float fTessellation, PRBool *_retval NS_OUTPARAM) = 0;

  /* float GetSphereRadius (); */
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM) = 0;

  /* float GetCylinderRadius (); */
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM) = 0;

  /* float GetCylinderHeight (); */
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM) = 0;

  /* IVectorF GetBoxExtents (); */
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM) = 0;

  /* attribute ITransformF t; */
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT) = 0;

  /* attribute IVectorF vGeomData; */
  NS_SCRIPTABLE NS_IMETHOD GetVGeomData(IVectorF **aVGeomData) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVGeomData(IVectorF *aVGeomData) = 0;

  /* attribute IVectorF vDiffuseColor; */
  NS_SCRIPTABLE NS_IMETHOD GetVDiffuseColor(IVectorF **aVDiffuseColor) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVDiffuseColor(IVectorF *aVDiffuseColor) = 0;

  /* attribute IVectorF vAmbientColor; */
  NS_SCRIPTABLE NS_IMETHOD GetVAmbientColor(IVectorF **aVAmbientColor) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVAmbientColor(IVectorF *aVAmbientColor) = 0;

  /* attribute ITriMesh meshcollision; */
  NS_SCRIPTABLE NS_IMETHOD GetMeshcollision(ITriMesh **aMeshcollision) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMeshcollision(ITriMesh *aMeshcollision) = 0;

  /* attribute long type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType) = 0;

  /* attribute string filenamerender; */
  NS_SCRIPTABLE NS_IMETHOD GetFilenamerender(char **aFilenamerender) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilenamerender(const char *aFilenamerender) = 0;

  /* attribute string filenamecollision; */
  NS_SCRIPTABLE NS_IMETHOD GetFilenamecollision(char **aFilenamecollision) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilenamecollision(const char *aFilenamecollision) = 0;

  /* attribute IVectorF vRenderScale; */
  NS_SCRIPTABLE NS_IMETHOD GetVRenderScale(IVectorF **aVRenderScale) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVRenderScale(IVectorF *aVRenderScale) = 0;

  /* attribute IVectorF vCollisionScale; */
  NS_SCRIPTABLE NS_IMETHOD GetVCollisionScale(IVectorF **aVCollisionScale) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVCollisionScale(IVectorF *aVCollisionScale) = 0;

  /* attribute float fTransparency; */
  NS_SCRIPTABLE NS_IMETHOD GetFTransparency(float *aFTransparency) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFTransparency(float aFTransparency) = 0;

  /* attribute boolean bVisible; */
  NS_SCRIPTABLE NS_IMETHOD GetBVisible(PRBool *aBVisible) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBVisible(PRBool aBVisible) = 0;

  /* attribute boolean bModifiable; */
  NS_SCRIPTABLE NS_IMETHOD GetBModifiable(PRBool *aBModifiable) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBModifiable(PRBool aBModifiable) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyGeometryInfo, IKINBODYGEOMETRYINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYGEOMETRYINFO \
  NS_SCRIPTABLE NS_IMETHOD InitCollisionMesh(float fTessellation, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT); \
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT); \
  NS_SCRIPTABLE NS_IMETHOD GetVGeomData(IVectorF **aVGeomData); \
  NS_SCRIPTABLE NS_IMETHOD SetVGeomData(IVectorF *aVGeomData); \
  NS_SCRIPTABLE NS_IMETHOD GetVDiffuseColor(IVectorF **aVDiffuseColor); \
  NS_SCRIPTABLE NS_IMETHOD SetVDiffuseColor(IVectorF *aVDiffuseColor); \
  NS_SCRIPTABLE NS_IMETHOD GetVAmbientColor(IVectorF **aVAmbientColor); \
  NS_SCRIPTABLE NS_IMETHOD SetVAmbientColor(IVectorF *aVAmbientColor); \
  NS_SCRIPTABLE NS_IMETHOD GetMeshcollision(ITriMesh **aMeshcollision); \
  NS_SCRIPTABLE NS_IMETHOD SetMeshcollision(ITriMesh *aMeshcollision); \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType); \
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType); \
  NS_SCRIPTABLE NS_IMETHOD GetFilenamerender(char **aFilenamerender); \
  NS_SCRIPTABLE NS_IMETHOD SetFilenamerender(const char *aFilenamerender); \
  NS_SCRIPTABLE NS_IMETHOD GetFilenamecollision(char **aFilenamecollision); \
  NS_SCRIPTABLE NS_IMETHOD SetFilenamecollision(const char *aFilenamecollision); \
  NS_SCRIPTABLE NS_IMETHOD GetVRenderScale(IVectorF **aVRenderScale); \
  NS_SCRIPTABLE NS_IMETHOD SetVRenderScale(IVectorF *aVRenderScale); \
  NS_SCRIPTABLE NS_IMETHOD GetVCollisionScale(IVectorF **aVCollisionScale); \
  NS_SCRIPTABLE NS_IMETHOD SetVCollisionScale(IVectorF *aVCollisionScale); \
  NS_SCRIPTABLE NS_IMETHOD GetFTransparency(float *aFTransparency); \
  NS_SCRIPTABLE NS_IMETHOD SetFTransparency(float aFTransparency); \
  NS_SCRIPTABLE NS_IMETHOD GetBVisible(PRBool *aBVisible); \
  NS_SCRIPTABLE NS_IMETHOD SetBVisible(PRBool aBVisible); \
  NS_SCRIPTABLE NS_IMETHOD GetBModifiable(PRBool *aBModifiable); \
  NS_SCRIPTABLE NS_IMETHOD SetBModifiable(PRBool aBModifiable); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYGEOMETRYINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitCollisionMesh(float fTessellation, PRBool *_retval NS_OUTPARAM) { return _to InitCollisionMesh(fTessellation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM) { return _to GetSphereRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM) { return _to GetCylinderRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM) { return _to GetCylinderHeight(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM) { return _to GetBoxExtents(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT) { return _to GetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT) { return _to SetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD GetVGeomData(IVectorF **aVGeomData) { return _to GetVGeomData(aVGeomData); } \
  NS_SCRIPTABLE NS_IMETHOD SetVGeomData(IVectorF *aVGeomData) { return _to SetVGeomData(aVGeomData); } \
  NS_SCRIPTABLE NS_IMETHOD GetVDiffuseColor(IVectorF **aVDiffuseColor) { return _to GetVDiffuseColor(aVDiffuseColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetVDiffuseColor(IVectorF *aVDiffuseColor) { return _to SetVDiffuseColor(aVDiffuseColor); } \
  NS_SCRIPTABLE NS_IMETHOD GetVAmbientColor(IVectorF **aVAmbientColor) { return _to GetVAmbientColor(aVAmbientColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetVAmbientColor(IVectorF *aVAmbientColor) { return _to SetVAmbientColor(aVAmbientColor); } \
  NS_SCRIPTABLE NS_IMETHOD GetMeshcollision(ITriMesh **aMeshcollision) { return _to GetMeshcollision(aMeshcollision); } \
  NS_SCRIPTABLE NS_IMETHOD SetMeshcollision(ITriMesh *aMeshcollision) { return _to SetMeshcollision(aMeshcollision); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType) { return _to SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilenamerender(char **aFilenamerender) { return _to GetFilenamerender(aFilenamerender); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilenamerender(const char *aFilenamerender) { return _to SetFilenamerender(aFilenamerender); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilenamecollision(char **aFilenamecollision) { return _to GetFilenamecollision(aFilenamecollision); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilenamecollision(const char *aFilenamecollision) { return _to SetFilenamecollision(aFilenamecollision); } \
  NS_SCRIPTABLE NS_IMETHOD GetVRenderScale(IVectorF **aVRenderScale) { return _to GetVRenderScale(aVRenderScale); } \
  NS_SCRIPTABLE NS_IMETHOD SetVRenderScale(IVectorF *aVRenderScale) { return _to SetVRenderScale(aVRenderScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetVCollisionScale(IVectorF **aVCollisionScale) { return _to GetVCollisionScale(aVCollisionScale); } \
  NS_SCRIPTABLE NS_IMETHOD SetVCollisionScale(IVectorF *aVCollisionScale) { return _to SetVCollisionScale(aVCollisionScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetFTransparency(float *aFTransparency) { return _to GetFTransparency(aFTransparency); } \
  NS_SCRIPTABLE NS_IMETHOD SetFTransparency(float aFTransparency) { return _to SetFTransparency(aFTransparency); } \
  NS_SCRIPTABLE NS_IMETHOD GetBVisible(PRBool *aBVisible) { return _to GetBVisible(aBVisible); } \
  NS_SCRIPTABLE NS_IMETHOD SetBVisible(PRBool aBVisible) { return _to SetBVisible(aBVisible); } \
  NS_SCRIPTABLE NS_IMETHOD GetBModifiable(PRBool *aBModifiable) { return _to GetBModifiable(aBModifiable); } \
  NS_SCRIPTABLE NS_IMETHOD SetBModifiable(PRBool aBModifiable) { return _to SetBModifiable(aBModifiable); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYGEOMETRYINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitCollisionMesh(float fTessellation, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitCollisionMesh(fTessellation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSphereRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCylinderRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCylinderHeight(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoxExtents(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD GetVGeomData(IVectorF **aVGeomData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVGeomData(aVGeomData); } \
  NS_SCRIPTABLE NS_IMETHOD SetVGeomData(IVectorF *aVGeomData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVGeomData(aVGeomData); } \
  NS_SCRIPTABLE NS_IMETHOD GetVDiffuseColor(IVectorF **aVDiffuseColor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVDiffuseColor(aVDiffuseColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetVDiffuseColor(IVectorF *aVDiffuseColor) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVDiffuseColor(aVDiffuseColor); } \
  NS_SCRIPTABLE NS_IMETHOD GetVAmbientColor(IVectorF **aVAmbientColor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVAmbientColor(aVAmbientColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetVAmbientColor(IVectorF *aVAmbientColor) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVAmbientColor(aVAmbientColor); } \
  NS_SCRIPTABLE NS_IMETHOD GetMeshcollision(ITriMesh **aMeshcollision) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMeshcollision(aMeshcollision); } \
  NS_SCRIPTABLE NS_IMETHOD SetMeshcollision(ITriMesh *aMeshcollision) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMeshcollision(aMeshcollision); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilenamerender(char **aFilenamerender) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilenamerender(aFilenamerender); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilenamerender(const char *aFilenamerender) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilenamerender(aFilenamerender); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilenamecollision(char **aFilenamecollision) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilenamecollision(aFilenamecollision); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilenamecollision(const char *aFilenamecollision) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilenamecollision(aFilenamecollision); } \
  NS_SCRIPTABLE NS_IMETHOD GetVRenderScale(IVectorF **aVRenderScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVRenderScale(aVRenderScale); } \
  NS_SCRIPTABLE NS_IMETHOD SetVRenderScale(IVectorF *aVRenderScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVRenderScale(aVRenderScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetVCollisionScale(IVectorF **aVCollisionScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVCollisionScale(aVCollisionScale); } \
  NS_SCRIPTABLE NS_IMETHOD SetVCollisionScale(IVectorF *aVCollisionScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVCollisionScale(aVCollisionScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetFTransparency(float *aFTransparency) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFTransparency(aFTransparency); } \
  NS_SCRIPTABLE NS_IMETHOD SetFTransparency(float aFTransparency) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFTransparency(aFTransparency); } \
  NS_SCRIPTABLE NS_IMETHOD GetBVisible(PRBool *aBVisible) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBVisible(aBVisible); } \
  NS_SCRIPTABLE NS_IMETHOD SetBVisible(PRBool aBVisible) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBVisible(aBVisible); } \
  NS_SCRIPTABLE NS_IMETHOD GetBModifiable(PRBool *aBModifiable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBModifiable(aBModifiable); } \
  NS_SCRIPTABLE NS_IMETHOD SetBModifiable(PRBool aBModifiable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBModifiable(aBModifiable); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyGeometryInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYGEOMETRYINFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyGeometryInfo)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean InitCollisionMesh (in float fTessellation); */
NS_IMETHODIMP _MYCLASS_::InitCollisionMesh(float fTessellation, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetSphereRadius (); */
NS_IMETHODIMP _MYCLASS_::GetSphereRadius(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetCylinderRadius (); */
NS_IMETHODIMP _MYCLASS_::GetCylinderRadius(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetCylinderHeight (); */
NS_IMETHODIMP _MYCLASS_::GetCylinderHeight(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetBoxExtents (); */
NS_IMETHODIMP _MYCLASS_::GetBoxExtents(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF t; */
NS_IMETHODIMP _MYCLASS_::GetT(ITransformF **aT)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetT(ITransformF *aT)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vGeomData; */
NS_IMETHODIMP _MYCLASS_::GetVGeomData(IVectorF **aVGeomData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVGeomData(IVectorF *aVGeomData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vDiffuseColor; */
NS_IMETHODIMP _MYCLASS_::GetVDiffuseColor(IVectorF **aVDiffuseColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVDiffuseColor(IVectorF *aVDiffuseColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vAmbientColor; */
NS_IMETHODIMP _MYCLASS_::GetVAmbientColor(IVectorF **aVAmbientColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVAmbientColor(IVectorF *aVAmbientColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITriMesh meshcollision; */
NS_IMETHODIMP _MYCLASS_::GetMeshcollision(ITriMesh **aMeshcollision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMeshcollision(ITriMesh *aMeshcollision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long type; */
NS_IMETHODIMP _MYCLASS_::GetType(PRInt32 *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetType(PRInt32 aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string filenamerender; */
NS_IMETHODIMP _MYCLASS_::GetFilenamerender(char **aFilenamerender)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFilenamerender(const char *aFilenamerender)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string filenamecollision; */
NS_IMETHODIMP _MYCLASS_::GetFilenamecollision(char **aFilenamecollision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFilenamecollision(const char *aFilenamecollision)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vRenderScale; */
NS_IMETHODIMP _MYCLASS_::GetVRenderScale(IVectorF **aVRenderScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVRenderScale(IVectorF *aVRenderScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vCollisionScale; */
NS_IMETHODIMP _MYCLASS_::GetVCollisionScale(IVectorF **aVCollisionScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVCollisionScale(IVectorF *aVCollisionScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float fTransparency; */
NS_IMETHODIMP _MYCLASS_::GetFTransparency(float *aFTransparency)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFTransparency(float aFTransparency)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean bVisible; */
NS_IMETHODIMP _MYCLASS_::GetBVisible(PRBool *aBVisible)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBVisible(PRBool aBVisible)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean bModifiable; */
NS_IMETHODIMP _MYCLASS_::GetBModifiable(PRBool *aBModifiable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBModifiable(PRBool aBModifiable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyLinkInfoExtraGeometryKVP */
#define IKINBODYLINKINFOEXTRAGEOMETRYKVP_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYLINKINFOEXTRAGEOMETRYKVP_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyLinkInfoExtraGeometryKVP : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYLINKINFOEXTRAGEOMETRYKVP_IID)

  /* attribute string key; */
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey) = 0;

  /* void GetValue (out unsigned long count, [array, size_is (count)] out IKinBodyGeometryInfo geometryinfo); */
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyLinkInfoExtraGeometryKVP, IKINBODYLINKINFOEXTRAGEOMETRYKVP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYLINKINFOEXTRAGEOMETRYKVP \
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey); \
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey); \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYLINKINFOEXTRAGEOMETRYKVP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey) { return _to GetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey) { return _to SetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM) { return _to GetValue(count, geometryinfo); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYLINKINFOEXTRAGEOMETRYKVP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetKey(char **aKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetKey(const char *aKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetKey(aKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(count, geometryinfo); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyLinkInfoExtraGeometryKVP
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYLINKINFOEXTRAGEOMETRYKVP

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyLinkInfoExtraGeometryKVP)

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

/* void GetValue (out unsigned long count, [array, size_is (count)] out IKinBodyGeometryInfo geometryinfo); */
NS_IMETHODIMP _MYCLASS_::GetValue(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyLinkInfo */
#define IKINBODYLINKINFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYLINKINFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyLinkInfo : public IXMLReadable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYLINKINFO_IID)

  /* void GetGeometryInfo (out unsigned long count, [array, size_is (count)] out IKinBodyGeometryInfo geometryinfo); */
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM) = 0;

  /* void GetExtraGeometries (out unsigned long count, [array, size_is (count)] out IKinBodyLinkInfoExtraGeometryKVP extrageometries); */
  NS_SCRIPTABLE NS_IMETHOD GetExtraGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkInfoExtraGeometryKVP ***extrageometries NS_OUTPARAM) = 0;

  /* attribute string name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) = 0;

  /* attribute ITransformF t; */
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT) = 0;

  /* attribute ITransformF tMassFrame; */
  NS_SCRIPTABLE NS_IMETHOD GetTMassFrame(ITransformF **aTMassFrame) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTMassFrame(ITransformF *aTMassFrame) = 0;

  /* attribute float mass; */
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *aMass) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMass(float aMass) = 0;

  /* attribute IVectorF vinertiamoments; */
  NS_SCRIPTABLE NS_IMETHOD GetVinertiamoments(IVectorF **aVinertiamoments) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVinertiamoments(IVectorF *aVinertiamoments) = 0;

  /* attribute nsIProperties mapFloatParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters) = 0;

  /* attribute nsIProperties mapIntParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters) = 0;

  /* attribute nsIProperties mapStringParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters) = 0;

  /* void GetForcedAdjacentLinks (out unsigned long count, [array, size_is (count)] out string vForcedAdjacentLinks); */
  NS_SCRIPTABLE NS_IMETHOD GetForcedAdjacentLinks(PRUint32 *count NS_OUTPARAM, char ***vForcedAdjacentLinks NS_OUTPARAM) = 0;

  /* void SetForcedAdjacentLinks (in unsigned long count, [array, size_is (count)] in string vForcedAdjacentLinks); */
  NS_SCRIPTABLE NS_IMETHOD SetForcedAdjacentLinks(PRUint32 count, const char **vForcedAdjacentLinks) = 0;

  /* attribute boolean bStatic; */
  NS_SCRIPTABLE NS_IMETHOD GetBStatic(PRBool *aBStatic) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBStatic(PRBool aBStatic) = 0;

  /* attribute boolean bIsEnabled; */
  NS_SCRIPTABLE NS_IMETHOD GetBIsEnabled(PRBool *aBIsEnabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBIsEnabled(PRBool aBIsEnabled) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyLinkInfo, IKINBODYLINKINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYLINKINFO \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetExtraGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkInfoExtraGeometryKVP ***extrageometries NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT); \
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT); \
  NS_SCRIPTABLE NS_IMETHOD GetTMassFrame(ITransformF **aTMassFrame); \
  NS_SCRIPTABLE NS_IMETHOD SetTMassFrame(ITransformF *aTMassFrame); \
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *aMass); \
  NS_SCRIPTABLE NS_IMETHOD SetMass(float aMass); \
  NS_SCRIPTABLE NS_IMETHOD GetVinertiamoments(IVectorF **aVinertiamoments); \
  NS_SCRIPTABLE NS_IMETHOD SetVinertiamoments(IVectorF *aVinertiamoments); \
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetForcedAdjacentLinks(PRUint32 *count NS_OUTPARAM, char ***vForcedAdjacentLinks NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetForcedAdjacentLinks(PRUint32 count, const char **vForcedAdjacentLinks); \
  NS_SCRIPTABLE NS_IMETHOD GetBStatic(PRBool *aBStatic); \
  NS_SCRIPTABLE NS_IMETHOD SetBStatic(PRBool aBStatic); \
  NS_SCRIPTABLE NS_IMETHOD GetBIsEnabled(PRBool *aBIsEnabled); \
  NS_SCRIPTABLE NS_IMETHOD SetBIsEnabled(PRBool aBIsEnabled); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYLINKINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM) { return _to GetGeometryInfo(count, geometryinfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtraGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkInfoExtraGeometryKVP ***extrageometries NS_OUTPARAM) { return _to GetExtraGeometries(count, extrageometries); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT) { return _to GetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT) { return _to SetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD GetTMassFrame(ITransformF **aTMassFrame) { return _to GetTMassFrame(aTMassFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetTMassFrame(ITransformF *aTMassFrame) { return _to SetTMassFrame(aTMassFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *aMass) { return _to GetMass(aMass); } \
  NS_SCRIPTABLE NS_IMETHOD SetMass(float aMass) { return _to SetMass(aMass); } \
  NS_SCRIPTABLE NS_IMETHOD GetVinertiamoments(IVectorF **aVinertiamoments) { return _to GetVinertiamoments(aVinertiamoments); } \
  NS_SCRIPTABLE NS_IMETHOD SetVinertiamoments(IVectorF *aVinertiamoments) { return _to SetVinertiamoments(aVinertiamoments); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters) { return _to GetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters) { return _to SetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters) { return _to GetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters) { return _to SetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters) { return _to GetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters) { return _to SetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetForcedAdjacentLinks(PRUint32 *count NS_OUTPARAM, char ***vForcedAdjacentLinks NS_OUTPARAM) { return _to GetForcedAdjacentLinks(count, vForcedAdjacentLinks); } \
  NS_SCRIPTABLE NS_IMETHOD SetForcedAdjacentLinks(PRUint32 count, const char **vForcedAdjacentLinks) { return _to SetForcedAdjacentLinks(count, vForcedAdjacentLinks); } \
  NS_SCRIPTABLE NS_IMETHOD GetBStatic(PRBool *aBStatic) { return _to GetBStatic(aBStatic); } \
  NS_SCRIPTABLE NS_IMETHOD SetBStatic(PRBool aBStatic) { return _to SetBStatic(aBStatic); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsEnabled(PRBool *aBIsEnabled) { return _to GetBIsEnabled(aBIsEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsEnabled(PRBool aBIsEnabled) { return _to SetBIsEnabled(aBIsEnabled); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYLINKINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGeometryInfo(count, geometryinfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetExtraGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkInfoExtraGeometryKVP ***extrageometries NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExtraGeometries(count, extrageometries); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetT(ITransformF **aT) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD SetT(ITransformF *aT) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetT(aT); } \
  NS_SCRIPTABLE NS_IMETHOD GetTMassFrame(ITransformF **aTMassFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTMassFrame(aTMassFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetTMassFrame(ITransformF *aTMassFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTMassFrame(aTMassFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *aMass) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMass(aMass); } \
  NS_SCRIPTABLE NS_IMETHOD SetMass(float aMass) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMass(aMass); } \
  NS_SCRIPTABLE NS_IMETHOD GetVinertiamoments(IVectorF **aVinertiamoments) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVinertiamoments(aVinertiamoments); } \
  NS_SCRIPTABLE NS_IMETHOD SetVinertiamoments(IVectorF *aVinertiamoments) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVinertiamoments(aVinertiamoments); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetForcedAdjacentLinks(PRUint32 *count NS_OUTPARAM, char ***vForcedAdjacentLinks NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForcedAdjacentLinks(count, vForcedAdjacentLinks); } \
  NS_SCRIPTABLE NS_IMETHOD SetForcedAdjacentLinks(PRUint32 count, const char **vForcedAdjacentLinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForcedAdjacentLinks(count, vForcedAdjacentLinks); } \
  NS_SCRIPTABLE NS_IMETHOD GetBStatic(PRBool *aBStatic) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBStatic(aBStatic); } \
  NS_SCRIPTABLE NS_IMETHOD SetBStatic(PRBool aBStatic) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBStatic(aBStatic); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsEnabled(PRBool *aBIsEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBIsEnabled(aBIsEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsEnabled(PRBool aBIsEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBIsEnabled(aBIsEnabled); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyLinkInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYLINKINFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyLinkInfo)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetGeometryInfo (out unsigned long count, [array, size_is (count)] out IKinBodyGeometryInfo geometryinfo); */
NS_IMETHODIMP _MYCLASS_::GetGeometryInfo(PRUint32 *count NS_OUTPARAM, IKinBodyGeometryInfo ***geometryinfo NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetExtraGeometries (out unsigned long count, [array, size_is (count)] out IKinBodyLinkInfoExtraGeometryKVP extrageometries); */
NS_IMETHODIMP _MYCLASS_::GetExtraGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkInfoExtraGeometryKVP ***extrageometries NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
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

/* attribute ITransformF t; */
NS_IMETHODIMP _MYCLASS_::GetT(ITransformF **aT)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetT(ITransformF *aT)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITransformF tMassFrame; */
NS_IMETHODIMP _MYCLASS_::GetTMassFrame(ITransformF **aTMassFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTMassFrame(ITransformF *aTMassFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float mass; */
NS_IMETHODIMP _MYCLASS_::GetMass(float *aMass)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMass(float aMass)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vinertiamoments; */
NS_IMETHODIMP _MYCLASS_::GetVinertiamoments(IVectorF **aVinertiamoments)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVinertiamoments(IVectorF *aVinertiamoments)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties mapFloatParameters; */
NS_IMETHODIMP _MYCLASS_::GetMapFloatParameters(nsIProperties **aMapFloatParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMapFloatParameters(nsIProperties *aMapFloatParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties mapIntParameters; */
NS_IMETHODIMP _MYCLASS_::GetMapIntParameters(nsIProperties **aMapIntParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMapIntParameters(nsIProperties *aMapIntParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties mapStringParameters; */
NS_IMETHODIMP _MYCLASS_::GetMapStringParameters(nsIProperties **aMapStringParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMapStringParameters(nsIProperties *aMapStringParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetForcedAdjacentLinks (out unsigned long count, [array, size_is (count)] out string vForcedAdjacentLinks); */
NS_IMETHODIMP _MYCLASS_::GetForcedAdjacentLinks(PRUint32 *count NS_OUTPARAM, char ***vForcedAdjacentLinks NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetForcedAdjacentLinks (in unsigned long count, [array, size_is (count)] in string vForcedAdjacentLinks); */
NS_IMETHODIMP _MYCLASS_::SetForcedAdjacentLinks(PRUint32 count, const char **vForcedAdjacentLinks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean bStatic; */
NS_IMETHODIMP _MYCLASS_::GetBStatic(PRBool *aBStatic)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBStatic(PRBool aBStatic)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean bIsEnabled; */
NS_IMETHODIMP _MYCLASS_::GetBIsEnabled(PRBool *aBIsEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBIsEnabled(PRBool aBIsEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyLinkGeometry */
#define IKINBODYLINKGEOMETRY_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYLINKGEOMETRY_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyLinkGeometry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYLINKGEOMETRY_IID)

  /* ITransformF GetTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* long GetType (); */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IVectorF GetRenderScale (); */
  NS_SCRIPTABLE NS_IMETHOD GetRenderScale(IVectorF **_retval NS_OUTPARAM) = 0;

  /* string GetRenderFilename (); */
  NS_SCRIPTABLE NS_IMETHOD GetRenderFilename(char **_retval NS_OUTPARAM) = 0;

  /* float GetTransparency (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransparency(float *_retval NS_OUTPARAM) = 0;

  /* boolean IsVisible (); */
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsModifiable (); */
  NS_SCRIPTABLE NS_IMETHOD IsModifiable(PRBool *_retval NS_OUTPARAM) = 0;

  /* float GetSphereRadius (); */
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM) = 0;

  /* float GetCylinderRadius (); */
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM) = 0;

  /* float GetCylinderHeight (); */
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM) = 0;

  /* IVectorF GetBoxExtents (); */
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetDiffuseColor (); */
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseColor(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAmbientColor (); */
  NS_SCRIPTABLE NS_IMETHOD GetAmbientColor(IVectorF **_retval NS_OUTPARAM) = 0;

  /* ITriMesh GetCollisionMesh (); */
  NS_SCRIPTABLE NS_IMETHOD GetCollisionMesh(ITriMesh **_retval NS_OUTPARAM) = 0;

  /* IKinBodyGeometryInfo GetInfo (); */
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM) = 0;

  /* IAABBF ComputeAABB (in ITransformF trans); */
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(ITransformF *trans, IAABBF **_retval NS_OUTPARAM) = 0;

  /* void serialize (in nsIOutputStream o, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) = 0;

  /* void SetCollisionMesh (in ITriMesh mesh); */
  NS_SCRIPTABLE NS_IMETHOD SetCollisionMesh(ITriMesh *mesh) = 0;

  /* boolean SetVisible (in boolean visible); */
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) = 0;

  /* void SetTransparency (in float f); */
  NS_SCRIPTABLE NS_IMETHOD SetTransparency(float f) = 0;

  /* void SetDiffuseColor (in IVectorF color); */
  NS_SCRIPTABLE NS_IMETHOD SetDiffuseColor(IVectorF *color) = 0;

  /* void SetAmbientColor (in IVectorF color); */
  NS_SCRIPTABLE NS_IMETHOD SetAmbientColor(IVectorF *color) = 0;

  /* boolean ValidateContactNormal (in IVectorF position, in IVectorF normal); */
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM) = 0;

  /* void SetRenderFilename (in string renderfilename); */
  NS_SCRIPTABLE NS_IMETHOD SetRenderFilename(const char *renderfilename) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyLinkGeometry, IKINBODYLINKGEOMETRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYLINKGEOMETRY \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRenderScale(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRenderFilename(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTransparency(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsModifiable(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseColor(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAmbientColor(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionMesh(ITriMesh **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(ITransformF *trans, IAABBF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionMesh(ITriMesh *mesh); \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetTransparency(float f); \
  NS_SCRIPTABLE NS_IMETHOD SetDiffuseColor(IVectorF *color); \
  NS_SCRIPTABLE NS_IMETHOD SetAmbientColor(IVectorF *color); \
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetRenderFilename(const char *renderfilename); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYLINKGEOMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return _to GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderScale(IVectorF **_retval NS_OUTPARAM) { return _to GetRenderScale(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderFilename(char **_retval NS_OUTPARAM) { return _to GetRenderFilename(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransparency(float *_retval NS_OUTPARAM) { return _to GetTransparency(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) { return _to IsVisible(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsModifiable(PRBool *_retval NS_OUTPARAM) { return _to IsModifiable(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM) { return _to GetSphereRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM) { return _to GetCylinderRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM) { return _to GetCylinderHeight(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM) { return _to GetBoxExtents(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseColor(IVectorF **_retval NS_OUTPARAM) { return _to GetDiffuseColor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAmbientColor(IVectorF **_retval NS_OUTPARAM) { return _to GetAmbientColor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionMesh(ITriMesh **_retval NS_OUTPARAM) { return _to GetCollisionMesh(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM) { return _to GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(ITransformF *trans, IAABBF **_retval NS_OUTPARAM) { return _to ComputeAABB(trans, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return _to Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionMesh(ITriMesh *mesh) { return _to SetCollisionMesh(mesh); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) { return _to SetVisible(visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransparency(float f) { return _to SetTransparency(f); } \
  NS_SCRIPTABLE NS_IMETHOD SetDiffuseColor(IVectorF *color) { return _to SetDiffuseColor(color); } \
  NS_SCRIPTABLE NS_IMETHOD SetAmbientColor(IVectorF *color) { return _to SetAmbientColor(color); } \
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM) { return _to ValidateContactNormal(position, normal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRenderFilename(const char *renderfilename) { return _to SetRenderFilename(renderfilename); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYLINKGEOMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderScale(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRenderScale(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRenderFilename(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRenderFilename(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransparency(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransparency(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsVisible(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsModifiable(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsModifiable(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSphereRadius(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSphereRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderRadius(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCylinderRadius(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCylinderHeight(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCylinderHeight(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoxExtents(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoxExtents(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseColor(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDiffuseColor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAmbientColor(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAmbientColor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionMesh(ITriMesh **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCollisionMesh(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(ITransformF *trans, IAABBF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeAABB(trans, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD SetCollisionMesh(ITriMesh *mesh) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCollisionMesh(mesh); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVisible(visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransparency(float f) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransparency(f); } \
  NS_SCRIPTABLE NS_IMETHOD SetDiffuseColor(IVectorF *color) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDiffuseColor(color); } \
  NS_SCRIPTABLE NS_IMETHOD SetAmbientColor(IVectorF *color) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAmbientColor(color); } \
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ValidateContactNormal(position, normal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRenderFilename(const char *renderfilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRenderFilename(renderfilename); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyLinkGeometry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYLINKGEOMETRY

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyLinkGeometry)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* ITransformF GetTransform (); */
NS_IMETHODIMP _MYCLASS_::GetTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetType (); */
NS_IMETHODIMP _MYCLASS_::GetType(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetRenderScale (); */
NS_IMETHODIMP _MYCLASS_::GetRenderScale(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetRenderFilename (); */
NS_IMETHODIMP _MYCLASS_::GetRenderFilename(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetTransparency (); */
NS_IMETHODIMP _MYCLASS_::GetTransparency(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsVisible (); */
NS_IMETHODIMP _MYCLASS_::IsVisible(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsModifiable (); */
NS_IMETHODIMP _MYCLASS_::IsModifiable(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetSphereRadius (); */
NS_IMETHODIMP _MYCLASS_::GetSphereRadius(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetCylinderRadius (); */
NS_IMETHODIMP _MYCLASS_::GetCylinderRadius(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetCylinderHeight (); */
NS_IMETHODIMP _MYCLASS_::GetCylinderHeight(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetBoxExtents (); */
NS_IMETHODIMP _MYCLASS_::GetBoxExtents(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetDiffuseColor (); */
NS_IMETHODIMP _MYCLASS_::GetDiffuseColor(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAmbientColor (); */
NS_IMETHODIMP _MYCLASS_::GetAmbientColor(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITriMesh GetCollisionMesh (); */
NS_IMETHODIMP _MYCLASS_::GetCollisionMesh(ITriMesh **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyGeometryInfo GetInfo (); */
NS_IMETHODIMP _MYCLASS_::GetInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IAABBF ComputeAABB (in ITransformF trans); */
NS_IMETHODIMP _MYCLASS_::ComputeAABB(ITransformF *trans, IAABBF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void serialize (in nsIOutputStream o, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *o, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetCollisionMesh (in ITriMesh mesh); */
NS_IMETHODIMP _MYCLASS_::SetCollisionMesh(ITriMesh *mesh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetVisible (in boolean visible); */
NS_IMETHODIMP _MYCLASS_::SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTransparency (in float f); */
NS_IMETHODIMP _MYCLASS_::SetTransparency(float f)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDiffuseColor (in IVectorF color); */
NS_IMETHODIMP _MYCLASS_::SetDiffuseColor(IVectorF *color)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAmbientColor (in IVectorF color); */
NS_IMETHODIMP _MYCLASS_::SetAmbientColor(IVectorF *color)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean ValidateContactNormal (in IVectorF position, in IVectorF normal); */
NS_IMETHODIMP _MYCLASS_::ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRenderFilename (in string renderfilename); */
NS_IMETHODIMP _MYCLASS_::SetRenderFilename(const char *renderfilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyLink */
#define IKINBODYLINK_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYLINK_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyLink : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYLINK_IID)

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

  /* boolean IsStatic (); */
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM) = 0;

  /* void Enable (in boolean enable); */
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable) = 0;

  /* boolean IsEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SetVisible (in boolean visible); */
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsVisible (); */
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) = 0;

  /* IKinBody GetParent (); */
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM) = 0;

  /* long GetIndex (); */
  NS_SCRIPTABLE NS_IMETHOD GetIndex(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* ITriMesh GetCollisionData (); */
  NS_SCRIPTABLE NS_IMETHOD GetCollisionData(ITriMesh **_retval NS_OUTPARAM) = 0;

  /* IAABBF ComputeLocalAABB (); */
  NS_SCRIPTABLE NS_IMETHOD ComputeLocalAABB(IAABBF **_retval NS_OUTPARAM) = 0;

  /* IAABBF ComputeAABB (); */
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* void GetParentLinks (out unsigned long count, [array, size_is (count)] out IKinBodyLink vParentLinks); */
  NS_SCRIPTABLE NS_IMETHOD GetParentLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vParentLinks NS_OUTPARAM) = 0;

  /* boolean IsParentLink (in IKinBodyLink plink); */
  NS_SCRIPTABLE NS_IMETHOD IsParentLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) = 0;

  /* IVectorF GetLocalCOM (); */
  NS_SCRIPTABLE NS_IMETHOD GetLocalCOM(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetGlobalCOM (); */
  NS_SCRIPTABLE NS_IMETHOD GetGlobalCOM(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetCOMOffset (); */
  NS_SCRIPTABLE NS_IMETHOD GetCOMOffset(IVectorF **_retval NS_OUTPARAM) = 0;

  /* ITransformMatrixF GetLocalInertia (); */
  NS_SCRIPTABLE NS_IMETHOD GetLocalInertia(ITransformMatrixF **_retval NS_OUTPARAM) = 0;

  /* ITransformMatrixF GetGlobalInertia (); */
  NS_SCRIPTABLE NS_IMETHOD GetGlobalInertia(ITransformMatrixF **_retval NS_OUTPARAM) = 0;

  /* void SetLocalMassFrame (in ITransformF massframe); */
  NS_SCRIPTABLE NS_IMETHOD SetLocalMassFrame(ITransformF *massframe) = 0;

  /* void SetPrincipalMomentsOfInertia (in IVectorF inertiamoments); */
  NS_SCRIPTABLE NS_IMETHOD SetPrincipalMomentsOfInertia(IVectorF *inertiamoments) = 0;

  /* void SetMass (in float mass); */
  NS_SCRIPTABLE NS_IMETHOD SetMass(float mass) = 0;

  /* ITransformF GetLocalMassFrame (); */
  NS_SCRIPTABLE NS_IMETHOD GetLocalMassFrame(ITransformF **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetGlobalMassFrame (); */
  NS_SCRIPTABLE NS_IMETHOD GetGlobalMassFrame(ITransformF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetPrincipalMomentsOfInertia (); */
  NS_SCRIPTABLE NS_IMETHOD GetPrincipalMomentsOfInertia(IVectorF **_retval NS_OUTPARAM) = 0;

  /* float GetMass (); */
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *_retval NS_OUTPARAM) = 0;

  /* void SetStatic (in boolean bStatic); */
  NS_SCRIPTABLE NS_IMETHOD SetStatic(PRBool bStatic) = 0;

  /* void SetTransform (in ITransformF transform); */
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform) = 0;

  /* void SetForce (in IVectorF force, in IVectorF pos, in boolean add); */
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *force, IVectorF *pos, PRBool add) = 0;

  /* void SetTorque (in IVectorF torque, in boolean add); */
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *torque, PRBool add) = 0;

  /* void SetVelocity (in IVectorF linearvel, in IVectorF angularvel); */
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel) = 0;

  /* void GetVelocity (out IVectorF linearvel, out IVectorF angularvel); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM) = 0;

  /* void GetGeometries (out unsigned long count, [array, size_is (count)] out IKinBodyLinkGeometry geometries); */
  NS_SCRIPTABLE NS_IMETHOD GetGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM) = 0;

  /* IKinBodyLinkGeometry GetGeometry (in long index); */
  NS_SCRIPTABLE NS_IMETHOD GetGeometry(PRInt32 index, IKinBodyLinkGeometry **_retval NS_OUTPARAM) = 0;

  /* void InitGeometries (in unsigned long count, [array, size_is (count)] in IKinBodyLinkGeometry geometries); */
  NS_SCRIPTABLE NS_IMETHOD InitGeometries(PRUint32 count, IKinBodyLinkGeometry **geometries) = 0;

  /* void SetGeometriesFromGroup (in string name); */
  NS_SCRIPTABLE NS_IMETHOD SetGeometriesFromGroup(const char *name) = 0;

  /* void GetGeometriesFromGroup (in string name, out unsigned long count, [array, size_is (count)] out IKinBodyLinkGeometry geometries); */
  NS_SCRIPTABLE NS_IMETHOD GetGeometriesFromGroup(const char *name, PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM) = 0;

  /* void SetGroupGeometries (in string name, in unsigned long count, [array, size_is (count)] in IKinBodyLinkGeometry geometries); */
  NS_SCRIPTABLE NS_IMETHOD SetGroupGeometries(const char *name, PRUint32 count, IKinBodyLinkGeometry **geometries) = 0;

  /* long GetGroupNumGeometries (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetGroupNumGeometries(const char *name, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void SwapGeometries (in IKinBodyLink link); */
  NS_SCRIPTABLE NS_IMETHOD SwapGeometries(IKinBodyLink *link) = 0;

  /* boolean ValidateContactNormal (in IVectorF position, in IVectorF normal); */
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsRigidlyAttached (in IKinBodyLink plink); */
  NS_SCRIPTABLE NS_IMETHOD IsRigidlyAttached(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetRigidlyAttachedLinks (out unsigned long count, [array, size_is (count)] out IKinBodyLink vattachedlinks); */
  NS_SCRIPTABLE NS_IMETHOD GetRigidlyAttachedLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vattachedlinks NS_OUTPARAM) = 0;

  /* void serialize (in nsIOutputStream o, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) = 0;

  /* void GetFloatParameters (out nsIProperties params); */
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **params NS_OUTPARAM) = 0;

  /* void SetFloatParameters (in string key, in unsigned long count, [array, size_is (count)] in float parameters); */
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters) = 0;

  /* void GetIntParameters (out nsIProperties params); */
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **params NS_OUTPARAM) = 0;

  /* void SetIntParameters (in string key, in unsigned long count, [array, size_is (count)] in long parameters); */
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters) = 0;

  /* void GetStringParameters (out nsIProperties params); */
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **params NS_OUTPARAM) = 0;

  /* void SetStringParameters (in string key, in unsigned long count, [array, size_is (count)] in string parameters); */
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters) = 0;

  /* void UpdateInfo (); */
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void) = 0;

  /* IKinBodyLinkInfo GetInfo (); */
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLinkInfo UpdateAndGetInfo (); */
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyLink, IKINBODYLINK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYLINK \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable); \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIndex(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionData(ITriMesh **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ComputeLocalAABB(IAABBF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetParentLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vParentLinks NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsParentLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalCOM(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalCOM(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCOMOffset(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalInertia(ITransformMatrixF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalInertia(ITransformMatrixF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetLocalMassFrame(ITransformF *massframe); \
  NS_SCRIPTABLE NS_IMETHOD SetPrincipalMomentsOfInertia(IVectorF *inertiamoments); \
  NS_SCRIPTABLE NS_IMETHOD SetMass(float mass); \
  NS_SCRIPTABLE NS_IMETHOD GetLocalMassFrame(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalMassFrame(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPrincipalMomentsOfInertia(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetStatic(PRBool bStatic); \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform); \
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *force, IVectorF *pos, PRBool add); \
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *torque, PRBool add); \
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGeometry(PRInt32 index, IKinBodyLinkGeometry **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitGeometries(PRUint32 count, IKinBodyLinkGeometry **geometries); \
  NS_SCRIPTABLE NS_IMETHOD SetGeometriesFromGroup(const char *name); \
  NS_SCRIPTABLE NS_IMETHOD GetGeometriesFromGroup(const char *name, PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetGroupGeometries(const char *name, PRUint32 count, IKinBodyLinkGeometry **geometries); \
  NS_SCRIPTABLE NS_IMETHOD GetGroupNumGeometries(const char *name, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SwapGeometries(IKinBodyLink *link); \
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsRigidlyAttached(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRigidlyAttachedLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vattachedlinks NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **params NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters); \
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **params NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters); \
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **params NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters); \
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void); \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYLINK(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM) { return _to IsStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable) { return _to Enable(enable); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return _to IsEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) { return _to SetVisible(visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) { return _to IsVisible(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM) { return _to GetParent(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndex(PRInt32 *_retval NS_OUTPARAM) { return _to GetIndex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionData(ITriMesh **_retval NS_OUTPARAM) { return _to GetCollisionData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeLocalAABB(IAABBF **_retval NS_OUTPARAM) { return _to ComputeLocalAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) { return _to ComputeAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vParentLinks NS_OUTPARAM) { return _to GetParentLinks(count, vParentLinks); } \
  NS_SCRIPTABLE NS_IMETHOD IsParentLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) { return _to IsParentLink(plink, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalCOM(IVectorF **_retval NS_OUTPARAM) { return _to GetLocalCOM(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalCOM(IVectorF **_retval NS_OUTPARAM) { return _to GetGlobalCOM(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCOMOffset(IVectorF **_retval NS_OUTPARAM) { return _to GetCOMOffset(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalInertia(ITransformMatrixF **_retval NS_OUTPARAM) { return _to GetLocalInertia(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalInertia(ITransformMatrixF **_retval NS_OUTPARAM) { return _to GetGlobalInertia(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocalMassFrame(ITransformF *massframe) { return _to SetLocalMassFrame(massframe); } \
  NS_SCRIPTABLE NS_IMETHOD SetPrincipalMomentsOfInertia(IVectorF *inertiamoments) { return _to SetPrincipalMomentsOfInertia(inertiamoments); } \
  NS_SCRIPTABLE NS_IMETHOD SetMass(float mass) { return _to SetMass(mass); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalMassFrame(ITransformF **_retval NS_OUTPARAM) { return _to GetLocalMassFrame(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalMassFrame(ITransformF **_retval NS_OUTPARAM) { return _to GetGlobalMassFrame(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrincipalMomentsOfInertia(IVectorF **_retval NS_OUTPARAM) { return _to GetPrincipalMomentsOfInertia(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *_retval NS_OUTPARAM) { return _to GetMass(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetStatic(PRBool bStatic) { return _to SetStatic(bStatic); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform) { return _to SetTransform(transform); } \
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *force, IVectorF *pos, PRBool add) { return _to SetForce(force, pos, add); } \
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *torque, PRBool add) { return _to SetTorque(torque, add); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel) { return _to SetVelocity(linearvel, angularvel); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM) { return _to GetVelocity(linearvel, angularvel); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM) { return _to GetGeometries(count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometry(PRInt32 index, IKinBodyLinkGeometry **_retval NS_OUTPARAM) { return _to GetGeometry(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitGeometries(PRUint32 count, IKinBodyLinkGeometry **geometries) { return _to InitGeometries(count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD SetGeometriesFromGroup(const char *name) { return _to SetGeometriesFromGroup(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometriesFromGroup(const char *name, PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM) { return _to GetGeometriesFromGroup(name, count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD SetGroupGeometries(const char *name, PRUint32 count, IKinBodyLinkGeometry **geometries) { return _to SetGroupGeometries(name, count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD GetGroupNumGeometries(const char *name, PRInt32 *_retval NS_OUTPARAM) { return _to GetGroupNumGeometries(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SwapGeometries(IKinBodyLink *link) { return _to SwapGeometries(link); } \
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM) { return _to ValidateContactNormal(position, normal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsRigidlyAttached(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) { return _to IsRigidlyAttached(plink, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRigidlyAttachedLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vattachedlinks NS_OUTPARAM) { return _to GetRigidlyAttachedLinks(count, vattachedlinks); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return _to Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **params NS_OUTPARAM) { return _to GetFloatParameters(params); } \
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters) { return _to SetFloatParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **params NS_OUTPARAM) { return _to GetIntParameters(params); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters) { return _to SetIntParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **params NS_OUTPARAM) { return _to GetStringParameters(params); } \
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters) { return _to SetStringParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void) { return _to UpdateInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM) { return _to GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM) { return _to UpdateAndGetInfo(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYLINK(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable) { return !_to ? NS_ERROR_NULL_POINTER : _to->Enable(enable); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVisible(visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsVisible(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndex(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCollisionData(ITriMesh **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCollisionData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeLocalAABB(IAABBF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeLocalAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vParentLinks NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentLinks(count, vParentLinks); } \
  NS_SCRIPTABLE NS_IMETHOD IsParentLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsParentLink(plink, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalCOM(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalCOM(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalCOM(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalCOM(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCOMOffset(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCOMOffset(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalInertia(ITransformMatrixF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalInertia(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalInertia(ITransformMatrixF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalInertia(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocalMassFrame(ITransformF *massframe) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLocalMassFrame(massframe); } \
  NS_SCRIPTABLE NS_IMETHOD SetPrincipalMomentsOfInertia(IVectorF *inertiamoments) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPrincipalMomentsOfInertia(inertiamoments); } \
  NS_SCRIPTABLE NS_IMETHOD SetMass(float mass) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMass(mass); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocalMassFrame(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalMassFrame(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalMassFrame(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalMassFrame(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrincipalMomentsOfInertia(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipalMomentsOfInertia(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMass(float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMass(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetStatic(PRBool bStatic) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStatic(bStatic); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransform(transform); } \
  NS_SCRIPTABLE NS_IMETHOD SetForce(IVectorF *force, IVectorF *pos, PRBool add) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForce(force, pos, add); } \
  NS_SCRIPTABLE NS_IMETHOD SetTorque(IVectorF *torque, PRBool add) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTorque(torque, add); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVelocity(linearvel, angularvel); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocity(linearvel, angularvel); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGeometries(count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometry(PRInt32 index, IKinBodyLinkGeometry **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGeometry(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitGeometries(PRUint32 count, IKinBodyLinkGeometry **geometries) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitGeometries(count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD SetGeometriesFromGroup(const char *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGeometriesFromGroup(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetGeometriesFromGroup(const char *name, PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGeometriesFromGroup(name, count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD SetGroupGeometries(const char *name, PRUint32 count, IKinBodyLinkGeometry **geometries) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGroupGeometries(name, count, geometries); } \
  NS_SCRIPTABLE NS_IMETHOD GetGroupNumGeometries(const char *name, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGroupNumGeometries(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SwapGeometries(IKinBodyLink *link) { return !_to ? NS_ERROR_NULL_POINTER : _to->SwapGeometries(link); } \
  NS_SCRIPTABLE NS_IMETHOD ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ValidateContactNormal(position, normal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsRigidlyAttached(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsRigidlyAttached(plink, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRigidlyAttachedLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vattachedlinks NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRigidlyAttachedLinks(count, vattachedlinks); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **params NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFloatParameters(params); } \
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFloatParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **params NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntParameters(params); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIntParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **params NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringParameters(params); } \
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStringParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateAndGetInfo(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyLink
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYLINK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyLink)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsStatic (); */
NS_IMETHODIMP _MYCLASS_::IsStatic(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Enable (in boolean enable); */
NS_IMETHODIMP _MYCLASS_::Enable(PRBool enable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsEnabled (); */
NS_IMETHODIMP _MYCLASS_::IsEnabled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetVisible (in boolean visible); */
NS_IMETHODIMP _MYCLASS_::SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsVisible (); */
NS_IMETHODIMP _MYCLASS_::IsVisible(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody GetParent (); */
NS_IMETHODIMP _MYCLASS_::GetParent(IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetIndex (); */
NS_IMETHODIMP _MYCLASS_::GetIndex(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITriMesh GetCollisionData (); */
NS_IMETHODIMP _MYCLASS_::GetCollisionData(ITriMesh **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IAABBF ComputeLocalAABB (); */
NS_IMETHODIMP _MYCLASS_::ComputeLocalAABB(IAABBF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IAABBF ComputeAABB (); */
NS_IMETHODIMP _MYCLASS_::ComputeAABB(IAABBF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetTransform (); */
NS_IMETHODIMP _MYCLASS_::GetTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetParentLinks (out unsigned long count, [array, size_is (count)] out IKinBodyLink vParentLinks); */
NS_IMETHODIMP _MYCLASS_::GetParentLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vParentLinks NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsParentLink (in IKinBodyLink plink); */
NS_IMETHODIMP _MYCLASS_::IsParentLink(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetLocalCOM (); */
NS_IMETHODIMP _MYCLASS_::GetLocalCOM(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetGlobalCOM (); */
NS_IMETHODIMP _MYCLASS_::GetGlobalCOM(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetCOMOffset (); */
NS_IMETHODIMP _MYCLASS_::GetCOMOffset(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformMatrixF GetLocalInertia (); */
NS_IMETHODIMP _MYCLASS_::GetLocalInertia(ITransformMatrixF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformMatrixF GetGlobalInertia (); */
NS_IMETHODIMP _MYCLASS_::GetGlobalInertia(ITransformMatrixF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLocalMassFrame (in ITransformF massframe); */
NS_IMETHODIMP _MYCLASS_::SetLocalMassFrame(ITransformF *massframe)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetPrincipalMomentsOfInertia (in IVectorF inertiamoments); */
NS_IMETHODIMP _MYCLASS_::SetPrincipalMomentsOfInertia(IVectorF *inertiamoments)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetMass (in float mass); */
NS_IMETHODIMP _MYCLASS_::SetMass(float mass)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetLocalMassFrame (); */
NS_IMETHODIMP _MYCLASS_::GetLocalMassFrame(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetGlobalMassFrame (); */
NS_IMETHODIMP _MYCLASS_::GetGlobalMassFrame(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetPrincipalMomentsOfInertia (); */
NS_IMETHODIMP _MYCLASS_::GetPrincipalMomentsOfInertia(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetMass (); */
NS_IMETHODIMP _MYCLASS_::GetMass(float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetStatic (in boolean bStatic); */
NS_IMETHODIMP _MYCLASS_::SetStatic(PRBool bStatic)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTransform (in ITransformF transform); */
NS_IMETHODIMP _MYCLASS_::SetTransform(ITransformF *transform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetForce (in IVectorF force, in IVectorF pos, in boolean add); */
NS_IMETHODIMP _MYCLASS_::SetForce(IVectorF *force, IVectorF *pos, PRBool add)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTorque (in IVectorF torque, in boolean add); */
NS_IMETHODIMP _MYCLASS_::SetTorque(IVectorF *torque, PRBool add)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetVelocity (in IVectorF linearvel, in IVectorF angularvel); */
NS_IMETHODIMP _MYCLASS_::SetVelocity(IVectorF *linearvel, IVectorF *angularvel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocity (out IVectorF linearvel, out IVectorF angularvel); */
NS_IMETHODIMP _MYCLASS_::GetVelocity(IVectorF **linearvel NS_OUTPARAM, IVectorF **angularvel NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetGeometries (out unsigned long count, [array, size_is (count)] out IKinBodyLinkGeometry geometries); */
NS_IMETHODIMP _MYCLASS_::GetGeometries(PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLinkGeometry GetGeometry (in long index); */
NS_IMETHODIMP _MYCLASS_::GetGeometry(PRInt32 index, IKinBodyLinkGeometry **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void InitGeometries (in unsigned long count, [array, size_is (count)] in IKinBodyLinkGeometry geometries); */
NS_IMETHODIMP _MYCLASS_::InitGeometries(PRUint32 count, IKinBodyLinkGeometry **geometries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetGeometriesFromGroup (in string name); */
NS_IMETHODIMP _MYCLASS_::SetGeometriesFromGroup(const char *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetGeometriesFromGroup (in string name, out unsigned long count, [array, size_is (count)] out IKinBodyLinkGeometry geometries); */
NS_IMETHODIMP _MYCLASS_::GetGeometriesFromGroup(const char *name, PRUint32 *count NS_OUTPARAM, IKinBodyLinkGeometry ***geometries NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetGroupGeometries (in string name, in unsigned long count, [array, size_is (count)] in IKinBodyLinkGeometry geometries); */
NS_IMETHODIMP _MYCLASS_::SetGroupGeometries(const char *name, PRUint32 count, IKinBodyLinkGeometry **geometries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetGroupNumGeometries (in string name); */
NS_IMETHODIMP _MYCLASS_::GetGroupNumGeometries(const char *name, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SwapGeometries (in IKinBodyLink link); */
NS_IMETHODIMP _MYCLASS_::SwapGeometries(IKinBodyLink *link)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean ValidateContactNormal (in IVectorF position, in IVectorF normal); */
NS_IMETHODIMP _MYCLASS_::ValidateContactNormal(IVectorF *position, IVectorF *normal, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsRigidlyAttached (in IKinBodyLink plink); */
NS_IMETHODIMP _MYCLASS_::IsRigidlyAttached(IKinBodyLink *plink, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetRigidlyAttachedLinks (out unsigned long count, [array, size_is (count)] out IKinBodyLink vattachedlinks); */
NS_IMETHODIMP _MYCLASS_::GetRigidlyAttachedLinks(PRUint32 *count NS_OUTPARAM, IKinBodyLink ***vattachedlinks NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void serialize (in nsIOutputStream o, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *o, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetFloatParameters (out nsIProperties params); */
NS_IMETHODIMP _MYCLASS_::GetFloatParameters(nsIProperties **params NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetFloatParameters (in string key, in unsigned long count, [array, size_is (count)] in float parameters); */
NS_IMETHODIMP _MYCLASS_::SetFloatParameters(const char *key, PRUint32 count, float *parameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetIntParameters (out nsIProperties params); */
NS_IMETHODIMP _MYCLASS_::GetIntParameters(nsIProperties **params NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetIntParameters (in string key, in unsigned long count, [array, size_is (count)] in long parameters); */
NS_IMETHODIMP _MYCLASS_::SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetStringParameters (out nsIProperties params); */
NS_IMETHODIMP _MYCLASS_::GetStringParameters(nsIProperties **params NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetStringParameters (in string key, in unsigned long count, [array, size_is (count)] in string parameters); */
NS_IMETHODIMP _MYCLASS_::SetStringParameters(const char *key, PRUint32 count, const char **parameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void UpdateInfo (); */
NS_IMETHODIMP _MYCLASS_::UpdateInfo()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLinkInfo GetInfo (); */
NS_IMETHODIMP _MYCLASS_::GetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLinkInfo UpdateAndGetInfo (); */
NS_IMETHODIMP _MYCLASS_::UpdateAndGetInfo(IKinBodyLinkInfo **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyMimicInfo */
#define IKINBODYMIMICINFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYMIMICINFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyMimicInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYMIMICINFO_IID)

  /* attribute string equationsPosition; */
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition) = 0;

  /* attribute string equationsVelocity; */
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity) = 0;

  /* attribute string equationsAcceleration; */
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyMimicInfo, IKINBODYMIMICINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYMIMICINFO \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition); \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition); \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity); \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity); \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration); \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYMIMICINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition) { return _to GetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition) { return _to SetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity) { return _to GetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity) { return _to SetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration) { return _to GetEquationsAcceleration(aEquationsAcceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration) { return _to SetEquationsAcceleration(aEquationsAcceleration); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYMIMICINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEquationsAcceleration(aEquationsAcceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEquationsAcceleration(aEquationsAcceleration); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyMimicInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYMIMICINFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyMimicInfo)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute string equationsPosition; */
NS_IMETHODIMP _MYCLASS_::GetEquationsPosition(char **aEquationsPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEquationsPosition(const char *aEquationsPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string equationsVelocity; */
NS_IMETHODIMP _MYCLASS_::GetEquationsVelocity(char **aEquationsVelocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEquationsVelocity(const char *aEquationsVelocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string equationsAcceleration; */
NS_IMETHODIMP _MYCLASS_::GetEquationsAcceleration(char **aEquationsAcceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEquationsAcceleration(const char *aEquationsAcceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyMimicDOFFormat */
#define IKINBODYMIMICDOFFORMAT_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYMIMICDOFFORMAT_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyMimicDOFFormat : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYMIMICDOFFORMAT_IID)

  /* attribute short jointindex; */
  NS_SCRIPTABLE NS_IMETHOD GetJointindex(PRInt16 *aJointindex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetJointindex(PRInt16 aJointindex) = 0;

  /* attribute short dofindex; */
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex) = 0;

  /* attribute octet axis; */
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRUint8 *aAxis) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAxis(PRUint8 aAxis) = 0;

  /* IKinBodyJoint GetJoint (in IKinBody parent); */
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBody *parent, IKinBodyJoint **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyMimicDOFFormat, IKINBODYMIMICDOFFORMAT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYMIMICDOFFORMAT \
  NS_SCRIPTABLE NS_IMETHOD GetJointindex(PRInt16 *aJointindex); \
  NS_SCRIPTABLE NS_IMETHOD SetJointindex(PRInt16 aJointindex); \
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex); \
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex); \
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRUint8 *aAxis); \
  NS_SCRIPTABLE NS_IMETHOD SetAxis(PRUint8 aAxis); \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBody *parent, IKinBodyJoint **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYMIMICDOFFORMAT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetJointindex(PRInt16 *aJointindex) { return _to GetJointindex(aJointindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointindex(PRInt16 aJointindex) { return _to SetJointindex(aJointindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex) { return _to GetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex) { return _to SetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRUint8 *aAxis) { return _to GetAxis(aAxis); } \
  NS_SCRIPTABLE NS_IMETHOD SetAxis(PRUint8 aAxis) { return _to SetAxis(aAxis); } \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBody *parent, IKinBodyJoint **_retval NS_OUTPARAM) { return _to GetJoint(parent, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYMIMICDOFFORMAT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetJointindex(PRInt16 *aJointindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJointindex(aJointindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointindex(PRInt16 aJointindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJointindex(aJointindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRUint8 *aAxis) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAxis(aAxis); } \
  NS_SCRIPTABLE NS_IMETHOD SetAxis(PRUint8 aAxis) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAxis(aAxis); } \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(IKinBody *parent, IKinBodyJoint **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJoint(parent, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyMimicDOFFormat
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYMIMICDOFFORMAT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyMimicDOFFormat)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute short jointindex; */
NS_IMETHODIMP _MYCLASS_::GetJointindex(PRInt16 *aJointindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetJointindex(PRInt16 aJointindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute short dofindex; */
NS_IMETHODIMP _MYCLASS_::GetDofindex(PRInt16 *aDofindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDofindex(PRInt16 aDofindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute octet axis; */
NS_IMETHODIMP _MYCLASS_::GetAxis(PRUint8 *aAxis)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAxis(PRUint8 aAxis)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyJoint GetJoint (in IKinBody parent); */
NS_IMETHODIMP _MYCLASS_::GetJoint(IKinBody *parent, IKinBodyJoint **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyMimicDOFHierarchy */
#define IKINBODYMIMICDOFHIERARCHY_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYMIMICDOFHIERARCHY_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyMimicDOFHierarchy : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYMIMICDOFHIERARCHY_IID)

  /* attribute short dofindex; */
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex) = 0;

  /* attribute unsigned short dofformatindex; */
  NS_SCRIPTABLE NS_IMETHOD GetDofformatindex(PRUint16 *aDofformatindex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDofformatindex(PRUint16 aDofformatindex) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyMimicDOFHierarchy, IKINBODYMIMICDOFHIERARCHY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYMIMICDOFHIERARCHY \
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex); \
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex); \
  NS_SCRIPTABLE NS_IMETHOD GetDofformatindex(PRUint16 *aDofformatindex); \
  NS_SCRIPTABLE NS_IMETHOD SetDofformatindex(PRUint16 aDofformatindex); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYMIMICDOFHIERARCHY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex) { return _to GetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex) { return _to SetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetDofformatindex(PRUint16 *aDofformatindex) { return _to GetDofformatindex(aDofformatindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetDofformatindex(PRUint16 aDofformatindex) { return _to SetDofformatindex(aDofformatindex); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYMIMICDOFHIERARCHY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDofindex(PRInt16 *aDofindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetDofindex(PRInt16 aDofindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDofindex(aDofindex); } \
  NS_SCRIPTABLE NS_IMETHOD GetDofformatindex(PRUint16 *aDofformatindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDofformatindex(aDofformatindex); } \
  NS_SCRIPTABLE NS_IMETHOD SetDofformatindex(PRUint16 aDofformatindex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDofformatindex(aDofformatindex); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyMimicDOFHierarchy
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYMIMICDOFHIERARCHY

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyMimicDOFHierarchy)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute short dofindex; */
NS_IMETHODIMP _MYCLASS_::GetDofindex(PRInt16 *aDofindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDofindex(PRInt16 aDofindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned short dofformatindex; */
NS_IMETHODIMP _MYCLASS_::GetDofformatindex(PRUint16 *aDofformatindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDofformatindex(PRUint16 aDofformatindex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyMimic */
#define IKINBODYMIMIC_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYMIMIC_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyMimic : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYMIMIC_IID)

  /* attribute string equationsPosition; */
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition) = 0;

  /* attribute string equationsVelocity; */
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity) = 0;

  /* attribute string equationsAcceleration; */
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration) = 0;

  /* void GetDOFFormat (out unsigned long count, [array, size_is (count)] out IKinBodyMimicDOFFormat vdofformat); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFFormat(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFFormat ***vdofformat NS_OUTPARAM) = 0;

  /* void SetDOFFormat (in unsigned long count, [array, size_is (count)] in IKinBodyMimicDOFFormat vdofformat); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFFormat(PRUint32 count, IKinBodyMimicDOFFormat **vdofformat) = 0;

  /* void GetMimicDOFs (out unsigned long count, [array, size_is (count)] out IKinBodyMimicDOFHierarchy vmimicdofs); */
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFs(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFHierarchy ***vmimicdofs NS_OUTPARAM) = 0;

  /* void SetMimicDOFs (in unsigned long count, [array, size_is (count)] in IKinBodyMimicDOFHierarchy vmimicdofs); */
  NS_SCRIPTABLE NS_IMETHOD SetMimicDOFs(PRUint32 count, IKinBodyMimicDOFHierarchy **vmimicdofs) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyMimic, IKINBODYMIMIC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYMIMIC \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition); \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition); \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity); \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity); \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration); \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFFormat(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFFormat ***vdofformat NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFFormat(PRUint32 count, IKinBodyMimicDOFFormat **vdofformat); \
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFs(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFHierarchy ***vmimicdofs NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetMimicDOFs(PRUint32 count, IKinBodyMimicDOFHierarchy **vmimicdofs); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYMIMIC(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition) { return _to GetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition) { return _to SetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity) { return _to GetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity) { return _to SetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration) { return _to GetEquationsAcceleration(aEquationsAcceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration) { return _to SetEquationsAcceleration(aEquationsAcceleration); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFFormat(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFFormat ***vdofformat NS_OUTPARAM) { return _to GetDOFFormat(count, vdofformat); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFFormat(PRUint32 count, IKinBodyMimicDOFFormat **vdofformat) { return _to SetDOFFormat(count, vdofformat); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFs(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFHierarchy ***vmimicdofs NS_OUTPARAM) { return _to GetMimicDOFs(count, vmimicdofs); } \
  NS_SCRIPTABLE NS_IMETHOD SetMimicDOFs(PRUint32 count, IKinBodyMimicDOFHierarchy **vmimicdofs) { return _to SetMimicDOFs(count, vmimicdofs); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYMIMIC(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsPosition(char **aEquationsPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsPosition(const char *aEquationsPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEquationsPosition(aEquationsPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsVelocity(char **aEquationsVelocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsVelocity(const char *aEquationsVelocity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEquationsVelocity(aEquationsVelocity); } \
  NS_SCRIPTABLE NS_IMETHOD GetEquationsAcceleration(char **aEquationsAcceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEquationsAcceleration(aEquationsAcceleration); } \
  NS_SCRIPTABLE NS_IMETHOD SetEquationsAcceleration(const char *aEquationsAcceleration) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEquationsAcceleration(aEquationsAcceleration); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFFormat(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFFormat ***vdofformat NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFFormat(count, vdofformat); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFFormat(PRUint32 count, IKinBodyMimicDOFFormat **vdofformat) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFFormat(count, vdofformat); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFs(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFHierarchy ***vmimicdofs NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMimicDOFs(count, vmimicdofs); } \
  NS_SCRIPTABLE NS_IMETHOD SetMimicDOFs(PRUint32 count, IKinBodyMimicDOFHierarchy **vmimicdofs) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMimicDOFs(count, vmimicdofs); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyMimic
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYMIMIC

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyMimic)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute string equationsPosition; */
NS_IMETHODIMP _MYCLASS_::GetEquationsPosition(char **aEquationsPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEquationsPosition(const char *aEquationsPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string equationsVelocity; */
NS_IMETHODIMP _MYCLASS_::GetEquationsVelocity(char **aEquationsVelocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEquationsVelocity(const char *aEquationsVelocity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string equationsAcceleration; */
NS_IMETHODIMP _MYCLASS_::GetEquationsAcceleration(char **aEquationsAcceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEquationsAcceleration(const char *aEquationsAcceleration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFFormat (out unsigned long count, [array, size_is (count)] out IKinBodyMimicDOFFormat vdofformat); */
NS_IMETHODIMP _MYCLASS_::GetDOFFormat(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFFormat ***vdofformat NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFFormat (in unsigned long count, [array, size_is (count)] in IKinBodyMimicDOFFormat vdofformat); */
NS_IMETHODIMP _MYCLASS_::SetDOFFormat(PRUint32 count, IKinBodyMimicDOFFormat **vdofformat)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetMimicDOFs (out unsigned long count, [array, size_is (count)] out IKinBodyMimicDOFHierarchy vmimicdofs); */
NS_IMETHODIMP _MYCLASS_::GetMimicDOFs(PRUint32 *count NS_OUTPARAM, IKinBodyMimicDOFHierarchy ***vmimicdofs NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetMimicDOFs (in unsigned long count, [array, size_is (count)] in IKinBodyMimicDOFHierarchy vmimicdofs); */
NS_IMETHODIMP _MYCLASS_::SetMimicDOFs(PRUint32 count, IKinBodyMimicDOFHierarchy **vmimicdofs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyJointInfo */
#define IKINBODYJOINTINFO_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYJOINTINFO_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyJointInfo : public IXMLReadable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYJOINTINFO_IID)

  /* attribute long type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType) = 0;

  /* attribute string name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) = 0;

  /* attribute string linkname0; */
  NS_SCRIPTABLE NS_IMETHOD GetLinkname0(char **aLinkname0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLinkname0(const char *aLinkname0) = 0;

  /* attribute string linkname1; */
  NS_SCRIPTABLE NS_IMETHOD GetLinkname1(char **aLinkname1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLinkname1(const char *aLinkname1) = 0;

  /* attribute IVectorF vanchor; */
  NS_SCRIPTABLE NS_IMETHOD GetVanchor(IVectorF **aVanchor) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVanchor(IVectorF *aVanchor) = 0;

  /* attribute IVectorF vaxes0; */
  NS_SCRIPTABLE NS_IMETHOD GetVaxes0(IVectorF **aVaxes0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVaxes0(IVectorF *aVaxes0) = 0;

  /* attribute IVectorF vaxes1; */
  NS_SCRIPTABLE NS_IMETHOD GetVaxes1(IVectorF **aVaxes1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVaxes1(IVectorF *aVaxes1) = 0;

  /* attribute IVectorF vaxes2; */
  NS_SCRIPTABLE NS_IMETHOD GetVaxes2(IVectorF **aVaxes2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVaxes2(IVectorF *aVaxes2) = 0;

  /* void GetCurrentValues (out unsigned long count, [array, size_is (count)] out float vcurrentvalues); */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentValues(PRUint32 *count NS_OUTPARAM, float **vcurrentvalues NS_OUTPARAM) = 0;

  /* void SetCurrentValues (in unsigned long count, [array, size_is (count)] in float vcurrentvalues); */
  NS_SCRIPTABLE NS_IMETHOD SetCurrentValues(PRUint32 count, float *vcurrentvalues) = 0;

  /* attribute float vresolution0; */
  NS_SCRIPTABLE NS_IMETHOD GetVresolution0(float *aVresolution0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVresolution0(float aVresolution0) = 0;

  /* attribute float vresolution1; */
  NS_SCRIPTABLE NS_IMETHOD GetVresolution1(float *aVresolution1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVresolution1(float aVresolution1) = 0;

  /* attribute float vresolution2; */
  NS_SCRIPTABLE NS_IMETHOD GetVresolution2(float *aVresolution2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVresolution2(float aVresolution2) = 0;

  /* attribute float vmaxvel0; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel0(float *aVmaxvel0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel0(float aVmaxvel0) = 0;

  /* attribute float vmaxvel1; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel1(float *aVmaxvel1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel1(float aVmaxvel1) = 0;

  /* attribute float vmaxvel2; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel2(float *aVmaxvel2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel2(float aVmaxvel2) = 0;

  /* attribute float vhardmaxvel0; */
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel0(float *aVhardmaxvel0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel0(float aVhardmaxvel0) = 0;

  /* attribute float vhardmaxvel1; */
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel1(float *aVhardmaxvel1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel1(float aVhardmaxvel1) = 0;

  /* attribute float vhardmaxvel2; */
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel2(float *aVhardmaxvel2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel2(float aVhardmaxvel2) = 0;

  /* attribute float vmaxaccel0; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel0(float *aVmaxaccel0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel0(float aVmaxaccel0) = 0;

  /* attribute float vmaxaccel1; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel1(float *aVmaxaccel1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel1(float aVmaxaccel1) = 0;

  /* attribute float vmaxaccel2; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel2(float *aVmaxaccel2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel2(float aVmaxaccel2) = 0;

  /* attribute float vmaxtorque0; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque0(float *aVmaxtorque0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque0(float aVmaxtorque0) = 0;

  /* attribute float vmaxtorque1; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque1(float *aVmaxtorque1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque1(float aVmaxtorque1) = 0;

  /* attribute float vmaxtorque2; */
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque2(float *aVmaxtorque2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque2(float aVmaxtorque2) = 0;

  /* attribute float vweights0; */
  NS_SCRIPTABLE NS_IMETHOD GetVweights0(float *aVweights0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVweights0(float aVweights0) = 0;

  /* attribute float vweights1; */
  NS_SCRIPTABLE NS_IMETHOD GetVweights1(float *aVweights1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVweights1(float aVweights1) = 0;

  /* attribute float vweights2; */
  NS_SCRIPTABLE NS_IMETHOD GetVweights2(float *aVweights2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVweights2(float aVweights2) = 0;

  /* attribute float voffsets0; */
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets0(float *aVoffsets0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets0(float aVoffsets0) = 0;

  /* attribute float voffsets1; */
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets1(float *aVoffsets1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets1(float aVoffsets1) = 0;

  /* attribute float voffsets2; */
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets2(float *aVoffsets2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets2(float aVoffsets2) = 0;

  /* attribute float vlowerlimit0; */
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit0(float *aVlowerlimit0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit0(float aVlowerlimit0) = 0;

  /* attribute float vlowerlimit1; */
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit1(float *aVlowerlimit1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit1(float aVlowerlimit1) = 0;

  /* attribute float vlowerlimit2; */
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit2(float *aVlowerlimit2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit2(float aVlowerlimit2) = 0;

  /* attribute float vupperlimit0; */
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit0(float *aVupperlimit0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit0(float aVupperlimit0) = 0;

  /* attribute float vupperlimit1; */
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit1(float *aVupperlimit1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit1(float aVupperlimit1) = 0;

  /* attribute float vupperlimit2; */
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit2(float *aVupperlimit2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit2(float aVupperlimit2) = 0;

  /* attribute ITrajectoryBase trajfollow; */
  NS_SCRIPTABLE NS_IMETHOD GetTrajfollow(ITrajectoryBase **aTrajfollow) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTrajfollow(ITrajectoryBase *aTrajfollow) = 0;

  /* attribute IKinBodyMimicInfo vmimic0; */
  NS_SCRIPTABLE NS_IMETHOD GetVmimic0(IKinBodyMimicInfo **aVmimic0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmimic0(IKinBodyMimicInfo *aVmimic0) = 0;

  /* attribute IKinBodyMimicInfo vmimic1; */
  NS_SCRIPTABLE NS_IMETHOD GetVmimic1(IKinBodyMimicInfo **aVmimic1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmimic1(IKinBodyMimicInfo *aVmimic1) = 0;

  /* attribute IKinBodyMimicInfo vmimic2; */
  NS_SCRIPTABLE NS_IMETHOD GetVmimic2(IKinBodyMimicInfo **aVmimic2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVmimic2(IKinBodyMimicInfo *aVmimic2) = 0;

  /* attribute nsIProperties mapFloatParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters) = 0;

  /* attribute nsIProperties mapIntParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters) = 0;

  /* attribute nsIProperties mapStringParameters; */
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters) = 0;

  /* attribute octet bIsCircular0; */
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular0(PRUint8 *aBIsCircular0) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular0(PRUint8 aBIsCircular0) = 0;

  /* attribute octet bIsCircular1; */
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular1(PRUint8 *aBIsCircular1) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular1(PRUint8 aBIsCircular1) = 0;

  /* attribute octet bIsCircular2; */
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular2(PRUint8 *aBIsCircular2) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular2(PRUint8 aBIsCircular2) = 0;

  /* attribute boolean bIsActive; */
  NS_SCRIPTABLE NS_IMETHOD GetBIsActive(PRBool *aBIsActive) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBIsActive(PRBool aBIsActive) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyJointInfo, IKINBODYJOINTINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYJOINTINFO \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType); \
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname0(char **aLinkname0); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname0(const char *aLinkname0); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname1(char **aLinkname1); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname1(const char *aLinkname1); \
  NS_SCRIPTABLE NS_IMETHOD GetVanchor(IVectorF **aVanchor); \
  NS_SCRIPTABLE NS_IMETHOD SetVanchor(IVectorF *aVanchor); \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes0(IVectorF **aVaxes0); \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes0(IVectorF *aVaxes0); \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes1(IVectorF **aVaxes1); \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes1(IVectorF *aVaxes1); \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes2(IVectorF **aVaxes2); \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes2(IVectorF *aVaxes2); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentValues(PRUint32 *count NS_OUTPARAM, float **vcurrentvalues NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentValues(PRUint32 count, float *vcurrentvalues); \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution0(float *aVresolution0); \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution0(float aVresolution0); \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution1(float *aVresolution1); \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution1(float aVresolution1); \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution2(float *aVresolution2); \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution2(float aVresolution2); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel0(float *aVmaxvel0); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel0(float aVmaxvel0); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel1(float *aVmaxvel1); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel1(float aVmaxvel1); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel2(float *aVmaxvel2); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel2(float aVmaxvel2); \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel0(float *aVhardmaxvel0); \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel0(float aVhardmaxvel0); \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel1(float *aVhardmaxvel1); \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel1(float aVhardmaxvel1); \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel2(float *aVhardmaxvel2); \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel2(float aVhardmaxvel2); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel0(float *aVmaxaccel0); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel0(float aVmaxaccel0); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel1(float *aVmaxaccel1); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel1(float aVmaxaccel1); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel2(float *aVmaxaccel2); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel2(float aVmaxaccel2); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque0(float *aVmaxtorque0); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque0(float aVmaxtorque0); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque1(float *aVmaxtorque1); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque1(float aVmaxtorque1); \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque2(float *aVmaxtorque2); \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque2(float aVmaxtorque2); \
  NS_SCRIPTABLE NS_IMETHOD GetVweights0(float *aVweights0); \
  NS_SCRIPTABLE NS_IMETHOD SetVweights0(float aVweights0); \
  NS_SCRIPTABLE NS_IMETHOD GetVweights1(float *aVweights1); \
  NS_SCRIPTABLE NS_IMETHOD SetVweights1(float aVweights1); \
  NS_SCRIPTABLE NS_IMETHOD GetVweights2(float *aVweights2); \
  NS_SCRIPTABLE NS_IMETHOD SetVweights2(float aVweights2); \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets0(float *aVoffsets0); \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets0(float aVoffsets0); \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets1(float *aVoffsets1); \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets1(float aVoffsets1); \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets2(float *aVoffsets2); \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets2(float aVoffsets2); \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit0(float *aVlowerlimit0); \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit0(float aVlowerlimit0); \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit1(float *aVlowerlimit1); \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit1(float aVlowerlimit1); \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit2(float *aVlowerlimit2); \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit2(float aVlowerlimit2); \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit0(float *aVupperlimit0); \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit0(float aVupperlimit0); \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit1(float *aVupperlimit1); \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit1(float aVupperlimit1); \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit2(float *aVupperlimit2); \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit2(float aVupperlimit2); \
  NS_SCRIPTABLE NS_IMETHOD GetTrajfollow(ITrajectoryBase **aTrajfollow); \
  NS_SCRIPTABLE NS_IMETHOD SetTrajfollow(ITrajectoryBase *aTrajfollow); \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic0(IKinBodyMimicInfo **aVmimic0); \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic0(IKinBodyMimicInfo *aVmimic0); \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic1(IKinBodyMimicInfo **aVmimic1); \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic1(IKinBodyMimicInfo *aVmimic1); \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic2(IKinBodyMimicInfo **aVmimic2); \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic2(IKinBodyMimicInfo *aVmimic2); \
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters); \
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters); \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular0(PRUint8 *aBIsCircular0); \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular0(PRUint8 aBIsCircular0); \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular1(PRUint8 *aBIsCircular1); \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular1(PRUint8 aBIsCircular1); \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular2(PRUint8 *aBIsCircular2); \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular2(PRUint8 aBIsCircular2); \
  NS_SCRIPTABLE NS_IMETHOD GetBIsActive(PRBool *aBIsActive); \
  NS_SCRIPTABLE NS_IMETHOD SetBIsActive(PRBool aBIsActive); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYJOINTINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType) { return _to SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname0(char **aLinkname0) { return _to GetLinkname0(aLinkname0); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname0(const char *aLinkname0) { return _to SetLinkname0(aLinkname0); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname1(char **aLinkname1) { return _to GetLinkname1(aLinkname1); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname1(const char *aLinkname1) { return _to SetLinkname1(aLinkname1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVanchor(IVectorF **aVanchor) { return _to GetVanchor(aVanchor); } \
  NS_SCRIPTABLE NS_IMETHOD SetVanchor(IVectorF *aVanchor) { return _to SetVanchor(aVanchor); } \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes0(IVectorF **aVaxes0) { return _to GetVaxes0(aVaxes0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes0(IVectorF *aVaxes0) { return _to SetVaxes0(aVaxes0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes1(IVectorF **aVaxes1) { return _to GetVaxes1(aVaxes1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes1(IVectorF *aVaxes1) { return _to SetVaxes1(aVaxes1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes2(IVectorF **aVaxes2) { return _to GetVaxes2(aVaxes2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes2(IVectorF *aVaxes2) { return _to SetVaxes2(aVaxes2); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentValues(PRUint32 *count NS_OUTPARAM, float **vcurrentvalues NS_OUTPARAM) { return _to GetCurrentValues(count, vcurrentvalues); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentValues(PRUint32 count, float *vcurrentvalues) { return _to SetCurrentValues(count, vcurrentvalues); } \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution0(float *aVresolution0) { return _to GetVresolution0(aVresolution0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution0(float aVresolution0) { return _to SetVresolution0(aVresolution0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution1(float *aVresolution1) { return _to GetVresolution1(aVresolution1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution1(float aVresolution1) { return _to SetVresolution1(aVresolution1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution2(float *aVresolution2) { return _to GetVresolution2(aVresolution2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution2(float aVresolution2) { return _to SetVresolution2(aVresolution2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel0(float *aVmaxvel0) { return _to GetVmaxvel0(aVmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel0(float aVmaxvel0) { return _to SetVmaxvel0(aVmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel1(float *aVmaxvel1) { return _to GetVmaxvel1(aVmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel1(float aVmaxvel1) { return _to SetVmaxvel1(aVmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel2(float *aVmaxvel2) { return _to GetVmaxvel2(aVmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel2(float aVmaxvel2) { return _to SetVmaxvel2(aVmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel0(float *aVhardmaxvel0) { return _to GetVhardmaxvel0(aVhardmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel0(float aVhardmaxvel0) { return _to SetVhardmaxvel0(aVhardmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel1(float *aVhardmaxvel1) { return _to GetVhardmaxvel1(aVhardmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel1(float aVhardmaxvel1) { return _to SetVhardmaxvel1(aVhardmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel2(float *aVhardmaxvel2) { return _to GetVhardmaxvel2(aVhardmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel2(float aVhardmaxvel2) { return _to SetVhardmaxvel2(aVhardmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel0(float *aVmaxaccel0) { return _to GetVmaxaccel0(aVmaxaccel0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel0(float aVmaxaccel0) { return _to SetVmaxaccel0(aVmaxaccel0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel1(float *aVmaxaccel1) { return _to GetVmaxaccel1(aVmaxaccel1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel1(float aVmaxaccel1) { return _to SetVmaxaccel1(aVmaxaccel1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel2(float *aVmaxaccel2) { return _to GetVmaxaccel2(aVmaxaccel2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel2(float aVmaxaccel2) { return _to SetVmaxaccel2(aVmaxaccel2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque0(float *aVmaxtorque0) { return _to GetVmaxtorque0(aVmaxtorque0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque0(float aVmaxtorque0) { return _to SetVmaxtorque0(aVmaxtorque0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque1(float *aVmaxtorque1) { return _to GetVmaxtorque1(aVmaxtorque1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque1(float aVmaxtorque1) { return _to SetVmaxtorque1(aVmaxtorque1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque2(float *aVmaxtorque2) { return _to GetVmaxtorque2(aVmaxtorque2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque2(float aVmaxtorque2) { return _to SetVmaxtorque2(aVmaxtorque2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVweights0(float *aVweights0) { return _to GetVweights0(aVweights0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVweights0(float aVweights0) { return _to SetVweights0(aVweights0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVweights1(float *aVweights1) { return _to GetVweights1(aVweights1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVweights1(float aVweights1) { return _to SetVweights1(aVweights1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVweights2(float *aVweights2) { return _to GetVweights2(aVweights2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVweights2(float aVweights2) { return _to SetVweights2(aVweights2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets0(float *aVoffsets0) { return _to GetVoffsets0(aVoffsets0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets0(float aVoffsets0) { return _to SetVoffsets0(aVoffsets0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets1(float *aVoffsets1) { return _to GetVoffsets1(aVoffsets1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets1(float aVoffsets1) { return _to SetVoffsets1(aVoffsets1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets2(float *aVoffsets2) { return _to GetVoffsets2(aVoffsets2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets2(float aVoffsets2) { return _to SetVoffsets2(aVoffsets2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit0(float *aVlowerlimit0) { return _to GetVlowerlimit0(aVlowerlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit0(float aVlowerlimit0) { return _to SetVlowerlimit0(aVlowerlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit1(float *aVlowerlimit1) { return _to GetVlowerlimit1(aVlowerlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit1(float aVlowerlimit1) { return _to SetVlowerlimit1(aVlowerlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit2(float *aVlowerlimit2) { return _to GetVlowerlimit2(aVlowerlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit2(float aVlowerlimit2) { return _to SetVlowerlimit2(aVlowerlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit0(float *aVupperlimit0) { return _to GetVupperlimit0(aVupperlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit0(float aVupperlimit0) { return _to SetVupperlimit0(aVupperlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit1(float *aVupperlimit1) { return _to GetVupperlimit1(aVupperlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit1(float aVupperlimit1) { return _to SetVupperlimit1(aVupperlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit2(float *aVupperlimit2) { return _to GetVupperlimit2(aVupperlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit2(float aVupperlimit2) { return _to SetVupperlimit2(aVupperlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrajfollow(ITrajectoryBase **aTrajfollow) { return _to GetTrajfollow(aTrajfollow); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrajfollow(ITrajectoryBase *aTrajfollow) { return _to SetTrajfollow(aTrajfollow); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic0(IKinBodyMimicInfo **aVmimic0) { return _to GetVmimic0(aVmimic0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic0(IKinBodyMimicInfo *aVmimic0) { return _to SetVmimic0(aVmimic0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic1(IKinBodyMimicInfo **aVmimic1) { return _to GetVmimic1(aVmimic1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic1(IKinBodyMimicInfo *aVmimic1) { return _to SetVmimic1(aVmimic1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic2(IKinBodyMimicInfo **aVmimic2) { return _to GetVmimic2(aVmimic2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic2(IKinBodyMimicInfo *aVmimic2) { return _to SetVmimic2(aVmimic2); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters) { return _to GetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters) { return _to SetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters) { return _to GetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters) { return _to SetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters) { return _to GetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters) { return _to SetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular0(PRUint8 *aBIsCircular0) { return _to GetBIsCircular0(aBIsCircular0); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular0(PRUint8 aBIsCircular0) { return _to SetBIsCircular0(aBIsCircular0); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular1(PRUint8 *aBIsCircular1) { return _to GetBIsCircular1(aBIsCircular1); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular1(PRUint8 aBIsCircular1) { return _to SetBIsCircular1(aBIsCircular1); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular2(PRUint8 *aBIsCircular2) { return _to GetBIsCircular2(aBIsCircular2); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular2(PRUint8 aBIsCircular2) { return _to SetBIsCircular2(aBIsCircular2); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsActive(PRBool *aBIsActive) { return _to GetBIsActive(aBIsActive); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsActive(PRBool aBIsActive) { return _to SetBIsActive(aBIsActive); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYJOINTINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(PRInt32 aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname0(char **aLinkname0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkname0(aLinkname0); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname0(const char *aLinkname0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkname0(aLinkname0); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkname1(char **aLinkname1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkname1(aLinkname1); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkname1(const char *aLinkname1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkname1(aLinkname1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVanchor(IVectorF **aVanchor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVanchor(aVanchor); } \
  NS_SCRIPTABLE NS_IMETHOD SetVanchor(IVectorF *aVanchor) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVanchor(aVanchor); } \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes0(IVectorF **aVaxes0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVaxes0(aVaxes0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes0(IVectorF *aVaxes0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVaxes0(aVaxes0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes1(IVectorF **aVaxes1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVaxes1(aVaxes1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes1(IVectorF *aVaxes1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVaxes1(aVaxes1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVaxes2(IVectorF **aVaxes2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVaxes2(aVaxes2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVaxes2(IVectorF *aVaxes2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVaxes2(aVaxes2); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentValues(PRUint32 *count NS_OUTPARAM, float **vcurrentvalues NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentValues(count, vcurrentvalues); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentValues(PRUint32 count, float *vcurrentvalues) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentValues(count, vcurrentvalues); } \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution0(float *aVresolution0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVresolution0(aVresolution0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution0(float aVresolution0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVresolution0(aVresolution0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution1(float *aVresolution1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVresolution1(aVresolution1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution1(float aVresolution1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVresolution1(aVresolution1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVresolution2(float *aVresolution2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVresolution2(aVresolution2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVresolution2(float aVresolution2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVresolution2(aVresolution2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel0(float *aVmaxvel0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxvel0(aVmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel0(float aVmaxvel0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxvel0(aVmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel1(float *aVmaxvel1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxvel1(aVmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel1(float aVmaxvel1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxvel1(aVmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxvel2(float *aVmaxvel2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxvel2(aVmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxvel2(float aVmaxvel2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxvel2(aVmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel0(float *aVhardmaxvel0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVhardmaxvel0(aVhardmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel0(float aVhardmaxvel0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVhardmaxvel0(aVhardmaxvel0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel1(float *aVhardmaxvel1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVhardmaxvel1(aVhardmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel1(float aVhardmaxvel1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVhardmaxvel1(aVhardmaxvel1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVhardmaxvel2(float *aVhardmaxvel2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVhardmaxvel2(aVhardmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVhardmaxvel2(float aVhardmaxvel2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVhardmaxvel2(aVhardmaxvel2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel0(float *aVmaxaccel0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxaccel0(aVmaxaccel0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel0(float aVmaxaccel0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxaccel0(aVmaxaccel0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel1(float *aVmaxaccel1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxaccel1(aVmaxaccel1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel1(float aVmaxaccel1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxaccel1(aVmaxaccel1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxaccel2(float *aVmaxaccel2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxaccel2(aVmaxaccel2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxaccel2(float aVmaxaccel2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxaccel2(aVmaxaccel2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque0(float *aVmaxtorque0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxtorque0(aVmaxtorque0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque0(float aVmaxtorque0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxtorque0(aVmaxtorque0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque1(float *aVmaxtorque1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxtorque1(aVmaxtorque1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque1(float aVmaxtorque1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxtorque1(aVmaxtorque1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmaxtorque2(float *aVmaxtorque2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmaxtorque2(aVmaxtorque2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmaxtorque2(float aVmaxtorque2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmaxtorque2(aVmaxtorque2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVweights0(float *aVweights0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVweights0(aVweights0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVweights0(float aVweights0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVweights0(aVweights0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVweights1(float *aVweights1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVweights1(aVweights1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVweights1(float aVweights1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVweights1(aVweights1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVweights2(float *aVweights2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVweights2(aVweights2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVweights2(float aVweights2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVweights2(aVweights2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets0(float *aVoffsets0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVoffsets0(aVoffsets0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets0(float aVoffsets0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVoffsets0(aVoffsets0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets1(float *aVoffsets1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVoffsets1(aVoffsets1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets1(float aVoffsets1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVoffsets1(aVoffsets1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoffsets2(float *aVoffsets2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVoffsets2(aVoffsets2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoffsets2(float aVoffsets2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVoffsets2(aVoffsets2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit0(float *aVlowerlimit0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVlowerlimit0(aVlowerlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit0(float aVlowerlimit0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVlowerlimit0(aVlowerlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit1(float *aVlowerlimit1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVlowerlimit1(aVlowerlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit1(float aVlowerlimit1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVlowerlimit1(aVlowerlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVlowerlimit2(float *aVlowerlimit2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVlowerlimit2(aVlowerlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVlowerlimit2(float aVlowerlimit2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVlowerlimit2(aVlowerlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit0(float *aVupperlimit0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVupperlimit0(aVupperlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit0(float aVupperlimit0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVupperlimit0(aVupperlimit0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit1(float *aVupperlimit1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVupperlimit1(aVupperlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit1(float aVupperlimit1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVupperlimit1(aVupperlimit1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVupperlimit2(float *aVupperlimit2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVupperlimit2(aVupperlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVupperlimit2(float aVupperlimit2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVupperlimit2(aVupperlimit2); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrajfollow(ITrajectoryBase **aTrajfollow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTrajfollow(aTrajfollow); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrajfollow(ITrajectoryBase *aTrajfollow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTrajfollow(aTrajfollow); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic0(IKinBodyMimicInfo **aVmimic0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmimic0(aVmimic0); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic0(IKinBodyMimicInfo *aVmimic0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmimic0(aVmimic0); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic1(IKinBodyMimicInfo **aVmimic1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmimic1(aVmimic1); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic1(IKinBodyMimicInfo *aVmimic1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmimic1(aVmimic1); } \
  NS_SCRIPTABLE NS_IMETHOD GetVmimic2(IKinBodyMimicInfo **aVmimic2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVmimic2(aVmimic2); } \
  NS_SCRIPTABLE NS_IMETHOD SetVmimic2(IKinBodyMimicInfo *aVmimic2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVmimic2(aVmimic2); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapFloatParameters(nsIProperties **aMapFloatParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapFloatParameters(nsIProperties *aMapFloatParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMapFloatParameters(aMapFloatParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapIntParameters(nsIProperties **aMapIntParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapIntParameters(nsIProperties *aMapIntParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMapIntParameters(aMapIntParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetMapStringParameters(nsIProperties **aMapStringParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD SetMapStringParameters(nsIProperties *aMapStringParameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMapStringParameters(aMapStringParameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular0(PRUint8 *aBIsCircular0) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBIsCircular0(aBIsCircular0); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular0(PRUint8 aBIsCircular0) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBIsCircular0(aBIsCircular0); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular1(PRUint8 *aBIsCircular1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBIsCircular1(aBIsCircular1); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular1(PRUint8 aBIsCircular1) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBIsCircular1(aBIsCircular1); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsCircular2(PRUint8 *aBIsCircular2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBIsCircular2(aBIsCircular2); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsCircular2(PRUint8 aBIsCircular2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBIsCircular2(aBIsCircular2); } \
  NS_SCRIPTABLE NS_IMETHOD GetBIsActive(PRBool *aBIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBIsActive(aBIsActive); } \
  NS_SCRIPTABLE NS_IMETHOD SetBIsActive(PRBool aBIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBIsActive(aBIsActive); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyJointInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYJOINTINFO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyJointInfo)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute long type; */
NS_IMETHODIMP _MYCLASS_::GetType(PRInt32 *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetType(PRInt32 aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
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

/* attribute string linkname0; */
NS_IMETHODIMP _MYCLASS_::GetLinkname0(char **aLinkname0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetLinkname0(const char *aLinkname0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string linkname1; */
NS_IMETHODIMP _MYCLASS_::GetLinkname1(char **aLinkname1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetLinkname1(const char *aLinkname1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vanchor; */
NS_IMETHODIMP _MYCLASS_::GetVanchor(IVectorF **aVanchor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVanchor(IVectorF *aVanchor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vaxes0; */
NS_IMETHODIMP _MYCLASS_::GetVaxes0(IVectorF **aVaxes0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVaxes0(IVectorF *aVaxes0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vaxes1; */
NS_IMETHODIMP _MYCLASS_::GetVaxes1(IVectorF **aVaxes1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVaxes1(IVectorF *aVaxes1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IVectorF vaxes2; */
NS_IMETHODIMP _MYCLASS_::GetVaxes2(IVectorF **aVaxes2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVaxes2(IVectorF *aVaxes2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetCurrentValues (out unsigned long count, [array, size_is (count)] out float vcurrentvalues); */
NS_IMETHODIMP _MYCLASS_::GetCurrentValues(PRUint32 *count NS_OUTPARAM, float **vcurrentvalues NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetCurrentValues (in unsigned long count, [array, size_is (count)] in float vcurrentvalues); */
NS_IMETHODIMP _MYCLASS_::SetCurrentValues(PRUint32 count, float *vcurrentvalues)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vresolution0; */
NS_IMETHODIMP _MYCLASS_::GetVresolution0(float *aVresolution0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVresolution0(float aVresolution0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vresolution1; */
NS_IMETHODIMP _MYCLASS_::GetVresolution1(float *aVresolution1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVresolution1(float aVresolution1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vresolution2; */
NS_IMETHODIMP _MYCLASS_::GetVresolution2(float *aVresolution2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVresolution2(float aVresolution2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxvel0; */
NS_IMETHODIMP _MYCLASS_::GetVmaxvel0(float *aVmaxvel0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxvel0(float aVmaxvel0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxvel1; */
NS_IMETHODIMP _MYCLASS_::GetVmaxvel1(float *aVmaxvel1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxvel1(float aVmaxvel1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxvel2; */
NS_IMETHODIMP _MYCLASS_::GetVmaxvel2(float *aVmaxvel2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxvel2(float aVmaxvel2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vhardmaxvel0; */
NS_IMETHODIMP _MYCLASS_::GetVhardmaxvel0(float *aVhardmaxvel0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVhardmaxvel0(float aVhardmaxvel0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vhardmaxvel1; */
NS_IMETHODIMP _MYCLASS_::GetVhardmaxvel1(float *aVhardmaxvel1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVhardmaxvel1(float aVhardmaxvel1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vhardmaxvel2; */
NS_IMETHODIMP _MYCLASS_::GetVhardmaxvel2(float *aVhardmaxvel2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVhardmaxvel2(float aVhardmaxvel2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxaccel0; */
NS_IMETHODIMP _MYCLASS_::GetVmaxaccel0(float *aVmaxaccel0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxaccel0(float aVmaxaccel0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxaccel1; */
NS_IMETHODIMP _MYCLASS_::GetVmaxaccel1(float *aVmaxaccel1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxaccel1(float aVmaxaccel1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxaccel2; */
NS_IMETHODIMP _MYCLASS_::GetVmaxaccel2(float *aVmaxaccel2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxaccel2(float aVmaxaccel2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxtorque0; */
NS_IMETHODIMP _MYCLASS_::GetVmaxtorque0(float *aVmaxtorque0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxtorque0(float aVmaxtorque0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxtorque1; */
NS_IMETHODIMP _MYCLASS_::GetVmaxtorque1(float *aVmaxtorque1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxtorque1(float aVmaxtorque1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vmaxtorque2; */
NS_IMETHODIMP _MYCLASS_::GetVmaxtorque2(float *aVmaxtorque2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmaxtorque2(float aVmaxtorque2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vweights0; */
NS_IMETHODIMP _MYCLASS_::GetVweights0(float *aVweights0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVweights0(float aVweights0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vweights1; */
NS_IMETHODIMP _MYCLASS_::GetVweights1(float *aVweights1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVweights1(float aVweights1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vweights2; */
NS_IMETHODIMP _MYCLASS_::GetVweights2(float *aVweights2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVweights2(float aVweights2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float voffsets0; */
NS_IMETHODIMP _MYCLASS_::GetVoffsets0(float *aVoffsets0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVoffsets0(float aVoffsets0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float voffsets1; */
NS_IMETHODIMP _MYCLASS_::GetVoffsets1(float *aVoffsets1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVoffsets1(float aVoffsets1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float voffsets2; */
NS_IMETHODIMP _MYCLASS_::GetVoffsets2(float *aVoffsets2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVoffsets2(float aVoffsets2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vlowerlimit0; */
NS_IMETHODIMP _MYCLASS_::GetVlowerlimit0(float *aVlowerlimit0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVlowerlimit0(float aVlowerlimit0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vlowerlimit1; */
NS_IMETHODIMP _MYCLASS_::GetVlowerlimit1(float *aVlowerlimit1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVlowerlimit1(float aVlowerlimit1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vlowerlimit2; */
NS_IMETHODIMP _MYCLASS_::GetVlowerlimit2(float *aVlowerlimit2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVlowerlimit2(float aVlowerlimit2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vupperlimit0; */
NS_IMETHODIMP _MYCLASS_::GetVupperlimit0(float *aVupperlimit0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVupperlimit0(float aVupperlimit0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vupperlimit1; */
NS_IMETHODIMP _MYCLASS_::GetVupperlimit1(float *aVupperlimit1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVupperlimit1(float aVupperlimit1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float vupperlimit2; */
NS_IMETHODIMP _MYCLASS_::GetVupperlimit2(float *aVupperlimit2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVupperlimit2(float aVupperlimit2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ITrajectoryBase trajfollow; */
NS_IMETHODIMP _MYCLASS_::GetTrajfollow(ITrajectoryBase **aTrajfollow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTrajfollow(ITrajectoryBase *aTrajfollow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IKinBodyMimicInfo vmimic0; */
NS_IMETHODIMP _MYCLASS_::GetVmimic0(IKinBodyMimicInfo **aVmimic0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmimic0(IKinBodyMimicInfo *aVmimic0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IKinBodyMimicInfo vmimic1; */
NS_IMETHODIMP _MYCLASS_::GetVmimic1(IKinBodyMimicInfo **aVmimic1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmimic1(IKinBodyMimicInfo *aVmimic1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute IKinBodyMimicInfo vmimic2; */
NS_IMETHODIMP _MYCLASS_::GetVmimic2(IKinBodyMimicInfo **aVmimic2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVmimic2(IKinBodyMimicInfo *aVmimic2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties mapFloatParameters; */
NS_IMETHODIMP _MYCLASS_::GetMapFloatParameters(nsIProperties **aMapFloatParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMapFloatParameters(nsIProperties *aMapFloatParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties mapIntParameters; */
NS_IMETHODIMP _MYCLASS_::GetMapIntParameters(nsIProperties **aMapIntParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMapIntParameters(nsIProperties *aMapIntParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties mapStringParameters; */
NS_IMETHODIMP _MYCLASS_::GetMapStringParameters(nsIProperties **aMapStringParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetMapStringParameters(nsIProperties *aMapStringParameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute octet bIsCircular0; */
NS_IMETHODIMP _MYCLASS_::GetBIsCircular0(PRUint8 *aBIsCircular0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBIsCircular0(PRUint8 aBIsCircular0)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute octet bIsCircular1; */
NS_IMETHODIMP _MYCLASS_::GetBIsCircular1(PRUint8 *aBIsCircular1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBIsCircular1(PRUint8 aBIsCircular1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute octet bIsCircular2; */
NS_IMETHODIMP _MYCLASS_::GetBIsCircular2(PRUint8 *aBIsCircular2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBIsCircular2(PRUint8 aBIsCircular2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean bIsActive; */
NS_IMETHODIMP _MYCLASS_::GetBIsActive(PRBool *aBIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBIsActive(PRBool aBIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyJoint */
#define IKINBODYJOINT_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYJOINT_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyJoint : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYJOINT_IID)

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

  /* float GetMaxVel (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD GetMaxVel(PRInt32 iaxis, float *_retval NS_OUTPARAM) = 0;

  /* float GetMaxAccel (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD GetMaxAccel(PRInt32 iaxis, float *_retval NS_OUTPARAM) = 0;

  /* float GetMaxTorque (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD GetMaxTorque(PRInt32 iaxis, float *_retval NS_OUTPARAM) = 0;

  /* long GetDOFIndex (); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFIndex(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long GetJointIndex (); */
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IKinBody GetParent (); */
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetFirstAttached (); */
  NS_SCRIPTABLE NS_IMETHOD GetFirstAttached(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetSecondAttached (); */
  NS_SCRIPTABLE NS_IMETHOD GetSecondAttached(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* long GetType (); */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void GetResolutions (inout unsigned long count, [array, size_is (count)] inout float resolutions, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetResolutions(PRUint32 *count NS_INOUTPARAM, float **resolutions NS_INOUTPARAM, PRBool bAppend) = 0;

  /* float GetResolution (in long iaxi0); */
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRInt32 iaxi0, float *_retval NS_OUTPARAM) = 0;

  /* void SetResolution (in float resolution, in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float resolution, PRInt32 iaxis) = 0;

  /* long GetDOF (); */
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean IsCircular (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD IsCircular(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsRevolute (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD IsRevolute(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsPrismatic (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD IsPrismatic(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsStatic (); */
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetValues (inout unsigned long count, [array, size_is (count)] inout float values, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend) = 0;

  /* float GetValue (in long axis); */
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRInt32 axis, float *_retval NS_OUTPARAM) = 0;

  /* void GetVelocities (inout unsigned long count, [array, size_is (count)] inout float values, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocities(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend) = 0;

  /* float GetVelocity (in long axis); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRInt32 axis, float *_retval NS_OUTPARAM) = 0;

  /* void AddTorque (in unsigned long count, [array, size_is (count)] in float torques); */
  NS_SCRIPTABLE NS_IMETHOD AddTorque(PRUint32 count, float *torques) = 0;

  /* IVectorF GetAnchor (); */
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetAxis (in long axis); */
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM) = 0;

  /* void GetLimits (inout unsigned long lowerCount, [array, size_is (lowerCount)] inout float lowerLimit, inout unsigned long upperCount, [array, size_is (upperCount)] inout float upperLimit, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend) = 0;

  /* void GetLimit (in long iaxis, out float upperLimit, out float lowerLimit); */
  NS_SCRIPTABLE NS_IMETHOD GetLimit(PRInt32 iaxis, float *upperLimit NS_OUTPARAM, float *lowerLimit NS_OUTPARAM) = 0;

  /* void SetLimits (in unsigned long lowerCount, [array, size_is (lowerCount)] in float lowerLimit, in unsigned long upperCount, [array, size_is (upperCount)] in float upperLimit); */
  NS_SCRIPTABLE NS_IMETHOD SetLimits(PRUint32 lowerCount, float *lowerLimit, PRUint32 upperCount, float *upperLimit) = 0;

  /* void GetVelocityLimits1 (inout unsigned long maxCount, [array, size_is (maxCount)] inout float max, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits1(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) = 0;

  /* void GetVelocityLimits2 (inout unsigned long lowerCount, [array, size_is (lowerCount)] inout float lowerLimit, inout unsigned long upperCount, [array, size_is (upperCount)] inout float upperLimit, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits2(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend) = 0;

  /* void GetVelocityLimit (in long iaxis, out float lower, out float upper); */
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimit(PRInt32 iaxis, float *lower NS_OUTPARAM, float *upper NS_OUTPARAM) = 0;

  /* void SetVelocityLimits3 (in unsigned long maxCount, [array, size_is (maxCount)] in float max); */
  NS_SCRIPTABLE NS_IMETHOD SetVelocityLimits3(PRUint32 maxCount, float *max) = 0;

  /* void GetAccelerationLimits (inout unsigned long maxCount, [array, size_is (maxCount)] inout float max, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) = 0;

  /* float GetAccelerationLimit (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimit(PRInt32 iaxis, float *_retval NS_OUTPARAM) = 0;

  /* void SetAccelerationLimits (in unsigned long maxCount, [array, size_is (maxCount)] in float max); */
  NS_SCRIPTABLE NS_IMETHOD SetAccelerationLimits(PRUint32 maxCount, float *max) = 0;

  /* void GetTorqueLimits (inout unsigned long maxCount, [array, size_is (maxCount)] inout float max, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetTorqueLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) = 0;

  /* void SetTorqueLimits (in unsigned long maxCount, [array, size_is (maxCount)] in float max); */
  NS_SCRIPTABLE NS_IMETHOD SetTorqueLimits(PRUint32 maxCount, float *max) = 0;

  /* void GetWeights (inout unsigned long weightsCount, [array, size_is (weightsCount)] inout float weights, in boolean bAppend); */
  NS_SCRIPTABLE NS_IMETHOD GetWeights(PRUint32 *weightsCount NS_INOUTPARAM, float **weights NS_INOUTPARAM, PRBool bAppend) = 0;

  /* float GetWeight (in long axis); */
  NS_SCRIPTABLE NS_IMETHOD GetWeight(PRInt32 axis, float *_retval NS_OUTPARAM) = 0;

  /* void SetWeights (in unsigned long weightsCount, [array, size_is (weightsCount)] in float weights); */
  NS_SCRIPTABLE NS_IMETHOD SetWeights(PRUint32 weightsCount, float *weights) = 0;

  /* void SubtractValues (inout unsigned long values1Count, [array, size_is (values1Count)] inout float values1, in unsigned long values2Count, [array, size_is (values2Count)] in float values2); */
  NS_SCRIPTABLE NS_IMETHOD SubtractValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2) = 0;

  /* float SubtractValue (in float value1, in float value2, in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD SubtractValue(float value1, float value2, PRInt32 iaxis, float *_retval NS_OUTPARAM) = 0;

  /* float GetWrapOffset (in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD GetWrapOffset(PRInt32 iaxis, float *_retval NS_OUTPARAM) = 0;

  /* void SetWrapOffset (in float offset, in long iaxis); */
  NS_SCRIPTABLE NS_IMETHOD SetWrapOffset(float offset, PRInt32 iaxis) = 0;

  /* void serialize (in nsIOutputStream o, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) = 0;

  /* IKinBodyLink GetHierarchyParentLink (); */
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyParentLink(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetHierarchyChildLink (); */
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyChildLink(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetInternalHierarchyAxis (in long axis); */
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetInternalHierarchyLeftTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyLeftTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* ITransformF GetInternalHierarchyRightTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyRightTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* boolean IsMimic (in long axis); */
  NS_SCRIPTABLE NS_IMETHOD IsMimic(PRInt32 axis, PRBool *_retval NS_OUTPARAM) = 0;

  /* string GetMimicEquation (in long axis, in long type, in string format); */
  NS_SCRIPTABLE NS_IMETHOD GetMimicEquation(PRInt32 axis, PRInt32 type, const char *format, char **_retval NS_OUTPARAM) = 0;

  /* void GetMimicDOFIndices (out unsigned long count, [array, size_is (count)] out long mimicdofs, in long axis); */
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **mimicdofs NS_OUTPARAM, PRInt32 axis) = 0;

  /* void SetMimicEquations (in long axis, in string poseq, in string veleq, in string acceleq); */
  NS_SCRIPTABLE NS_IMETHOD SetMimicEquations(PRInt32 axis, const char *poseq, const char *veleq, const char *acceleq) = 0;

  /* nsIProperties GetFloatParameters (); */
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **_retval NS_OUTPARAM) = 0;

  /* void SetFloatParameters (in string key, in unsigned long count, [array, size_is (count)] in float parameters); */
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters) = 0;

  /* nsIProperties GetIntParameters (); */
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **_retval NS_OUTPARAM) = 0;

  /* void SetIntParameters (in string key, in unsigned long count, [array, size_is (count)] in long parameters); */
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters) = 0;

  /* nsIProperties GetStringParameters (); */
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **_retval NS_OUTPARAM) = 0;

  /* void SetStringParameters (in string key, in unsigned long count, [array, size_is (count)] in string parameters); */
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters) = 0;

  /* void UpdateInfo (); */
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void) = 0;

  /* IKinBodyJointInfo GetInfo (); */
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM) = 0;

  /* IKinBodyJointInfo UpdateAndGetInfo (); */
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyJoint, IKINBODYJOINT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYJOINT \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxVel(PRInt32 iaxis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxAccel(PRInt32 iaxis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTorque(PRInt32 iaxis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFIndex(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFirstAttached(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSecondAttached(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetResolutions(PRUint32 *count NS_INOUTPARAM, float **resolutions NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRInt32 iaxi0, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float resolution, PRInt32 iaxis); \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsCircular(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsRevolute(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsPrismatic(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRInt32 axis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocities(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRInt32 axis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddTorque(PRUint32 count, float *torques); \
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetLimit(PRInt32 iaxis, float *upperLimit NS_OUTPARAM, float *lowerLimit NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetLimits(PRUint32 lowerCount, float *lowerLimit, PRUint32 upperCount, float *upperLimit); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits1(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits2(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimit(PRInt32 iaxis, float *lower NS_OUTPARAM, float *upper NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetVelocityLimits3(PRUint32 maxCount, float *max); \
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimit(PRInt32 iaxis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetAccelerationLimits(PRUint32 maxCount, float *max); \
  NS_SCRIPTABLE NS_IMETHOD GetTorqueLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD SetTorqueLimits(PRUint32 maxCount, float *max); \
  NS_SCRIPTABLE NS_IMETHOD GetWeights(PRUint32 *weightsCount NS_INOUTPARAM, float **weights NS_INOUTPARAM, PRBool bAppend); \
  NS_SCRIPTABLE NS_IMETHOD GetWeight(PRInt32 axis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetWeights(PRUint32 weightsCount, float *weights); \
  NS_SCRIPTABLE NS_IMETHOD SubtractValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2); \
  NS_SCRIPTABLE NS_IMETHOD SubtractValue(float value1, float value2, PRInt32 iaxis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetWrapOffset(PRInt32 iaxis, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetWrapOffset(float offset, PRInt32 iaxis); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyParentLink(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyChildLink(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyLeftTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyRightTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsMimic(PRInt32 axis, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMimicEquation(PRInt32 axis, PRInt32 type, const char *format, char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **mimicdofs NS_OUTPARAM, PRInt32 axis); \
  NS_SCRIPTABLE NS_IMETHOD SetMimicEquations(PRInt32 axis, const char *poseq, const char *veleq, const char *acceleq); \
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters); \
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters); \
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters); \
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void); \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYJOINT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxVel(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return _to GetMaxVel(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxAccel(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return _to GetMaxAccel(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTorque(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return _to GetMaxTorque(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFIndex(PRInt32 *_retval NS_OUTPARAM) { return _to GetDOFIndex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(PRInt32 *_retval NS_OUTPARAM) { return _to GetJointIndex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM) { return _to GetParent(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstAttached(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetFirstAttached(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecondAttached(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetSecondAttached(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return _to GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResolutions(PRUint32 *count NS_INOUTPARAM, float **resolutions NS_INOUTPARAM, PRBool bAppend) { return _to GetResolutions(count, resolutions, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRInt32 iaxi0, float *_retval NS_OUTPARAM) { return _to GetResolution(iaxi0, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float resolution, PRInt32 iaxis) { return _to SetResolution(resolution, iaxis); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return _to GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsCircular(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) { return _to IsCircular(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsRevolute(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) { return _to IsRevolute(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsPrismatic(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) { return _to IsPrismatic(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM) { return _to IsStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend) { return _to GetValues(count, values, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRInt32 axis, float *_retval NS_OUTPARAM) { return _to GetValue(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocities(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend) { return _to GetVelocities(count, values, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRInt32 axis, float *_retval NS_OUTPARAM) { return _to GetVelocity(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddTorque(PRUint32 count, float *torques) { return _to AddTorque(count, torques); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(IVectorF **_retval NS_OUTPARAM) { return _to GetAnchor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM) { return _to GetAxis(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend) { return _to GetLimits(lowerCount, lowerLimit, upperCount, upperLimit, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimit(PRInt32 iaxis, float *upperLimit NS_OUTPARAM, float *lowerLimit NS_OUTPARAM) { return _to GetLimit(iaxis, upperLimit, lowerLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SetLimits(PRUint32 lowerCount, float *lowerLimit, PRUint32 upperCount, float *upperLimit) { return _to SetLimits(lowerCount, lowerLimit, upperCount, upperLimit); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits1(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) { return _to GetVelocityLimits1(maxCount, max, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits2(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend) { return _to GetVelocityLimits2(lowerCount, lowerLimit, upperCount, upperLimit, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimit(PRInt32 iaxis, float *lower NS_OUTPARAM, float *upper NS_OUTPARAM) { return _to GetVelocityLimit(iaxis, lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocityLimits3(PRUint32 maxCount, float *max) { return _to SetVelocityLimits3(maxCount, max); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) { return _to GetAccelerationLimits(maxCount, max, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimit(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return _to GetAccelerationLimit(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAccelerationLimits(PRUint32 maxCount, float *max) { return _to SetAccelerationLimits(maxCount, max); } \
  NS_SCRIPTABLE NS_IMETHOD GetTorqueLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) { return _to GetTorqueLimits(maxCount, max, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD SetTorqueLimits(PRUint32 maxCount, float *max) { return _to SetTorqueLimits(maxCount, max); } \
  NS_SCRIPTABLE NS_IMETHOD GetWeights(PRUint32 *weightsCount NS_INOUTPARAM, float **weights NS_INOUTPARAM, PRBool bAppend) { return _to GetWeights(weightsCount, weights, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetWeight(PRInt32 axis, float *_retval NS_OUTPARAM) { return _to GetWeight(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetWeights(PRUint32 weightsCount, float *weights) { return _to SetWeights(weightsCount, weights); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2) { return _to SubtractValues(values1Count, values1, values2Count, values2); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractValue(float value1, float value2, PRInt32 iaxis, float *_retval NS_OUTPARAM) { return _to SubtractValue(value1, value2, iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrapOffset(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return _to GetWrapOffset(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapOffset(float offset, PRInt32 iaxis) { return _to SetWrapOffset(offset, iaxis); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return _to Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyParentLink(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetHierarchyParentLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyChildLink(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetHierarchyChildLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM) { return _to GetInternalHierarchyAxis(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyLeftTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetInternalHierarchyLeftTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyRightTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetInternalHierarchyRightTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsMimic(PRInt32 axis, PRBool *_retval NS_OUTPARAM) { return _to IsMimic(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimicEquation(PRInt32 axis, PRInt32 type, const char *format, char **_retval NS_OUTPARAM) { return _to GetMimicEquation(axis, type, format, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **mimicdofs NS_OUTPARAM, PRInt32 axis) { return _to GetMimicDOFIndices(count, mimicdofs, axis); } \
  NS_SCRIPTABLE NS_IMETHOD SetMimicEquations(PRInt32 axis, const char *poseq, const char *veleq, const char *acceleq) { return _to SetMimicEquations(axis, poseq, veleq, acceleq); } \
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **_retval NS_OUTPARAM) { return _to GetFloatParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters) { return _to SetFloatParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **_retval NS_OUTPARAM) { return _to GetIntParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters) { return _to SetIntParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **_retval NS_OUTPARAM) { return _to GetStringParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters) { return _to SetStringParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void) { return _to UpdateInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM) { return _to GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM) { return _to UpdateAndGetInfo(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYJOINT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxVel(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxVel(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxAccel(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxAccel(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxTorque(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxTorque(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFIndex(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFIndex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJointIndex(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFirstAttached(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFirstAttached(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecondAttached(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecondAttached(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResolutions(PRUint32 *count NS_INOUTPARAM, float **resolutions NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResolutions(count, resolutions, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetResolution(PRInt32 iaxi0, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResolution(iaxi0, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float resolution, PRInt32 iaxis) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResolution(resolution, iaxis); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsCircular(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCircular(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsRevolute(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsRevolute(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsPrismatic(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsPrismatic(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStatic(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValues(count, values, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(PRInt32 axis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocities(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocities(count, values, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocity(PRInt32 axis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocity(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddTorque(PRUint32 count, float *torques) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddTorque(count, torques); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnchor(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnchor(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAxis(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLimits(lowerCount, lowerLimit, upperCount, upperLimit, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimit(PRInt32 iaxis, float *upperLimit NS_OUTPARAM, float *lowerLimit NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLimit(iaxis, upperLimit, lowerLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SetLimits(PRUint32 lowerCount, float *lowerLimit, PRUint32 upperCount, float *upperLimit) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLimits(lowerCount, lowerLimit, upperCount, upperLimit); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits1(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocityLimits1(maxCount, max, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimits2(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocityLimits2(lowerCount, lowerLimit, upperCount, upperLimit, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetVelocityLimit(PRInt32 iaxis, float *lower NS_OUTPARAM, float *upper NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVelocityLimit(iaxis, lower, upper); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocityLimits3(PRUint32 maxCount, float *max) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVelocityLimits3(maxCount, max); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccelerationLimits(maxCount, max, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetAccelerationLimit(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAccelerationLimit(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetAccelerationLimits(PRUint32 maxCount, float *max) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAccelerationLimits(maxCount, max); } \
  NS_SCRIPTABLE NS_IMETHOD GetTorqueLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTorqueLimits(maxCount, max, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD SetTorqueLimits(PRUint32 maxCount, float *max) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTorqueLimits(maxCount, max); } \
  NS_SCRIPTABLE NS_IMETHOD GetWeights(PRUint32 *weightsCount NS_INOUTPARAM, float **weights NS_INOUTPARAM, PRBool bAppend) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWeights(weightsCount, weights, bAppend); } \
  NS_SCRIPTABLE NS_IMETHOD GetWeight(PRInt32 axis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWeight(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetWeights(PRUint32 weightsCount, float *weights) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWeights(weightsCount, weights); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubtractValues(values1Count, values1, values2Count, values2); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractValue(float value1, float value2, PRInt32 iaxis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubtractValue(value1, value2, iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrapOffset(PRInt32 iaxis, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrapOffset(iaxis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapOffset(float offset, PRInt32 iaxis) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWrapOffset(offset, iaxis); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(o, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyParentLink(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHierarchyParentLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHierarchyChildLink(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHierarchyChildLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalHierarchyAxis(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyLeftTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalHierarchyLeftTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInternalHierarchyRightTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalHierarchyRightTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsMimic(PRInt32 axis, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsMimic(axis, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimicEquation(PRInt32 axis, PRInt32 type, const char *format, char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMimicEquation(axis, type, format, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimicDOFIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **mimicdofs NS_OUTPARAM, PRInt32 axis) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMimicDOFIndices(count, mimicdofs, axis); } \
  NS_SCRIPTABLE NS_IMETHOD SetMimicEquations(PRInt32 axis, const char *poseq, const char *veleq, const char *acceleq) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMimicEquations(axis, poseq, veleq, acceleq); } \
  NS_SCRIPTABLE NS_IMETHOD GetFloatParameters(nsIProperties **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFloatParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFloatParameters(const char *key, PRUint32 count, float *parameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFloatParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntParameters(nsIProperties **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIntParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringParameters(nsIProperties **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringParameters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetStringParameters(const char *key, PRUint32 count, const char **parameters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStringParameters(key, count, parameters); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateInfo(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateAndGetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateAndGetInfo(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyJoint
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYJOINT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyJoint)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetMaxVel (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::GetMaxVel(PRInt32 iaxis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetMaxAccel (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::GetMaxAccel(PRInt32 iaxis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetMaxTorque (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::GetMaxTorque(PRInt32 iaxis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetDOFIndex (); */
NS_IMETHODIMP _MYCLASS_::GetDOFIndex(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetJointIndex (); */
NS_IMETHODIMP _MYCLASS_::GetJointIndex(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBody GetParent (); */
NS_IMETHODIMP _MYCLASS_::GetParent(IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetFirstAttached (); */
NS_IMETHODIMP _MYCLASS_::GetFirstAttached(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetSecondAttached (); */
NS_IMETHODIMP _MYCLASS_::GetSecondAttached(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetType (); */
NS_IMETHODIMP _MYCLASS_::GetType(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetResolutions (inout unsigned long count, [array, size_is (count)] inout float resolutions, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetResolutions(PRUint32 *count NS_INOUTPARAM, float **resolutions NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetResolution (in long iaxi0); */
NS_IMETHODIMP _MYCLASS_::GetResolution(PRInt32 iaxi0, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetResolution (in float resolution, in long iaxis); */
NS_IMETHODIMP _MYCLASS_::SetResolution(float resolution, PRInt32 iaxis)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetDOF (); */
NS_IMETHODIMP _MYCLASS_::GetDOF(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsCircular (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::IsCircular(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsRevolute (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::IsRevolute(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsPrismatic (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::IsPrismatic(PRInt32 iaxis, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsStatic (); */
NS_IMETHODIMP _MYCLASS_::IsStatic(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetValues (inout unsigned long count, [array, size_is (count)] inout float values, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetValues(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetValue (in long axis); */
NS_IMETHODIMP _MYCLASS_::GetValue(PRInt32 axis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocities (inout unsigned long count, [array, size_is (count)] inout float values, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetVelocities(PRUint32 *count NS_INOUTPARAM, float **values NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetVelocity (in long axis); */
NS_IMETHODIMP _MYCLASS_::GetVelocity(PRInt32 axis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void AddTorque (in unsigned long count, [array, size_is (count)] in float torques); */
NS_IMETHODIMP _MYCLASS_::AddTorque(PRUint32 count, float *torques)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAnchor (); */
NS_IMETHODIMP _MYCLASS_::GetAnchor(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetAxis (in long axis); */
NS_IMETHODIMP _MYCLASS_::GetAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLimits (inout unsigned long lowerCount, [array, size_is (lowerCount)] inout float lowerLimit, inout unsigned long upperCount, [array, size_is (upperCount)] inout float upperLimit, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetLimits(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLimit (in long iaxis, out float upperLimit, out float lowerLimit); */
NS_IMETHODIMP _MYCLASS_::GetLimit(PRInt32 iaxis, float *upperLimit NS_OUTPARAM, float *lowerLimit NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLimits (in unsigned long lowerCount, [array, size_is (lowerCount)] in float lowerLimit, in unsigned long upperCount, [array, size_is (upperCount)] in float upperLimit); */
NS_IMETHODIMP _MYCLASS_::SetLimits(PRUint32 lowerCount, float *lowerLimit, PRUint32 upperCount, float *upperLimit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocityLimits1 (inout unsigned long maxCount, [array, size_is (maxCount)] inout float max, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetVelocityLimits1(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocityLimits2 (inout unsigned long lowerCount, [array, size_is (lowerCount)] inout float lowerLimit, inout unsigned long upperCount, [array, size_is (upperCount)] inout float upperLimit, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetVelocityLimits2(PRUint32 *lowerCount NS_INOUTPARAM, float **lowerLimit NS_INOUTPARAM, PRUint32 *upperCount NS_INOUTPARAM, float **upperLimit NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetVelocityLimit (in long iaxis, out float lower, out float upper); */
NS_IMETHODIMP _MYCLASS_::GetVelocityLimit(PRInt32 iaxis, float *lower NS_OUTPARAM, float *upper NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetVelocityLimits3 (in unsigned long maxCount, [array, size_is (maxCount)] in float max); */
NS_IMETHODIMP _MYCLASS_::SetVelocityLimits3(PRUint32 maxCount, float *max)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAccelerationLimits (inout unsigned long maxCount, [array, size_is (maxCount)] inout float max, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetAccelerationLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetAccelerationLimit (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::GetAccelerationLimit(PRInt32 iaxis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetAccelerationLimits (in unsigned long maxCount, [array, size_is (maxCount)] in float max); */
NS_IMETHODIMP _MYCLASS_::SetAccelerationLimits(PRUint32 maxCount, float *max)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTorqueLimits (inout unsigned long maxCount, [array, size_is (maxCount)] inout float max, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetTorqueLimits(PRUint32 *maxCount NS_INOUTPARAM, float **max NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTorqueLimits (in unsigned long maxCount, [array, size_is (maxCount)] in float max); */
NS_IMETHODIMP _MYCLASS_::SetTorqueLimits(PRUint32 maxCount, float *max)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetWeights (inout unsigned long weightsCount, [array, size_is (weightsCount)] inout float weights, in boolean bAppend); */
NS_IMETHODIMP _MYCLASS_::GetWeights(PRUint32 *weightsCount NS_INOUTPARAM, float **weights NS_INOUTPARAM, PRBool bAppend)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetWeight (in long axis); */
NS_IMETHODIMP _MYCLASS_::GetWeight(PRInt32 axis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetWeights (in unsigned long weightsCount, [array, size_is (weightsCount)] in float weights); */
NS_IMETHODIMP _MYCLASS_::SetWeights(PRUint32 weightsCount, float *weights)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SubtractValues (inout unsigned long values1Count, [array, size_is (values1Count)] inout float values1, in unsigned long values2Count, [array, size_is (values2Count)] in float values2); */
NS_IMETHODIMP _MYCLASS_::SubtractValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float SubtractValue (in float value1, in float value2, in long iaxis); */
NS_IMETHODIMP _MYCLASS_::SubtractValue(float value1, float value2, PRInt32 iaxis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float GetWrapOffset (in long iaxis); */
NS_IMETHODIMP _MYCLASS_::GetWrapOffset(PRInt32 iaxis, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetWrapOffset (in float offset, in long iaxis); */
NS_IMETHODIMP _MYCLASS_::SetWrapOffset(float offset, PRInt32 iaxis)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void serialize (in nsIOutputStream o, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *o, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetHierarchyParentLink (); */
NS_IMETHODIMP _MYCLASS_::GetHierarchyParentLink(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetHierarchyChildLink (); */
NS_IMETHODIMP _MYCLASS_::GetHierarchyChildLink(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetInternalHierarchyAxis (in long axis); */
NS_IMETHODIMP _MYCLASS_::GetInternalHierarchyAxis(PRInt32 axis, IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetInternalHierarchyLeftTransform (); */
NS_IMETHODIMP _MYCLASS_::GetInternalHierarchyLeftTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetInternalHierarchyRightTransform (); */
NS_IMETHODIMP _MYCLASS_::GetInternalHierarchyRightTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsMimic (in long axis); */
NS_IMETHODIMP _MYCLASS_::IsMimic(PRInt32 axis, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetMimicEquation (in long axis, in long type, in string format); */
NS_IMETHODIMP _MYCLASS_::GetMimicEquation(PRInt32 axis, PRInt32 type, const char *format, char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetMimicDOFIndices (out unsigned long count, [array, size_is (count)] out long mimicdofs, in long axis); */
NS_IMETHODIMP _MYCLASS_::GetMimicDOFIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **mimicdofs NS_OUTPARAM, PRInt32 axis)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetMimicEquations (in long axis, in string poseq, in string veleq, in string acceleq); */
NS_IMETHODIMP _MYCLASS_::SetMimicEquations(PRInt32 axis, const char *poseq, const char *veleq, const char *acceleq)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProperties GetFloatParameters (); */
NS_IMETHODIMP _MYCLASS_::GetFloatParameters(nsIProperties **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetFloatParameters (in string key, in unsigned long count, [array, size_is (count)] in float parameters); */
NS_IMETHODIMP _MYCLASS_::SetFloatParameters(const char *key, PRUint32 count, float *parameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProperties GetIntParameters (); */
NS_IMETHODIMP _MYCLASS_::GetIntParameters(nsIProperties **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetIntParameters (in string key, in unsigned long count, [array, size_is (count)] in long parameters); */
NS_IMETHODIMP _MYCLASS_::SetIntParameters(const char *key, PRUint32 count, PRInt32 *parameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIProperties GetStringParameters (); */
NS_IMETHODIMP _MYCLASS_::GetStringParameters(nsIProperties **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetStringParameters (in string key, in unsigned long count, [array, size_is (count)] in string parameters); */
NS_IMETHODIMP _MYCLASS_::SetStringParameters(const char *key, PRUint32 count, const char **parameters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void UpdateInfo (); */
NS_IMETHODIMP _MYCLASS_::UpdateInfo()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyJointInfo GetInfo (); */
NS_IMETHODIMP _MYCLASS_::GetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyJointInfo UpdateAndGetInfo (); */
NS_IMETHODIMP _MYCLASS_::UpdateAndGetInfo(IKinBodyJointInfo **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyState */
#define IKINBODYSTATE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYSTATE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyState : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYSTATE_IID)

  /* attribute IKinBody pbody; */
  NS_SCRIPTABLE NS_IMETHOD GetPbody(IKinBody **aPbody) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPbody(IKinBody *aPbody) = 0;

  /* void GetTransforms (out unsigned long count, [array, size_is (count)] out ITransformF vectrans); */
  NS_SCRIPTABLE NS_IMETHOD GetTransforms(PRUint32 *count NS_OUTPARAM, ITransformF ***vectrans NS_OUTPARAM) = 0;

  /* void SetTransforms (in unsigned long count, [array, size_is (count)] in ITransformF vectrans); */
  NS_SCRIPTABLE NS_IMETHOD SetTransforms(PRUint32 count, ITransformF **vectrans) = 0;

  /* void GetJointValues (out unsigned long count, [array, size_is (count)] out float values); */
  NS_SCRIPTABLE NS_IMETHOD GetJointValues(PRUint32 *count NS_OUTPARAM, float **values NS_OUTPARAM) = 0;

  /* void SetJointValues (in unsigned long count, [array, size_is (count)] in float values); */
  NS_SCRIPTABLE NS_IMETHOD SetJointValues(PRUint32 count, float *values) = 0;

  /* attribute string strname; */
  NS_SCRIPTABLE NS_IMETHOD GetStrname(char **aStrname) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStrname(const char *aStrname) = 0;

  /* attribute long environmentid; */
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentid(PRInt32 *aEnvironmentid) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentid(PRInt32 aEnvironmentid) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyState, IKINBODYSTATE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYSTATE \
  NS_SCRIPTABLE NS_IMETHOD GetPbody(IKinBody **aPbody); \
  NS_SCRIPTABLE NS_IMETHOD SetPbody(IKinBody *aPbody); \
  NS_SCRIPTABLE NS_IMETHOD GetTransforms(PRUint32 *count NS_OUTPARAM, ITransformF ***vectrans NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetTransforms(PRUint32 count, ITransformF **vectrans); \
  NS_SCRIPTABLE NS_IMETHOD GetJointValues(PRUint32 *count NS_OUTPARAM, float **values NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues(PRUint32 count, float *values); \
  NS_SCRIPTABLE NS_IMETHOD GetStrname(char **aStrname); \
  NS_SCRIPTABLE NS_IMETHOD SetStrname(const char *aStrname); \
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentid(PRInt32 *aEnvironmentid); \
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentid(PRInt32 aEnvironmentid); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYSTATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPbody(IKinBody **aPbody) { return _to GetPbody(aPbody); } \
  NS_SCRIPTABLE NS_IMETHOD SetPbody(IKinBody *aPbody) { return _to SetPbody(aPbody); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransforms(PRUint32 *count NS_OUTPARAM, ITransformF ***vectrans NS_OUTPARAM) { return _to GetTransforms(count, vectrans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransforms(PRUint32 count, ITransformF **vectrans) { return _to SetTransforms(count, vectrans); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointValues(PRUint32 *count NS_OUTPARAM, float **values NS_OUTPARAM) { return _to GetJointValues(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues(PRUint32 count, float *values) { return _to SetJointValues(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD GetStrname(char **aStrname) { return _to GetStrname(aStrname); } \
  NS_SCRIPTABLE NS_IMETHOD SetStrname(const char *aStrname) { return _to SetStrname(aStrname); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentid(PRInt32 *aEnvironmentid) { return _to GetEnvironmentid(aEnvironmentid); } \
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentid(PRInt32 aEnvironmentid) { return _to SetEnvironmentid(aEnvironmentid); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYSTATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPbody(IKinBody **aPbody) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPbody(aPbody); } \
  NS_SCRIPTABLE NS_IMETHOD SetPbody(IKinBody *aPbody) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPbody(aPbody); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransforms(PRUint32 *count NS_OUTPARAM, ITransformF ***vectrans NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransforms(count, vectrans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransforms(PRUint32 count, ITransformF **vectrans) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransforms(count, vectrans); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointValues(PRUint32 *count NS_OUTPARAM, float **values NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJointValues(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues(PRUint32 count, float *values) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJointValues(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD GetStrname(char **aStrname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStrname(aStrname); } \
  NS_SCRIPTABLE NS_IMETHOD SetStrname(const char *aStrname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStrname(aStrname); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentid(PRInt32 *aEnvironmentid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnvironmentid(aEnvironmentid); } \
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentid(PRInt32 aEnvironmentid) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEnvironmentid(aEnvironmentid); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyState
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYSTATE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyState)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute IKinBody pbody; */
NS_IMETHODIMP _MYCLASS_::GetPbody(IKinBody **aPbody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPbody(IKinBody *aPbody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTransforms (out unsigned long count, [array, size_is (count)] out ITransformF vectrans); */
NS_IMETHODIMP _MYCLASS_::GetTransforms(PRUint32 *count NS_OUTPARAM, ITransformF ***vectrans NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTransforms (in unsigned long count, [array, size_is (count)] in ITransformF vectrans); */
NS_IMETHODIMP _MYCLASS_::SetTransforms(PRUint32 count, ITransformF **vectrans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetJointValues (out unsigned long count, [array, size_is (count)] out float values); */
NS_IMETHODIMP _MYCLASS_::GetJointValues(PRUint32 *count NS_OUTPARAM, float **values NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetJointValues (in unsigned long count, [array, size_is (count)] in float values); */
NS_IMETHODIMP _MYCLASS_::SetJointValues(PRUint32 count, float *values)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string strname; */
NS_IMETHODIMP _MYCLASS_::GetStrname(char **aStrname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetStrname(const char *aStrname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long environmentid; */
NS_IMETHODIMP _MYCLASS_::GetEnvironmentid(PRInt32 *aEnvironmentid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEnvironmentid(PRInt32 aEnvironmentid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyManageData */
#define IKINBODYMANAGEDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYMANAGEDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyManageData : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYMANAGEDATA_IID)

  /* ISensorSystemBase GetSystem (); */
  NS_SCRIPTABLE NS_IMETHOD GetSystem(ISensorSystemBase **_retval NS_OUTPARAM) = 0;

  /* IXMLReadable GetData (); */
  NS_SCRIPTABLE NS_IMETHOD GetData(IXMLReadable **_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetOffsetLink (); */
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLink(IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* boolean IsPresent (); */
  NS_SCRIPTABLE NS_IMETHOD IsPresent(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsLocked (); */
  NS_SCRIPTABLE NS_IMETHOD IsLocked(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean Lock (in boolean bDoLock); */
  NS_SCRIPTABLE NS_IMETHOD Lock(PRBool bDoLock, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyManageData, IKINBODYMANAGEDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYMANAGEDATA \
  NS_SCRIPTABLE NS_IMETHOD GetSystem(ISensorSystemBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetData(IXMLReadable **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLink(IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsPresent(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsLocked(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Lock(PRBool bDoLock, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYMANAGEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSystem(ISensorSystemBase **_retval NS_OUTPARAM) { return _to GetSystem(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(IXMLReadable **_retval NS_OUTPARAM) { return _to GetData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLink(IKinBodyLink **_retval NS_OUTPARAM) { return _to GetOffsetLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsPresent(PRBool *_retval NS_OUTPARAM) { return _to IsPresent(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return _to IsEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsLocked(PRBool *_retval NS_OUTPARAM) { return _to IsLocked(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Lock(PRBool bDoLock, PRBool *_retval NS_OUTPARAM) { return _to Lock(bDoLock, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYMANAGEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSystem(ISensorSystemBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSystem(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(IXMLReadable **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffsetLink(IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffsetLink(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsPresent(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsPresent(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsLocked(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsLocked(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Lock(PRBool bDoLock, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Lock(bDoLock, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyManageData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYMANAGEDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyManageData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* ISensorSystemBase GetSystem (); */
NS_IMETHODIMP _MYCLASS_::GetSystem(ISensorSystemBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IXMLReadable GetData (); */
NS_IMETHODIMP _MYCLASS_::GetData(IXMLReadable **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetOffsetLink (); */
NS_IMETHODIMP _MYCLASS_::GetOffsetLink(IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsPresent (); */
NS_IMETHODIMP _MYCLASS_::IsPresent(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsEnabled (); */
NS_IMETHODIMP _MYCLASS_::IsEnabled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsLocked (); */
NS_IMETHODIMP _MYCLASS_::IsLocked(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Lock (in boolean bDoLock); */
NS_IMETHODIMP _MYCLASS_::Lock(PRBool bDoLock, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBodyStateSaver */
#define IKINBODYSTATESAVER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODYSTATESAVER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBodyStateSaver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODYSTATESAVER_IID)

  /* IKinBody GetBody (); */
  NS_SCRIPTABLE NS_IMETHOD GetBody(IKinBody **_retval NS_OUTPARAM) = 0;

  /* void Restore (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD Restore(IKinBody *body) = 0;

  /* void ReleaseBody (); */
  NS_SCRIPTABLE NS_IMETHOD ReleaseBody(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBodyStateSaver, IKINBODYSTATESAVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODYSTATESAVER \
  NS_SCRIPTABLE NS_IMETHOD GetBody(IKinBody **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Restore(IKinBody *body); \
  NS_SCRIPTABLE NS_IMETHOD ReleaseBody(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODYSTATESAVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBody(IKinBody **_retval NS_OUTPARAM) { return _to GetBody(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Restore(IKinBody *body) { return _to Restore(body); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseBody(void) { return _to ReleaseBody(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODYSTATESAVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBody(IKinBody **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBody(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Restore(IKinBody *body) { return !_to ? NS_ERROR_NULL_POINTER : _to->Restore(body); } \
  NS_SCRIPTABLE NS_IMETHOD ReleaseBody(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseBody(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBodyStateSaver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODYSTATESAVER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBodyStateSaver)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IKinBody GetBody (); */
NS_IMETHODIMP _MYCLASS_::GetBody(IKinBody **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Restore (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::Restore(IKinBody *body)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ReleaseBody (); */
NS_IMETHODIMP _MYCLASS_::ReleaseBody()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IKinBody */
#define IKINBODY_IID_STR "00000000-0000-0000-0000-000000000000"

#define IKINBODY_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IKinBody : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IKINBODY_IID)

  /* long GetInterfaceTypeStatic (); */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void Destroy (); */
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) = 0;

  /* boolean InitFromBoxes1 (in unsigned long count, [array, size_is (count)] in IAABBF boxes, in boolean visible); */
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes1(PRUint32 count, IAABBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean InitFromBoxes2 (in unsigned long count, [array, size_is (count)] in IOBBF boxes, in boolean visible); */
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes2(PRUint32 count, IOBBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean InitFromSpheres (in unsigned long count, [array, size_is (count)] in IVectorF spheres, in boolean visible); */
  NS_SCRIPTABLE NS_IMETHOD InitFromSpheres(PRUint32 count, IVectorF **spheres, PRBool visible, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean InitFromTrimesh (in ITriMesh trimesh, in boolean visible); */
  NS_SCRIPTABLE NS_IMETHOD InitFromTrimesh(ITriMesh *trimesh, PRBool visible, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean InitFromGeometries (in unsigned long count, [array, size_is (count)] in IKinBodyGeometryInfo geometries); */
  NS_SCRIPTABLE NS_IMETHOD InitFromGeometries(PRUint32 count, IKinBodyGeometryInfo **geometries, PRBool *_retval NS_OUTPARAM) = 0;

  /* void SetLinkGeometriesFromGroup (in string name); */
  NS_SCRIPTABLE NS_IMETHOD SetLinkGeometriesFromGroup(const char *name) = 0;

  /* boolean Init (in unsigned long linkinfosCount, [array, size_is (linkinfosCount)] in IKinBodyLinkInfo linkinfos, in unsigned long jointinfosCount, [array, size_is (jointinfosCount)] in IKinBodyJointInfo jointinfos); */
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRBool *_retval NS_OUTPARAM) = 0;

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

  /* void SetName (in string name); */
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) = 0;

  /* long GetDOF (); */
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void GetDOFValues (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void GetDOFVelocities (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocities(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void GetDOFLimits (out unsigned long lowerLimitCount, [array, size_is (lowerLimitCount)] out float lowerLimit, out unsigned long upperLimitCount, [array, size_is (upperLimitCount)] out float upperLimit, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFLimits(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 *upperLimitCount NS_OUTPARAM, float **upperLimit NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void GetDOFVelocityLimits1 (out unsigned long lowerLimitCount, [array, size_is (lowerLimitCount)] out float lowerLimit, in unsigned long upperLimitCount, [array, size_is (upperLimitCount)] in float upperLimit, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits1(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 upperLimitCount, float *upperLimit, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void GetDOFVelocityLimits2 (out unsigned long maxvelocitiesCount, [array, size_is (maxvelocitiesCount)] out float maxvelocities, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits2(PRUint32 *maxvelocitiesCount NS_OUTPARAM, float **maxvelocities NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void GetDOFAccelerationLimits (out unsigned long maxaccelerationsCount, [array, size_is (maxaccelerationsCount)] out float maxaccelerations, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFAccelerationLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void GetDOFTorqueLimits (out unsigned long maxaccelerationsCount, [array, size_is (maxaccelerationsCount)] out float maxaccelerations); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFTorqueLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM) = 0;

  /* void GetDOFMaxTorque (out unsigned long vCount, [array, size_is (vCount)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFMaxTorque(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

  /* void GetDOFResolutions (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFResolutions(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void GetDOFWeights (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD GetDOFWeights(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void SetDOFVelocityLimits (in unsigned long maxlimitsCount, [array, size_is (maxlimitsCount)] in float maxlimits); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocityLimits(PRUint32 maxlimitsCount, float *maxlimits) = 0;

  /* void SetDOFAccelerationLimits (in unsigned long maxlimitsCount, [array, size_is (maxlimitsCount)] in float maxlimits); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFAccelerationLimits(PRUint32 maxlimitsCount, float *maxlimits) = 0;

  /* void SetDOFTorqueLimits (in unsigned long maxlimitsCount, [array, size_is (maxlimitsCount)] in float maxlimits); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorqueLimits(PRUint32 maxlimitsCount, float *maxlimits) = 0;

  /* void SetDOFWeights (in unsigned long weightsCount, [array, size_is (weightsCount)] in float weights, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFWeights(PRUint32 weightsCount, float *weights, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void SetDOFLimits (in unsigned long lowerLimitCount, [array, size_is (lowerLimitCount)] in float lowerLimit, in unsigned long upperLimitCount, [array, size_is (upperLimitCount)] in float upperLimit); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFLimits(PRUint32 lowerLimitCount, float *lowerLimit, PRUint32 upperLimitCount, float *upperLimit) = 0;

  /* void GetJoints (in unsigned long count, [array, size_is (count)] in IKinBodyJoint joints); */
  NS_SCRIPTABLE NS_IMETHOD GetJoints(PRUint32 count, IKinBodyJoint **joints) = 0;

  /* void GetPassiveJoints (in unsigned long count, [array, size_is (count)] in IKinBodyJoint joints); */
  NS_SCRIPTABLE NS_IMETHOD GetPassiveJoints(PRUint32 count, IKinBodyJoint **joints) = 0;

  /* void GetDependencyOrderedJoints (in unsigned long count, [array, size_is (count)] in IKinBodyJoint joints); */
  NS_SCRIPTABLE NS_IMETHOD GetDependencyOrderedJoints(PRUint32 count, IKinBodyJoint **joints) = 0;

  /* boolean GetChain1 (in long linkindex1, in long linkindex2, out unsigned long jointCount, [array, size_is (jointCount)] out IKinBodyJoint joints); */
  NS_SCRIPTABLE NS_IMETHOD GetChain1(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *jointCount NS_OUTPARAM, IKinBodyJoint ***joints NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean GetChain2 (in long linkindex1, in long linkindex2, out unsigned long linkCount, [array, size_is (linkCount)] out IKinBodyLink links); */
  NS_SCRIPTABLE NS_IMETHOD GetChain2(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsDOFInChain (in long linkindex1, in long linkindex2, in long dofindex); */
  NS_SCRIPTABLE NS_IMETHOD IsDOFInChain(PRInt32 linkindex1, PRInt32 linkindex2, PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) = 0;

  /* long GetJointIndex (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(const char *name, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IKinBodyJoint GetJoint (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetJoint(const char *name, IKinBodyJoint **_retval NS_OUTPARAM) = 0;

  /* IKinBodyJoint GetJointFromDOFIndex (in long dofindex); */
  NS_SCRIPTABLE NS_IMETHOD GetJointFromDOFIndex(PRInt32 dofindex, IKinBodyJoint **_retval NS_OUTPARAM) = 0;

  /* void SubtractDOFValues (inout unsigned long values1Count, [array, size_is (values1Count)] inout float values1, in unsigned long values2Count, [array, size_is (values2Count)] in float values2, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD SubtractDOFValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void SetDOFTorques (inout unsigned long torquesCount, [array, size_is (torquesCount)] inout float torques, in boolean add); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorques(PRUint32 *torquesCount NS_INOUTPARAM, float **torques NS_INOUTPARAM, PRBool add) = 0;

  /* void GetLinks (out unsigned long linkCount, [array, size_is (linkCount)] out IKinBodyLink links); */
  NS_SCRIPTABLE NS_IMETHOD GetLinks(PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM) = 0;

  /* boolean IsDOFRevolute (in long dofindex); */
  NS_SCRIPTABLE NS_IMETHOD IsDOFRevolute(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsDOFPrismatic (in long dofindex); */
  NS_SCRIPTABLE NS_IMETHOD IsDOFPrismatic(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) = 0;

  /* IKinBodyLink GetLink (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetLink(const char *name, IKinBodyLink **_retval NS_OUTPARAM) = 0;

  /* void SimulationStep (in float fElapsedTime); */
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime) = 0;

  /* void GetLinkTransformations1 (out unsigned long transformsCount, [array, size_is (transformsCount)] out ITransformF transforms); */
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations1(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM) = 0;

  /* void GetLinkTransformations2 (out unsigned long transformsCount, [array, size_is (transformsCount)] out ITransformF transforms, in unsigned long dofbranchesCount, [array, size_is (dofbranchesCount)] in long dofbranches); */
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations2(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM, PRUint32 dofbranchesCount, PRInt32 *dofbranches) = 0;

  /* void GetLinkEnableStates (out unsigned long enableStatesCount, [array, size_is (enableStatesCount)] out octet enablestates); */
  NS_SCRIPTABLE NS_IMETHOD GetLinkEnableStates(PRUint32 *enableStatesCount NS_OUTPARAM, PRUint8 **enablestates NS_OUTPARAM) = 0;

  /* ITransformF GetTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* boolean SetVelocity (in IVectorF linearvel, in IVectorF angularvel); */
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM) = 0;

  /* void SetDOFVelocities1 (in unsigned long dofvelocitiesCount, [array, size_is (dofvelocitiesCount)] in long dofvelocities, in IVectorF linearvel, in IVectorF angularvel, in unsigned long checklimits); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities1(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, IVectorF *linearvel, IVectorF *angularvel, PRUint32 checklimits) = 0;

  /* void SetDOFVelocities2 (in unsigned long dofvelocitiesCount, [array, size_is (dofvelocitiesCount)] in long dofvelocities, in unsigned long checklimits, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities2(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void SetTransform (in ITransformF transform); */
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform) = 0;

  /* IAABBF ComputeAABB (); */
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetCenterOfMass (); */
  NS_SCRIPTABLE NS_IMETHOD GetCenterOfMass(IVectorF **_retval NS_OUTPARAM) = 0;

  /* void Enable (in boolean enable); */
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable) = 0;

  /* boolean IsEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean SetVisible (in boolean visible); */
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsVisible (); */
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) = 0;

  /* void SetDOFValues1 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in unsigned long checklimits, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues1(PRUint32 valuesCount, float *values, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void SetJointValues1 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in boolean checklimits); */
  NS_SCRIPTABLE NS_IMETHOD SetJointValues1(PRUint32 valuesCount, float *values, PRBool checklimits) = 0;

  /* void SetDOFValues2 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in ITransformF transform, in unsigned long checklimits); */
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRUint32 checklimits) = 0;

  /* void SetJointValues2 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in ITransformF transform, in boolean checklimits); */
  NS_SCRIPTABLE NS_IMETHOD SetJointValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRBool checklimits) = 0;

  /* void SetLinkTransformations1 (in unsigned long transformsCount, [array, size_is (transformsCount)] in ITransformF transforms); */
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations1(PRUint32 transformsCount, ITransformF **transforms) = 0;

  /* void SetLinkTransformations2 (in unsigned long transformsCount, [array, size_is (transformsCount)] in ITransformF transforms, in unsigned long dofbranchesCount, [array, size_is (dofbranchesCount)] in long dofbranches); */
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations2(PRUint32 transformsCount, ITransformF **transforms, PRUint32 dofbranchesCount, PRInt32 *dofbranches) = 0;

  /* void SetLinkEnableStates (in unsigned long count, [array, size_is (count)] in octet enablestates); */
  NS_SCRIPTABLE NS_IMETHOD SetLinkEnableStates(PRUint32 count, PRUint8 *enablestates) = 0;

  /* void ComputeJacobianTranslation (in long linkindex, in IVectorF position, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void CalculateJacobian (in long linkindex, in IVectorF position, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) = 0;

  /* void CalculateRotationJacobian (in long linkindex, in IVectorF quat, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRInt32 linkindex, IVectorF *quat, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) = 0;

  /* void ComputeJacobianAxisAngle (in long linkindex, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianAxisAngle(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void CalculateAngularVelocityJacobian (in long linkindex, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) = 0;

  /* void ComputeHessianTranslation (in long linkindex, in IVectorF position, out unsigned long hessianCount, [array, size_is (hessianCount)] out float hessian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void ComputeHessianAxisAngle (in long linkindex, out unsigned long hessianCount, [array, size_is (hessianCount)] out float hessian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianAxisAngle(PRInt32 linkindex, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) = 0;

  /* void SetSelfCollisionChecker (in ICollisionCheckerBase collisionchecker); */
  NS_SCRIPTABLE NS_IMETHOD SetSelfCollisionChecker(ICollisionCheckerBase *collisionchecker) = 0;

  /* ICollisionCheckerBase GetSelfCollisionChecker (); */
  NS_SCRIPTABLE NS_IMETHOD GetSelfCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM) = 0;

  /* boolean CheckSelfCollision (out ICollisionReport report, in ICollisionCheckerBase collisionchecker); */
  NS_SCRIPTABLE NS_IMETHOD CheckSelfCollision(ICollisionReport **report NS_OUTPARAM, ICollisionCheckerBase *collisionchecker, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsAttached (in IKinBody body); */
  NS_SCRIPTABLE NS_IMETHOD IsAttached(IKinBody *body, PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetAttached (out unsigned long setAttachedCount, [array, size_is (setAttachedCount)] out IKinBody setAttached); */
  NS_SCRIPTABLE NS_IMETHOD GetAttached(PRUint32 *setAttachedCount NS_OUTPARAM, IKinBody ***setAttached NS_OUTPARAM) = 0;

  /* boolean IsRobot (); */
  NS_SCRIPTABLE NS_IMETHOD IsRobot(PRBool *_retval NS_OUTPARAM) = 0;

  /* long GetEnvironmentId (); */
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentId(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* short DoesAffect (in long jointindex, in long linkindex); */
  NS_SCRIPTABLE NS_IMETHOD DoesAffect(PRInt32 jointindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM) = 0;

  /* short DoesDOFAffectLink (in long dofindex, in long linkindex); */
  NS_SCRIPTABLE NS_IMETHOD DoesDOFAffectLink(PRInt32 dofindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM) = 0;

  /* void GetNonAdjacentLinks (out unsigned long count, [array, size_is (count)] out long links, in long adjacentoptions); */
  NS_SCRIPTABLE NS_IMETHOD GetNonAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM, PRInt32 adjacentoptions) = 0;

  /* void GetAdjacentLinks (out unsigned long count, [array, size_is (count)] out long links); */
  NS_SCRIPTABLE NS_IMETHOD GetAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM) = 0;

  /* IKinBodyManageData GetManageData (); */
  NS_SCRIPTABLE NS_IMETHOD GetManageData(IKinBodyManageData **_retval NS_OUTPARAM) = 0;

  /* long GetUpdateStamp (); */
  NS_SCRIPTABLE NS_IMETHOD GetUpdateStamp(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IUserData RegisterChangeCallback (in long properties, in ICallback callback); */
  NS_SCRIPTABLE NS_IMETHOD RegisterChangeCallback(PRInt32 properties, ICallback *callback, IUserData **_retval NS_OUTPARAM) = 0;

  /* string GetKinematicsGeometryHash (); */
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsGeometryHash(char **_retval NS_OUTPARAM) = 0;

  /* void SetZeroConfiguration (); */
  NS_SCRIPTABLE NS_IMETHOD SetZeroConfiguration(void) = 0;

  /* void SetNonCollidingConfiguration (); */
  NS_SCRIPTABLE NS_IMETHOD SetNonCollidingConfiguration(void) = 0;

  /* IConfigurationSpecification GetConfigurationSpecification (in string interpolation); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* IConfigurationSpecification GetConfigurationSpecificationIndices (in unsigned long indicesCount, [array, size_is (indicesCount)] in long indices, in string interpolation); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecificationIndices(PRUint32 indicesCount, PRInt32 *indices, const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* void GetConfigurationValues (out unsigned long vCount, [array, size_is (vCount)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IKinBody, IKINBODY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IKINBODY \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void); \
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes1(PRUint32 count, IAABBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes2(PRUint32 count, IOBBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitFromSpheres(PRUint32 count, IVectorF **spheres, PRBool visible, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitFromTrimesh(ITriMesh *trimesh, PRBool visible, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InitFromGeometries(PRUint32 count, IKinBodyGeometryInfo **geometries, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkGeometriesFromGroup(const char *name); \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name); \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocities(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFLimits(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 *upperLimitCount NS_OUTPARAM, float **upperLimit NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits1(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 upperLimitCount, float *upperLimit, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits2(PRUint32 *maxvelocitiesCount NS_OUTPARAM, float **maxvelocities NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFAccelerationLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFTorqueLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFMaxTorque(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFResolutions(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD GetDOFWeights(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocityLimits(PRUint32 maxlimitsCount, float *maxlimits); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFAccelerationLimits(PRUint32 maxlimitsCount, float *maxlimits); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorqueLimits(PRUint32 maxlimitsCount, float *maxlimits); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFWeights(PRUint32 weightsCount, float *weights, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFLimits(PRUint32 lowerLimitCount, float *lowerLimit, PRUint32 upperLimitCount, float *upperLimit); \
  NS_SCRIPTABLE NS_IMETHOD GetJoints(PRUint32 count, IKinBodyJoint **joints); \
  NS_SCRIPTABLE NS_IMETHOD GetPassiveJoints(PRUint32 count, IKinBodyJoint **joints); \
  NS_SCRIPTABLE NS_IMETHOD GetDependencyOrderedJoints(PRUint32 count, IKinBodyJoint **joints); \
  NS_SCRIPTABLE NS_IMETHOD GetChain1(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *jointCount NS_OUTPARAM, IKinBodyJoint ***joints NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChain2(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsDOFInChain(PRInt32 linkindex1, PRInt32 linkindex2, PRInt32 dofindex, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(const char *name, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(const char *name, IKinBodyJoint **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetJointFromDOFIndex(PRInt32 dofindex, IKinBodyJoint **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SubtractDOFValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorques(PRUint32 *torquesCount NS_INOUTPARAM, float **torques NS_INOUTPARAM, PRBool add); \
  NS_SCRIPTABLE NS_IMETHOD GetLinks(PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsDOFRevolute(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsDOFPrismatic(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLink(const char *name, IKinBodyLink **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations1(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations2(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM, PRUint32 dofbranchesCount, PRInt32 *dofbranches); \
  NS_SCRIPTABLE NS_IMETHOD GetLinkEnableStates(PRUint32 *enableStatesCount NS_OUTPARAM, PRUint8 **enablestates NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities1(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, IVectorF *linearvel, IVectorF *angularvel, PRUint32 checklimits); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities2(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform); \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCenterOfMass(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable); \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues1(PRUint32 valuesCount, float *values, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues1(PRUint32 valuesCount, float *values, PRBool checklimits); \
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRUint32 checklimits); \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRBool checklimits); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations1(PRUint32 transformsCount, ITransformF **transforms); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations2(PRUint32 transformsCount, ITransformF **transforms, PRUint32 dofbranchesCount, PRInt32 *dofbranches); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkEnableStates(PRUint32 count, PRUint8 *enablestates); \
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRInt32 linkindex, IVectorF *quat, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianAxisAngle(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianAxisAngle(PRInt32 linkindex, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices); \
  NS_SCRIPTABLE NS_IMETHOD SetSelfCollisionChecker(ICollisionCheckerBase *collisionchecker); \
  NS_SCRIPTABLE NS_IMETHOD GetSelfCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CheckSelfCollision(ICollisionReport **report NS_OUTPARAM, ICollisionCheckerBase *collisionchecker, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsAttached(IKinBody *body, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAttached(PRUint32 *setAttachedCount NS_OUTPARAM, IKinBody ***setAttached NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsRobot(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentId(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DoesAffect(PRInt32 jointindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DoesDOFAffectLink(PRInt32 dofindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNonAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM, PRInt32 adjacentoptions); \
  NS_SCRIPTABLE NS_IMETHOD GetAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetManageData(IKinBodyManageData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUpdateStamp(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterChangeCallback(PRInt32 properties, ICallback *callback, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsGeometryHash(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetZeroConfiguration(void); \
  NS_SCRIPTABLE NS_IMETHOD SetNonCollidingConfiguration(void); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecificationIndices(PRUint32 indicesCount, PRInt32 *indices, const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IKINBODY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM) { return _to GetInterfaceTypeStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return _to Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes1(PRUint32 count, IAABBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM) { return _to InitFromBoxes1(count, boxes, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes2(PRUint32 count, IOBBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM) { return _to InitFromBoxes2(count, boxes, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromSpheres(PRUint32 count, IVectorF **spheres, PRBool visible, PRBool *_retval NS_OUTPARAM) { return _to InitFromSpheres(count, spheres, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromTrimesh(ITriMesh *trimesh, PRBool visible, PRBool *_retval NS_OUTPARAM) { return _to InitFromTrimesh(trimesh, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromGeometries(PRUint32 count, IKinBodyGeometryInfo **geometries, PRBool *_retval NS_OUTPARAM) { return _to InitFromGeometries(count, geometries, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkGeometriesFromGroup(const char *name) { return _to SetLinkGeometriesFromGroup(name); } \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRBool *_retval NS_OUTPARAM) { return _to Init(linkinfosCount, linkinfos, jointinfosCount, jointinfos, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) { return _to SetName(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return _to GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFValues(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocities(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFVelocities(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFLimits(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 *upperLimitCount NS_OUTPARAM, float **upperLimit NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFLimits(lowerLimitCount, lowerLimit, upperLimitCount, upperLimit, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits1(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 upperLimitCount, float *upperLimit, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFVelocityLimits1(lowerLimitCount, lowerLimit, upperLimitCount, upperLimit, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits2(PRUint32 *maxvelocitiesCount NS_OUTPARAM, float **maxvelocities NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFVelocityLimits2(maxvelocitiesCount, maxvelocities, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFAccelerationLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFAccelerationLimits(maxaccelerationsCount, maxaccelerations, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFTorqueLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM) { return _to GetDOFTorqueLimits(maxaccelerationsCount, maxaccelerations); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFMaxTorque(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetDOFMaxTorque(vCount, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFResolutions(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFResolutions(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFWeights(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to GetDOFWeights(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocityLimits(PRUint32 maxlimitsCount, float *maxlimits) { return _to SetDOFVelocityLimits(maxlimitsCount, maxlimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFAccelerationLimits(PRUint32 maxlimitsCount, float *maxlimits) { return _to SetDOFAccelerationLimits(maxlimitsCount, maxlimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorqueLimits(PRUint32 maxlimitsCount, float *maxlimits) { return _to SetDOFTorqueLimits(maxlimitsCount, maxlimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFWeights(PRUint32 weightsCount, float *weights, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to SetDOFWeights(weightsCount, weights, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFLimits(PRUint32 lowerLimitCount, float *lowerLimit, PRUint32 upperLimitCount, float *upperLimit) { return _to SetDOFLimits(lowerLimitCount, lowerLimit, upperLimitCount, upperLimit); } \
  NS_SCRIPTABLE NS_IMETHOD GetJoints(PRUint32 count, IKinBodyJoint **joints) { return _to GetJoints(count, joints); } \
  NS_SCRIPTABLE NS_IMETHOD GetPassiveJoints(PRUint32 count, IKinBodyJoint **joints) { return _to GetPassiveJoints(count, joints); } \
  NS_SCRIPTABLE NS_IMETHOD GetDependencyOrderedJoints(PRUint32 count, IKinBodyJoint **joints) { return _to GetDependencyOrderedJoints(count, joints); } \
  NS_SCRIPTABLE NS_IMETHOD GetChain1(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *jointCount NS_OUTPARAM, IKinBodyJoint ***joints NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetChain1(linkindex1, linkindex2, jointCount, joints, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChain2(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetChain2(linkindex1, linkindex2, linkCount, links, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsDOFInChain(PRInt32 linkindex1, PRInt32 linkindex2, PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) { return _to IsDOFInChain(linkindex1, linkindex2, dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(const char *name, PRInt32 *_retval NS_OUTPARAM) { return _to GetJointIndex(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(const char *name, IKinBodyJoint **_retval NS_OUTPARAM) { return _to GetJoint(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointFromDOFIndex(PRInt32 dofindex, IKinBodyJoint **_retval NS_OUTPARAM) { return _to GetJointFromDOFIndex(dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractDOFValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to SubtractDOFValues(values1Count, values1, values2Count, values2, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorques(PRUint32 *torquesCount NS_INOUTPARAM, float **torques NS_INOUTPARAM, PRBool add) { return _to SetDOFTorques(torquesCount, torques, add); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinks(PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM) { return _to GetLinks(linkCount, links); } \
  NS_SCRIPTABLE NS_IMETHOD IsDOFRevolute(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) { return _to IsDOFRevolute(dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsDOFPrismatic(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) { return _to IsDOFPrismatic(dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLink(const char *name, IKinBodyLink **_retval NS_OUTPARAM) { return _to GetLink(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime) { return _to SimulationStep(fElapsedTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations1(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM) { return _to GetLinkTransformations1(transformsCount, transforms); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations2(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM, PRUint32 dofbranchesCount, PRInt32 *dofbranches) { return _to GetLinkTransformations2(transformsCount, transforms, dofbranchesCount, dofbranches); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkEnableStates(PRUint32 *enableStatesCount NS_OUTPARAM, PRUint8 **enablestates NS_OUTPARAM) { return _to GetLinkEnableStates(enableStatesCount, enablestates); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM) { return _to SetVelocity(linearvel, angularvel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities1(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, IVectorF *linearvel, IVectorF *angularvel, PRUint32 checklimits) { return _to SetDOFVelocities1(dofvelocitiesCount, dofvelocities, linearvel, angularvel, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities2(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to SetDOFVelocities2(dofvelocitiesCount, dofvelocities, checklimits, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform) { return _to SetTransform(transform); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) { return _to ComputeAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCenterOfMass(IVectorF **_retval NS_OUTPARAM) { return _to GetCenterOfMass(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable) { return _to Enable(enable); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return _to IsEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) { return _to SetVisible(visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) { return _to IsVisible(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues1(PRUint32 valuesCount, float *values, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to SetDOFValues1(valuesCount, values, checklimits, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues1(PRUint32 valuesCount, float *values, PRBool checklimits) { return _to SetJointValues1(valuesCount, values, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRUint32 checklimits) { return _to SetDOFValues2(valuesCount, values, transform, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRBool checklimits) { return _to SetJointValues2(valuesCount, values, transform, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations1(PRUint32 transformsCount, ITransformF **transforms) { return _to SetLinkTransformations1(transformsCount, transforms); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations2(PRUint32 transformsCount, ITransformF **transforms, PRUint32 dofbranchesCount, PRInt32 *dofbranches) { return _to SetLinkTransformations2(transformsCount, transforms, dofbranchesCount, dofbranches); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkEnableStates(PRUint32 count, PRUint8 *enablestates) { return _to SetLinkEnableStates(count, enablestates); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to ComputeJacobianTranslation(linkindex, position, jacobianCount, jacobian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return _to CalculateJacobian(linkindex, position, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRInt32 linkindex, IVectorF *quat, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return _to CalculateRotationJacobian(linkindex, quat, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianAxisAngle(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to ComputeJacobianAxisAngle(linkindex, jacobianCount, jacobian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return _to CalculateAngularVelocityJacobian(linkindex, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to ComputeHessianTranslation(linkindex, position, hessianCount, hessian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianAxisAngle(PRInt32 linkindex, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return _to ComputeHessianAxisAngle(linkindex, hessianCount, hessian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelfCollisionChecker(ICollisionCheckerBase *collisionchecker) { return _to SetSelfCollisionChecker(collisionchecker); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelfCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM) { return _to GetSelfCollisionChecker(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckSelfCollision(ICollisionReport **report NS_OUTPARAM, ICollisionCheckerBase *collisionchecker, PRBool *_retval NS_OUTPARAM) { return _to CheckSelfCollision(report, collisionchecker, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsAttached(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return _to IsAttached(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttached(PRUint32 *setAttachedCount NS_OUTPARAM, IKinBody ***setAttached NS_OUTPARAM) { return _to GetAttached(setAttachedCount, setAttached); } \
  NS_SCRIPTABLE NS_IMETHOD IsRobot(PRBool *_retval NS_OUTPARAM) { return _to IsRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentId(PRInt32 *_retval NS_OUTPARAM) { return _to GetEnvironmentId(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoesAffect(PRInt32 jointindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM) { return _to DoesAffect(jointindex, linkindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoesDOFAffectLink(PRInt32 dofindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM) { return _to DoesDOFAffectLink(dofindex, linkindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNonAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM, PRInt32 adjacentoptions) { return _to GetNonAdjacentLinks(count, links, adjacentoptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM) { return _to GetAdjacentLinks(count, links); } \
  NS_SCRIPTABLE NS_IMETHOD GetManageData(IKinBodyManageData **_retval NS_OUTPARAM) { return _to GetManageData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUpdateStamp(PRInt32 *_retval NS_OUTPARAM) { return _to GetUpdateStamp(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterChangeCallback(PRInt32 properties, ICallback *callback, IUserData **_retval NS_OUTPARAM) { return _to RegisterChangeCallback(properties, callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsGeometryHash(char **_retval NS_OUTPARAM) { return _to GetKinematicsGeometryHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetZeroConfiguration(void) { return _to SetZeroConfiguration(); } \
  NS_SCRIPTABLE NS_IMETHOD SetNonCollidingConfiguration(void) { return _to SetNonCollidingConfiguration(); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return _to GetConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecificationIndices(PRUint32 indicesCount, PRInt32 *indices, const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return _to GetConfigurationSpecificationIndices(indicesCount, indices, interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM) { return _to GetConfigurationValues(vCount, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IKINBODY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceTypeStatic(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Destroy(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Destroy(); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes1(PRUint32 count, IAABBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitFromBoxes1(count, boxes, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromBoxes2(PRUint32 count, IOBBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitFromBoxes2(count, boxes, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromSpheres(PRUint32 count, IVectorF **spheres, PRBool visible, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitFromSpheres(count, spheres, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromTrimesh(ITriMesh *trimesh, PRBool visible, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitFromTrimesh(trimesh, visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InitFromGeometries(PRUint32 count, IKinBodyGeometryInfo **geometries, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitFromGeometries(count, geometries, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkGeometriesFromGroup(const char *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkGeometriesFromGroup(name); } \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(linkinfosCount, linkinfos, jointinfosCount, jointinfos, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFValues(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocities(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFVelocities(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFLimits(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 *upperLimitCount NS_OUTPARAM, float **upperLimit NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFLimits(lowerLimitCount, lowerLimit, upperLimitCount, upperLimit, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits1(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 upperLimitCount, float *upperLimit, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFVelocityLimits1(lowerLimitCount, lowerLimit, upperLimitCount, upperLimit, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFVelocityLimits2(PRUint32 *maxvelocitiesCount NS_OUTPARAM, float **maxvelocities NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFVelocityLimits2(maxvelocitiesCount, maxvelocities, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFAccelerationLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFAccelerationLimits(maxaccelerationsCount, maxaccelerations, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFTorqueLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFTorqueLimits(maxaccelerationsCount, maxaccelerations); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFMaxTorque(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFMaxTorque(vCount, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFResolutions(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFResolutions(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOFWeights(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOFWeights(vCount, v, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocityLimits(PRUint32 maxlimitsCount, float *maxlimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFVelocityLimits(maxlimitsCount, maxlimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFAccelerationLimits(PRUint32 maxlimitsCount, float *maxlimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFAccelerationLimits(maxlimitsCount, maxlimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorqueLimits(PRUint32 maxlimitsCount, float *maxlimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFTorqueLimits(maxlimitsCount, maxlimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFWeights(PRUint32 weightsCount, float *weights, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFWeights(weightsCount, weights, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFLimits(PRUint32 lowerLimitCount, float *lowerLimit, PRUint32 upperLimitCount, float *upperLimit) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFLimits(lowerLimitCount, lowerLimit, upperLimitCount, upperLimit); } \
  NS_SCRIPTABLE NS_IMETHOD GetJoints(PRUint32 count, IKinBodyJoint **joints) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJoints(count, joints); } \
  NS_SCRIPTABLE NS_IMETHOD GetPassiveJoints(PRUint32 count, IKinBodyJoint **joints) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPassiveJoints(count, joints); } \
  NS_SCRIPTABLE NS_IMETHOD GetDependencyOrderedJoints(PRUint32 count, IKinBodyJoint **joints) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDependencyOrderedJoints(count, joints); } \
  NS_SCRIPTABLE NS_IMETHOD GetChain1(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *jointCount NS_OUTPARAM, IKinBodyJoint ***joints NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChain1(linkindex1, linkindex2, jointCount, joints, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChain2(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChain2(linkindex1, linkindex2, linkCount, links, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsDOFInChain(PRInt32 linkindex1, PRInt32 linkindex2, PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDOFInChain(linkindex1, linkindex2, dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointIndex(const char *name, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJointIndex(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJoint(const char *name, IKinBodyJoint **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJoint(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetJointFromDOFIndex(PRInt32 dofindex, IKinBodyJoint **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJointFromDOFIndex(dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractDOFValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubtractDOFValues(values1Count, values1, values2Count, values2, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFTorques(PRUint32 *torquesCount NS_INOUTPARAM, float **torques NS_INOUTPARAM, PRBool add) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFTorques(torquesCount, torques, add); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinks(PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinks(linkCount, links); } \
  NS_SCRIPTABLE NS_IMETHOD IsDOFRevolute(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDOFRevolute(dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsDOFPrismatic(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDOFPrismatic(dofindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLink(const char *name, IKinBodyLink **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLink(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SimulationStep(float fElapsedTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SimulationStep(fElapsedTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations1(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkTransformations1(transformsCount, transforms); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkTransformations2(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM, PRUint32 dofbranchesCount, PRInt32 *dofbranches) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkTransformations2(transformsCount, transforms, dofbranchesCount, dofbranches); } \
  NS_SCRIPTABLE NS_IMETHOD GetLinkEnableStates(PRUint32 *enableStatesCount NS_OUTPARAM, PRUint8 **enablestates NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinkEnableStates(enableStatesCount, enablestates); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVelocity(IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVelocity(linearvel, angularvel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities1(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, IVectorF *linearvel, IVectorF *angularvel, PRUint32 checklimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFVelocities1(dofvelocitiesCount, dofvelocities, linearvel, angularvel, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFVelocities2(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFVelocities2(dofvelocitiesCount, dofvelocities, checklimits, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *transform) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransform(transform); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCenterOfMass(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCenterOfMass(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enable(PRBool enable) { return !_to ? NS_ERROR_NULL_POINTER : _to->Enable(enable); } \
  NS_SCRIPTABLE NS_IMETHOD IsEnabled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVisible(visible, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsVisible(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsVisible(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues1(PRUint32 valuesCount, float *values, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFValues1(valuesCount, values, checklimits, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues1(PRUint32 valuesCount, float *values, PRBool checklimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJointValues1(valuesCount, values, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetDOFValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRUint32 checklimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDOFValues2(valuesCount, values, transform, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetJointValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRBool checklimits) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJointValues2(valuesCount, values, transform, checklimits); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations1(PRUint32 transformsCount, ITransformF **transforms) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkTransformations1(transformsCount, transforms); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkTransformations2(PRUint32 transformsCount, ITransformF **transforms, PRUint32 dofbranchesCount, PRInt32 *dofbranches) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkTransformations2(transformsCount, transforms, dofbranchesCount, dofbranches); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkEnableStates(PRUint32 count, PRUint8 *enablestates) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkEnableStates(count, enablestates); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeJacobianTranslation(linkindex, position, jacobianCount, jacobian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateJacobian(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateJacobian(linkindex, position, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateRotationJacobian(PRInt32 linkindex, IVectorF *quat, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateRotationJacobian(linkindex, quat, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeJacobianAxisAngle(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeJacobianAxisAngle(linkindex, jacobianCount, jacobian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD CalculateAngularVelocityJacobian(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CalculateAngularVelocityJacobian(linkindex, jacobianCount, jacobian); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeHessianTranslation(linkindex, position, hessianCount, hessian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeHessianAxisAngle(PRInt32 linkindex, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeHessianAxisAngle(linkindex, hessianCount, hessian, dofindicesCount, dofindices); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelfCollisionChecker(ICollisionCheckerBase *collisionchecker) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelfCollisionChecker(collisionchecker); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelfCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelfCollisionChecker(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CheckSelfCollision(ICollisionReport **report NS_OUTPARAM, ICollisionCheckerBase *collisionchecker, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckSelfCollision(report, collisionchecker, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsAttached(IKinBody *body, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAttached(body, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAttached(PRUint32 *setAttachedCount NS_OUTPARAM, IKinBody ***setAttached NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttached(setAttachedCount, setAttached); } \
  NS_SCRIPTABLE NS_IMETHOD IsRobot(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsRobot(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnvironmentId(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnvironmentId(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoesAffect(PRInt32 jointindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoesAffect(jointindex, linkindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD DoesDOFAffectLink(PRInt32 dofindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoesDOFAffectLink(dofindex, linkindex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNonAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM, PRInt32 adjacentoptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNonAdjacentLinks(count, links, adjacentoptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAdjacentLinks(count, links); } \
  NS_SCRIPTABLE NS_IMETHOD GetManageData(IKinBodyManageData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManageData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUpdateStamp(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUpdateStamp(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterChangeCallback(PRInt32 properties, ICallback *callback, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterChangeCallback(properties, callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKinematicsGeometryHash(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKinematicsGeometryHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetZeroConfiguration(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetZeroConfiguration(); } \
  NS_SCRIPTABLE NS_IMETHOD SetNonCollidingConfiguration(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNonCollidingConfiguration(); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecificationIndices(PRUint32 indicesCount, PRInt32 *indices, const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurationSpecificationIndices(indicesCount, indices, interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurationValues(vCount, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IKinBody
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IKINBODY

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IKinBody)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long GetInterfaceTypeStatic (); */
NS_IMETHODIMP _MYCLASS_::GetInterfaceTypeStatic(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Destroy (); */
NS_IMETHODIMP _MYCLASS_::Destroy()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitFromBoxes1 (in unsigned long count, [array, size_is (count)] in IAABBF boxes, in boolean visible); */
NS_IMETHODIMP _MYCLASS_::InitFromBoxes1(PRUint32 count, IAABBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitFromBoxes2 (in unsigned long count, [array, size_is (count)] in IOBBF boxes, in boolean visible); */
NS_IMETHODIMP _MYCLASS_::InitFromBoxes2(PRUint32 count, IOBBF **boxes, PRBool visible, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitFromSpheres (in unsigned long count, [array, size_is (count)] in IVectorF spheres, in boolean visible); */
NS_IMETHODIMP _MYCLASS_::InitFromSpheres(PRUint32 count, IVectorF **spheres, PRBool visible, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitFromTrimesh (in ITriMesh trimesh, in boolean visible); */
NS_IMETHODIMP _MYCLASS_::InitFromTrimesh(ITriMesh *trimesh, PRBool visible, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InitFromGeometries (in unsigned long count, [array, size_is (count)] in IKinBodyGeometryInfo geometries); */
NS_IMETHODIMP _MYCLASS_::InitFromGeometries(PRUint32 count, IKinBodyGeometryInfo **geometries, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLinkGeometriesFromGroup (in string name); */
NS_IMETHODIMP _MYCLASS_::SetLinkGeometriesFromGroup(const char *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Init (in unsigned long linkinfosCount, [array, size_is (linkinfosCount)] in IKinBodyLinkInfo linkinfos, in unsigned long jointinfosCount, [array, size_is (jointinfosCount)] in IKinBodyJointInfo jointinfos); */
NS_IMETHODIMP _MYCLASS_::Init(PRUint32 linkinfosCount, IKinBodyLinkInfo **linkinfos, PRUint32 jointinfosCount, IKinBodyJointInfo **jointinfos, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetName (in string name); */
NS_IMETHODIMP _MYCLASS_::SetName(const char *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetDOF (); */
NS_IMETHODIMP _MYCLASS_::GetDOF(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFValues (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFVelocities (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFVelocities(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFLimits (out unsigned long lowerLimitCount, [array, size_is (lowerLimitCount)] out float lowerLimit, out unsigned long upperLimitCount, [array, size_is (upperLimitCount)] out float upperLimit, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFLimits(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 *upperLimitCount NS_OUTPARAM, float **upperLimit NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFVelocityLimits1 (out unsigned long lowerLimitCount, [array, size_is (lowerLimitCount)] out float lowerLimit, in unsigned long upperLimitCount, [array, size_is (upperLimitCount)] in float upperLimit, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFVelocityLimits1(PRUint32 *lowerLimitCount NS_OUTPARAM, float **lowerLimit NS_OUTPARAM, PRUint32 upperLimitCount, float *upperLimit, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFVelocityLimits2 (out unsigned long maxvelocitiesCount, [array, size_is (maxvelocitiesCount)] out float maxvelocities, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFVelocityLimits2(PRUint32 *maxvelocitiesCount NS_OUTPARAM, float **maxvelocities NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFAccelerationLimits (out unsigned long maxaccelerationsCount, [array, size_is (maxaccelerationsCount)] out float maxaccelerations, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFAccelerationLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFTorqueLimits (out unsigned long maxaccelerationsCount, [array, size_is (maxaccelerationsCount)] out float maxaccelerations); */
NS_IMETHODIMP _MYCLASS_::GetDOFTorqueLimits(PRUint32 *maxaccelerationsCount NS_OUTPARAM, float **maxaccelerations NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFMaxTorque (out unsigned long vCount, [array, size_is (vCount)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetDOFMaxTorque(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFResolutions (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFResolutions(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDOFWeights (out unsigned long vCount, [array, size_is (vCount)] out float v, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::GetDOFWeights(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFVelocityLimits (in unsigned long maxlimitsCount, [array, size_is (maxlimitsCount)] in float maxlimits); */
NS_IMETHODIMP _MYCLASS_::SetDOFVelocityLimits(PRUint32 maxlimitsCount, float *maxlimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFAccelerationLimits (in unsigned long maxlimitsCount, [array, size_is (maxlimitsCount)] in float maxlimits); */
NS_IMETHODIMP _MYCLASS_::SetDOFAccelerationLimits(PRUint32 maxlimitsCount, float *maxlimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFTorqueLimits (in unsigned long maxlimitsCount, [array, size_is (maxlimitsCount)] in float maxlimits); */
NS_IMETHODIMP _MYCLASS_::SetDOFTorqueLimits(PRUint32 maxlimitsCount, float *maxlimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFWeights (in unsigned long weightsCount, [array, size_is (weightsCount)] in float weights, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::SetDOFWeights(PRUint32 weightsCount, float *weights, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFLimits (in unsigned long lowerLimitCount, [array, size_is (lowerLimitCount)] in float lowerLimit, in unsigned long upperLimitCount, [array, size_is (upperLimitCount)] in float upperLimit); */
NS_IMETHODIMP _MYCLASS_::SetDOFLimits(PRUint32 lowerLimitCount, float *lowerLimit, PRUint32 upperLimitCount, float *upperLimit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetJoints (in unsigned long count, [array, size_is (count)] in IKinBodyJoint joints); */
NS_IMETHODIMP _MYCLASS_::GetJoints(PRUint32 count, IKinBodyJoint **joints)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetPassiveJoints (in unsigned long count, [array, size_is (count)] in IKinBodyJoint joints); */
NS_IMETHODIMP _MYCLASS_::GetPassiveJoints(PRUint32 count, IKinBodyJoint **joints)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetDependencyOrderedJoints (in unsigned long count, [array, size_is (count)] in IKinBodyJoint joints); */
NS_IMETHODIMP _MYCLASS_::GetDependencyOrderedJoints(PRUint32 count, IKinBodyJoint **joints)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetChain1 (in long linkindex1, in long linkindex2, out unsigned long jointCount, [array, size_is (jointCount)] out IKinBodyJoint joints); */
NS_IMETHODIMP _MYCLASS_::GetChain1(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *jointCount NS_OUTPARAM, IKinBodyJoint ***joints NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetChain2 (in long linkindex1, in long linkindex2, out unsigned long linkCount, [array, size_is (linkCount)] out IKinBodyLink links); */
NS_IMETHODIMP _MYCLASS_::GetChain2(PRInt32 linkindex1, PRInt32 linkindex2, PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsDOFInChain (in long linkindex1, in long linkindex2, in long dofindex); */
NS_IMETHODIMP _MYCLASS_::IsDOFInChain(PRInt32 linkindex1, PRInt32 linkindex2, PRInt32 dofindex, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetJointIndex (in string name); */
NS_IMETHODIMP _MYCLASS_::GetJointIndex(const char *name, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyJoint GetJoint (in string name); */
NS_IMETHODIMP _MYCLASS_::GetJoint(const char *name, IKinBodyJoint **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyJoint GetJointFromDOFIndex (in long dofindex); */
NS_IMETHODIMP _MYCLASS_::GetJointFromDOFIndex(PRInt32 dofindex, IKinBodyJoint **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SubtractDOFValues (inout unsigned long values1Count, [array, size_is (values1Count)] inout float values1, in unsigned long values2Count, [array, size_is (values2Count)] in float values2, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::SubtractDOFValues(PRUint32 *values1Count NS_INOUTPARAM, float **values1 NS_INOUTPARAM, PRUint32 values2Count, float *values2, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFTorques (inout unsigned long torquesCount, [array, size_is (torquesCount)] inout float torques, in boolean add); */
NS_IMETHODIMP _MYCLASS_::SetDOFTorques(PRUint32 *torquesCount NS_INOUTPARAM, float **torques NS_INOUTPARAM, PRBool add)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLinks (out unsigned long linkCount, [array, size_is (linkCount)] out IKinBodyLink links); */
NS_IMETHODIMP _MYCLASS_::GetLinks(PRUint32 *linkCount NS_OUTPARAM, IKinBodyLink ***links NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsDOFRevolute (in long dofindex); */
NS_IMETHODIMP _MYCLASS_::IsDOFRevolute(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsDOFPrismatic (in long dofindex); */
NS_IMETHODIMP _MYCLASS_::IsDOFPrismatic(PRInt32 dofindex, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyLink GetLink (in string name); */
NS_IMETHODIMP _MYCLASS_::GetLink(const char *name, IKinBodyLink **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SimulationStep (in float fElapsedTime); */
NS_IMETHODIMP _MYCLASS_::SimulationStep(float fElapsedTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLinkTransformations1 (out unsigned long transformsCount, [array, size_is (transformsCount)] out ITransformF transforms); */
NS_IMETHODIMP _MYCLASS_::GetLinkTransformations1(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLinkTransformations2 (out unsigned long transformsCount, [array, size_is (transformsCount)] out ITransformF transforms, in unsigned long dofbranchesCount, [array, size_is (dofbranchesCount)] in long dofbranches); */
NS_IMETHODIMP _MYCLASS_::GetLinkTransformations2(PRUint32 *transformsCount NS_OUTPARAM, ITransformF ***transforms NS_OUTPARAM, PRUint32 dofbranchesCount, PRInt32 *dofbranches)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLinkEnableStates (out unsigned long enableStatesCount, [array, size_is (enableStatesCount)] out octet enablestates); */
NS_IMETHODIMP _MYCLASS_::GetLinkEnableStates(PRUint32 *enableStatesCount NS_OUTPARAM, PRUint8 **enablestates NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetTransform (); */
NS_IMETHODIMP _MYCLASS_::GetTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetVelocity (in IVectorF linearvel, in IVectorF angularvel); */
NS_IMETHODIMP _MYCLASS_::SetVelocity(IVectorF *linearvel, IVectorF *angularvel, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFVelocities1 (in unsigned long dofvelocitiesCount, [array, size_is (dofvelocitiesCount)] in long dofvelocities, in IVectorF linearvel, in IVectorF angularvel, in unsigned long checklimits); */
NS_IMETHODIMP _MYCLASS_::SetDOFVelocities1(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, IVectorF *linearvel, IVectorF *angularvel, PRUint32 checklimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFVelocities2 (in unsigned long dofvelocitiesCount, [array, size_is (dofvelocitiesCount)] in long dofvelocities, in unsigned long checklimits, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::SetDOFVelocities2(PRUint32 dofvelocitiesCount, PRInt32 *dofvelocities, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTransform (in ITransformF transform); */
NS_IMETHODIMP _MYCLASS_::SetTransform(ITransformF *transform)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IAABBF ComputeAABB (); */
NS_IMETHODIMP _MYCLASS_::ComputeAABB(IAABBF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetCenterOfMass (); */
NS_IMETHODIMP _MYCLASS_::GetCenterOfMass(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Enable (in boolean enable); */
NS_IMETHODIMP _MYCLASS_::Enable(PRBool enable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsEnabled (); */
NS_IMETHODIMP _MYCLASS_::IsEnabled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SetVisible (in boolean visible); */
NS_IMETHODIMP _MYCLASS_::SetVisible(PRBool visible, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsVisible (); */
NS_IMETHODIMP _MYCLASS_::IsVisible(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFValues1 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in unsigned long checklimits, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::SetDOFValues1(PRUint32 valuesCount, float *values, PRUint32 checklimits, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetJointValues1 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in boolean checklimits); */
NS_IMETHODIMP _MYCLASS_::SetJointValues1(PRUint32 valuesCount, float *values, PRBool checklimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDOFValues2 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in ITransformF transform, in unsigned long checklimits); */
NS_IMETHODIMP _MYCLASS_::SetDOFValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRUint32 checklimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetJointValues2 (in unsigned long valuesCount, [array, size_is (valuesCount)] in float values, in ITransformF transform, in boolean checklimits); */
NS_IMETHODIMP _MYCLASS_::SetJointValues2(PRUint32 valuesCount, float *values, ITransformF *transform, PRBool checklimits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLinkTransformations1 (in unsigned long transformsCount, [array, size_is (transformsCount)] in ITransformF transforms); */
NS_IMETHODIMP _MYCLASS_::SetLinkTransformations1(PRUint32 transformsCount, ITransformF **transforms)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLinkTransformations2 (in unsigned long transformsCount, [array, size_is (transformsCount)] in ITransformF transforms, in unsigned long dofbranchesCount, [array, size_is (dofbranchesCount)] in long dofbranches); */
NS_IMETHODIMP _MYCLASS_::SetLinkTransformations2(PRUint32 transformsCount, ITransformF **transforms, PRUint32 dofbranchesCount, PRInt32 *dofbranches)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLinkEnableStates (in unsigned long count, [array, size_is (count)] in octet enablestates); */
NS_IMETHODIMP _MYCLASS_::SetLinkEnableStates(PRUint32 count, PRUint8 *enablestates)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ComputeJacobianTranslation (in long linkindex, in IVectorF position, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::ComputeJacobianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateJacobian (in long linkindex, in IVectorF position, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateJacobian(PRInt32 linkindex, IVectorF *position, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateRotationJacobian (in long linkindex, in IVectorF quat, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateRotationJacobian(PRInt32 linkindex, IVectorF *quat, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ComputeJacobianAxisAngle (in long linkindex, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::ComputeJacobianAxisAngle(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void CalculateAngularVelocityJacobian (in long linkindex, out unsigned long jacobianCount, [array, size_is (jacobianCount)] out float jacobian); */
NS_IMETHODIMP _MYCLASS_::CalculateAngularVelocityJacobian(PRInt32 linkindex, PRUint32 *jacobianCount NS_OUTPARAM, float **jacobian NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ComputeHessianTranslation (in long linkindex, in IVectorF position, out unsigned long hessianCount, [array, size_is (hessianCount)] out float hessian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::ComputeHessianTranslation(PRInt32 linkindex, IVectorF *position, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ComputeHessianAxisAngle (in long linkindex, out unsigned long hessianCount, [array, size_is (hessianCount)] out float hessian, in unsigned long dofindicesCount, [array, size_is (dofindicesCount)] in long dofindices); */
NS_IMETHODIMP _MYCLASS_::ComputeHessianAxisAngle(PRInt32 linkindex, PRUint32 *hessianCount NS_OUTPARAM, float **hessian NS_OUTPARAM, PRUint32 dofindicesCount, PRInt32 *dofindices)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetSelfCollisionChecker (in ICollisionCheckerBase collisionchecker); */
NS_IMETHODIMP _MYCLASS_::SetSelfCollisionChecker(ICollisionCheckerBase *collisionchecker)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ICollisionCheckerBase GetSelfCollisionChecker (); */
NS_IMETHODIMP _MYCLASS_::GetSelfCollisionChecker(ICollisionCheckerBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean CheckSelfCollision (out ICollisionReport report, in ICollisionCheckerBase collisionchecker); */
NS_IMETHODIMP _MYCLASS_::CheckSelfCollision(ICollisionReport **report NS_OUTPARAM, ICollisionCheckerBase *collisionchecker, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsAttached (in IKinBody body); */
NS_IMETHODIMP _MYCLASS_::IsAttached(IKinBody *body, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAttached (out unsigned long setAttachedCount, [array, size_is (setAttachedCount)] out IKinBody setAttached); */
NS_IMETHODIMP _MYCLASS_::GetAttached(PRUint32 *setAttachedCount NS_OUTPARAM, IKinBody ***setAttached NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsRobot (); */
NS_IMETHODIMP _MYCLASS_::IsRobot(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetEnvironmentId (); */
NS_IMETHODIMP _MYCLASS_::GetEnvironmentId(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* short DoesAffect (in long jointindex, in long linkindex); */
NS_IMETHODIMP _MYCLASS_::DoesAffect(PRInt32 jointindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* short DoesDOFAffectLink (in long dofindex, in long linkindex); */
NS_IMETHODIMP _MYCLASS_::DoesDOFAffectLink(PRInt32 dofindex, PRInt32 linkindex, PRInt16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetNonAdjacentLinks (out unsigned long count, [array, size_is (count)] out long links, in long adjacentoptions); */
NS_IMETHODIMP _MYCLASS_::GetNonAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM, PRInt32 adjacentoptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAdjacentLinks (out unsigned long count, [array, size_is (count)] out long links); */
NS_IMETHODIMP _MYCLASS_::GetAdjacentLinks(PRUint32 *count NS_OUTPARAM, PRInt32 **links NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IKinBodyManageData GetManageData (); */
NS_IMETHODIMP _MYCLASS_::GetManageData(IKinBodyManageData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetUpdateStamp (); */
NS_IMETHODIMP _MYCLASS_::GetUpdateStamp(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterChangeCallback (in long properties, in ICallback callback); */
NS_IMETHODIMP _MYCLASS_::RegisterChangeCallback(PRInt32 properties, ICallback *callback, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetKinematicsGeometryHash (); */
NS_IMETHODIMP _MYCLASS_::GetKinematicsGeometryHash(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetZeroConfiguration (); */
NS_IMETHODIMP _MYCLASS_::SetZeroConfiguration()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetNonCollidingConfiguration (); */
NS_IMETHODIMP _MYCLASS_::SetNonCollidingConfiguration()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification GetConfigurationSpecification (in string interpolation); */
NS_IMETHODIMP _MYCLASS_::GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification GetConfigurationSpecificationIndices (in unsigned long indicesCount, [array, size_is (indicesCount)] in long indices, in string interpolation); */
NS_IMETHODIMP _MYCLASS_::GetConfigurationSpecificationIndices(PRUint32 indicesCount, PRInt32 *indices, const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetConfigurationValues (out unsigned long vCount, [array, size_is (vCount)] out float v); */
NS_IMETHODIMP _MYCLASS_::GetConfigurationValues(PRUint32 *vCount NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_kinbody_h__ */
