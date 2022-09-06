#include <iostream>

struct demo
{
	demo()
	: demo{ 0 }
	{
		std::cout << "default constructor" << std::endl;
	}

	explicit demo(int x)
	: x_{x}
	{
		std::cout << "constructor(" << x << ")" << std::endl;
	}

	demo(demo const& that)
	: x_{that.x_}
	{
		std::cout << "copy constructor(" << x_ << ")" << std::endl;
	}

  int x_;
};

demo addone(demo d)
{
	++d.x_;
	return d;
}

int main()
{
	demo d1{};
	demo d2{ d1 };
	demo d3{ 42 };
	demo d4{ addone(d3) };
}
