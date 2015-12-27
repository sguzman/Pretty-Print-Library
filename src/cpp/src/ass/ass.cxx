#include <cstdlib>
#include <iostream>
#include <set>

#include "../../include/ass/ass.hxx"

using std::cout;
using std::endl;
using std::set;

int main(void) {
  set<int> set{1, 2, 3, 4, 5, 7, 8};

  cout << "Set: " << set << endl;

  return EXIT_SUCCESS;
}
