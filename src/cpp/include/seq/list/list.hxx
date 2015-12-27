#pragma once

#include <list>
#include <ostream>

#include "../../util/def.hxx"
#include "../impl/seq-impl.hxx"

using std::allocator;
using std::distance;
using std::list;
using std::ostream;

template <typename T>
using listT = list<T, allocator<T>>;

template <typename T>
inline static ostream& operator<<(ostream& os, conref<listT<T>> alist) noexcept {
  seq::seqPrint<T, listT>::print(os, alist);

  return os;
}
