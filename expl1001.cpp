#include <algorithm>
#include <cassert>
#include <vector>

int main()
{
  using namespace std;

  vector<int> input{ 10, 20, 30 };
  vector<int> output{};
  output.resize(input.size());
  copy(input.begin(), input.end(), output.begin());

  // Now output has a complete copy of input
  assert(input == output);
}