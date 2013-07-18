/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/openrave.idl
 */

#ifndef __gen_openrave_h__
#define __gen_openrave_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ICallbackSetConfigurationState */
#define ICALLBACKSETCONFIGURATIONSTATE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKSETCONFIGURATIONSTATE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackSetConfigurationState : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKSETCONFIGURATIONSTATE_IID)

  /* void Invoke (in unsigned long count, [array, size_is (count)] in float v); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackSetConfigurationState, ICALLBACKSETCONFIGURATIONSTATE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKSETCONFIGURATIONSTATE \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKSETCONFIGURATIONSTATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v) { return _to Invoke(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKSETCONFIGURATIONSTATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 count, float *v) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackSetConfigurationState
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKSETCONFIGURATIONSTATE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackSetConfigurationState)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Invoke (in unsigned long count, [array, size_is (count)] in float v); */
NS_IMETHODIMP _MYCLASS_::Invoke(PRUint32 count, float *v)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ICallbackGetConfigurationState */
#define ICALLBACKGETCONFIGURATIONSTATE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKGETCONFIGURATIONSTATE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackGetConfigurationState : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKGETCONFIGURATIONSTATE_IID)

  /* void Invoke (out unsigned long count, [array, size_is (count)] out float v); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackGetConfigurationState, ICALLBACKGETCONFIGURATIONSTATE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKGETCONFIGURATIONSTATE \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKGETCONFIGURATIONSTATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return _to Invoke(count, v); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKGETCONFIGURATIONSTATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(count, v); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackGetConfigurationState
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKGETCONFIGURATIONSTATE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackGetConfigurationState)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Invoke (out unsigned long count, [array, size_is (count)] out float v); */
NS_IMETHODIMP _MYCLASS_::Invoke(PRUint32 *count NS_OUTPARAM, float **v NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IUserData */
#define IUSERDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define IUSERDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IUserData : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IUSERDATA_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IUserData, IUSERDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IUSERDATA \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IUSERDATA(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IUSERDATA(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IUserData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IUSERDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IUserData)

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


/* starting interface:    ISerializableData */
#define ISERIALIZABLEDATA_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISERIALIZABLEDATA_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISerializableData : public IUserData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISERIALIZABLEDATA_IID)

  /* void Serialize (in nsIOutputStream O, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRInt32 options) = 0;

  /* void Deserialize (in nsIInputStream I); */
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISerializableData, ISERIALIZABLEDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISERIALIZABLEDATA \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISERIALIZABLEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRInt32 options) { return _to Serialize(O, options); } \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I) { return _to Deserialize(I); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISERIALIZABLEDATA(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *O, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(O, options); } \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I) { return !_to ? NS_ERROR_NULL_POINTER : _to->Deserialize(I); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISerializableData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISERIALIZABLEDATA

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISerializableData)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Serialize (in nsIOutputStream O, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *O, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Deserialize (in nsIInputStream I); */
NS_IMETHODIMP _MYCLASS_::Deserialize(nsIInputStream *I)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IXMLReadable */
#define IXMLREADABLE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IXMLREADABLE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IXMLReadable : public IUserData {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IXMLREADABLE_IID)

  /* void Serialize1 (in nsIOutputStream O, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize1(nsIOutputStream *O, PRInt32 options) = 0;

  /* void Deserialize (in nsIInputStream I); */
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I) = 0;

  /* void Serialize2 (in IBaseXMLWriter writer, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize2(IBaseXMLWriter *writer, PRInt32 options) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IXMLReadable, IXMLREADABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IXMLREADABLE \
  NS_SCRIPTABLE NS_IMETHOD Serialize1(nsIOutputStream *O, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I); \
  NS_SCRIPTABLE NS_IMETHOD Serialize2(IBaseXMLWriter *writer, PRInt32 options); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IXMLREADABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize1(nsIOutputStream *O, PRInt32 options) { return _to Serialize1(O, options); } \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I) { return _to Deserialize(I); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize2(IBaseXMLWriter *writer, PRInt32 options) { return _to Serialize2(writer, options); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IXMLREADABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Serialize1(nsIOutputStream *O, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize1(O, options); } \
  NS_SCRIPTABLE NS_IMETHOD Deserialize(nsIInputStream *I) { return !_to ? NS_ERROR_NULL_POINTER : _to->Deserialize(I); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize2(IBaseXMLWriter *writer, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize2(writer, options); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IXMLReadable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IXMLREADABLE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IXMLReadable)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void Serialize1 (in nsIOutputStream O, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize1(nsIOutputStream *O, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Deserialize (in nsIInputStream I); */
