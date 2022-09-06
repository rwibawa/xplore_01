#include <iostream>
#include <utility>
#include <vector>

void print(const std::vector<int>& vector)
{
	std::cout << "{ ";
	for (int i: vector)
	{
		std::cout << i << ' ';
	}

	std::cout << "}" << std::endl;
}

int main()
{
	std::vector<int> source{ 1, 2, 3 };
	print(source);

	std::vector<int> copy{ source };
	print(copy);

	std::vector<int> move{ std::move(source) };
	print(move);
	print(source);
}
