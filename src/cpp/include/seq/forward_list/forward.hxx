#pragma once

#include <forward_list>
#include <ostream>

#include "../../util/def.hxx"
#include "../impl/seq-impl.hxx"

using std::allocator;
using std::distance;
using std::forward_list;
using std::ostream;

template <typename T>
using flist = forward_list<T, allocator<T>>;

template <typename T>
inline static ostream& operator<<(ostream& os, conref<flist<T>> forw) noexcept {
  seq::seqPrint<T, flist>::print(os, forw);

  return os;
}
