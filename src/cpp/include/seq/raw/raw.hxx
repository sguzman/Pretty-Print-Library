#pragma once

#include <type_traits>
#include <ostream>

using std::ostream;
using std::enable_if;
using std::is_same;

template <typename T, size_t N>
typename enable_if<!is_same<T, char>::value, ostream &>::type
operator<<(ostream & os, const T (&arr)[N]) noexcept {
  os << '[';

  if (N > 0) {
    os << arr[0];

    for (unsigned int idx{1}; idx < N; ++idx) {
      os << ',' << arr[idx];
    }
  }

  return os << ']';
}
