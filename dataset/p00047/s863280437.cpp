#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;

map<char, bool> cup;


int main()
{
	char cup1, cup2;
	bool temp;
	
	cup['A'] = true;
	cup['B'] = false;
	cup['C'] = false;
	
	while (~scanf("%c,%c\n", &cup1, &cup2))
	{
		//cout << cup1 << " " << cup2 << endl;
		temp = cup[cup1];
		cup[cup1] = cup[cup2];
		cup[cup2] = temp;
	}
	if (cup['A']) cout << "A" << endl;
	if (cup['B']) cout << "B" << endl;
	if (cup['C']) cout << "C" << endl;
	
	return 0;
}