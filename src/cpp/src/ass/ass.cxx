#include <cstdlib>
#include <iostream>
#include <map>
#include <set>

#include "../../include/ass/ass.hxx"

using std::cout;
using std::endl;
using std::make_pair;

int main(void) {
  std::set<int> set{1, 2, 3, 4, 5, 7, 8};
  std::map<int,int> map{make_pair(1, 8), make_pair(2, 7), make_pair(3, 6), make_pair(4, 5), make_pair(5, 4), make_pair(6, 3), make_pair(7, 2), make_pair(8, 1)};

  cout << "Set: " << set << endl;
  cout << "Map: " << map << endl;

  return EXIT_SUCCESS;
}
