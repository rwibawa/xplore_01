#include <iostream>
#include <map>
#include <string>

int main()
{
	using namespace std;

  map<string, int> counts{};
	//typedef map<string, int> count_map;
	using count_map = map<string, int>; // type alias, similar to the previous line
	typedef count_map::iterator count_iterator;

  // Read words from the standard input and count the number of times
  // each word occurs.
  string word{};
  while (cin >> word)
    ++counts[word];

	count_iterator the{ counts.find("the") };

	if (the == counts.end())
	{
		cout << "\"the\": not found\n";
	}
	else if (the->second == 1)
	{
		cout << "\"the\": occurs " << the->second << " time\n";
	}
	else
	{
		cout << "\"the\": occurs " << the->second << " times\n";
	}
}