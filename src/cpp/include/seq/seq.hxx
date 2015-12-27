#pragma once

#include <array>

// Some util definitions
#include "../util/def.hxx"

// Main implementation of sequence printing
#include "../seq/impl/seq-impl.hxx"

// Impl for array
#include "../seq/array/array.hxx"
// Impl for deque
#include "../seq/deque/deque.hxx"
// Impl for forward_list
#include "../seq/forward_list/forward.hxx"
// Impl for raw C array
#include "../seq/raw/raw.hxx"
// Impl for vector
#include "../seq/vector/vector.hxx"

template <typename T, template <class> typename B>
static inline ostream& operator<<(ostream&,conref<B<T>>) noexcept = delete;
