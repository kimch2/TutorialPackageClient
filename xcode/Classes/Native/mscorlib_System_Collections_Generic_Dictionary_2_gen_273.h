﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.Type[]
struct TypeU5BU5D_t1042;
// System.Collections.Generic.IList`1<LitJson.PropertyMetadata>[]
struct IList_1U5BU5D_t23791;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t16320;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.DictionaryEntry>
struct Transform_1_t23792;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t6341  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::keySlots
	TypeU5BU5D_t1042* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::valueSlots
	IList_1U5BU5D_t23791* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::generation
	int32_t ___generation;
};
struct Dictionary_2_t6341_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::<>f__am$cacheB
	Transform_1_t23792 * ___U3CU3Ef__am$cacheB;
};
