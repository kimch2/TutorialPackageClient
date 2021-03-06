﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AssetBundle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AssetBundle>>
struct Transform_1_t20372;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AssetBundle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AssetBundle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AssetBundle>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m148355 (Transform_1_t20372 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AssetBundle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AssetBundle>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5674  Transform_1_Invoke_m148356 (Transform_1_t20372 * __this, String_t* ___key, AssetBundle_t2010 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AssetBundle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AssetBundle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m148357 (Transform_1_t20372 * __this, String_t* ___key, AssetBundle_t2010 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AssetBundle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.AssetBundle>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5674  Transform_1_EndInvoke_m148358 (Transform_1_t20372 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
