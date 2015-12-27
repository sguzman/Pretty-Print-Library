#pragma once

#include <utility>
#include <ostream>
#include "def.hxx"

using std::ostream;
using std::pair;

template <typename A, typename B, unsigned char delimBegin = '<', unsigned char delimEnd = '>', unsigned char delimSep = ','>
inline static ostream& operator<<(ostream& os, conref<pair<A, B>> pa) noexcept {
  return os << delimBegin << pa.first << delimSep << pa.second << delimEnd;
}
