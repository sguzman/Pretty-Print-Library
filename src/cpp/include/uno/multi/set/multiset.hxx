#pragma once

#include <ostream>
#include <unordered_set>
#include "../../../util/def.hxx"
#include "../../../seq/impl/seq-impl.hxx"

using std::ostream;
using std::less;
using std::allocator;

template <typename T>
using umultiT = std::unordered_multiset<T,std::hash<T>,std::equal_to<T>,std::allocator<T>>;

template <typename T>
inline static ostream& operator<<(ostream& os, conref<umultiT<T>> mset) noexcept {
  seq::seqPrint<T, umultiT,'{','}'>::print(os, mset);
  return os;
}
