#pragma once

#include <unordered_map>
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
    using mapTT = std::unordered_multimap<A, B, std::hash<A>, std::equal_to<A>, allocator<std::pair<const A, B>>>;

    template <typename B>
    inline static void print(ostream& os, conref<mapTT<B>> map) noexcept {
      seq::seqPrint<B, mapTT,'(',')'>::print(os, map);
    }
};

template <typename A, typename B>
inline static ostream& operator<<(ostream& os, conref<std::unordered_multimap<A, B>> map) noexcept {
  mmapT<A>::print(os, map);
  return os;
}

