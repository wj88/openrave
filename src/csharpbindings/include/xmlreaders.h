/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/xmlreaders.idl
 */

#ifndef __gen_xmlreaders_h__
#define __gen_xmlreaders_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

#ifndef __gen_openrave_h__
#include "openrave.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IStringXMLReadable */
#define ISTRINGXMLREADABLE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISTRINGXMLREADABLE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IStringXMLReadable : public IXMLReadable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISTRINGXMLREADABLE_IID)

  /* void Serialize (in IBaseXMLWriter writer, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) = 0;

  /* string GetData (); */
  NS_SCRIPTABLE NS_IMETHOD GetData(char **_retval NS_OUTPARAM) = 0;

  /* attribute string data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IStringXMLReadable, ISTRINGXMLREADABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISTRINGXMLREADABLE \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData); \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISTRINGXMLREADABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) { return _to Serialize(writer, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **_retval NS_OUTPARAM) { return _to GetData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) { return _to SetData(aData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISTRINGXMLREADABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(writer, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IStringXMLReadable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISTRINGXMLREADABLE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IStringXMLReadable)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Serialize (in IBaseXMLWriter writer, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(IBaseXMLWriter *writer, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetData (); */
NS_IMETHODIMP _MYCLASS_::GetData(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string data; */
NS_IMETHODIMP _MYCLASS_::GetData(char **aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetData(const char *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IHierarchicalXMLReadable */
#define IHIERARCHICALXMLREADABLE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IHIERARCHICALXMLREADABLE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IHierarchicalXMLReadable : public IXMLReadable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IHIERARCHICALXMLREADABLE_IID)

  /* void Serialize (in IBaseXMLWriter writer, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) = 0;

  /* attribute string data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) = 0;

  /* attribute nsIProperties atts; */
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts) = 0;

  /* void GetListChildren (out unsigned long count, [array, size_is (count)] out IHierarchicalXMLReadable v); */
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IHierarchicalXMLReadable ***v NS_OUTPARAM) = 0;

  /* void SetListChildren (in unsigned long count, [array, size_is (count)] in IHierarchicalXMLReadable v); */
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IHierarchicalXMLReadable **v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IHierarchicalXMLReadable, IHIERARCHICALXMLREADABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IHIERARCHICALXMLREADABLE \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData); \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData); \
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts); \
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts); \
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IHierarchicalXMLReadable ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IHierarchicalXMLReadable **v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IHIERARCHICALXMLREADABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) { return _to Serialize(writer, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) { return _to SetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts) { return _to GetAtts(aAtts); } \
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts) { return _to SetAtts(aAtts); } \
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IHierarchicalXMLReadable ***v NS_OUTPARAM) { return _to GetListChildren(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IHierarchicalXMLReadable **v) { return _to SetListChildren(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IHIERARCHICALXMLREADABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(writer, options); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAtts(aAtts); } \
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAtts(aAtts); } \
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IHierarchicalXMLReadable ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListChildren(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IHierarchicalXMLReadable **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetListChildren(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IHierarchicalXMLReadable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IHIERARCHICALXMLREADABLE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IHierarchicalXMLReadable)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Serialize (in IBaseXMLWriter writer, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(IBaseXMLWriter *writer, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string data; */
NS_IMETHODIMP _MYCLASS_::GetData(char **aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetData(const char *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties atts; */
NS_IMETHODIMP _MYCLASS_::GetAtts(nsIProperties **aAtts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAtts(nsIProperties *aAtts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetListChildren (out unsigned long count, [array, size_is (count)] out IHierarchicalXMLReadable v); */
NS_IMETHODIMP _MYCLASS_::GetListChildren(PRUint32 *count NS_OUTPARAM, IHierarchicalXMLReadable ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetListChildren (in unsigned long count, [array, size_is (count)] in IHierarchicalXMLReadable v); */
NS_IMETHODIMP _MYCLASS_::SetListChildren(PRUint32 count, IHierarchicalXMLReadable **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ITrajectoryReader */
#define ITRAJECTORYREADER_IID_STR "00000000-0000-0000-0000-000000000000"

#define ITRAJECTORYREADER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ITrajectoryReader : public IBaseXMLReader {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ITRAJECTORYREADER_IID)

  /* ITrajectoryBase GetTrajectory (); */
  NS_SCRIPTABLE NS_IMETHOD GetTrajectory(ITrajectoryBase **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ITrajectoryReader, ITRAJECTORYREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ITRAJECTORYREADER \
  NS_SCRIPTABLE NS_IMETHOD GetTrajectory(ITrajectoryBase **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ITRAJECTORYREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTrajectory(ITrajectoryBase **_retval NS_OUTPARAM) { return _to GetTrajectory(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ITRAJECTORYREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTrajectory(ITrajectoryBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTrajectory(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ITrajectoryReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ITRAJECTORYREADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ITrajectoryReader)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* ITrajectoryBase GetTrajectory (); */
NS_IMETHODIMP _MYCLASS_::GetTrajectory(ITrajectoryBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IGeometryInfoReader */
#define IGEOMETRYINFOREADER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IGEOMETRYINFOREADER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IGeometryInfoReader : public IBaseXMLReader {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IGEOMETRYINFOREADER_IID)

  /* IKinBodyGeometryInfo GetGeometryInfo (); */
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM) = 0;

  /* boolean IsOverwriteDiffuse (); */
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteDiffuse(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsOverwriteAmbient (); */
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteAmbient(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean IsOverwriteTransparency (); */
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteTransparency(PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IGeometryInfoReader, IGEOMETRYINFOREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IGEOMETRYINFOREADER \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteDiffuse(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteAmbient(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteTransparency(PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IGEOMETRYINFOREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM) { return _to GetGeometryInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteDiffuse(PRBool *_retval NS_OUTPARAM) { return _to IsOverwriteDiffuse(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteAmbient(PRBool *_retval NS_OUTPARAM) { return _to IsOverwriteAmbient(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteTransparency(PRBool *_retval NS_OUTPARAM) { return _to IsOverwriteTransparency(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IGEOMETRYINFOREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetGeometryInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGeometryInfo(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteDiffuse(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsOverwriteDiffuse(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteAmbient(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsOverwriteAmbient(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsOverwriteTransparency(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsOverwriteTransparency(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IGeometryInfoReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IGEOMETRYINFOREADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IGeometryInfoReader)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IKinBodyGeometryInfo GetGeometryInfo (); */
NS_IMETHODIMP _MYCLASS_::GetGeometryInfo(IKinBodyGeometryInfo **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsOverwriteDiffuse (); */
NS_IMETHODIMP _MYCLASS_::IsOverwriteDiffuse(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsOverwriteAmbient (); */
NS_IMETHODIMP _MYCLASS_::IsOverwriteAmbient(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsOverwriteTransparency (); */
NS_IMETHODIMP _MYCLASS_::IsOverwriteTransparency(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IHierarchicalXMLReader */
#define IHIERARCHICALXMLREADER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IHIERARCHICALXMLREADER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IHierarchicalXMLReader : public IBaseXMLReader {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IHIERARCHICALXMLREADER_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IHierarchicalXMLReader, IHIERARCHICALXMLREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IHIERARCHICALXMLREADER \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IHIERARCHICALXMLREADER(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IHIERARCHICALXMLREADER(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IHierarchicalXMLReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IHIERARCHICALXMLREADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IHierarchicalXMLReader)

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


/* starting interface:    IStreamXMLWriter */
#define ISTREAMXMLWRITER_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISTREAMXMLWRITER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IStreamXMLWriter : public IBaseXMLReader {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISTREAMXMLWRITER_IID)

  /* string GetFormat (); */
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM) = 0;

  /* void SetCharData (in string data); */
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data) = 0;

  /* IBaseXMLWriter AddChild (in string xmltag, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM) = 0;

  /* void Serialize (in nsIOutputStream stream); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *stream) = 0;

  /* void GetListChildren (out unsigned long count, [array, size_is (count)] out IStreamXMLWriter v); */
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IStreamXMLWriter ***v NS_OUTPARAM) = 0;

  /* void SetListChildren (in unsigned long count, [array, size_is (count)] in IStreamXMLWriter v); */
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IStreamXMLWriter **v) = 0;

  /* attribute string xmltag; */
  NS_SCRIPTABLE NS_IMETHOD GetXmltag(char **aXmltag) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetXmltag(const char *aXmltag) = 0;

  /* attribute string data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) = 0;

  /* attribute nsIProperties atts; */
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IStreamXMLWriter, ISTREAMXMLWRITER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISTREAMXMLWRITER \
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data); \
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *stream); \
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IStreamXMLWriter ***v NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IStreamXMLWriter **v); \
  NS_SCRIPTABLE NS_IMETHOD GetXmltag(char **aXmltag); \
  NS_SCRIPTABLE NS_IMETHOD SetXmltag(const char *aXmltag); \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData); \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData); \
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts); \
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISTREAMXMLWRITER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM) { return _to GetFormat(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data) { return _to SetCharData(data); } \
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM) { return _to AddChild(xmltag, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *stream) { return _to Serialize(stream); } \
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IStreamXMLWriter ***v NS_OUTPARAM) { return _to GetListChildren(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IStreamXMLWriter **v) { return _to SetListChildren(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmltag(char **aXmltag) { return _to GetXmltag(aXmltag); } \
  NS_SCRIPTABLE NS_IMETHOD SetXmltag(const char *aXmltag) { return _to SetXmltag(aXmltag); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) { return _to SetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts) { return _to GetAtts(aAtts); } \
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts) { return _to SetAtts(aAtts); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISTREAMXMLWRITER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormat(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharData(data); } \
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddChild(xmltag, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *stream) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(stream); } \
  NS_SCRIPTABLE NS_IMETHOD GetListChildren(PRUint32 *count NS_OUTPARAM, IStreamXMLWriter ***v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListChildren(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD SetListChildren(PRUint32 count, IStreamXMLWriter **v) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetListChildren(count, v); } \
  NS_SCRIPTABLE NS_IMETHOD GetXmltag(char **aXmltag) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXmltag(aXmltag); } \
  NS_SCRIPTABLE NS_IMETHOD SetXmltag(const char *aXmltag) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetXmltag(aXmltag); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char **aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD SetData(const char *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD GetAtts(nsIProperties **aAtts) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAtts(aAtts); } \
  NS_SCRIPTABLE NS_IMETHOD SetAtts(nsIProperties *aAtts) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAtts(aAtts); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IStreamXMLWriter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISTREAMXMLWRITER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IStreamXMLWriter)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* string GetFormat (); */
NS_IMETHODIMP _MYCLASS_::GetFormat(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetCharData (in string data); */
NS_IMETHODIMP _MYCLASS_::SetCharData(const char *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IBaseXMLWriter AddChild (in string xmltag, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Serialize (in nsIOutputStream stream); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *stream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetListChildren (out unsigned long count, [array, size_is (count)] out IStreamXMLWriter v); */
NS_IMETHODIMP _MYCLASS_::GetListChildren(PRUint32 *count NS_OUTPARAM, IStreamXMLWriter ***v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetListChildren (in unsigned long count, [array, size_is (count)] in IStreamXMLWriter v); */
NS_IMETHODIMP _MYCLASS_::SetListChildren(PRUint32 count, IStreamXMLWriter **v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string xmltag; */
NS_IMETHODIMP _MYCLASS_::GetXmltag(char **aXmltag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetXmltag(const char *aXmltag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string data; */
NS_IMETHODIMP _MYCLASS_::GetData(char **aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetData(const char *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProperties atts; */
NS_IMETHODIMP _MYCLASS_::GetAtts(nsIProperties **aAtts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetAtts(nsIProperties *aAtts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_xmlreaders_h__ */
