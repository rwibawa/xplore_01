#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

#include "sequence.hpp"

int main()
{
	using namespace std;

	int size{};
	cout << "How many integers do you want? ";
	cin >> size;

	int first{};
	cout << "What is the first integer? ";
	cin >> first;

	int step{};
	cout << "What is the interval between successive integer? ";
	cin >> step;

	vector<int> data(size);
	// Generate the integers to fill the vector.
	generate(data.begin(), data.end(), 
		sequence(first, step));

	// Print the resulting integers, one per line.
	copy(data.begin(), data.end(), 
		ostream_iterator<int>(cout, "\n"));
}