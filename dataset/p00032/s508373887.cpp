#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>

//#define PI 3.141592653589

using namespace std;



int main()
{
	int hen1, hen2, taikaku;
	int tyouhoukei=0, hisigata=0;
	
	while (scanf("%d,%d,%d", &hen1, &hen2, &taikaku) != EOF)
	{
		if (taikaku*taikaku == hen1*hen1 + hen2*hen2) tyouhoukei++;
		if (hen1 == hen2) hisigata++;
	}
	cout << tyouhoukei << endl << hisigata << endl;
	
	return 0;
}