﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct Predicate_1_t23727;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m172489 (Predicate_1_t23727 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Invoke(T)
 bool Predicate_1_Invoke_m172490 (Predicate_1_t23727 * __this, KeyValuePair_2_t6324  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m172491 (Predicate_1_t23727 * __this, KeyValuePair_2_t6324  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m172492 (Predicate_1_t23727 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
