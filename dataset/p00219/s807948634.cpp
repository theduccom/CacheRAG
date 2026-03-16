#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>

//#define PI 3.141592653589

using namespace std;



int main()
{
	int n;
	int ice[10];
	int type;
	
	while (1)
	{
		cin >> n;
		if (n == 0) break;
		
		for (int i=0; i<10; i++) ice[i] = 0;
		for (int i=0; i<n; i++)
		{
			cin >> type;
			ice[type]++;
		}
		for (int i=0; i<10; i++)
		{
			if (ice[i] == 0)
			{
				cout << "-";
			} else {
				for (int j=0; j<ice[i]; j++)
				{
					cout << "*";
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}