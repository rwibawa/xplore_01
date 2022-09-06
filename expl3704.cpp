#include <iostream>
#include <vector>

class base
{
public:
	base(int value) : value_{ value } { std::cout << "base(" << value << ")" << std::endl; }
	base() : base{ 0 } { std::cout << "base" << std::endl; }
	base(base const& copy)
		: value_{copy.value_}
	{
		std::cout << "copy base(" << value_ << std::endl;
	}

	~base() { std::cout << "~base" << std::endl; }

	base& operator++()
	{
		++value_;
		return *this;
	}

	int value() const
	{
		return value_;
	}

private:
	int value_;
};

class derived : public base
{
public:
	derived(int value): base(value) { std::cout << "derived(" << value << ")" << std::endl; }
	derived() { std::cout << "derived" << std::endl; }
	derived(derived const& copy)
		:base(copy)
	{
		std::cout << "copy derived(" << value() << std::endl;
	}

	~derived() { std::cout << "~derived" << std::endl; }
};

derived make_derived()
{
	return derived{ 42 };
}

base increment(base& b)
{
	++b;
	return b;
}

void increment_reference(base& b)
{
	++b;
}

int main()
{
	derived d{ make_derived() };
	base b{ increment(d) };
	increment_reference(d);
	increment_reference(b);
	derived a(d.value() + b.value());
}
