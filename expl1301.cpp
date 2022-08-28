#include <algorithm>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>

int main()
{
	using namespace std;

	vector<int> data{};
	data.insert(data.begin(), istream_iterator<int>(cin), istream_iterator<int>());

	sort(data.begin(), data.end());

	{
		// Print the sorted vector all on one line. Start the line with "{" and
		// end the line with "}". Separate elements with commas. An empty vector prints
		cout << "{";
		string separator{ " " };
		for (int element : data)
		{
			cout << separator << element;
			separator = ", ";
		}

		cout << " }\n";
	}

	// Cannot use separator out here.
}