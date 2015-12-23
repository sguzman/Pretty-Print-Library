#include <iostream>
#include <vector>
#include <array>

#include "../../include/pretty_print.hxx"
//#include "lol.hxx"

using std::cout;
using std::endl;
using std::vector;
using std::array;

int main() {
  // Don't sync with stdio
  cout.sync_with_stdio(false);

  vector<int> lol{1, 2, 3, 4, 5, 6, 7, 8};
  array<int, 8> lel{{1, 2, 3, 4, 5, 6, 7, 8}};

  cout << lol << endl;
  cout << lel << endl;
  return 0;
}
