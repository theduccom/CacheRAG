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
	string input;
	string ans;
	int num;	//繰り返しの回数
	
	while (cin >> input)
	{
		ans = "";
		for (int i=0; i<input.length(); i++)
		{
			if (input[i] == '@')
			{
				num = (int)input[i+1] - 48;
				//cout << "num = " << num << endl;
				for (int j=0; j<num; j++)
				{
					ans += input[i+2];
				}
				i += 2;
			} else {
				ans += input[i];
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}