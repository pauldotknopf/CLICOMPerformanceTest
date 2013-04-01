

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon Apr 01 13:32:47 2013
 */
/* Compiler settings for COMTest.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __COMTest_i_h__
#define __COMTest_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICOMManagedTest_FWD_DEFINED__
#define __ICOMManagedTest_FWD_DEFINED__
typedef interface ICOMManagedTest ICOMManagedTest;

#endif 	/* __ICOMManagedTest_FWD_DEFINED__ */


#ifndef ___ICOMManagedTestEvents_FWD_DEFINED__
#define ___ICOMManagedTestEvents_FWD_DEFINED__
typedef interface _ICOMManagedTestEvents _ICOMManagedTestEvents;

#endif 	/* ___ICOMManagedTestEvents_FWD_DEFINED__ */


#ifndef __COMManagedTest_FWD_DEFINED__
#define __COMManagedTest_FWD_DEFINED__

#ifdef __cplusplus
typedef class COMManagedTest COMManagedTest;
#else
typedef struct COMManagedTest COMManagedTest;
#endif /* __cplusplus */

#endif 	/* __COMManagedTest_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICOMManagedTest_INTERFACE_DEFINED__
#define __ICOMManagedTest_INTERFACE_DEFINED__

/* interface ICOMManagedTest */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICOMManagedTest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF5E64CD-1892-49E1-831A-8091A2455EAF")
    ICOMManagedTest : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ICOMManagedTestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICOMManagedTest * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICOMManagedTest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICOMManagedTest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICOMManagedTest * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICOMManagedTest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICOMManagedTest * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICOMManagedTest * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ICOMManagedTestVtbl;

    interface ICOMManagedTest
    {
        CONST_VTBL struct ICOMManagedTestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICOMManagedTest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICOMManagedTest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICOMManagedTest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICOMManagedTest_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICOMManagedTest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICOMManagedTest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICOMManagedTest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICOMManagedTest_INTERFACE_DEFINED__ */



#ifndef __COMTestLib_LIBRARY_DEFINED__
#define __COMTestLib_LIBRARY_DEFINED__

/* library COMTestLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_COMTestLib;

#ifndef ___ICOMManagedTestEvents_DISPINTERFACE_DEFINED__
#define ___ICOMManagedTestEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ICOMManagedTestEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ICOMManagedTestEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6C3B3132-9A23-4700-A2EB-4897D898E9C4")
    _ICOMManagedTestEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ICOMManagedTestEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ICOMManagedTestEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ICOMManagedTestEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ICOMManagedTestEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ICOMManagedTestEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ICOMManagedTestEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ICOMManagedTestEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ICOMManagedTestEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ICOMManagedTestEventsVtbl;

    interface _ICOMManagedTestEvents
    {
        CONST_VTBL struct _ICOMManagedTestEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ICOMManagedTestEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ICOMManagedTestEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ICOMManagedTestEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ICOMManagedTestEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ICOMManagedTestEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ICOMManagedTestEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ICOMManagedTestEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ICOMManagedTestEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_COMManagedTest;

#ifdef __cplusplus

class DECLSPEC_UUID("C5E17840-772B-4A41-B3B3-7D7F0EAF397E")
COMManagedTest;
#endif
#endif /* __COMTestLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


