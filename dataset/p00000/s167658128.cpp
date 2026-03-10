#include<iostream>
using namespace std;

int main()
{
	for(int i = 1;i < 10;i++)
	{
		for(int m = 1;m < 10;m++)
		{
			std::cout << i << "x" << m << "=" << i*m << std::endl;
		}
	}
    return 0;
}