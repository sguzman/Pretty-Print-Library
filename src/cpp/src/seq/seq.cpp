#include <iostream>
#include <vector>
#include <array>
#include <cstdlib>

#include "../../include/pretty_print.hxx"

using std::cout;
using std::endl;
using std::vector;
using std::array;

int main() {
  // Don't sync with stdio
  cout.sync_with_stdio(false);

  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
  array<int, 8> arr{{1, 2, 3, 4, 5, 6, 7, 8}};

  cout << "Vector: " << vec << endl;
  cout << "Array: " << arr << endl;

  return EXIT_SUCCESS;
}
