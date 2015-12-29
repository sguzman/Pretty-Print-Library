#include <cstdlib>
#include <iostream>
#include <unordered_set>
#include <unordered_map>

#include "../../include/uno/uno.hxx"

using std::cout;
using std::endl;
using std::make_pair;

int main(void) {

  std::unordered_set<int> uset{1,2,3,4,5,6,7,8};
  std::unordered_map<int,int> umap{make_pair(1, 8), make_pair(2, 7), make_pair(3, 6), make_pair(4, 5), make_pair(5, 4), make_pair(6, 3), make_pair(7, 2), make_pair(8, 1)};
  std::unordered_multiset<int> umset{1,2,3,4,5,6,7,8};
  std::unordered_multimap<int,int> ummap{make_pair(1, 8), make_pair(2, 7), make_pair(3, 6), make_pair(4, 5), make_pair(5, 4), make_pair(6, 3), make_pair(7, 2), make_pair(8, 1)};

  cout << uset << endl;
  cout << umap << endl;
  cout << umset << endl;
  cout << ummap << endl;

  return EXIT_SUCCESS;
}
