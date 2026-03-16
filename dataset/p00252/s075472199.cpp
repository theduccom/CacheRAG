#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits>
#include <sstream>

using namespace std;

int main (void)
{
	int a,b,c;

	cin >> a >> b >> c;


	if (c == 1)
	{
		cout << "Open" << endl;
	}
	else if (b == 1 && a == 1)
	{
		cout << "Open" << endl;
	}
	else
	{
		cout << "Close" << endl;
	}
}

