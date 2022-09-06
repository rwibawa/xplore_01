#include <iostream>

int generate_id()
{
  static int counter{0};
  return ++counter;
}

int main()
{
  for (int i = 0; i < 10; i++)
  {
    std::cout << generate_id() << std::endl;
  }
  
	for (int i = 0; i < 10; i++)
	{
		std::cout << generate_id() << std::endl;
	}
}