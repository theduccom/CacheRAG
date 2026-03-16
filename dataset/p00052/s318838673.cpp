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



int two;
int five;

void two_five(int i)
{
	//cout << "i = " << i << endl;
	if (i % 2 == 0 && i > 0)
	{
		two++;
		two_five(i / 2);
	} else if (i % 5 == 0 && i > 0) {
		five++;
		two_five(i / 5);
	}
}

int main()
{
	int n;
	
	while (cin >> n)
	{
		if (n == 0) break;
		two = five = 0;
		for (int i=n; i>=1; i--)
		{
			two_five(i);
		}
		cout << min(two, five) << endl;
	}
	
	return 0;
}