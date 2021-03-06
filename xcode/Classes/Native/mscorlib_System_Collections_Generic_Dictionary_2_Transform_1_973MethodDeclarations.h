﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.String>
struct Transform_1_t20612;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GameRes.SCachedBundleData
#include "AssemblyU2DCSharp_GameRes_SCachedBundleData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.String>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m150329 (Transform_1_t20612 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.String>::Invoke(TKey,TValue)
 String_t* Transform_1_Invoke_m150330 (Transform_1_t20612 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m150331 (Transform_1_t20612 * __this, String_t* ___key, SCachedBundleData_t4397  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,GameRes.SCachedBundleData,System.String>::EndInvoke(System.IAsyncResult)
 String_t* Transform_1_EndInvoke_m150332 (Transform_1_t20612 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
