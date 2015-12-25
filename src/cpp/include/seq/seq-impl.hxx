#pragma once

#include <ostream>

#include "../util/def.hxx"

using std::ostream;

namespace seq {
  static constexpr const auto delimBegin = '[';
  static constexpr const auto delimEnd = ']';
  static constexpr const auto delimSep = ',';

  template <typename T, template <class> typename Seq>
  struct seqPrint final {
      inline static void print(ostream& os, conref<Seq<T>> seq) noexcept {
        os << delimBegin;
        if (seq.size() > 0) {
          os << seq.front();

          for (auto &&it = seq.cbegin() + 1; it < seq.cend(); ++it) {
            os << delimSep << *it;
          }
        }

        os << delimEnd;
      }
  };
}
