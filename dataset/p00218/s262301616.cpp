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
	int pm[10000], pe[10000], pj[10000];
	
	while (1)
	{
		cin >> n;
		if (n == 0) break;
		
		for (int i=0; i<n; i++)
		{
			cin >> pm[i] >> pe[i] >> pj[i];
			if (pm[i]==100 || pe[i]==100 || pj[i]==100)
			{
				cout << "A" << endl;
			} else if ((pm[i]+pe[i]) / 2 >= 90) {
				cout << "A" << endl;
			} else if ((pm[i]+pe[i]+pj[i]) / 3 >= 80) {
				cout << "A" << endl;
			} else if ((pm[i]+pe[i]+pj[i]) / 3 >= 70) {
				cout << "B" << endl;
			} else if (((pm[i]+pe[i]+pj[i]) / 3 >= 50) && (pm[i] >= 80 || pe[i] >= 80)) {
				cout << "B" << endl;
			} else {
				cout << "C" << endl;
			}
		}
	}
	
	return 0;
}