#pragma once

#include <vector>
#include <ostream>

#include "seq-impl.hxx"

using std::vector;
using std::ostream;

// Create a template type from vector that only takes a single template parameter
template <typename T>
using vecky = vector<T,std::allocator<T>>;

// Overload print function for vector
template <typename T>
inline static ostream& operator<<(ostream& os, conref<vecky<T>> vec) noexcept {
  return seq::operator<<<T, vecky>(os, vec);
}
