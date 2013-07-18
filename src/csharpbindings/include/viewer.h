/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/viewer.idl
 */

#ifndef __gen_viewer_h__
#define __gen_viewer_h__


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

/* starting interface:    ICallbackViewerImage */
#define ICALLBACKVIEWERIMAGE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKVIEWERIMAGE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackViewerImage : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKVIEWERIMAGE_IID)

  /* void Invoke (in unsigned long dataCount, [array, size_is (dataCount)] in octet data, in long width, in long height, in long depth); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 dataCount, PRUint8 *data, PRInt32 width, PRInt32 height, PRInt32 depth) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackViewerImage, ICALLBACKVIEWERIMAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKVIEWERIMAGE \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 dataCount, PRUint8 *data, PRInt32 width, PRInt32 height, PRInt32 depth); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKVIEWERIMAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 dataCount, PRUint8 *data, PRInt32 width, PRInt32 height, PRInt32 depth) { return _to Invoke(dataCount, data, width, height, depth); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKVIEWERIMAGE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 dataCount, PRUint8 *data, PRInt32 width, PRInt32 height, PRInt32 depth) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(dataCount, data, width, height, depth); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackViewerImage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKVIEWERIMAGE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackViewerImage)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Invoke (in unsigned long dataCount, [array, size_is (dataCount)] in octet data, in long width, in long height, in long depth); */
