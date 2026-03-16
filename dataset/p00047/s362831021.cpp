#include<iostream>
int main()
{
	char place = 'A';
	for (char place1, place2, comma; std::cin >> place1 >> comma >> place2;)
	{
		if (place1 == place)
		{
			place = place2;
		}
		else if(place2==place)
		{
			place = place1;
		}
	}
	std::cout << place << std::endl;
	return 0;
}
