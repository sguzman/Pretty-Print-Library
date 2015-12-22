#pragma once

#include <vector>
#include <ostream>

#include "seq.hxx"

using std::vector;
using std::ostream;

template <typename T>
inline static ostream& operator<<(ostream& os, conref<vector<T>> vec) noexcept {
  return seq::operator<<(os, vec);
}
