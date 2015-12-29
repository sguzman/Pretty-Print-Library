#pragma once

#include <ostream>
#include <unordered_set>

#include "../../../seq/impl/seq-impl.hxx"

using std::ostream;

template <typename T>
using setTT = std::unordered_set<T,std::hash<T>,std::equal_to<T>,std::allocator<T>>;

template <typename T>
inline static ostream& operator<<(ostream& os, setTT<T> set) noexcept {
  seq::seqPrint<T, setTT,'{','}'>::print(os, set);

  return os;
}
