#include <algorithm>
#include <iostream>
#include <iso646.h>
#include <iterator>
#include <locale>
#include <string>
#include <cctype>

/** Determine whether @p str is a palindrome.
 * Only letter characters are tested. Spaces and punctuation don't count.
 * Empty strings are not palindromes because that's just too easy.
 * @param str the string to test
 * @return true if @p str is the same forward and backward
 */
bool is_palindrome(std::string str)
{
	using namespace std;

	// Filter the string to keeep only letters
	string::iterator end{ remove_if(str.begin(), str.end(),
		[](char ch)
		{
			return not std::isalpha(ch, locale());
		})
	};

	// Reverse the filtered string.
	string rev{ str.begin(), end };
	reverse(rev.begin(), rev.end());

	// Compare the filtered string with its reversal, without regard to case.
	return not rev.empty() and equal(str.begin(), end, rev.begin(), 
		[](char a, char b)
		{
			auto lowercase = [](char ch)
			{
				return tolower(ch, locale());
			};

			return lowercase(a) == lowercase(b);
		});
}

int main()
{
	using namespace std;

	locale::global(locale{""});
	cin.imbue(locale());
	cout.imbue(locale());

	string line{};
	while (getline(cin, line))
	{
		if (is_palindrome(line))
		{
			cout << line << '\n';
		}
	}
}
