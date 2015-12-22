#include <iostream>
#include <vector>

#include "../include/pretty_print.hxx"

using std::cout;
using std::endl;

int main() {
  // Don't sync with stdio
  cout.sync_with_stdio(false);

  std::vector<int> lol{1, 2, 3, 4, 5, 6, 7, 8};

  cout << lol << endl;
  return 0;
}
