#pragma once

#include <ostream>
#include <set>
#include "../../../util/def.hxx"
#include "../../../seq/impl/seq-impl.hxx"

using std::ostream;
using std::multiset;
using std::less;
using std::allocator;

template <typename T>
using multiT = multiset<T,less<T>,allocator<T>>;

template <typename T>
inline static ostream& operator<<(ostream& os, conref<multiT<T>> mset) noexcept {
  seq::seqPrint<T, multiT,'{','}'>::print(os, mset);
  return os;
}
