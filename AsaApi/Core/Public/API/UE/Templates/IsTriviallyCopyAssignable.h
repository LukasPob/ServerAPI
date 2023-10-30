// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreTypes.h"
#include <type_traits>

/**
 * Traits class which tests if a type has a trivial copy assignment operator.
 */
template <typename T>
struct TIsTriviallyCopyAssignable
{
	enum { Value = std::is_trivially_copy_assignable_v<T> };
};
