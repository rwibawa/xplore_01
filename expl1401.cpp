#include <cstdio>
#include <fstream>
#include <iostream>

int main()
{
	using namespace std;

	ifstream in{ "Text.txt" };
	if (!in)
	{
		perror("Text.txt");
		in.close();

		return 1;
	}

	int x{};
	while (in >> x)
	{
		cout << x << '\n';
	}

	in.close();
}
