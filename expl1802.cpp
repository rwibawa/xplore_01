#include <iostream>
#include <locale>

int main()
{
	std::cout.imbue(std::locale{ "" });

	int sum{ 0 };
	int x{};
	while (std::cin >> x)
	{
		// input for x > 1000
		sum = sum + x;
	}

	std::cout << "sum = " << sum << '\n';
}