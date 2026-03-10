#include <iostream>
int main()
{
  for (auto i = 0; i < 81; i++) {
    std::cout << (i / 9 + 1) << 'x' << (i % 9 + 1)
	      << '=' << ((i / 9 + 1) * (i % 9 + 1)) << std::endl;
  }
}

