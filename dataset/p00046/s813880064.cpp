#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;

vector<double> heights;

int main()
{
	double height;
	double hyoukousa;
	int num = 0;
	
	while (cin >> height)
	{
		heights.push_back(height);
		num++;
	}
	sort(heights.begin(), heights.end());
	hyoukousa = heights[num-1] - heights[0];
	/*
	for (int i=0; i<num; i++)
	{
		cout << heights[i] << endl;
	}
	*/
	cout << hyoukousa << endl;
	
	return 0;
}