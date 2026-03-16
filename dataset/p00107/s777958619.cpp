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
	int size[3];
	int n;
	int r;
	double diagonal;
	
	while (cin >> size[0] >> size[1] >> size[2])
	{
		if (size[0]==0 && size[1]==0 && size[2]==0) break;
		sort(size, size + 3);
		diagonal = sqrt(size[0] * size[0] + size[1] * size[1]);
		/*
		for (int i=0; i<3; i++)
		{
			cout << size[i] << endl;
		}
		*/
		cin >> n;
		for (int i=0; i<n; i++)
		{
			cin >> r;
			if (r * 2 > diagonal)
			{
				cout << "OK" << endl;
			} else {
				cout << "NA" << endl;
			}
		}
	}
	
	return 0;
}