#include <iostream>

int main()
{
	std::string shape{};
	int sides;

	std::cout << "Shape\tSides\n" << 
				 "-----\t-----\n";
	std::cout << "Square\t" << 4 << '\n' <<
				 "Circle\t?\n";
	std::cout << shape << '\t' << sides << 'n';
}