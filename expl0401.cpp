/// Read the program and determine what the program does.

#include <iostream>

int main()
{
	int sum{ 0 };
	int count{};
	int x;

	while (std::cin >> x)
	{
		sum = sum + x;
		count++;
	}

	if (count != 0)
	{
		std::cout << "average = " << sum / count << '\n';
	}
}