NS_IMETHODIMP _MYCLASS_::Invoke(PRUint32 dataCount, PRUint8 *data, PRInt32 width, PRInt32 height, PRInt32 depth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICallbackItemSelection */
#define ICALLBACKITEMSELECTION_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKITEMSELECTION_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackItemSelection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKITEMSELECTION_IID)

  /* boolean Invoke (in IKinBodyLink plink, in IVectorF offset, in IVectorF direction); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(IKinBodyLink *plink, IVectorF *offset, IVectorF *direction, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackItemSelection, ICALLBACKITEMSELECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKITEMSELECTION \
  NS_SCRIPTABLE NS_IMETHOD Invoke(IKinBodyLink *plink, IVectorF *offset, IVectorF *direction, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKITEMSELECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(IKinBodyLink *plink, IVectorF *offset, IVectorF *direction, PRBool *_retval NS_OUTPARAM) { return _to Invoke(plink, offset, direction, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKITEMSELECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(IKinBodyLink *plink, IVectorF *offset, IVectorF *direction, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(plink, offset, direction, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackItemSelection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKITEMSELECTION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackItemSelection)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean Invoke (in IKinBodyLink plink, in IVectorF offset, in IVectorF direction); */
NS_IMETHODIMP _MYCLASS_::Invoke(IKinBodyLink *plink, IVectorF *offset, IVectorF *direction, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IGraphHandle */
#define IGRAPHHANDLE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IGRAPHHANDLE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IGraphHandle : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IGRAPHHANDLE_IID)

  /* void SetTransform (in ITransformF t); */
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *t) = 0;

  /* void SetShow (in boolean bshow); */
  NS_SCRIPTABLE NS_IMETHOD SetShow(PRBool bshow) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IGraphHandle, IGRAPHHANDLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IGRAPHHANDLE \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *t); \
  NS_SCRIPTABLE NS_IMETHOD SetShow(PRBool bshow); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IGRAPHHANDLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *t) { return _to SetTransform(t); } \
  NS_SCRIPTABLE NS_IMETHOD SetShow(PRBool bshow) { return _to SetShow(bshow); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IGRAPHHANDLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetTransform(ITransformF *t) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransform(t); } \
  NS_SCRIPTABLE NS_IMETHOD SetShow(PRBool bshow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShow(bshow); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IGraphHandle
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IGRAPHHANDLE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IGraphHandle)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void SetTransform (in ITransformF t); */
NS_IMETHODIMP _MYCLASS_::SetTransform(ITransformF *t)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetShow (in boolean bshow); */
NS_IMETHODIMP _MYCLASS_::SetShow(PRBool bshow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IViewerBase */
#define IVIEWERBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IVIEWERBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IViewerBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IVIEWERBASE_IID)

  /* void RemoveKinBody (in IKinBody pbody); */
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody) = 0;

  /* long main (in boolean bShow); */
  NS_SCRIPTABLE NS_IMETHOD Main(PRBool bShow, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void quitmainloop (); */
  NS_SCRIPTABLE NS_IMETHOD Quitmainloop(void) = 0;

  /* void SetCamera (in ITransformF trans, in float focalDistance); */
  NS_SCRIPTABLE NS_IMETHOD SetCamera(ITransformF *trans, float focalDistance) = 0;

  /* ITransformF GetCameraTransform (); */
  NS_SCRIPTABLE NS_IMETHOD GetCameraTransform(ITransformF **_retval NS_OUTPARAM) = 0;

  /* ICameraIntrinsicsF GetCameraIntrinsics (); */
  NS_SCRIPTABLE NS_IMETHOD GetCameraIntrinsics(ICameraIntrinsicsF **_retval NS_OUTPARAM) = 0;

  /* boolean GetCameraImage (inout unsigned long memoryCount, [array, size_is (memoryCount)] inout octet memory, in long width, in long height, in ITransformF t, in ICameraIntrinsicsF intrinsics); */
  NS_SCRIPTABLE NS_IMETHOD GetCameraImage(PRUint32 *memoryCount NS_INOUTPARAM, PRUint8 **memory NS_INOUTPARAM, PRInt32 width, PRInt32 height, ITransformF *t, ICameraIntrinsicsF *intrinsics, PRBool *_retval NS_OUTPARAM) = 0;

  /* void Reset (); */
  NS_SCRIPTABLE NS_IMETHOD Reset(void) = 0;

  /* void SetBkgndColor (in IVectorF color); */
  NS_SCRIPTABLE NS_IMETHOD SetBkgndColor(IVectorF *color) = 0;

  /* IUserData RegisterItemSelectionCallback (in ICallbackItemSelection fncallback); */
  NS_SCRIPTABLE NS_IMETHOD RegisterItemSelectionCallback(ICallbackItemSelection *fncallback, IUserData **_retval NS_OUTPARAM) = 0;

  /* IUserData RegisterViewerImageCallback (in ICallbackViewerImage fncallback); */
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerImageCallback(ICallbackViewerImage *fncallback, IUserData **_retval NS_OUTPARAM) = 0;

  /* IUserData RegisterViewerThreadCallback (in ICallback fncallback); */
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerThreadCallback(ICallback *fncallback, IUserData **_retval NS_OUTPARAM) = 0;

  /* void SetEnvironmentSync (in boolean bUpdate); */
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentSync(PRBool bUpdate) = 0;

  /* void EnvironmentSync (); */
  NS_SCRIPTABLE NS_IMETHOD EnvironmentSync(void) = 0;

  /* void SetSize (in long w, in long h); */
  NS_SCRIPTABLE NS_IMETHOD SetSize(PRInt32 w, PRInt32 h) = 0;

  /* void Move (in long x, in long y); */
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 x, PRInt32 y) = 0;

  /* void SetName (in string name); */
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) = 0;

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IViewerBase, IVIEWERBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IVIEWERBASE \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody); \
  NS_SCRIPTABLE NS_IMETHOD Main(PRBool bShow, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Quitmainloop(void); \
  NS_SCRIPTABLE NS_IMETHOD SetCamera(ITransformF *trans, float focalDistance); \
  NS_SCRIPTABLE NS_IMETHOD GetCameraTransform(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCameraIntrinsics(ICameraIntrinsicsF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCameraImage(PRUint32 *memoryCount NS_INOUTPARAM, PRUint8 **memory NS_INOUTPARAM, PRInt32 width, PRInt32 height, ITransformF *t, ICameraIntrinsicsF *intrinsics, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Reset(void); \
  NS_SCRIPTABLE NS_IMETHOD SetBkgndColor(IVectorF *color); \
  NS_SCRIPTABLE NS_IMETHOD RegisterItemSelectionCallback(ICallbackItemSelection *fncallback, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerImageCallback(ICallbackViewerImage *fncallback, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerThreadCallback(ICallback *fncallback, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentSync(PRBool bUpdate); \
  NS_SCRIPTABLE NS_IMETHOD EnvironmentSync(void); \
  NS_SCRIPTABLE NS_IMETHOD SetSize(PRInt32 w, PRInt32 h); \
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 x, PRInt32 y); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IVIEWERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody) { return _to RemoveKinBody(pbody); } \
  NS_SCRIPTABLE NS_IMETHOD Main(PRBool bShow, PRInt32 *_retval NS_OUTPARAM) { return _to Main(bShow, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Quitmainloop(void) { return _to Quitmainloop(); } \
  NS_SCRIPTABLE NS_IMETHOD SetCamera(ITransformF *trans, float focalDistance) { return _to SetCamera(trans, focalDistance); } \
  NS_SCRIPTABLE NS_IMETHOD GetCameraTransform(ITransformF **_retval NS_OUTPARAM) { return _to GetCameraTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCameraIntrinsics(ICameraIntrinsicsF **_retval NS_OUTPARAM) { return _to GetCameraIntrinsics(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCameraImage(PRUint32 *memoryCount NS_INOUTPARAM, PRUint8 **memory NS_INOUTPARAM, PRInt32 width, PRInt32 height, ITransformF *t, ICameraIntrinsicsF *intrinsics, PRBool *_retval NS_OUTPARAM) { return _to GetCameraImage(memoryCount, memory, width, height, t, intrinsics, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return _to Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD SetBkgndColor(IVectorF *color) { return _to SetBkgndColor(color); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterItemSelectionCallback(ICallbackItemSelection *fncallback, IUserData **_retval NS_OUTPARAM) { return _to RegisterItemSelectionCallback(fncallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerImageCallback(ICallbackViewerImage *fncallback, IUserData **_retval NS_OUTPARAM) { return _to RegisterViewerImageCallback(fncallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerThreadCallback(ICallback *fncallback, IUserData **_retval NS_OUTPARAM) { return _to RegisterViewerThreadCallback(fncallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentSync(PRBool bUpdate) { return _to SetEnvironmentSync(bUpdate); } \
  NS_SCRIPTABLE NS_IMETHOD EnvironmentSync(void) { return _to EnvironmentSync(); } \
  NS_SCRIPTABLE NS_IMETHOD SetSize(PRInt32 w, PRInt32 h) { return _to SetSize(w, h); } \
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 x, PRInt32 y) { return _to Move(x, y); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) { return _to SetName(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IVIEWERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD RemoveKinBody(IKinBody *pbody) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveKinBody(pbody); } \
  NS_SCRIPTABLE NS_IMETHOD Main(PRBool bShow, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Main(bShow, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Quitmainloop(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Quitmainloop(); } \
  NS_SCRIPTABLE NS_IMETHOD SetCamera(ITransformF *trans, float focalDistance) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCamera(trans, focalDistance); } \
  NS_SCRIPTABLE NS_IMETHOD GetCameraTransform(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCameraTransform(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCameraIntrinsics(ICameraIntrinsicsF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCameraIntrinsics(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCameraImage(PRUint32 *memoryCount NS_INOUTPARAM, PRUint8 **memory NS_INOUTPARAM, PRInt32 width, PRInt32 height, ITransformF *t, ICameraIntrinsicsF *intrinsics, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCameraImage(memoryCount, memory, width, height, t, intrinsics, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Reset(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(); } \
  NS_SCRIPTABLE NS_IMETHOD SetBkgndColor(IVectorF *color) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBkgndColor(color); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterItemSelectionCallback(ICallbackItemSelection *fncallback, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterItemSelectionCallback(fncallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerImageCallback(ICallbackViewerImage *fncallback, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterViewerImageCallback(fncallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterViewerThreadCallback(ICallback *fncallback, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterViewerThreadCallback(fncallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetEnvironmentSync(PRBool bUpdate) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEnvironmentSync(bUpdate); } \
  NS_SCRIPTABLE NS_IMETHOD EnvironmentSync(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnvironmentSync(); } \
  NS_SCRIPTABLE NS_IMETHOD SetSize(PRInt32 w, PRInt32 h) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSize(w, h); } \
  NS_SCRIPTABLE NS_IMETHOD Move(PRInt32 x, PRInt32 y) { return !_to ? NS_ERROR_NULL_POINTER : _to->Move(x, y); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(name); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IViewerBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IVIEWERBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IViewerBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void RemoveKinBody (in IKinBody pbody); */
NS_IMETHODIMP _MYCLASS_::RemoveKinBody(IKinBody *pbody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long main (in boolean bShow); */
NS_IMETHODIMP _MYCLASS_::Main(PRBool bShow, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void quitmainloop (); */
NS_IMETHODIMP _MYCLASS_::Quitmainloop()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetCamera (in ITransformF trans, in float focalDistance); */
NS_IMETHODIMP _MYCLASS_::SetCamera(ITransformF *trans, float focalDistance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetCameraTransform (); */
NS_IMETHODIMP _MYCLASS_::GetCameraTransform(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ICameraIntrinsicsF GetCameraIntrinsics (); */
NS_IMETHODIMP _MYCLASS_::GetCameraIntrinsics(ICameraIntrinsicsF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetCameraImage (inout unsigned long memoryCount, [array, size_is (memoryCount)] inout octet memory, in long width, in long height, in ITransformF t, in ICameraIntrinsicsF intrinsics); */
NS_IMETHODIMP _MYCLASS_::GetCameraImage(PRUint32 *memoryCount NS_INOUTPARAM, PRUint8 **memory NS_INOUTPARAM, PRInt32 width, PRInt32 height, ITransformF *t, ICameraIntrinsicsF *intrinsics, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Reset (); */
NS_IMETHODIMP _MYCLASS_::Reset()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetBkgndColor (in IVectorF color); */
NS_IMETHODIMP _MYCLASS_::SetBkgndColor(IVectorF *color)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterItemSelectionCallback (in ICallbackItemSelection fncallback); */
NS_IMETHODIMP _MYCLASS_::RegisterItemSelectionCallback(ICallbackItemSelection *fncallback, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterViewerImageCallback (in ICallbackViewerImage fncallback); */
NS_IMETHODIMP _MYCLASS_::RegisterViewerImageCallback(ICallbackViewerImage *fncallback, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData RegisterViewerThreadCallback (in ICallback fncallback); */
NS_IMETHODIMP _MYCLASS_::RegisterViewerThreadCallback(ICallback *fncallback, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetEnvironmentSync (in boolean bUpdate); */
NS_IMETHODIMP _MYCLASS_::SetEnvironmentSync(PRBool bUpdate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void EnvironmentSync (); */
NS_IMETHODIMP _MYCLASS_::EnvironmentSync()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetSize (in long w, in long h); */
NS_IMETHODIMP _MYCLASS_::SetSize(PRInt32 w, PRInt32 h)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Move (in long x, in long y); */
NS_IMETHODIMP _MYCLASS_::Move(PRInt32 x, PRInt32 y)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetName (in string name); */
NS_IMETHODIMP _MYCLASS_::SetName(const char *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_viewer_h__ */
