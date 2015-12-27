#pragma once

#include <list>
#include <ostream>

#include "../../util/def.hxx"
#include "../impl/seq-impl.hxx"

using std::distance;
using std::list;
using std::ostream;

template <typename T>
inline static ostream& operator<<(ostream& os, list<T>& forw) noexcept {
  os << seq::delimBegin;

  if (distance(forw.begin(), forw.end()) > 0) {
    os << forw.front();

    auto&& it = forw.cbegin();
    for (++it; it != forw.cend(); ++it) {
      os << seq::delimSep << *it;
    }
  }

  return os << seq::delimEnd;
}
