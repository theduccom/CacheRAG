# include<iostream>

int main()
{
	const int NumOfCup = 2;

	char exchange[NumOfCup];

	char conma, BallIn='A';

	while(std::cin >> exchange[0] >> conma >> exchange[1])
	{
		for(int i=0; i<NumOfCup; ++i)
		{
			if(BallIn == exchange[i])
			{
				BallIn = exchange[(i+1)%2];

				break;
			}
		}
	}

	std::cout << BallIn << '\n';

}