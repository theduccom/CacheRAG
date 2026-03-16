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
	int n;
	string event;
	int out;
	int rui[4];
	int tokuten;
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		out = 0;
		tokuten = 0;
		for (int j=0; j<4; j++) rui[j] = 0;
		while (cin >> event)
		{
			if (event == "HIT")
			{
				rui[3] = rui[2];
				rui[2] = rui[1];
				rui[1] = rui[0];
				rui[0] = 1;
				tokuten += rui[3];
				rui[3] = 0;
			} else if (event == "HOMERUN") {
				tokuten += rui[0] + rui[1] + rui[2] + 1;
				rui[0] = rui[1] = rui[2] = 0;
			} else if (event == "OUT") {
				out += 1;
				if (out == 3)
				{
					cout << tokuten << endl;
					break;
				}
			}
		}
	}
	
	return 0;
}