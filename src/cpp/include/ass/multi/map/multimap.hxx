#pragma once

#include <map>
#include <ostream>
#include <utility>

#include "../../../util/def.hxx"
#include "../../../seq/impl/seq-impl.hxx"
#include "../../../util/pair.hxx"

using std::allocator;
using std::ostream;

template <typename A>
struct mmapT final {
    template <typename B>
    using mapTT = std::multimap<A, B, std::less<A>, allocator<std::pair<const A, B>>>;

    template <typename B>
    inline static void print(ostream& os, conref<mapTT<B>> map) noexcept {
      seq::seqPrint<B, mapTT,'(',')'>::print(os, map);
    }
};

template <typename A, typename B>
inline static ostream& operator<<(ostream& os, conref<std::multimap<A, B>> map) noexcept {
  mmapT<A>::print(os, map);
  return os;
}

