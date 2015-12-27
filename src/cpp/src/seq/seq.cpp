#include <array>
#include <cstdlib>
#include <deque>
#include <forward_list>
#include <iostream>
#include <vector>

#include "../../include/pretty_print.hxx"

using std::array;
using std::cout;
using std::deque;
using std::endl;
using std::forward_list;
using std::vector;

int main(void) noexcept {
  // Don't sync with stdio
  cout.sync_with_stdio(false);

  array<int, 8> arr{{1, 2, 3, 4, 5, 6, 7, 8}};
  deque<int> deq{1, 2, 3, 4, 5, 6, 7, 8};
  forward_list<int> forward{1, 2, 3, 4, 5, 6, 7, 8};
  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
  int raw[8]{1, 2, 3, 4, 5, 6, 7, 8};

  cout << "Array: " << arr << endl;
  cout << "Deque: " << deq << endl;
  cout << "Forward List: " << forward << endl;
  cout << "Raw: " << raw << endl;
  cout << "Vector: " << vec << endl;

  return EXIT_SUCCESS;
}
