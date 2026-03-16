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
	string input;
	map<char, int> table;
	int num;
	
	table['I'] = 1;
	table['V'] = 5;
	table['X'] = 10;
	table['L'] = 50;
	table['C'] = 100;
	table['D'] = 500;
	table['M'] = 1000;
	
	//cout << table["M"] << endl;
	
	while (cin >> input)
	{
		num = 0;
		//cout << input[0] << endl;
		
		for (int i=0; i<input.length()-1; i++)
		{
			//cout << input[i] << endl;
			//cout << table[ input[i] ] << endl;
			
			if (table[input[i]] < table[input[i+1]])
			{
				num -= table[input[i]];
			} else {
				num += table[input[i]];
			}
			
		}
		num += table[input[input.length()-1]];
		cout << num << endl;
	}
	
	return 0;
}