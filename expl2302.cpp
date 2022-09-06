#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
 
int main()
{
	using namespace std;

	vector<int> data{};

	cout << "Multiplier: ";
	int multiplier{};
	cin >> multiplier;

	cout << "Data:\n";
	copy(istream_iterator<int>(cin), 
		istream_iterator<int>(), 
		back_inserter(data));

	transform(data.begin(), data.end(), data.begin(), 
		[&multiplier](int x) { return x * multiplier; });

	copy(data.begin(), data.end(), 
		ostream_iterator<int>(cout, "\n"));
}