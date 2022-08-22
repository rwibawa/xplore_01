#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
  using namespace std;

  vector<int> data{}; // initialized to be empty
  int x{};

  // Read integers one at a time
  while (cin >> x)
  {
	// Store each integer in the vector
	data.push_back(x);
  }

  // Sort the vector
  sort(data.begin(), data.end());

  // Print the vector, one number per line
 /* for (vector<int>::iterator i{ data.begin() }, end{ data.end() }; i < end; i++)
  {
	cout << *i << '\n';
  }*/

 // for each (int element in data)
 // {
	//cout << element << '\n';
 // }

  for (int element : data) {
	cout << element << '\n';
  }
}