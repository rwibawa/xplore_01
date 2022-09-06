#include <iostream>
#include <iso646.h>

int main()
{
	using namespace std;

	int value{};
	bool have_value{ false };
	char ch{};

	while (cin.get(ch))
	{
		if (ch >= '0' and ch <= '9')
		{
			value = ch - '0';
			have_value = true;
			while (cin.get(ch) and ch >= '0' and ch<= '9')
			{
				value = value * 10 + ch - '0';
			}
		}

		if (ch == '\n')
		{
			if (have_value)
			{
				cout << value << '\n';
				have_value = false;
			}
		}
		else if (ch != ' ' and ch != '\t')
		{
			cout << '\a'; // chime
			have_value = false;
			while (cin.get(ch) and ch != '\n')
			{
				/*empty*/
			}
		}
		
	}
}
