#include <iostream>
#include <iso646.h>
#include <string>

/** Ignore the rest of the input line. */
void ignore_line()
{
	char c{};
	while (std::cin.get(c) and c != '\n')
	{
		/* empty */
	}

}

/** Prompt the user, then read a number, and ignore the rest of the line.
 * @param prompt the prompt string
 * @return the input number or 0 for the end-of-file
 */
int prompted_read(std::string prompt)
{
	std::cout << prompt;
	int x{ 0 };
	std::cin >> x;
	ignore_line();

	return x;
}

/** Print the statistics.
 * @param  count the number of values
 * @param sum the sum of the values
 */
void print_result(int count, int sum)
{
	using namespace std;

	if (count == 0)
	{
		cout << "no data\n";

		return;
	}

	cout << "\ncount	= " << count;
	cout << "\nsum		= " << sum;
	cout << "\nmean		= " << sum / count << '\n';
}

/// <summary>
/// Read integers from the standard input and print statistics about them.
/// </summary>
/// <returns></returns>
int main()
{
	int sum{ 0 };
	int count{ 0 };

	while (std::cin)
	{
		int x{ prompted_read("Value: ") };
		if (std::cin)
		{
			sum = sum + x;
			++count;
		}
	}

	print_result(count, sum);
}