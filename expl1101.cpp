#include <iostream>
#include <iterator>
#include <vector>
#include "expl1101.h"

int main()
{
  using namespace std;

  //vector<int> data{ 10, 42 };
  //ostream_iterator<int> out{ ostream_iterator<int>(cout, "\n") };
  //copy(data.begin(), data.end(), out);

  vector<int> data{};
 // int x{};
 // while (cin >> x)
 // {
	//data.push_back(x);
 // }

  // Read integers from the standard input, and append them to the end of data
  data.insert(data.end(), istream_iterator<int>(cin), istream_iterator<int>());

  // Reverse algorithms:

  // 1. with loop function
 // for (vector<int>::iterator start{ data.begin() }, end{ data.end() }; start != end; /* empty*/) {
	//--end;
	//if (start != end)
	//{
	//  iter_swap(start, end);
	//  ++start;
	//}
 // }

  // 2. optimized loop
 // for (vector<int>::iterator start{ data.begin() }, end{ data.end() };
	//start != end && start != --end;
	//++start) 
 // {
	//iter_swap(start, end);
 // }

  // 3. with reverse()
  reverse(data.begin(), data.end());

  // Print result:
  copy(data.begin(), data.end(), ostream_iterator<int>(cout, "\n"));

}