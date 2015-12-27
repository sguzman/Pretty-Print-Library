#pragma once

#include <ostream>
#include <set>

#include "../../../seq/impl/seq-impl.hxx"

using std::ostream;

template <typename T>
using setTT = std::set<T,std::less<T>,std::allocator<T>>;

template <typename T>
inline static ostream& operator<<(ostream& os, setTT<T> set) noexcept {
  seq::seqPrint<T, setTT,'{','}'>::print(os, set);

  return os;
}
