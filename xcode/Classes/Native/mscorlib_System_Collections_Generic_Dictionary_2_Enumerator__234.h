﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t5510;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_242.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Enumerator_t16517 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::dictionary
	Dictionary_2_t5510 * ___dictionary;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::stamp
	int32_t ___stamp;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::current
	KeyValuePair_2_t16503  ___current;
};
