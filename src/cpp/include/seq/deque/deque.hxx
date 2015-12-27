#pragma once

#include <deque>
#include <ostream>

using std::deque;
using std::ostream;

template <typename T>
using dequeT = deque<T,std::allocator<T>>;

template <typename T>
inline static ostream& operator<<(ostream& os, conref<dequeT<T>> deq) noexcept {
  seq::seqPrint<T, dequeT>::print(os, deq);

  return os;
}
