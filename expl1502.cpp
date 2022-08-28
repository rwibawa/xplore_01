#include <iomanip>
#include <iostream>
#include <map>
#include <string>

int main()
{
	using namespace std;

  map<string, int> counts{};

  // Read words from the standard input and count the number of times
  // each word occurs.
  string word{};
  while (cin >> word)
    ++counts[word];

	// Determine the longest word.
	string::size_type longest{};
	for (auto element : counts)
	{
		if (element.first.size() > longest)
		{
			longest = element.first.size();
		}
	}

  // For each word/count pair...
	constexpr int count_size{ 10 };	// Number of places for printing
	for (auto element : counts)
	{
		// Print the word, count, newline. Keep the columns neat.
		cout << setw(longest) << left << element.first << setw(count_size) << right << element.second << '\n';
	}
}