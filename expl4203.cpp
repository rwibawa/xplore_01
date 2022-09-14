#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
	using namespace std;

  vector<int> vec(10);
	int first{ 1 };
	int step{ 1 };
	generate(vec.begin(), vec.end(), 
		[&first, &step]() {return first + step; }
	);

	copy(vec.begin(), vec.end(), 
		ostream_iterator<int>(cout, "\n"));
}