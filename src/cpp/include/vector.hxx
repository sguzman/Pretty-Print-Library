#pragma once

#include <vector>
#include <ostream>

using std::vector;
using std::ostream;

static constexpr const auto vecDelimBegin = '[';
static constexpr const auto vecDelimEnd = ']';
static constexpr const auto vecDelimSep = ',';

template <typename T>
static inline ostream& operator<<(ostream& os, const vector<T>& vec) noexcept {
  os << vecDelimBegin;
  if (vec.size() > 0) {
    os << vec.front();

    for (auto &&it = vec.cbegin() + 1; it < vec.cend(); ++it) {
      os << vecDelimSep << *it;
    }
  }

  return os << vecDelimEnd;
}
