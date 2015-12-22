#pragma once

#include <ostream>
#include <vector>

using std::ostream;
using std::vector;


namespace seq {
  static constexpr const auto delimBegin = '[';
  static constexpr const auto delimEnd = ']';
  static constexpr const auto delimSep = ',';

  template <typename T, template <class...> typename Seq>
  static inline ostream& operator<<(ostream& os, conref<Seq<T>> vec) noexcept {
    os << delimBegin;
    if (vec.size() > 0) {
      os << vec.front();

      for (auto &&it = vec.cbegin() + 1; it < vec.cend(); ++it) {
        os << delimSep << *it;
      }
    }

    return os << delimEnd;
  }

    template <typename... LOL> inline ostream& operator<<(ostream&,LOL...) noexcept = delete;
}
