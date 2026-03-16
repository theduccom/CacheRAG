#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int one, all, i;
	double many, heikin;
	
	all = 0;
	
	i = 0;
	
	while(scanf("%d,%lf", &one, &many) != EOF)
	{
		
		all += one * many;
		
		heikin += many;
		
		i++;
	
	}
	
	printf("%d\n%.f\n", all, (heikin / i + 0.5)); 
		
	
    return 0;
}