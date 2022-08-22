#include <iomanip>
#include <iostream>

int main()
{
  //std::cout << " N    N^2     N^3\n";
  std::cout << std::setw(3) << "N";
  std::cout << std::setw(4) << "N^2";
  std::cout << std::setw(5) << "N^3" << '\n';

  for (int i{1}; i < 21; i++)
  {
	std::cout << std::setw(3) << i;
	std::cout << std::setw(4) << (i * i);
	std::cout << std::setw(5) << (i * i * i) << '\n';
  }
  
}