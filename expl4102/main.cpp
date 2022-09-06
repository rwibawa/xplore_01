#include <iostream>
#include <vector>

#include "vital_stats.hpp"

int main()
{
	std::vector<vital_stats> vs_sets{};
	for (int i{1}; i <= 3; ++i)
	{
		vital_stats vs{};
		vs.read(std::cin, i);
		vs_sets.push_back(vs);
	}

	for (vital_stats vs : vs_sets)
	{
		vs.print(std::cout, 22);
	}
}