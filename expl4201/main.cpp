#include <iostream>
#include <iso646.h>
#include <string>

#include "generate_id.hpp"
#include "library.hpp"

bool get_movie(std::string& title, int& runtime)
{
	std::cout << "Movie title: ";
	if (not std::getline(std::cin, title))
	{
		return false;
	}

	std::cout << "Runtime (minutes): ";
	if (not (std::cin >> runtime))
	{
		return false;
	}

	return true;
}

std::string int_to_id(long gen)
{
	return std::to_string(gen);
}

int main()
{
	generate_id gen{}; // Create an ID generator
	std::string title{};
	int runtime{};
	while (get_movie(title, runtime))
	{
		movie m(int_to_id(gen()), title, runtime);
		//accession(m);
	}
}
