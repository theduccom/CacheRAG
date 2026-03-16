#include<iostream>
#include<cmath>

int main()
{
	double Xa,Ya,Xb,Yb,Ra,Rb,d;

	int N;

	std::cin >> N;

	for(int i=0;i<N;++i)
	{		
		std::cin >> Xa >> Ya >> Ra >> Xb >> Yb >> Rb;

		d=sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb));

		if(d<Ra-Rb)
		{
			std::cout << '2' << '\n';
		}

		else if(d<Rb-Ra)
		{
			std::cout << "-2" << '\n';
		}

		else if(Ra+Rb<d)
		{
			std::cout << '0' << '\n';
		}

		else
		{
			std::cout << '1' << '\n';
		}
	}
}