﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>
struct ValueCollection_t15788;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>
struct Dictionary_2_t329;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>
struct List_1_t708;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>
struct IEnumerator_1_t15813;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>[]
struct List_1U5BU5D_t15784;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_386.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m118208 (ValueCollection_t15788 * __this, Dictionary_2_t329 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m118209 (ValueCollection_t15788 * __this, List_1_t708 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m118210 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m118211 (ValueCollection_t15788 * __this, List_1_t708 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m118212 (ValueCollection_t15788 * __this, List_1_t708 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m118213 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m118214 (ValueCollection_t15788 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m118215 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m118216 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m118217 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m118218 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m118219 (ValueCollection_t15788 * __this, List_1U5BU5D_t15784* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::GetEnumerator()
 Enumerator_t15814  ValueCollection_GetEnumerator_m118220 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_Xiaozhitiao>>::get_Count()
 int32_t ValueCollection_get_Count_m118221 (ValueCollection_t15788 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
