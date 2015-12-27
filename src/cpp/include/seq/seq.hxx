#pragma once

#include <array>

#include "../util/def.hxx"

#include "../seq/impl/seq-impl.hxx"
#include "../seq/vector/vector.hxx"
#include "../seq/array/array.hxx"
#include "../seq/raw/raw.hxx"

template <typename T, template <class> typename B>
static inline ostream& operator<<(ostream&,conref<B<T>>) noexcept = delete;
