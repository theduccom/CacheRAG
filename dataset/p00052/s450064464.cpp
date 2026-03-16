#include<iostream>
#include<array>

int main()
{ 
	std::array<int,13> exp5;

	int Five =5;

	for(int i=0; i<13; ++i)
	{

		exp5[i] = Five;

		Five *= 5;
	}

	int n;

	while(1)
	{
		std::cin >> n;
		
		if(n==0)
		{
			break;
		}

		int count = 0;
	
		for(size_t i=0; i<exp5.size(); ++i)
		{
			count += n/exp5[i];
		}
		
		std::cout << count << '\n';

	}
}