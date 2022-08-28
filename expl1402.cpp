#include <cstdio>
#include <fstream>
#include <iostream>

int main()
{
	using namespace std;

	ifstream in{ "list1402.in" };
	if (!in)
	{
		perror("list1402.in");

		return 1;
	}

	ofstream out{ "list1402.out" };
	if (!out)
	{
		perror("list1402.out");

		return 1;
	}

	int x{};
	while (in >> x)
	{
		out << x << '\n';
	}

	out.close();
	in.close();
}
