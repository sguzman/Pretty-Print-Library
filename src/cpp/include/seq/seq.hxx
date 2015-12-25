#pragma once

#include <array>

#include "../util/def.hxx"

#include "seq-impl.hxx"
#include "vector.hxx"
#include "array.hxx"

template <typename T, template <class> typename B>
static inline ostream& operator<<(ostream&,conref<B<T>>) noexcept = delete;
