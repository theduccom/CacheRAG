#include<iostream>

int main()
{
	double height, max=0, min=0;

	bool flg=1;

	while(std::cin >> height)
	{
		if(flg)
		{
			max=height;

			min=height;

			flg=0;
		}

		if(height>max)
		{
			max = height;
		}

		if(height<min)
		{
			min = height;
		}
	}

	std::cout << max-min << '\n';
}