// fig06_11.cpp
// Compute the sum of the elements of an array using accumulate.
#include <array>
#include <iostream>
#include <numeric>

int main()
{
	using namespace std;
	constexpr array<int, 4> integers{10, 20, 30, 40};
	cout << "Total of array elements: " <<
			accumulate(begin(integers), end(integers), 0)
			<< '\n';
}