NS_IMETHODIMP _MYCLASS_::Deserialize(nsIInputStream *I)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Serialize2 (in IBaseXMLWriter writer, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize2(IBaseXMLWriter *writer, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IBaseXMLReader */
#define IBASEXMLREADER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IBASEXMLREADER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IBaseXMLReader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IBASEXMLREADER_IID)

  /* IXMLReadable GetReadable (); */
  NS_SCRIPTABLE NS_IMETHOD GetReadable(IXMLReadable **_retval NS_OUTPARAM) = 0;

  /* long startElement (in string name, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean endElement (in string name); */
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM) = 0;

  /* void characters (out string ch); */
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM) = 0;

  /* attribute string filename; */
  NS_SCRIPTABLE NS_IMETHOD GetFilename(char **aFilename) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilename(const char *aFilename) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IBaseXMLReader, IBASEXMLREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IBASEXMLREADER \
  NS_SCRIPTABLE NS_IMETHOD GetReadable(IXMLReadable **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFilename(char **aFilename); \
  NS_SCRIPTABLE NS_IMETHOD SetFilename(const char *aFilename); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IBASEXMLREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReadable(IXMLReadable **_retval NS_OUTPARAM) { return _to GetReadable(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM) { return _to StartElement(name, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM) { return _to EndElement(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM) { return _to Characters(ch); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilename(char **aFilename) { return _to GetFilename(aFilename); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilename(const char *aFilename) { return _to SetFilename(aFilename); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IBASEXMLREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReadable(IXMLReadable **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadable(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartElement(name, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EndElement(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Characters(ch); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilename(char **aFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilename(aFilename); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilename(const char *aFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilename(aFilename); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IBaseXMLReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IBASEXMLREADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IBaseXMLReader)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* IXMLReadable GetReadable (); */
NS_IMETHODIMP _MYCLASS_::GetReadable(IXMLReadable **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long startElement (in string name, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean endElement (in string name); */
NS_IMETHODIMP _MYCLASS_::EndElement(const char *name, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void characters (out string ch); */
NS_IMETHODIMP _MYCLASS_::Characters(char **ch NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string filename; */
NS_IMETHODIMP _MYCLASS_::GetFilename(char **aFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFilename(const char *aFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IDummyXMLReader */
#define IDUMMYXMLREADER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IDUMMYXMLREADER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IDummyXMLReader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IDUMMYXMLREADER_IID)

  /* long startElement (in string name, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean endElement (in string name); */
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM) = 0;

  /* void characters (out string ch); */
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM) = 0;

  /* string GetFieldName (); */
  NS_SCRIPTABLE NS_IMETHOD GetFieldName(char **_retval NS_OUTPARAM) = 0;

  /* nsIOutputStream GetStream (); */
  NS_SCRIPTABLE NS_IMETHOD GetStream(nsIOutputStream **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IDummyXMLReader, IDUMMYXMLREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IDUMMYXMLREADER \
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFieldName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetStream(nsIOutputStream **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IDUMMYXMLREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM) { return _to StartElement(name, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM) { return _to EndElement(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM) { return _to Characters(ch); } \
  NS_SCRIPTABLE NS_IMETHOD GetFieldName(char **_retval NS_OUTPARAM) { return _to GetFieldName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStream(nsIOutputStream **_retval NS_OUTPARAM) { return _to GetStream(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IDUMMYXMLREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartElement(name, atts, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EndElement(const char *name, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EndElement(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Characters(char **ch NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Characters(ch); } \
  NS_SCRIPTABLE NS_IMETHOD GetFieldName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFieldName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStream(nsIOutputStream **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStream(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IDummyXMLReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IDUMMYXMLREADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IDummyXMLReader)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long startElement (in string name, in nsIProperties atts); */
NS_IMETHODIMP _MYCLASS_::StartElement(const char *name, nsIProperties *atts, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean endElement (in string name); */
NS_IMETHODIMP _MYCLASS_::EndElement(const char *name, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void characters (out string ch); */
NS_IMETHODIMP _MYCLASS_::Characters(char **ch NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetFieldName (); */
NS_IMETHODIMP _MYCLASS_::GetFieldName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIOutputStream GetStream (); */
NS_IMETHODIMP _MYCLASS_::GetStream(nsIOutputStream **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IBaseXMLWriter */
#define IBASEXMLWRITER_IID_STR "00000000-0000-0000-0000-000000000000"

#define IBASEXMLWRITER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IBaseXMLWriter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IBASEXMLWRITER_IID)

  /* string GetFormat (); */
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM) = 0;

  /* void SetCharData (in string data); */
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data) = 0;

  /* IBaseXMLWriter AddChild (in string xmltag, in nsIProperties atts); */
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IBaseXMLWriter, IBASEXMLWRITER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IBASEXMLWRITER \
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data); \
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IBASEXMLWRITER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM) { return _to GetFormat(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data) { return _to SetCharData(data); } \
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM) { return _to AddChild(xmltag, atts, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IBASEXMLWRITER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFormat(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFormat(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharData(const char *data) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharData(data); } \
  NS_SCRIPTABLE NS_IMETHOD AddChild(const char *xmltag, nsIProperties *atts, IBaseXMLWriter **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddChild(xmltag, atts, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IBaseXMLWriter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IBASEXMLWRITER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IBaseXMLWriter)

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

/* End of implementation class template. */
#endif


/* starting interface:    IConfigurationSpecificationReader */
#define ICONFIGURATIONSPECIFICATIONREADER_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICONFIGURATIONSPECIFICATIONREADER_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IConfigurationSpecificationReader : public IBaseXMLReader {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICONFIGURATIONSPECIFICATIONREADER_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IConfigurationSpecificationReader, ICONFIGURATIONSPECIFICATIONREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICONFIGURATIONSPECIFICATIONREADER \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICONFIGURATIONSPECIFICATIONREADER(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICONFIGURATIONSPECIFICATIONREADER(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IConfigurationSpecificationReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICONFIGURATIONSPECIFICATIONREADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IConfigurationSpecificationReader)

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


/* starting interface:    IConfigurationSpecificationGroup */
#define ICONFIGURATIONSPECIFICATIONGROUP_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICONFIGURATIONSPECIFICATIONGROUP_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IConfigurationSpecificationGroup : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICONFIGURATIONSPECIFICATIONGROUP_IID)

  /* attribute long offset; */
  NS_SCRIPTABLE NS_IMETHOD GetOffset(PRInt32 *aOffset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOffset(PRInt32 aOffset) = 0;

  /* attribute long dof; */
  NS_SCRIPTABLE NS_IMETHOD GetDof(PRInt32 *aDof) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDof(PRInt32 aDof) = 0;

  /* attribute string name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) = 0;

  /* attribute string interpolation; */
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IConfigurationSpecificationGroup, ICONFIGURATIONSPECIFICATIONGROUP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICONFIGURATIONSPECIFICATIONGROUP \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(PRInt32 *aOffset); \
  NS_SCRIPTABLE NS_IMETHOD SetOffset(PRInt32 aOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetDof(PRInt32 *aDof); \
  NS_SCRIPTABLE NS_IMETHOD SetDof(PRInt32 aDof); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation); \
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICONFIGURATIONSPECIFICATIONGROUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(PRInt32 *aOffset) { return _to GetOffset(aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetOffset(PRInt32 aOffset) { return _to SetOffset(aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetDof(PRInt32 *aDof) { return _to GetDof(aDof); } \
  NS_SCRIPTABLE NS_IMETHOD SetDof(PRInt32 aDof) { return _to SetDof(aDof); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation) { return _to GetInterpolation(aInterpolation); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation) { return _to SetInterpolation(aInterpolation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICONFIGURATIONSPECIFICATIONGROUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(PRInt32 *aOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffset(aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD SetOffset(PRInt32 aOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOffset(aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetDof(PRInt32 *aDof) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDof(aDof); } \
  NS_SCRIPTABLE NS_IMETHOD SetDof(PRInt32 aDof) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDof(aDof); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolation(char **aInterpolation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterpolation(aInterpolation); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterpolation(const char *aInterpolation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInterpolation(aInterpolation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IConfigurationSpecificationGroup
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICONFIGURATIONSPECIFICATIONGROUP

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IConfigurationSpecificationGroup)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute long offset; */
NS_IMETHODIMP _MYCLASS_::GetOffset(PRInt32 *aOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetOffset(PRInt32 aOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long dof; */
NS_IMETHODIMP _MYCLASS_::GetDof(PRInt32 *aDof)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDof(PRInt32 aDof)
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

/* attribute string interpolation; */
NS_IMETHODIMP _MYCLASS_::GetInterpolation(char **aInterpolation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetInterpolation(const char *aInterpolation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IConfigurationSpecification */
#define ICONFIGURATIONSPECIFICATION_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICONFIGURATIONSPECIFICATION_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IConfigurationSpecification : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICONFIGURATIONSPECIFICATION_IID)

  /* long GetDOF (); */
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean IsValid (); */
  NS_SCRIPTABLE NS_IMETHOD IsValid(PRBool *_retval NS_OUTPARAM) = 0;

  /* void Validate (); */
  NS_SCRIPTABLE NS_IMETHOD Validate(void) = 0;

  /* IConfigurationSpecificationGroup GetGroupFromName (in string name); */
  NS_SCRIPTABLE NS_IMETHOD GetGroupFromName(const char *name, IConfigurationSpecificationGroup **_retval NS_OUTPARAM) = 0;

  /* void AddDerivativeGroups (in long deriv, in boolean adddeltatime); */
  NS_SCRIPTABLE NS_IMETHOD AddDerivativeGroups(PRInt32 deriv, PRBool adddeltatime) = 0;

  /* IConfigurationSpecification ConvertToVelocitySpecification (); */
  NS_SCRIPTABLE NS_IMETHOD ConvertToVelocitySpecification(IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* IConfigurationSpecification GetTimeDerivativeSpecification (in long timederivative); */
  NS_SCRIPTABLE NS_IMETHOD GetTimeDerivativeSpecification(PRInt32 timederivative, IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* void ResetGroupOffsets (); */
  NS_SCRIPTABLE NS_IMETHOD ResetGroupOffsets(void) = 0;

  /* long AddDeltaTimeGroup (); */
  NS_SCRIPTABLE NS_IMETHOD AddDeltaTimeGroup(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long AddGroup (in string name, in long dof, in string interpolation); */
  NS_SCRIPTABLE NS_IMETHOD AddGroup(const char *name, PRInt32 dof, const char *interpolation, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean ExtractTransform (inout ITransformF t, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in IKinBody pbody, in long timederivative); */
  NS_SCRIPTABLE NS_IMETHOD ExtractTransform(ITransformF **t NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean ExtractIkParameterization (inout IIkParameterization ikparam, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in long timederivative); */
  NS_SCRIPTABLE NS_IMETHOD ExtractIkParameterization(IIkParameterization **ikparam NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean ExtractAffineValues (inout unsigned long itvaluesCount, [array, size_is (itvaluesCount)] inout float itvalues, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in IKinBody pbody, in long affinedofs, in long timederivative); */
  NS_SCRIPTABLE NS_IMETHOD ExtractAffineValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 affinedofs, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean ExtractJointValues (inout unsigned long itvaluesCount, [array, size_is (itvaluesCount)] inout float itvalues, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in IKinBody pbody, in unsigned long indicesCount, [array, size_is (indicesCount)] in long indices, in long timederivative); */
  NS_SCRIPTABLE NS_IMETHOD ExtractJointValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean ExtractDeltaTime (out float deltatime, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata); */
  NS_SCRIPTABLE NS_IMETHOD ExtractDeltaTime(float *deltatime NS_OUTPARAM, PRUint32 itdataCount, float *itdata, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean InsertJointValues (inout unsigned long itdataCount, [array, size_is (itdataCount)] inout float itdata, in unsigned long itvaluesCount, [array, size_is (itvaluesCount)] in float itvalues, in IKinBody pbody, in unsigned long indicesCount, [array, size_is (indicesCount)] in long indices, in long timederivative); */
  NS_SCRIPTABLE NS_IMETHOD InsertJointValues(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, PRUint32 itvaluesCount, float *itvalues, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean InsertDeltaTime (inout unsigned long itdataCount, [array, size_is (itdataCount)] inout float itdata, in float deltatime); */
  NS_SCRIPTABLE NS_IMETHOD InsertDeltaTime(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, float deltatime, PRBool *_retval NS_OUTPARAM) = 0;

  /* long RemoveGroups (in string groupname, in boolean exactmatch); */
  NS_SCRIPTABLE NS_IMETHOD RemoveGroups(const char *groupname, PRBool exactmatch, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void ExtractUsedBodies (in IEnvironmentBase env, out unsigned long usedbodiesCount, [array, size_is (usedbodiesCount)] out IKinBody usedbodies); */
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedBodies(IEnvironmentBase *env, PRUint32 *usedbodiesCount NS_OUTPARAM, IKinBody ***usedbodies NS_OUTPARAM) = 0;

  /* void ExtractUsedIndices (in IKinBody body, out unsigned long useddofindicesCount, [array, size_is (useddofindicesCount)] out long useddofindices, out unsigned long usedconfigindicesCount, [array, size_is (usedconfigindicesCount)] out long usedconfigindices); */
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedIndices(IKinBody *body, PRUint32 *useddofindicesCount NS_OUTPARAM, PRInt32 **useddofindices NS_OUTPARAM, PRUint32 *usedconfigindicesCount NS_OUTPARAM, PRInt32 **usedconfigindices NS_OUTPARAM) = 0;

  /* void Swap (in IConfigurationSpecification spec); */
  NS_SCRIPTABLE NS_IMETHOD Swap(IConfigurationSpecification *spec) = 0;

  /* ICallbackSetConfigurationState GetSetFn (in IEnvironmentBase env); */
  NS_SCRIPTABLE NS_IMETHOD GetSetFn(IEnvironmentBase *env, ICallbackSetConfigurationState **_retval NS_OUTPARAM) = 0;

  /* ICallbackGetConfigurationState GetGetFn (in IEnvironmentBase env); */
  NS_SCRIPTABLE NS_IMETHOD GetGetFn(IEnvironmentBase *env, ICallbackGetConfigurationState **_retval NS_OUTPARAM) = 0;

  /* void ConvertGroupData (inout unsigned long ittargetdataCount, [array, size_is (ittargetdataCount)] inout float ittargetdata, inout long targetstride, inout IConfigurationSpecificationGroup gtarget, in unsigned long itsourcedataCount, [array, size_is (itsourcedataCount)] in float itsourcedata, in long sourcestride, in IConfigurationSpecificationGroup gsource, in long numpoints, in IEnvironmentBase penv, in boolean filluninitialized); */
  NS_SCRIPTABLE NS_IMETHOD ConvertGroupData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, PRInt32 *targetstride NS_INOUTPARAM, IConfigurationSpecificationGroup **gtarget NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, PRInt32 sourcestride, IConfigurationSpecificationGroup *gsource, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized) = 0;

  /* void ConvertData (inout unsigned long ittargetdataCount, [array, size_is (ittargetdataCount)] inout float ittargetdata, inout IConfigurationSpecification targetspec, in unsigned long itsourcedataCount, [array, size_is (itsourcedataCount)] in float itsourcedata, in IConfigurationSpecification sourcespec, in long numpoints, in IEnvironmentBase penv, in boolean filluninitialized); */
  NS_SCRIPTABLE NS_IMETHOD ConvertData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, IConfigurationSpecification **targetspec NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, IConfigurationSpecification *sourcespec, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized) = 0;

  /* string GetInterpolationDerivative (in string interpolation, in long deriv); */
  NS_SCRIPTABLE NS_IMETHOD GetInterpolationDerivative(const char *interpolation, PRInt32 deriv, char **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IConfigurationSpecification, ICONFIGURATIONSPECIFICATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICONFIGURATIONSPECIFICATION \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsValid(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Validate(void); \
  NS_SCRIPTABLE NS_IMETHOD GetGroupFromName(const char *name, IConfigurationSpecificationGroup **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddDerivativeGroups(PRInt32 deriv, PRBool adddeltatime); \
  NS_SCRIPTABLE NS_IMETHOD ConvertToVelocitySpecification(IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTimeDerivativeSpecification(PRInt32 timederivative, IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ResetGroupOffsets(void); \
  NS_SCRIPTABLE NS_IMETHOD AddDeltaTimeGroup(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddGroup(const char *name, PRInt32 dof, const char *interpolation, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExtractTransform(ITransformF **t NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExtractIkParameterization(IIkParameterization **ikparam NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExtractAffineValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 affinedofs, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExtractJointValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExtractDeltaTime(float *deltatime NS_OUTPARAM, PRUint32 itdataCount, float *itdata, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertJointValues(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, PRUint32 itvaluesCount, float *itvalues, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertDeltaTime(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, float deltatime, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveGroups(const char *groupname, PRBool exactmatch, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedBodies(IEnvironmentBase *env, PRUint32 *usedbodiesCount NS_OUTPARAM, IKinBody ***usedbodies NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedIndices(IKinBody *body, PRUint32 *useddofindicesCount NS_OUTPARAM, PRInt32 **useddofindices NS_OUTPARAM, PRUint32 *usedconfigindicesCount NS_OUTPARAM, PRInt32 **usedconfigindices NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Swap(IConfigurationSpecification *spec); \
  NS_SCRIPTABLE NS_IMETHOD GetSetFn(IEnvironmentBase *env, ICallbackSetConfigurationState **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetGetFn(IEnvironmentBase *env, ICallbackGetConfigurationState **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ConvertGroupData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, PRInt32 *targetstride NS_INOUTPARAM, IConfigurationSpecificationGroup **gtarget NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, PRInt32 sourcestride, IConfigurationSpecificationGroup *gsource, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized); \
  NS_SCRIPTABLE NS_IMETHOD ConvertData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, IConfigurationSpecification **targetspec NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, IConfigurationSpecification *sourcespec, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized); \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolationDerivative(const char *interpolation, PRInt32 deriv, char **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICONFIGURATIONSPECIFICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return _to GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsValid(PRBool *_retval NS_OUTPARAM) { return _to IsValid(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Validate(void) { return _to Validate(); } \
  NS_SCRIPTABLE NS_IMETHOD GetGroupFromName(const char *name, IConfigurationSpecificationGroup **_retval NS_OUTPARAM) { return _to GetGroupFromName(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddDerivativeGroups(PRInt32 deriv, PRBool adddeltatime) { return _to AddDerivativeGroups(deriv, adddeltatime); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertToVelocitySpecification(IConfigurationSpecification **_retval NS_OUTPARAM) { return _to ConvertToVelocitySpecification(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeDerivativeSpecification(PRInt32 timederivative, IConfigurationSpecification **_retval NS_OUTPARAM) { return _to GetTimeDerivativeSpecification(timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ResetGroupOffsets(void) { return _to ResetGroupOffsets(); } \
  NS_SCRIPTABLE NS_IMETHOD AddDeltaTimeGroup(PRInt32 *_retval NS_OUTPARAM) { return _to AddDeltaTimeGroup(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddGroup(const char *name, PRInt32 dof, const char *interpolation, PRInt32 *_retval NS_OUTPARAM) { return _to AddGroup(name, dof, interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractTransform(ITransformF **t NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return _to ExtractTransform(t, itdataCount, itdata, pbody, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractIkParameterization(IIkParameterization **ikparam NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return _to ExtractIkParameterization(ikparam, itdataCount, itdata, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractAffineValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 affinedofs, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return _to ExtractAffineValues(itvaluesCount, itvalues, itdataCount, itdata, pbody, affinedofs, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractJointValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return _to ExtractJointValues(itvaluesCount, itvalues, itdataCount, itdata, pbody, indicesCount, indices, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractDeltaTime(float *deltatime NS_OUTPARAM, PRUint32 itdataCount, float *itdata, PRBool *_retval NS_OUTPARAM) { return _to ExtractDeltaTime(deltatime, itdataCount, itdata, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertJointValues(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, PRUint32 itvaluesCount, float *itvalues, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return _to InsertJointValues(itdataCount, itdata, itvaluesCount, itvalues, pbody, indicesCount, indices, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertDeltaTime(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, float deltatime, PRBool *_retval NS_OUTPARAM) { return _to InsertDeltaTime(itdataCount, itdata, deltatime, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveGroups(const char *groupname, PRBool exactmatch, PRInt32 *_retval NS_OUTPARAM) { return _to RemoveGroups(groupname, exactmatch, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedBodies(IEnvironmentBase *env, PRUint32 *usedbodiesCount NS_OUTPARAM, IKinBody ***usedbodies NS_OUTPARAM) { return _to ExtractUsedBodies(env, usedbodiesCount, usedbodies); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedIndices(IKinBody *body, PRUint32 *useddofindicesCount NS_OUTPARAM, PRInt32 **useddofindices NS_OUTPARAM, PRUint32 *usedconfigindicesCount NS_OUTPARAM, PRInt32 **usedconfigindices NS_OUTPARAM) { return _to ExtractUsedIndices(body, useddofindicesCount, useddofindices, usedconfigindicesCount, usedconfigindices); } \
  NS_SCRIPTABLE NS_IMETHOD Swap(IConfigurationSpecification *spec) { return _to Swap(spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetSetFn(IEnvironmentBase *env, ICallbackSetConfigurationState **_retval NS_OUTPARAM) { return _to GetSetFn(env, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGetFn(IEnvironmentBase *env, ICallbackGetConfigurationState **_retval NS_OUTPARAM) { return _to GetGetFn(env, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertGroupData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, PRInt32 *targetstride NS_INOUTPARAM, IConfigurationSpecificationGroup **gtarget NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, PRInt32 sourcestride, IConfigurationSpecificationGroup *gsource, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized) { return _to ConvertGroupData(ittargetdataCount, ittargetdata, targetstride, gtarget, itsourcedataCount, itsourcedata, sourcestride, gsource, numpoints, penv, filluninitialized); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, IConfigurationSpecification **targetspec NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, IConfigurationSpecification *sourcespec, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized) { return _to ConvertData(ittargetdataCount, ittargetdata, targetspec, itsourcedataCount, itsourcedata, sourcespec, numpoints, penv, filluninitialized); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolationDerivative(const char *interpolation, PRInt32 deriv, char **_retval NS_OUTPARAM) { return _to GetInterpolationDerivative(interpolation, deriv, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICONFIGURATIONSPECIFICATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsValid(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsValid(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Validate(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Validate(); } \
  NS_SCRIPTABLE NS_IMETHOD GetGroupFromName(const char *name, IConfigurationSpecificationGroup **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGroupFromName(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddDerivativeGroups(PRInt32 deriv, PRBool adddeltatime) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDerivativeGroups(deriv, adddeltatime); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertToVelocitySpecification(IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertToVelocitySpecification(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeDerivativeSpecification(PRInt32 timederivative, IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeDerivativeSpecification(timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ResetGroupOffsets(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetGroupOffsets(); } \
  NS_SCRIPTABLE NS_IMETHOD AddDeltaTimeGroup(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDeltaTimeGroup(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddGroup(const char *name, PRInt32 dof, const char *interpolation, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddGroup(name, dof, interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractTransform(ITransformF **t NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtractTransform(t, itdataCount, itdata, pbody, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractIkParameterization(IIkParameterization **ikparam NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtractIkParameterization(ikparam, itdataCount, itdata, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractAffineValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 affinedofs, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtractAffineValues(itvaluesCount, itvalues, itdataCount, itdata, pbody, affinedofs, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractJointValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtractJointValues(itvaluesCount, itvalues, itdataCount, itdata, pbody, indicesCount, indices, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractDeltaTime(float *deltatime NS_OUTPARAM, PRUint32 itdataCount, float *itdata, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtractDeltaTime(deltatime, itdataCount, itdata, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertJointValues(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, PRUint32 itvaluesCount, float *itvalues, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertJointValues(itdataCount, itdata, itvaluesCount, itvalues, pbody, indicesCount, indices, timederivative, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertDeltaTime(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, float deltatime, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertDeltaTime(itdataCount, itdata, deltatime, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveGroups(const char *groupname, PRBool exactmatch, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveGroups(groupname, exactmatch, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedBodies(IEnvironmentBase *env, PRUint32 *usedbodiesCount NS_OUTPARAM, IKinBody ***usedbodies NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtractUsedBodies(env, usedbodiesCount, usedbodies); } \
  NS_SCRIPTABLE NS_IMETHOD ExtractUsedIndices(IKinBody *body, PRUint32 *useddofindicesCount NS_OUTPARAM, PRInt32 **useddofindices NS_OUTPARAM, PRUint32 *usedconfigindicesCount NS_OUTPARAM, PRInt32 **usedconfigindices NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtractUsedIndices(body, useddofindicesCount, useddofindices, usedconfigindicesCount, usedconfigindices); } \
  NS_SCRIPTABLE NS_IMETHOD Swap(IConfigurationSpecification *spec) { return !_to ? NS_ERROR_NULL_POINTER : _to->Swap(spec); } \
  NS_SCRIPTABLE NS_IMETHOD GetSetFn(IEnvironmentBase *env, ICallbackSetConfigurationState **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSetFn(env, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetGetFn(IEnvironmentBase *env, ICallbackGetConfigurationState **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGetFn(env, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertGroupData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, PRInt32 *targetstride NS_INOUTPARAM, IConfigurationSpecificationGroup **gtarget NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, PRInt32 sourcestride, IConfigurationSpecificationGroup *gsource, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertGroupData(ittargetdataCount, ittargetdata, targetstride, gtarget, itsourcedataCount, itsourcedata, sourcestride, gsource, numpoints, penv, filluninitialized); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, IConfigurationSpecification **targetspec NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, IConfigurationSpecification *sourcespec, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertData(ittargetdataCount, ittargetdata, targetspec, itsourcedataCount, itsourcedata, sourcespec, numpoints, penv, filluninitialized); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterpolationDerivative(const char *interpolation, PRInt32 deriv, char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterpolationDerivative(interpolation, deriv, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IConfigurationSpecification
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICONFIGURATIONSPECIFICATION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IConfigurationSpecification)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long GetDOF (); */
NS_IMETHODIMP _MYCLASS_::GetDOF(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsValid (); */
NS_IMETHODIMP _MYCLASS_::IsValid(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Validate (); */
NS_IMETHODIMP _MYCLASS_::Validate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecificationGroup GetGroupFromName (in string name); */
NS_IMETHODIMP _MYCLASS_::GetGroupFromName(const char *name, IConfigurationSpecificationGroup **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void AddDerivativeGroups (in long deriv, in boolean adddeltatime); */
NS_IMETHODIMP _MYCLASS_::AddDerivativeGroups(PRInt32 deriv, PRBool adddeltatime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification ConvertToVelocitySpecification (); */
NS_IMETHODIMP _MYCLASS_::ConvertToVelocitySpecification(IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification GetTimeDerivativeSpecification (in long timederivative); */
NS_IMETHODIMP _MYCLASS_::GetTimeDerivativeSpecification(PRInt32 timederivative, IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ResetGroupOffsets (); */
NS_IMETHODIMP _MYCLASS_::ResetGroupOffsets()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long AddDeltaTimeGroup (); */
NS_IMETHODIMP _MYCLASS_::AddDeltaTimeGroup(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long AddGroup (in string name, in long dof, in string interpolation); */
NS_IMETHODIMP _MYCLASS_::AddGroup(const char *name, PRInt32 dof, const char *interpolation, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean ExtractTransform (inout ITransformF t, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in IKinBody pbody, in long timederivative); */
NS_IMETHODIMP _MYCLASS_::ExtractTransform(ITransformF **t NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean ExtractIkParameterization (inout IIkParameterization ikparam, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in long timederivative); */
NS_IMETHODIMP _MYCLASS_::ExtractIkParameterization(IIkParameterization **ikparam NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean ExtractAffineValues (inout unsigned long itvaluesCount, [array, size_is (itvaluesCount)] inout float itvalues, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in IKinBody pbody, in long affinedofs, in long timederivative); */
NS_IMETHODIMP _MYCLASS_::ExtractAffineValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRInt32 affinedofs, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean ExtractJointValues (inout unsigned long itvaluesCount, [array, size_is (itvaluesCount)] inout float itvalues, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata, in IKinBody pbody, in unsigned long indicesCount, [array, size_is (indicesCount)] in long indices, in long timederivative); */
NS_IMETHODIMP _MYCLASS_::ExtractJointValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM, PRUint32 itdataCount, float *itdata, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean ExtractDeltaTime (out float deltatime, in unsigned long itdataCount, [array, size_is (itdataCount)] in float itdata); */
NS_IMETHODIMP _MYCLASS_::ExtractDeltaTime(float *deltatime NS_OUTPARAM, PRUint32 itdataCount, float *itdata, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InsertJointValues (inout unsigned long itdataCount, [array, size_is (itdataCount)] inout float itdata, in unsigned long itvaluesCount, [array, size_is (itvaluesCount)] in float itvalues, in IKinBody pbody, in unsigned long indicesCount, [array, size_is (indicesCount)] in long indices, in long timederivative); */
NS_IMETHODIMP _MYCLASS_::InsertJointValues(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, PRUint32 itvaluesCount, float *itvalues, IKinBody *pbody, PRUint32 indicesCount, PRInt32 *indices, PRInt32 timederivative, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean InsertDeltaTime (inout unsigned long itdataCount, [array, size_is (itdataCount)] inout float itdata, in float deltatime); */
NS_IMETHODIMP _MYCLASS_::InsertDeltaTime(PRUint32 *itdataCount NS_INOUTPARAM, float **itdata NS_INOUTPARAM, float deltatime, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long RemoveGroups (in string groupname, in boolean exactmatch); */
NS_IMETHODIMP _MYCLASS_::RemoveGroups(const char *groupname, PRBool exactmatch, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ExtractUsedBodies (in IEnvironmentBase env, out unsigned long usedbodiesCount, [array, size_is (usedbodiesCount)] out IKinBody usedbodies); */
NS_IMETHODIMP _MYCLASS_::ExtractUsedBodies(IEnvironmentBase *env, PRUint32 *usedbodiesCount NS_OUTPARAM, IKinBody ***usedbodies NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ExtractUsedIndices (in IKinBody body, out unsigned long useddofindicesCount, [array, size_is (useddofindicesCount)] out long useddofindices, out unsigned long usedconfigindicesCount, [array, size_is (usedconfigindicesCount)] out long usedconfigindices); */
NS_IMETHODIMP _MYCLASS_::ExtractUsedIndices(IKinBody *body, PRUint32 *useddofindicesCount NS_OUTPARAM, PRInt32 **useddofindices NS_OUTPARAM, PRUint32 *usedconfigindicesCount NS_OUTPARAM, PRInt32 **usedconfigindices NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Swap (in IConfigurationSpecification spec); */
NS_IMETHODIMP _MYCLASS_::Swap(IConfigurationSpecification *spec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ICallbackSetConfigurationState GetSetFn (in IEnvironmentBase env); */
NS_IMETHODIMP _MYCLASS_::GetSetFn(IEnvironmentBase *env, ICallbackSetConfigurationState **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ICallbackGetConfigurationState GetGetFn (in IEnvironmentBase env); */
NS_IMETHODIMP _MYCLASS_::GetGetFn(IEnvironmentBase *env, ICallbackGetConfigurationState **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ConvertGroupData (inout unsigned long ittargetdataCount, [array, size_is (ittargetdataCount)] inout float ittargetdata, inout long targetstride, inout IConfigurationSpecificationGroup gtarget, in unsigned long itsourcedataCount, [array, size_is (itsourcedataCount)] in float itsourcedata, in long sourcestride, in IConfigurationSpecificationGroup gsource, in long numpoints, in IEnvironmentBase penv, in boolean filluninitialized); */
NS_IMETHODIMP _MYCLASS_::ConvertGroupData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, PRInt32 *targetstride NS_INOUTPARAM, IConfigurationSpecificationGroup **gtarget NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, PRInt32 sourcestride, IConfigurationSpecificationGroup *gsource, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ConvertData (inout unsigned long ittargetdataCount, [array, size_is (ittargetdataCount)] inout float ittargetdata, inout IConfigurationSpecification targetspec, in unsigned long itsourcedataCount, [array, size_is (itsourcedataCount)] in float itsourcedata, in IConfigurationSpecification sourcespec, in long numpoints, in IEnvironmentBase penv, in boolean filluninitialized); */
NS_IMETHODIMP _MYCLASS_::ConvertData(PRUint32 *ittargetdataCount NS_INOUTPARAM, float **ittargetdata NS_INOUTPARAM, IConfigurationSpecification **targetspec NS_INOUTPARAM, PRUint32 itsourcedataCount, float *itsourcedata, IConfigurationSpecification *sourcespec, PRInt32 numpoints, IEnvironmentBase *penv, PRBool filluninitialized)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetInterpolationDerivative (in string interpolation, in long deriv); */
NS_IMETHODIMP _MYCLASS_::GetInterpolationDerivative(const char *interpolation, PRInt32 deriv, char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IIkParameterization */
#define IIKPARAMETERIZATION_IID_STR "00000000-0000-0000-0000-000000000000"

#define IIKPARAMETERIZATION_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IIkParameterization : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IIKPARAMETERIZATION_IID)

  /* long GetType (); */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* string GetName (); */
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) = 0;

  /* long GetDOF1 (in long type); */
  NS_SCRIPTABLE NS_IMETHOD GetDOF1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long GetDOF2 (); */
  NS_SCRIPTABLE NS_IMETHOD GetDOF2(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long GetNumberOfValues1 (in long type); */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long GetIkTypeFromUniqueId (in long uniqueid); */
  NS_SCRIPTABLE NS_IMETHOD GetIkTypeFromUniqueId(PRInt32 uniqueid, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long GetNumberOfValues2 (); */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues2(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void SetTransform6D (in ITransformF t); */
  NS_SCRIPTABLE NS_IMETHOD SetTransform6D(ITransformF *t) = 0;

  /* void SetRotation3D (in IVectorF quaternion); */
  NS_SCRIPTABLE NS_IMETHOD SetRotation3D(IVectorF *quaternion) = 0;

  /* void SetTranslation3D (in IVectorF trans); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslation3D(IVectorF *trans) = 0;

  /* void SetDirection3D (in IVectorF dir); */
  NS_SCRIPTABLE NS_IMETHOD SetDirection3D(IVectorF *dir) = 0;

  /* void SetRay4D (in IRayF ray); */
  NS_SCRIPTABLE NS_IMETHOD SetRay4D(IRayF *ray) = 0;

  /* void SetLookat3D1 (in IVectorF trans); */
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D1(IVectorF *trans) = 0;

  /* void SetLookat3D2 (in IRayF ray); */
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D2(IRayF *ray) = 0;

  /* void SetTranslationDirection5D (in IRayF ray); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationDirection5D(IRayF *ray) = 0;

  /* void SetTranslationXY2D (in IVectorF trans); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXY2D(IVectorF *trans) = 0;

  /* void SetTranslationXYOrientation3D (in IVectorF trans); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXYOrientation3D(IVectorF *trans) = 0;

  /* void SetTranslationLocalGlobal6D (in IVectorF localtrans, in IVectorF trans); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationLocalGlobal6D(IVectorF *localtrans, IVectorF *trans) = 0;

  /* void SetTranslationXAxisAngle4D (in IVectorF trans, in float angle); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngle4D(IVectorF *trans, float angle) = 0;

  /* void SetTranslationYAxisAngle4D (in IVectorF trans, in float angle); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngle4D(IVectorF *trans, float angle) = 0;

  /* void SetTranslationZAxisAngle4D (in IVectorF trans, in float angle); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngle4D(IVectorF *trans, float angle) = 0;

  /* void SetTranslationXAxisAngleZNorm4D (in IVectorF trans, in float angle); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngleZNorm4D(IVectorF *trans, float angle) = 0;

  /* void SetTranslationYAxisAngleZNorm4D (in IVectorF trans, in float angle); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngleZNorm4D(IVectorF *trans, float angle) = 0;

  /* void SetTranslationZAxisAngleZNorm4D (in IVectorF trans, in float angle); */
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngleZNorm4D(IVectorF *trans, float angle) = 0;

  /* ITransformF GetTransform6D (); */
  NS_SCRIPTABLE NS_IMETHOD GetTransform6D(ITransformF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetRotation3D (); */
  NS_SCRIPTABLE NS_IMETHOD GetRotation3D(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetTranslation3D (); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslation3D(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetDirection3D (); */
  NS_SCRIPTABLE NS_IMETHOD GetDirection3D(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IRayF GetRay4D (); */
  NS_SCRIPTABLE NS_IMETHOD GetRay4D(IRayF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetLookat3D (); */
  NS_SCRIPTABLE NS_IMETHOD GetLookat3D(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetLookat3DDirection (); */
  NS_SCRIPTABLE NS_IMETHOD GetLookat3DDirection(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IRayF GetTranslationDirection5D (); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationDirection5D(IRayF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetTranslationXY2D (); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXY2D(IVectorF **_retval NS_OUTPARAM) = 0;

  /* IVectorF GetTranslationXYOrientation3D (); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXYOrientation3D(IVectorF **_retval NS_OUTPARAM) = 0;

  /* void GetTranslationLocalGlobal6D (out IVectorF rot, out IVectorF trans); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationLocalGlobal6D(IVectorF **rot NS_OUTPARAM, IVectorF **trans NS_OUTPARAM) = 0;

  /* void GetTranslationXAxisAngle4D (out IVectorF trans, out float rot); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) = 0;

  /* void GetTranslationYAxisAngle4D (out IVectorF trans, out float rot); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) = 0;

  /* void GetTranslationZAxisAngle4D (out IVectorF trans, out float rot); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) = 0;

  /* void GetTranslationXAxisAngleZNorm4D (out IVectorF trans, out float rot); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) = 0;

  /* void GetTranslationYAxisAngleZNorm4D (out IVectorF trans, out float rot); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) = 0;

  /* void GetTranslationZAxisAngleZNorm4D (out IVectorF trans, out float rot); */
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) = 0;

  /* float ComputeDistanceSqr (in IIkParameterization ikparam); */
  NS_SCRIPTABLE NS_IMETHOD ComputeDistanceSqr(IIkParameterization *ikparam, float *_retval NS_OUTPARAM) = 0;

  /* void GetValues (inout unsigned long itvaluesCount, [array, size_is (itvaluesCount)] inout float itvalues); */
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM) = 0;

  /* void SetValues (in unsigned long itvaluesCount, [array, size_is (itvaluesCount)] in float itvalues, in long iktype); */
  NS_SCRIPTABLE NS_IMETHOD SetValues(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype) = 0;

  /* void Set (in unsigned long itvaluesCount, [array, size_is (itvaluesCount)] in float itvalues, in long iktype); */
  NS_SCRIPTABLE NS_IMETHOD Set(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype) = 0;

  /* void SetCustomValues (in string name, in unsigned long valuesCount, [array, size_is (valuesCount)] in float values); */
  NS_SCRIPTABLE NS_IMETHOD SetCustomValues(const char *name, PRUint32 valuesCount, float *values) = 0;

  /* void SetCustomValue (in string name, in float value); */
  NS_SCRIPTABLE NS_IMETHOD SetCustomValue(const char *name, float value) = 0;

  /* boolean GetCustomValues (in string name, out unsigned long valuesCount, [array, size_is (valuesCount)] out float values); */
  NS_SCRIPTABLE NS_IMETHOD GetCustomValues(const char *name, PRUint32 *valuesCount NS_OUTPARAM, float **values NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

  /* long ClearCustomValues (in string name); */
  NS_SCRIPTABLE NS_IMETHOD ClearCustomValues(const char *name, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* IConfigurationSpecification GetConfigurationSpecification (in string interpolation); */
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) = 0;

  /* IIkParameterization MultiplyTransform (in ITransformF t); */
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransform(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM) = 0;

  /* IIkParameterization MultiplyTransformRight (in ITransformF t); */
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransformRight(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IIkParameterization, IIKPARAMETERIZATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IIKPARAMETERIZATION \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDOF1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDOF2(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIkTypeFromUniqueId(PRInt32 uniqueid, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues2(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetTransform6D(ITransformF *t); \
  NS_SCRIPTABLE NS_IMETHOD SetRotation3D(IVectorF *quaternion); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslation3D(IVectorF *trans); \
  NS_SCRIPTABLE NS_IMETHOD SetDirection3D(IVectorF *dir); \
  NS_SCRIPTABLE NS_IMETHOD SetRay4D(IRayF *ray); \
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D1(IVectorF *trans); \
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D2(IRayF *ray); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationDirection5D(IRayF *ray); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXY2D(IVectorF *trans); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXYOrientation3D(IVectorF *trans); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationLocalGlobal6D(IVectorF *localtrans, IVectorF *trans); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngle4D(IVectorF *trans, float angle); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngle4D(IVectorF *trans, float angle); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngle4D(IVectorF *trans, float angle); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngleZNorm4D(IVectorF *trans, float angle); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngleZNorm4D(IVectorF *trans, float angle); \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngleZNorm4D(IVectorF *trans, float angle); \
  NS_SCRIPTABLE NS_IMETHOD GetTransform6D(ITransformF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRotation3D(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslation3D(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDirection3D(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRay4D(IRayF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLookat3D(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLookat3DDirection(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationDirection5D(IRayF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXY2D(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXYOrientation3D(IVectorF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationLocalGlobal6D(IVectorF **rot NS_OUTPARAM, IVectorF **trans NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ComputeDistanceSqr(IIkParameterization *ikparam, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetValues(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype); \
  NS_SCRIPTABLE NS_IMETHOD Set(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype); \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValues(const char *name, PRUint32 valuesCount, float *values); \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValue(const char *name, float value); \
  NS_SCRIPTABLE NS_IMETHOD GetCustomValues(const char *name, PRUint32 *valuesCount NS_OUTPARAM, float **values NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ClearCustomValues(const char *name, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransform(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransformRight(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IIKPARAMETERIZATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return _to GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return _to GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM) { return _to GetDOF1(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF2(PRInt32 *_retval NS_OUTPARAM) { return _to GetDOF2(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM) { return _to GetNumberOfValues1(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkTypeFromUniqueId(PRInt32 uniqueid, PRInt32 *_retval NS_OUTPARAM) { return _to GetIkTypeFromUniqueId(uniqueid, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues2(PRInt32 *_retval NS_OUTPARAM) { return _to GetNumberOfValues2(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform6D(ITransformF *t) { return _to SetTransform6D(t); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotation3D(IVectorF *quaternion) { return _to SetRotation3D(quaternion); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslation3D(IVectorF *trans) { return _to SetTranslation3D(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirection3D(IVectorF *dir) { return _to SetDirection3D(dir); } \
  NS_SCRIPTABLE NS_IMETHOD SetRay4D(IRayF *ray) { return _to SetRay4D(ray); } \
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D1(IVectorF *trans) { return _to SetLookat3D1(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D2(IRayF *ray) { return _to SetLookat3D2(ray); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationDirection5D(IRayF *ray) { return _to SetTranslationDirection5D(ray); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXY2D(IVectorF *trans) { return _to SetTranslationXY2D(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXYOrientation3D(IVectorF *trans) { return _to SetTranslationXYOrientation3D(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationLocalGlobal6D(IVectorF *localtrans, IVectorF *trans) { return _to SetTranslationLocalGlobal6D(localtrans, trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngle4D(IVectorF *trans, float angle) { return _to SetTranslationXAxisAngle4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngle4D(IVectorF *trans, float angle) { return _to SetTranslationYAxisAngle4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngle4D(IVectorF *trans, float angle) { return _to SetTranslationZAxisAngle4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngleZNorm4D(IVectorF *trans, float angle) { return _to SetTranslationXAxisAngleZNorm4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngleZNorm4D(IVectorF *trans, float angle) { return _to SetTranslationYAxisAngleZNorm4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngleZNorm4D(IVectorF *trans, float angle) { return _to SetTranslationZAxisAngleZNorm4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform6D(ITransformF **_retval NS_OUTPARAM) { return _to GetTransform6D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRotation3D(IVectorF **_retval NS_OUTPARAM) { return _to GetRotation3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslation3D(IVectorF **_retval NS_OUTPARAM) { return _to GetTranslation3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection3D(IVectorF **_retval NS_OUTPARAM) { return _to GetDirection3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRay4D(IRayF **_retval NS_OUTPARAM) { return _to GetRay4D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLookat3D(IVectorF **_retval NS_OUTPARAM) { return _to GetLookat3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLookat3DDirection(IVectorF **_retval NS_OUTPARAM) { return _to GetLookat3DDirection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationDirection5D(IRayF **_retval NS_OUTPARAM) { return _to GetTranslationDirection5D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXY2D(IVectorF **_retval NS_OUTPARAM) { return _to GetTranslationXY2D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXYOrientation3D(IVectorF **_retval NS_OUTPARAM) { return _to GetTranslationXYOrientation3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationLocalGlobal6D(IVectorF **rot NS_OUTPARAM, IVectorF **trans NS_OUTPARAM) { return _to GetTranslationLocalGlobal6D(rot, trans); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return _to GetTranslationXAxisAngle4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return _to GetTranslationYAxisAngle4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return _to GetTranslationZAxisAngle4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return _to GetTranslationXAxisAngleZNorm4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return _to GetTranslationYAxisAngleZNorm4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return _to GetTranslationZAxisAngleZNorm4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeDistanceSqr(IIkParameterization *ikparam, float *_retval NS_OUTPARAM) { return _to ComputeDistanceSqr(ikparam, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM) { return _to GetValues(itvaluesCount, itvalues); } \
  NS_SCRIPTABLE NS_IMETHOD SetValues(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype) { return _to SetValues(itvaluesCount, itvalues, iktype); } \
  NS_SCRIPTABLE NS_IMETHOD Set(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype) { return _to Set(itvaluesCount, itvalues, iktype); } \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValues(const char *name, PRUint32 valuesCount, float *values) { return _to SetCustomValues(name, valuesCount, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValue(const char *name, float value) { return _to SetCustomValue(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetCustomValues(const char *name, PRUint32 *valuesCount NS_OUTPARAM, float **values NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to GetCustomValues(name, valuesCount, values, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearCustomValues(const char *name, PRInt32 *_retval NS_OUTPARAM) { return _to ClearCustomValues(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return _to GetConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransform(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM) { return _to MultiplyTransform(t, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransformRight(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM) { return _to MultiplyTransformRight(t, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IIKPARAMETERIZATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOF1(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF2(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOF2(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfValues1(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIkTypeFromUniqueId(PRInt32 uniqueid, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIkTypeFromUniqueId(uniqueid, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues2(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfValues2(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTransform6D(ITransformF *t) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransform6D(t); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotation3D(IVectorF *quaternion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRotation3D(quaternion); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslation3D(IVectorF *trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslation3D(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirection3D(IVectorF *dir) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDirection3D(dir); } \
  NS_SCRIPTABLE NS_IMETHOD SetRay4D(IRayF *ray) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRay4D(ray); } \
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D1(IVectorF *trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLookat3D1(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetLookat3D2(IRayF *ray) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLookat3D2(ray); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationDirection5D(IRayF *ray) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationDirection5D(ray); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXY2D(IVectorF *trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationXY2D(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXYOrientation3D(IVectorF *trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationXYOrientation3D(trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationLocalGlobal6D(IVectorF *localtrans, IVectorF *trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationLocalGlobal6D(localtrans, trans); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngle4D(IVectorF *trans, float angle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationXAxisAngle4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngle4D(IVectorF *trans, float angle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationYAxisAngle4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngle4D(IVectorF *trans, float angle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationZAxisAngle4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationXAxisAngleZNorm4D(IVectorF *trans, float angle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationXAxisAngleZNorm4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationYAxisAngleZNorm4D(IVectorF *trans, float angle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationYAxisAngleZNorm4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTranslationZAxisAngleZNorm4D(IVectorF *trans, float angle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTranslationZAxisAngleZNorm4D(trans, angle); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransform6D(ITransformF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransform6D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRotation3D(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRotation3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslation3D(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslation3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDirection3D(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirection3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRay4D(IRayF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRay4D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLookat3D(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLookat3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLookat3DDirection(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLookat3DDirection(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationDirection5D(IRayF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationDirection5D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXY2D(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationXY2D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXYOrientation3D(IVectorF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationXYOrientation3D(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationLocalGlobal6D(IVectorF **rot NS_OUTPARAM, IVectorF **trans NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationLocalGlobal6D(rot, trans); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationXAxisAngle4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationYAxisAngle4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationZAxisAngle4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationXAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationXAxisAngleZNorm4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationYAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationYAxisAngleZNorm4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD GetTranslationZAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTranslationZAxisAngleZNorm4D(trans, rot); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeDistanceSqr(IIkParameterization *ikparam, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeDistanceSqr(ikparam, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValues(itvaluesCount, itvalues); } \
  NS_SCRIPTABLE NS_IMETHOD SetValues(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValues(itvaluesCount, itvalues, iktype); } \
  NS_SCRIPTABLE NS_IMETHOD Set(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype) { return !_to ? NS_ERROR_NULL_POINTER : _to->Set(itvaluesCount, itvalues, iktype); } \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValues(const char *name, PRUint32 valuesCount, float *values) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValues(name, valuesCount, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValue(const char *name, float value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValue(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetCustomValues(const char *name, PRUint32 *valuesCount NS_OUTPARAM, float **values NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCustomValues(name, valuesCount, values, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearCustomValues(const char *name, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearCustomValues(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConfigurationSpecification(interpolation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransform(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MultiplyTransform(t, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MultiplyTransformRight(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MultiplyTransformRight(t, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IIkParameterization
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IIKPARAMETERIZATION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IIkParameterization)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long GetType (); */
NS_IMETHODIMP _MYCLASS_::GetType(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetName (); */
NS_IMETHODIMP _MYCLASS_::GetName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetDOF1 (in long type); */
NS_IMETHODIMP _MYCLASS_::GetDOF1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetDOF2 (); */
NS_IMETHODIMP _MYCLASS_::GetDOF2(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetNumberOfValues1 (in long type); */
NS_IMETHODIMP _MYCLASS_::GetNumberOfValues1(PRInt32 type, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetIkTypeFromUniqueId (in long uniqueid); */
NS_IMETHODIMP _MYCLASS_::GetIkTypeFromUniqueId(PRInt32 uniqueid, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetNumberOfValues2 (); */
NS_IMETHODIMP _MYCLASS_::GetNumberOfValues2(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTransform6D (in ITransformF t); */
NS_IMETHODIMP _MYCLASS_::SetTransform6D(ITransformF *t)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRotation3D (in IVectorF quaternion); */
NS_IMETHODIMP _MYCLASS_::SetRotation3D(IVectorF *quaternion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslation3D (in IVectorF trans); */
NS_IMETHODIMP _MYCLASS_::SetTranslation3D(IVectorF *trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDirection3D (in IVectorF dir); */
NS_IMETHODIMP _MYCLASS_::SetDirection3D(IVectorF *dir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetRay4D (in IRayF ray); */
NS_IMETHODIMP _MYCLASS_::SetRay4D(IRayF *ray)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLookat3D1 (in IVectorF trans); */
NS_IMETHODIMP _MYCLASS_::SetLookat3D1(IVectorF *trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLookat3D2 (in IRayF ray); */
NS_IMETHODIMP _MYCLASS_::SetLookat3D2(IRayF *ray)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationDirection5D (in IRayF ray); */
NS_IMETHODIMP _MYCLASS_::SetTranslationDirection5D(IRayF *ray)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationXY2D (in IVectorF trans); */
NS_IMETHODIMP _MYCLASS_::SetTranslationXY2D(IVectorF *trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationXYOrientation3D (in IVectorF trans); */
NS_IMETHODIMP _MYCLASS_::SetTranslationXYOrientation3D(IVectorF *trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationLocalGlobal6D (in IVectorF localtrans, in IVectorF trans); */
NS_IMETHODIMP _MYCLASS_::SetTranslationLocalGlobal6D(IVectorF *localtrans, IVectorF *trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationXAxisAngle4D (in IVectorF trans, in float angle); */
NS_IMETHODIMP _MYCLASS_::SetTranslationXAxisAngle4D(IVectorF *trans, float angle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationYAxisAngle4D (in IVectorF trans, in float angle); */
NS_IMETHODIMP _MYCLASS_::SetTranslationYAxisAngle4D(IVectorF *trans, float angle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationZAxisAngle4D (in IVectorF trans, in float angle); */
NS_IMETHODIMP _MYCLASS_::SetTranslationZAxisAngle4D(IVectorF *trans, float angle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationXAxisAngleZNorm4D (in IVectorF trans, in float angle); */
NS_IMETHODIMP _MYCLASS_::SetTranslationXAxisAngleZNorm4D(IVectorF *trans, float angle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationYAxisAngleZNorm4D (in IVectorF trans, in float angle); */
NS_IMETHODIMP _MYCLASS_::SetTranslationYAxisAngleZNorm4D(IVectorF *trans, float angle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetTranslationZAxisAngleZNorm4D (in IVectorF trans, in float angle); */
NS_IMETHODIMP _MYCLASS_::SetTranslationZAxisAngleZNorm4D(IVectorF *trans, float angle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ITransformF GetTransform6D (); */
NS_IMETHODIMP _MYCLASS_::GetTransform6D(ITransformF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetRotation3D (); */
NS_IMETHODIMP _MYCLASS_::GetRotation3D(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetTranslation3D (); */
NS_IMETHODIMP _MYCLASS_::GetTranslation3D(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetDirection3D (); */
NS_IMETHODIMP _MYCLASS_::GetDirection3D(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRayF GetRay4D (); */
NS_IMETHODIMP _MYCLASS_::GetRay4D(IRayF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetLookat3D (); */
NS_IMETHODIMP _MYCLASS_::GetLookat3D(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetLookat3DDirection (); */
NS_IMETHODIMP _MYCLASS_::GetLookat3DDirection(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IRayF GetTranslationDirection5D (); */
NS_IMETHODIMP _MYCLASS_::GetTranslationDirection5D(IRayF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetTranslationXY2D (); */
NS_IMETHODIMP _MYCLASS_::GetTranslationXY2D(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IVectorF GetTranslationXYOrientation3D (); */
NS_IMETHODIMP _MYCLASS_::GetTranslationXYOrientation3D(IVectorF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTranslationLocalGlobal6D (out IVectorF rot, out IVectorF trans); */
NS_IMETHODIMP _MYCLASS_::GetTranslationLocalGlobal6D(IVectorF **rot NS_OUTPARAM, IVectorF **trans NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTranslationXAxisAngle4D (out IVectorF trans, out float rot); */
NS_IMETHODIMP _MYCLASS_::GetTranslationXAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTranslationYAxisAngle4D (out IVectorF trans, out float rot); */
NS_IMETHODIMP _MYCLASS_::GetTranslationYAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTranslationZAxisAngle4D (out IVectorF trans, out float rot); */
NS_IMETHODIMP _MYCLASS_::GetTranslationZAxisAngle4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTranslationXAxisAngleZNorm4D (out IVectorF trans, out float rot); */
NS_IMETHODIMP _MYCLASS_::GetTranslationXAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTranslationYAxisAngleZNorm4D (out IVectorF trans, out float rot); */
NS_IMETHODIMP _MYCLASS_::GetTranslationYAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetTranslationZAxisAngleZNorm4D (out IVectorF trans, out float rot); */
NS_IMETHODIMP _MYCLASS_::GetTranslationZAxisAngleZNorm4D(IVectorF **trans NS_OUTPARAM, float *rot NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float ComputeDistanceSqr (in IIkParameterization ikparam); */
NS_IMETHODIMP _MYCLASS_::ComputeDistanceSqr(IIkParameterization *ikparam, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetValues (inout unsigned long itvaluesCount, [array, size_is (itvaluesCount)] inout float itvalues); */
NS_IMETHODIMP _MYCLASS_::GetValues(PRUint32 *itvaluesCount NS_INOUTPARAM, float **itvalues NS_INOUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetValues (in unsigned long itvaluesCount, [array, size_is (itvaluesCount)] in float itvalues, in long iktype); */
NS_IMETHODIMP _MYCLASS_::SetValues(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Set (in unsigned long itvaluesCount, [array, size_is (itvaluesCount)] in float itvalues, in long iktype); */
NS_IMETHODIMP _MYCLASS_::Set(PRUint32 itvaluesCount, float *itvalues, PRInt32 iktype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetCustomValues (in string name, in unsigned long valuesCount, [array, size_is (valuesCount)] in float values); */
NS_IMETHODIMP _MYCLASS_::SetCustomValues(const char *name, PRUint32 valuesCount, float *values)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetCustomValue (in string name, in float value); */
NS_IMETHODIMP _MYCLASS_::SetCustomValue(const char *name, float value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean GetCustomValues (in string name, out unsigned long valuesCount, [array, size_is (valuesCount)] out float values); */
NS_IMETHODIMP _MYCLASS_::GetCustomValues(const char *name, PRUint32 *valuesCount NS_OUTPARAM, float **values NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long ClearCustomValues (in string name); */
NS_IMETHODIMP _MYCLASS_::ClearCustomValues(const char *name, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IConfigurationSpecification GetConfigurationSpecification (in string interpolation); */
NS_IMETHODIMP _MYCLASS_::GetConfigurationSpecification(const char *interpolation, IConfigurationSpecification **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IIkParameterization MultiplyTransform (in ITransformF t); */
NS_IMETHODIMP _MYCLASS_::MultiplyTransform(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IIkParameterization MultiplyTransformRight (in ITransformF t); */
NS_IMETHODIMP _MYCLASS_::MultiplyTransformRight(ITransformF *t, IIkParameterization **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ITriMesh */
#define ITRIMESH_IID_STR "00000000-0000-0000-0000-000000000000"

#define ITRIMESH_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ITriMesh : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ITRIMESH_IID)

  /* void GetVertices (out unsigned long count, [array, size_is (count)] out IVectorF values); */
  NS_SCRIPTABLE NS_IMETHOD GetVertices(PRUint32 *count NS_OUTPARAM, IVectorF ***values NS_OUTPARAM) = 0;

  /* void SetVertices (in unsigned long count, [array, size_is (count)] in IVectorF values); */
  NS_SCRIPTABLE NS_IMETHOD SetVertices(PRUint32 count, IVectorF **values) = 0;

  /* void GetIndices (out unsigned long count, [array, size_is (count)] out long values); */
  NS_SCRIPTABLE NS_IMETHOD GetIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **values NS_OUTPARAM) = 0;

  /* void SetIndices (in unsigned long count, [array, size_is (count)] in long values); */
  NS_SCRIPTABLE NS_IMETHOD SetIndices(PRUint32 count, PRInt32 *values) = 0;

  /* void ApplyTransform1 (in ITransformF t); */
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform1(ITransformF *t) = 0;

  /* void ApplyTransform2 (in ITransformMatrixF t); */
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform2(ITransformMatrixF *t) = 0;

  /* void Append1 (in ITriMesh mesh); */
  NS_SCRIPTABLE NS_IMETHOD Append1(ITriMesh *mesh) = 0;

  /* void Append2 (in ITriMesh mesh, in ITransformF trans); */
  NS_SCRIPTABLE NS_IMETHOD Append2(ITriMesh *mesh, ITransformF *trans) = 0;

  /* IAABBF ComputeAABB (); */
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) = 0;

  /* void serialize (in nsIOutputStream o, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ITriMesh, ITRIMESH_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ITRIMESH \
  NS_SCRIPTABLE NS_IMETHOD GetVertices(PRUint32 *count NS_OUTPARAM, IVectorF ***values NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetVertices(PRUint32 count, IVectorF **values); \
  NS_SCRIPTABLE NS_IMETHOD GetIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **values NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetIndices(PRUint32 count, PRInt32 *values); \
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform1(ITransformF *t); \
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform2(ITransformMatrixF *t); \
  NS_SCRIPTABLE NS_IMETHOD Append1(ITriMesh *mesh); \
  NS_SCRIPTABLE NS_IMETHOD Append2(ITriMesh *mesh, ITransformF *trans); \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ITRIMESH(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVertices(PRUint32 *count NS_OUTPARAM, IVectorF ***values NS_OUTPARAM) { return _to GetVertices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetVertices(PRUint32 count, IVectorF **values) { return _to SetVertices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **values NS_OUTPARAM) { return _to GetIndices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetIndices(PRUint32 count, PRInt32 *values) { return _to SetIndices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform1(ITransformF *t) { return _to ApplyTransform1(t); } \
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform2(ITransformMatrixF *t) { return _to ApplyTransform2(t); } \
  NS_SCRIPTABLE NS_IMETHOD Append1(ITriMesh *mesh) { return _to Append1(mesh); } \
  NS_SCRIPTABLE NS_IMETHOD Append2(ITriMesh *mesh, ITransformF *trans) { return _to Append2(mesh, trans); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) { return _to ComputeAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return _to Serialize(o, options); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ITRIMESH(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVertices(PRUint32 *count NS_OUTPARAM, IVectorF ***values NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVertices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetVertices(PRUint32 count, IVectorF **values) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVertices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **values NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD SetIndices(PRUint32 count, PRInt32 *values) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIndices(count, values); } \
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform1(ITransformF *t) { return !_to ? NS_ERROR_NULL_POINTER : _to->ApplyTransform1(t); } \
  NS_SCRIPTABLE NS_IMETHOD ApplyTransform2(ITransformMatrixF *t) { return !_to ? NS_ERROR_NULL_POINTER : _to->ApplyTransform2(t); } \
  NS_SCRIPTABLE NS_IMETHOD Append1(ITriMesh *mesh) { return !_to ? NS_ERROR_NULL_POINTER : _to->Append1(mesh); } \
  NS_SCRIPTABLE NS_IMETHOD Append2(ITriMesh *mesh, ITransformF *trans) { return !_to ? NS_ERROR_NULL_POINTER : _to->Append2(mesh, trans); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAABB(IAABBF **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeAABB(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(nsIOutputStream *o, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(o, options); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ITriMesh
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ITRIMESH

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ITriMesh)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void GetVertices (out unsigned long count, [array, size_is (count)] out IVectorF values); */
NS_IMETHODIMP _MYCLASS_::GetVertices(PRUint32 *count NS_OUTPARAM, IVectorF ***values NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetVertices (in unsigned long count, [array, size_is (count)] in IVectorF values); */
NS_IMETHODIMP _MYCLASS_::SetVertices(PRUint32 count, IVectorF **values)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetIndices (out unsigned long count, [array, size_is (count)] out long values); */
NS_IMETHODIMP _MYCLASS_::GetIndices(PRUint32 *count NS_OUTPARAM, PRInt32 **values NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetIndices (in unsigned long count, [array, size_is (count)] in long values); */
NS_IMETHODIMP _MYCLASS_::SetIndices(PRUint32 count, PRInt32 *values)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ApplyTransform1 (in ITransformF t); */
NS_IMETHODIMP _MYCLASS_::ApplyTransform1(ITransformF *t)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ApplyTransform2 (in ITransformMatrixF t); */
NS_IMETHODIMP _MYCLASS_::ApplyTransform2(ITransformMatrixF *t)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Append1 (in ITriMesh mesh); */
NS_IMETHODIMP _MYCLASS_::Append1(ITriMesh *mesh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Append2 (in ITriMesh mesh, in ITransformF trans); */
NS_IMETHODIMP _MYCLASS_::Append2(ITriMesh *mesh, ITransformF *trans)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IAABBF ComputeAABB (); */
NS_IMETHODIMP _MYCLASS_::ComputeAABB(IAABBF **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void serialize (in nsIOutputStream o, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(nsIOutputStream *o, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_openrave_h__ */
