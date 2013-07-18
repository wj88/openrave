/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/interface.idl
 */

#ifndef __gen_interface_h__
#define __gen_interface_h__


#ifndef __gen_prototypes_h__
#include "prototypes.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ICallbackInterfaceCommand */
#define ICALLBACKINTERFACECOMMAND_IID_STR "00000000-0000-0000-0000-000000000000"

#define ICALLBACKINTERFACECOMMAND_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ICallbackInterfaceCommand : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ICALLBACKINTERFACECOMMAND_IID)

  /* boolean Invoke (in nsIOutputStream os, in nsIInputStream is); */
  NS_SCRIPTABLE NS_IMETHOD Invoke(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ICallbackInterfaceCommand, ICALLBACKINTERFACECOMMAND_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ICALLBACKINTERFACECOMMAND \
  NS_SCRIPTABLE NS_IMETHOD Invoke(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ICALLBACKINTERFACECOMMAND(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM) { return _to Invoke(os, is, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ICALLBACKINTERFACECOMMAND(_to) \
  NS_SCRIPTABLE NS_IMETHOD Invoke(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invoke(os, is, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ICallbackInterfaceCommand
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ICALLBACKINTERFACECOMMAND

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ICallbackInterfaceCommand)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean Invoke (in nsIOutputStream os, in nsIInputStream is); */
NS_IMETHODIMP _MYCLASS_::Invoke(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IInterfaceCommand */
#define IINTERFACECOMMAND_IID_STR "00000000-0000-0000-0000-000000000000"

#define IINTERFACECOMMAND_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IInterfaceCommand : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IINTERFACECOMMAND_IID)

  /* attribute ICallbackInterfaceCommand fn; */
  NS_SCRIPTABLE NS_IMETHOD GetFn(ICallbackInterfaceCommand **aFn) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFn(ICallbackInterfaceCommand *aFn) = 0;

  /* attribute string help; */
  NS_SCRIPTABLE NS_IMETHOD GetHelp(char **aHelp) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHelp(const char *aHelp) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IInterfaceCommand, IINTERFACECOMMAND_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IINTERFACECOMMAND \
  NS_SCRIPTABLE NS_IMETHOD GetFn(ICallbackInterfaceCommand **aFn); \
  NS_SCRIPTABLE NS_IMETHOD SetFn(ICallbackInterfaceCommand *aFn); \
  NS_SCRIPTABLE NS_IMETHOD GetHelp(char **aHelp); \
  NS_SCRIPTABLE NS_IMETHOD SetHelp(const char *aHelp); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IINTERFACECOMMAND(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFn(ICallbackInterfaceCommand **aFn) { return _to GetFn(aFn); } \
  NS_SCRIPTABLE NS_IMETHOD SetFn(ICallbackInterfaceCommand *aFn) { return _to SetFn(aFn); } \
  NS_SCRIPTABLE NS_IMETHOD GetHelp(char **aHelp) { return _to GetHelp(aHelp); } \
  NS_SCRIPTABLE NS_IMETHOD SetHelp(const char *aHelp) { return _to SetHelp(aHelp); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IINTERFACECOMMAND(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFn(ICallbackInterfaceCommand **aFn) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFn(aFn); } \
  NS_SCRIPTABLE NS_IMETHOD SetFn(ICallbackInterfaceCommand *aFn) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFn(aFn); } \
  NS_SCRIPTABLE NS_IMETHOD GetHelp(char **aHelp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHelp(aHelp); } \
  NS_SCRIPTABLE NS_IMETHOD SetHelp(const char *aHelp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHelp(aHelp); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IInterfaceCommand
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IINTERFACECOMMAND

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IInterfaceCommand)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute ICallbackInterfaceCommand fn; */
NS_IMETHODIMP _MYCLASS_::GetFn(ICallbackInterfaceCommand **aFn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFn(ICallbackInterfaceCommand *aFn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string help; */
NS_IMETHODIMP _MYCLASS_::GetHelp(char **aHelp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetHelp(const char *aHelp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    IInterfaceBase */
#define IINTERFACEBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define IINTERFACEBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE IInterfaceBase : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IINTERFACEBASE_IID)

  /* string GetInterfaceHash (); */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceHash(char **_retval NS_OUTPARAM) = 0;

  /* long GetInterfaceType (); */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* string GetXMLId (); */
  NS_SCRIPTABLE NS_IMETHOD GetXMLId(char **_retval NS_OUTPARAM) = 0;

  /* string GetPluginName (); */
  NS_SCRIPTABLE NS_IMETHOD GetPluginName(char **_retval NS_OUTPARAM) = 0;

  /* IEnvironmentBase GetEnv (); */
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM) = 0;

  /* IXMLReadable GetReadableInterface (in string xmltag); */
  NS_SCRIPTABLE NS_IMETHOD GetReadableInterface(const char *xmltag, IXMLReadable **_retval NS_OUTPARAM) = 0;

  /* IXMLReadable SetReadableInterface (in string xmltag, in IXMLReadable readable); */
  NS_SCRIPTABLE NS_IMETHOD SetReadableInterface(const char *xmltag, IXMLReadable *readable, IXMLReadable **_retval NS_OUTPARAM) = 0;

  /* string GetDescription (); */
  NS_SCRIPTABLE NS_IMETHOD GetDescription(char **_retval NS_OUTPARAM) = 0;

  /* void SetDescription (in string description); */
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const char *description) = 0;

  /* void SetUserData (in string key, in IUserData data); */
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const char *key, IUserData *data) = 0;

  /* IUserData GetUserData (in string key); */
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const char *key, IUserData **_retval NS_OUTPARAM) = 0;

  /* boolean RemoveUserData (in string key); */
  NS_SCRIPTABLE NS_IMETHOD RemoveUserData(const char *key, PRBool *_retval NS_OUTPARAM) = 0;

  /* string GetURI (); */
  NS_SCRIPTABLE NS_IMETHOD GetURI(char **_retval NS_OUTPARAM) = 0;

  /* string GetXMLFilename (); */
  NS_SCRIPTABLE NS_IMETHOD GetXMLFilename(char **_retval NS_OUTPARAM) = 0;

  /* void Clone (in IInterfaceBase preference, in long cloningoptions); */
  NS_SCRIPTABLE NS_IMETHOD Clone(IInterfaceBase *preference, PRInt32 cloningoptions) = 0;

  /* boolean SendCommand (in nsIOutputStream os, in nsIInputStream is); */
  NS_SCRIPTABLE NS_IMETHOD SendCommand(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM) = 0;

  /* void Serialize (in IBaseXMLWriter writer, in long options); */
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) = 0;

  /* void RegisterCommand (in string cmdname, in ICallbackInterfaceCommand fncmd, in string strhelp); */
  NS_SCRIPTABLE NS_IMETHOD RegisterCommand(const char *cmdname, ICallbackInterfaceCommand *fncmd, const char *strhelp) = 0;

  /* void UnregisterCommand (in string cmdname); */
  NS_SCRIPTABLE NS_IMETHOD UnregisterCommand(const char *cmdname) = 0;

  /* string GetHash (); */
  NS_SCRIPTABLE NS_IMETHOD GetHash(char **_retval NS_OUTPARAM) = 0;

  /* IMutex GetInterfaceMutex (); */
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceMutex(IMutex **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IInterfaceBase, IINTERFACEBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IINTERFACEBASE \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceHash(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetXMLId(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPluginName(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetReadableInterface(const char *xmltag, IXMLReadable **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetReadableInterface(const char *xmltag, IXMLReadable *readable, IXMLReadable **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const char *description); \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const char *key, IUserData *data); \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const char *key, IUserData **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveUserData(const char *key, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetURI(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetXMLFilename(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Clone(IInterfaceBase *preference, PRInt32 cloningoptions); \
  NS_SCRIPTABLE NS_IMETHOD SendCommand(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options); \
  NS_SCRIPTABLE NS_IMETHOD RegisterCommand(const char *cmdname, ICallbackInterfaceCommand *fncmd, const char *strhelp); \
  NS_SCRIPTABLE NS_IMETHOD UnregisterCommand(const char *cmdname); \
  NS_SCRIPTABLE NS_IMETHOD GetHash(char **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceMutex(IMutex **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IINTERFACEBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceHash(char **_retval NS_OUTPARAM) { return _to GetInterfaceHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *_retval NS_OUTPARAM) { return _to GetInterfaceType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetXMLId(char **_retval NS_OUTPARAM) { return _to GetXMLId(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPluginName(char **_retval NS_OUTPARAM) { return _to GetPluginName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM) { return _to GetEnv(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadableInterface(const char *xmltag, IXMLReadable **_retval NS_OUTPARAM) { return _to GetReadableInterface(xmltag, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetReadableInterface(const char *xmltag, IXMLReadable *readable, IXMLReadable **_retval NS_OUTPARAM) { return _to SetReadableInterface(xmltag, readable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(char **_retval NS_OUTPARAM) { return _to GetDescription(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const char *description) { return _to SetDescription(description); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const char *key, IUserData *data) { return _to SetUserData(key, data); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const char *key, IUserData **_retval NS_OUTPARAM) { return _to GetUserData(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveUserData(const char *key, PRBool *_retval NS_OUTPARAM) { return _to RemoveUserData(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(char **_retval NS_OUTPARAM) { return _to GetURI(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetXMLFilename(char **_retval NS_OUTPARAM) { return _to GetXMLFilename(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(IInterfaceBase *preference, PRInt32 cloningoptions) { return _to Clone(preference, cloningoptions); } \
  NS_SCRIPTABLE NS_IMETHOD SendCommand(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM) { return _to SendCommand(os, is, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) { return _to Serialize(writer, options); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterCommand(const char *cmdname, ICallbackInterfaceCommand *fncmd, const char *strhelp) { return _to RegisterCommand(cmdname, fncmd, strhelp); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterCommand(const char *cmdname) { return _to UnregisterCommand(cmdname); } \
  NS_SCRIPTABLE NS_IMETHOD GetHash(char **_retval NS_OUTPARAM) { return _to GetHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceMutex(IMutex **_retval NS_OUTPARAM) { return _to GetInterfaceMutex(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IINTERFACEBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceHash(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceType(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetXMLId(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXMLId(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPluginName(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPluginName(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnv(IEnvironmentBase **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnv(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadableInterface(const char *xmltag, IXMLReadable **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadableInterface(xmltag, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetReadableInterface(const char *xmltag, IXMLReadable *readable, IXMLReadable **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReadableInterface(xmltag, readable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const char *description) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDescription(description); } \
  NS_SCRIPTABLE NS_IMETHOD SetUserData(const char *key, IUserData *data) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserData(key, data); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserData(const char *key, IUserData **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserData(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveUserData(const char *key, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveUserData(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetXMLFilename(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXMLFilename(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(IInterfaceBase *preference, PRInt32 cloningoptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(preference, cloningoptions); } \
  NS_SCRIPTABLE NS_IMETHOD SendCommand(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendCommand(os, is, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Serialize(IBaseXMLWriter *writer, PRInt32 options) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(writer, options); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterCommand(const char *cmdname, ICallbackInterfaceCommand *fncmd, const char *strhelp) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterCommand(cmdname, fncmd, strhelp); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterCommand(const char *cmdname) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterCommand(cmdname); } \
  NS_SCRIPTABLE NS_IMETHOD GetHash(char **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHash(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterfaceMutex(IMutex **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceMutex(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IInterfaceBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IINTERFACEBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IInterfaceBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* string GetInterfaceHash (); */
NS_IMETHODIMP _MYCLASS_::GetInterfaceHash(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetInterfaceType (); */
NS_IMETHODIMP _MYCLASS_::GetInterfaceType(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetXMLId (); */
NS_IMETHODIMP _MYCLASS_::GetXMLId(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetPluginName (); */
NS_IMETHODIMP _MYCLASS_::GetPluginName(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IEnvironmentBase GetEnv (); */
NS_IMETHODIMP _MYCLASS_::GetEnv(IEnvironmentBase **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IXMLReadable GetReadableInterface (in string xmltag); */
NS_IMETHODIMP _MYCLASS_::GetReadableInterface(const char *xmltag, IXMLReadable **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IXMLReadable SetReadableInterface (in string xmltag, in IXMLReadable readable); */
NS_IMETHODIMP _MYCLASS_::SetReadableInterface(const char *xmltag, IXMLReadable *readable, IXMLReadable **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetDescription (); */
NS_IMETHODIMP _MYCLASS_::GetDescription(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetDescription (in string description); */
NS_IMETHODIMP _MYCLASS_::SetDescription(const char *description)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetUserData (in string key, in IUserData data); */
NS_IMETHODIMP _MYCLASS_::SetUserData(const char *key, IUserData *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IUserData GetUserData (in string key); */
NS_IMETHODIMP _MYCLASS_::GetUserData(const char *key, IUserData **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean RemoveUserData (in string key); */
NS_IMETHODIMP _MYCLASS_::RemoveUserData(const char *key, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetURI (); */
NS_IMETHODIMP _MYCLASS_::GetURI(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetXMLFilename (); */
NS_IMETHODIMP _MYCLASS_::GetXMLFilename(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Clone (in IInterfaceBase preference, in long cloningoptions); */
NS_IMETHODIMP _MYCLASS_::Clone(IInterfaceBase *preference, PRInt32 cloningoptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean SendCommand (in nsIOutputStream os, in nsIInputStream is); */
NS_IMETHODIMP _MYCLASS_::SendCommand(nsIOutputStream *os, nsIInputStream *is, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void Serialize (in IBaseXMLWriter writer, in long options); */
NS_IMETHODIMP _MYCLASS_::Serialize(IBaseXMLWriter *writer, PRInt32 options)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RegisterCommand (in string cmdname, in ICallbackInterfaceCommand fncmd, in string strhelp); */
NS_IMETHODIMP _MYCLASS_::RegisterCommand(const char *cmdname, ICallbackInterfaceCommand *fncmd, const char *strhelp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void UnregisterCommand (in string cmdname); */
NS_IMETHODIMP _MYCLASS_::UnregisterCommand(const char *cmdname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string GetHash (); */
NS_IMETHODIMP _MYCLASS_::GetHash(char **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* IMutex GetInterfaceMutex (); */
NS_IMETHODIMP _MYCLASS_::GetInterfaceMutex(IMutex **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_interface_h__ */
