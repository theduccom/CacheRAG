#include <iostream>
#include <cstdio>
int main()
{
	double a,s;
	while(std::cin >> a)
	{
		if(std::cin.eof()) break;
		s=a;
		for(int i=2;i<=10;i++)
		{
			if(i%2) a/=3.0;
			else a*=2.0;
			s+=a;
		}
		printf("%.8f\n",s);
	}
}