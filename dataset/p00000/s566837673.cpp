#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;



int main()
{
	for (int i=1; i<=9; i++)
	{
		for (int j=1; j<=9; j++)
		{
			cout << i << "x" << j << "=" << i*j << endl;
		}
	}
	
	return 0;
}