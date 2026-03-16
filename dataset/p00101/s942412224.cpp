#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cstdio>





using namespace std;


int main()
{
	int count;
	string input, _input;

	getline(cin, _input);

	count = stoi(_input);

	for (int i = 0; i < count; i++)
	{
		getline(cin, input);
	

		while (input.find("Hoshino") != string::npos)
		{
			input.replace(input.find("Hoshino"), 7 ,"Hoshina");
		}

		cout << input << endl;
	}

	



}