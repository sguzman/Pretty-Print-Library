#include <array>
#include <cstdlib>
#include <deque>
#include <iostream>
#include <vector>

#include "../../include/pretty_print.hxx"

using std::cout;
using std::endl;
using std::vector;
using std::array;
using std::deque;

int main(void) noexcept {
  // Don't sync with stdio
  cout.sync_with_stdio(false);

  array<int, 8> arr{{1, 2, 3, 4, 5, 6, 7, 8}};
  deque<int> deq{1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
  int raw[3]{1, 2, 3};

  cout << "Vector: " << vec << endl;
  cout << "Array: " << arr << endl;
  cout << "Raw: " << raw << endl;
  cout << "Deque: " << deq << endl;

  return EXIT_SUCCESS;
}
