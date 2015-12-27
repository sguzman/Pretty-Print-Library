#pragma once

#include <ostream>

#include "../../util/def.hxx"

using std::ostream;
using std::distance;

namespace seq {
  template <typename T, template <class> typename Seq, unsigned char delimBegin = '[', unsigned char delimEnd = ']', unsigned char delimSep = ','>
  struct seqPrint final {
      inline static void print(ostream& os, conref<Seq<T>> seq) noexcept {
        os << delimBegin;
        if (distance(seq.cbegin(), seq.cend()) > 0) {
          auto &&it = seq.cbegin();
          os << *it;

          for (++it; it != seq.cend(); ++it) {
            os << delimSep << *it;
          }
        }

        os << delimEnd;
      }
  };
}
