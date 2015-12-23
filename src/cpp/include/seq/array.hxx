#pragma once

#include <array>
#include <ostream>

#include "seq-impl.hxx"

using std::array;
using std::ostream;

// Overload print function for vector
template <typename T, size_t n>
inline static ostream& operator<<(ostream& os, conref<array<T,n>> arr) noexcept {
  return seq::operator<< <T,array>(os, arr);
}
