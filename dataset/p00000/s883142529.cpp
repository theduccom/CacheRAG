#include <iostream>

int main(){
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << i + 1 << "x" << j + 1 << "=" << (i + 1) * (j + 1) << '\n';
		}
	}
}
