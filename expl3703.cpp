#include <iostream>

class base
{
public:
	base() { std::cout << "base" << std::endl; }
	~base() { std::cout << "~base" << std::endl; }
};

class middle : public base
{
public:
	middle() { std::cout << "middle" << std::endl; }
	~middle() { std::cout << "~middle" << std::endl; }
};

class derived : public middle
{
public:
	derived() { std::cout << "derived" << std::endl; }
	~derived() { std::cout << "~derived" << std::endl; }
};

int main()
{
	derived d;
}