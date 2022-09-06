#include <iostream>

int main()
{
	int answer{ 42 };			// definition of a named object, also an lvalue.
	int& ref{ answer };		// declaration of a reference named ref
	ref = 10;							// changes the value of answer
	std::cout << answer << std::endl;
	int const& cent{ ref * 10 };	// declaration; must be const to initialize with expr
	std::cout << cent << std::endl;
}