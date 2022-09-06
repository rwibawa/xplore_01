#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
 
int main()
{
	using namespace std;

	vector<int> data{};

	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(data));
	transform(data.begin(), data.end(), data.begin(), [](int x) { return x * 2; });

	copy(data.begin(), data.end(), ostream_iterator<int>(cout, "\n"));
}