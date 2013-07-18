/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../idl/spacesampler.idl
 */

#ifndef __gen_spacesampler_h__
#define __gen_spacesampler_h__


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

/* starting interface:    ISpaceSamplerBase */
#define ISPACESAMPLERBASE_IID_STR "00000000-0000-0000-0000-000000000000"

#define ISPACESAMPLERBASE_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}

class NS_NO_VTABLE NS_SCRIPTABLE ISpaceSamplerBase : public IInterfaceBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ISPACESAMPLERBASE_IID)

  /* void SetSeed (in unsigned long seed); */
  NS_SCRIPTABLE NS_IMETHOD SetSeed(PRUint32 seed) = 0;

  /* void SetSpaceDOF (in long dof); */
  NS_SCRIPTABLE NS_IMETHOD SetSpaceDOF(PRInt32 dof) = 0;

  /* long GetDOF (); */
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long GetNumberOfValues (); */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean Supports (in long type); */
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM) = 0;

  /* void GetLimits (out unsigned long vLowerLimitCount, [array, size_is (vLowerLimitCount)] out float vLowerLimit, out unsigned long vUpperLimitCount, [array, size_is (vUpperLimitCount)] out float vUpperLimit); */
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *vLowerLimitCount NS_OUTPARAM, float **vLowerLimit NS_OUTPARAM, PRUint32 *vUpperLimitCount NS_OUTPARAM, float **vUpperLimit NS_OUTPARAM) = 0;

  /* void SampleSequence1 (out unsigned long samplesCount, [array, size_is (samplesCount)] out float samples, in long num, in long interval); */
  NS_SCRIPTABLE NS_IMETHOD SampleSequence1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval) = 0;

  /* float SampleSequenceOneReal (in long interval); */
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneReal(PRInt32 interval, float *_retval NS_OUTPARAM) = 0;

  /* void SampleSequence2 (out unsigned long sampleCount, [array, size_is (sampleCount)] out unsigned long sample, in long num); */
  NS_SCRIPTABLE NS_IMETHOD SampleSequence2(PRUint32 *sampleCount NS_OUTPARAM, PRUint32 **sample NS_OUTPARAM, PRInt32 num) = 0;

  /* unsigned long SampleSequenceOneUInt32 (); */
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneUInt32(PRUint32 *_retval NS_OUTPARAM) = 0;

  /* void SampleComplete1 (out unsigned long samplesCount, [array, size_is (samplesCount)] out float samples, in long num, in long interval); */
  NS_SCRIPTABLE NS_IMETHOD SampleComplete1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval) = 0;

  /* void SampleComplete2 (out unsigned long samplesCount, [array, size_is (samplesCount)] out unsigned long samples, in long num); */
  NS_SCRIPTABLE NS_IMETHOD SampleComplete2(PRUint32 *samplesCount NS_OUTPARAM, PRUint32 **samples NS_OUTPARAM, PRInt32 num) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ISpaceSamplerBase, ISPACESAMPLERBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ISPACESAMPLERBASE \
  NS_SCRIPTABLE NS_IMETHOD SetSeed(PRUint32 seed); \
  NS_SCRIPTABLE NS_IMETHOD SetSpaceDOF(PRInt32 dof); \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *vLowerLimitCount NS_OUTPARAM, float **vLowerLimit NS_OUTPARAM, PRUint32 *vUpperLimitCount NS_OUTPARAM, float **vUpperLimit NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SampleSequence1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval); \
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneReal(PRInt32 interval, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SampleSequence2(PRUint32 *sampleCount NS_OUTPARAM, PRUint32 **sample NS_OUTPARAM, PRInt32 num); \
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneUInt32(PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SampleComplete1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval); \
  NS_SCRIPTABLE NS_IMETHOD SampleComplete2(PRUint32 *samplesCount NS_OUTPARAM, PRUint32 **samples NS_OUTPARAM, PRInt32 num); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ISPACESAMPLERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetSeed(PRUint32 seed) { return _to SetSeed(seed); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpaceDOF(PRInt32 dof) { return _to SetSpaceDOF(dof); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return _to GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues(PRInt32 *_retval NS_OUTPARAM) { return _to GetNumberOfValues(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM) { return _to Supports(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *vLowerLimitCount NS_OUTPARAM, float **vLowerLimit NS_OUTPARAM, PRUint32 *vUpperLimitCount NS_OUTPARAM, float **vUpperLimit NS_OUTPARAM) { return _to GetLimits(vLowerLimitCount, vLowerLimit, vUpperLimitCount, vUpperLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequence1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval) { return _to SampleSequence1(samplesCount, samples, num, interval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneReal(PRInt32 interval, float *_retval NS_OUTPARAM) { return _to SampleSequenceOneReal(interval, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequence2(PRUint32 *sampleCount NS_OUTPARAM, PRUint32 **sample NS_OUTPARAM, PRInt32 num) { return _to SampleSequence2(sampleCount, sample, num); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneUInt32(PRUint32 *_retval NS_OUTPARAM) { return _to SampleSequenceOneUInt32(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleComplete1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval) { return _to SampleComplete1(samplesCount, samples, num, interval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleComplete2(PRUint32 *samplesCount NS_OUTPARAM, PRUint32 **samples NS_OUTPARAM, PRInt32 num) { return _to SampleComplete2(samplesCount, samples, num); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ISPACESAMPLERBASE(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetSeed(PRUint32 seed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSeed(seed); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpaceDOF(PRInt32 dof) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSpaceDOF(dof); } \
  NS_SCRIPTABLE NS_IMETHOD GetDOF(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDOF(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfValues(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfValues(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Supports(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimits(PRUint32 *vLowerLimitCount NS_OUTPARAM, float **vLowerLimit NS_OUTPARAM, PRUint32 *vUpperLimitCount NS_OUTPARAM, float **vUpperLimit NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLimits(vLowerLimitCount, vLowerLimit, vUpperLimitCount, vUpperLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequence1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval) { return !_to ? NS_ERROR_NULL_POINTER : _to->SampleSequence1(samplesCount, samples, num, interval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneReal(PRInt32 interval, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SampleSequenceOneReal(interval, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequence2(PRUint32 *sampleCount NS_OUTPARAM, PRUint32 **sample NS_OUTPARAM, PRInt32 num) { return !_to ? NS_ERROR_NULL_POINTER : _to->SampleSequence2(sampleCount, sample, num); } \
  NS_SCRIPTABLE NS_IMETHOD SampleSequenceOneUInt32(PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SampleSequenceOneUInt32(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleComplete1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval) { return !_to ? NS_ERROR_NULL_POINTER : _to->SampleComplete1(samplesCount, samples, num, interval); } \
  NS_SCRIPTABLE NS_IMETHOD SampleComplete2(PRUint32 *samplesCount NS_OUTPARAM, PRUint32 **samples NS_OUTPARAM, PRInt32 num) { return !_to ? NS_ERROR_NULL_POINTER : _to->SampleComplete2(samplesCount, samples, num); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ISpaceSamplerBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ISPACESAMPLERBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ISpaceSamplerBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void SetSeed (in unsigned long seed); */
NS_IMETHODIMP _MYCLASS_::SetSeed(PRUint32 seed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetSpaceDOF (in long dof); */
NS_IMETHODIMP _MYCLASS_::SetSpaceDOF(PRInt32 dof)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetDOF (); */
NS_IMETHODIMP _MYCLASS_::GetDOF(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long GetNumberOfValues (); */
NS_IMETHODIMP _MYCLASS_::GetNumberOfValues(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean Supports (in long type); */
NS_IMETHODIMP _MYCLASS_::Supports(PRInt32 type, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetLimits (out unsigned long vLowerLimitCount, [array, size_is (vLowerLimitCount)] out float vLowerLimit, out unsigned long vUpperLimitCount, [array, size_is (vUpperLimitCount)] out float vUpperLimit); */
NS_IMETHODIMP _MYCLASS_::GetLimits(PRUint32 *vLowerLimitCount NS_OUTPARAM, float **vLowerLimit NS_OUTPARAM, PRUint32 *vUpperLimitCount NS_OUTPARAM, float **vUpperLimit NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SampleSequence1 (out unsigned long samplesCount, [array, size_is (samplesCount)] out float samples, in long num, in long interval); */
NS_IMETHODIMP _MYCLASS_::SampleSequence1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float SampleSequenceOneReal (in long interval); */
NS_IMETHODIMP _MYCLASS_::SampleSequenceOneReal(PRInt32 interval, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SampleSequence2 (out unsigned long sampleCount, [array, size_is (sampleCount)] out unsigned long sample, in long num); */
NS_IMETHODIMP _MYCLASS_::SampleSequence2(PRUint32 *sampleCount NS_OUTPARAM, PRUint32 **sample NS_OUTPARAM, PRInt32 num)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long SampleSequenceOneUInt32 (); */
NS_IMETHODIMP _MYCLASS_::SampleSequenceOneUInt32(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SampleComplete1 (out unsigned long samplesCount, [array, size_is (samplesCount)] out float samples, in long num, in long interval); */
NS_IMETHODIMP _MYCLASS_::SampleComplete1(PRUint32 *samplesCount NS_OUTPARAM, float **samples NS_OUTPARAM, PRInt32 num, PRInt32 interval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SampleComplete2 (out unsigned long samplesCount, [array, size_is (samplesCount)] out unsigned long samples, in long num); */
NS_IMETHODIMP _MYCLASS_::SampleComplete2(PRUint32 *samplesCount NS_OUTPARAM, PRUint32 **samples NS_OUTPARAM, PRInt32 num)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_spacesampler_h__ */
