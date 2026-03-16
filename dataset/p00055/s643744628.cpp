#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <iomanip>
#include <vector>

using namespace std;



int main()
{
	double a;
	double suretu[10];
	double s;
	
	cout << fixed << setprecision(8);
	
	while (cin >> a)
	{
		s = 0;
		
		suretu[0] = a;
		for (int i=1; i<10; i++)
		{
			if (i % 2 == 0)
			{
				//奇数番目の項
				suretu[i] = suretu[i-1] / 3;
			} else {
				//偶数番目の項
				suretu[i] = suretu[i-1] * 2;
			}
		}
		
		for (int i=0; i<10; i++) s += suretu[i];
		
		cout << s << endl;
	}
	
	return 0;
}