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
	string input;
	int numbers[8];
	int min, max;
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> input;
		for (int i=0; i<8; i++)
		{
			numbers[i] = atoi(input.substr(i, 1).c_str());
		}
		sort(numbers, numbers+8);
		
		/*
		for (int i=0; i<8; i++)
		{
			cout << numbers[i] << " ";
		}
		*/
		
		max = 10000000*numbers[7]+1000000*numbers[6]+100000*numbers[5]+10000*numbers[4]+1000*numbers[3]+100*numbers[2]+10*numbers[1]+numbers[0];
		min = 10000000*numbers[0]+1000000*numbers[1]+100000*numbers[2]+10000*numbers[3]+1000*numbers[4]+100*numbers[5]+10*numbers[6]+numbers[7];
		cout << max - min << endl;
	}
	
	return 0;
}