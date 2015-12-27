#pragma once

#include <type_traits>

template <typename T, unsigned int N>
typename std::enable_if<!std::is_same<T, char>::value, std::ostream &>::type
operator<<(std::ostream & os, const T (&arr)[N]) {
  os << seq::delimBegin;

  if (N > 0) {
    os << arr[0];

    for (unsigned int idx{1}; idx < N; ++idx) {
      os << seq::delimSep << arr[idx];
    }
  }

  return os << seq::delimEnd;
}
