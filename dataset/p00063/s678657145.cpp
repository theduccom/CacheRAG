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



bool check_string(string input)
{
	bool ret = true;
	for (int i=0; i<input.length(); i++)
	{
		if (input[i] != input[input.length() - i - 1])
		{
			ret = false;
		}
	}
	
	return ret;
}

int main()
{
	string input;
	int cnt = 0;
	
	while (cin >> input)
	{
		if (check_string(input))
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	
	return 0;
}