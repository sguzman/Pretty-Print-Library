#pragma once

#include <array>
#include <ostream>

#include "../impl/seq-impl.hxx"

using std::array;
using std::ostream;

// Create partial template that pivots on the type of array - not size
template <size_t n>
struct seqT {
    template <typename T>
    using arrT = array<T,n>;

    template <typename A>
    inline static void print(ostream& os, conref<arrT<A>> arr) noexcept {
      seq::seqPrint<A,arrT>::print(os, arr);
    }
};

// Overload print function for vector
template <typename T, size_t n>
inline static ostream& operator<<(ostream& os, conref<array<T,n>> arr) noexcept {
  seqT<n>::print(os, arr);
  return os;
}
