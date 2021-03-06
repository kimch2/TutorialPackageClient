﻿#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.GUI/ScrollViewState
struct ScrollViewState_t7585  : public Object_t
{
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::position
	Rect_t5068  ___position;
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::visibleRect
	Rect_t5068  ___visibleRect;
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::viewRect
	Rect_t5068  ___viewRect;
	// UnityEngine.Vector2 UnityEngine.GUI/ScrollViewState::scrollPosition
	Vector2_t12  ___scrollPosition;
	// System.Boolean UnityEngine.GUI/ScrollViewState::apply
	bool ___apply;
	// System.Boolean UnityEngine.GUI/ScrollViewState::hasScrollTo
	bool ___hasScrollTo;
};
