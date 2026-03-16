#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int a,b;
	int t;

	int countt=0;
	int counth=0;

	string input;
	string n;

	stringstream ss;

	while(1)
	{
		cin >> input;
		if(cin.eof())
			break;
		ss.clear();
		ss << input.substr(0,input.find(','));
		ss >> a;
		input = input.substr(input.find(',')+1);

		ss.clear();
		ss << input.substr(0,input.find(','));
		ss >> b;
		input = input.substr(input.find(',')+1);

		ss.clear();
		ss << input.substr(0,input.find(','));
		ss >> t;
		if(a*a+b*b == t*t)//直角を持つ
		{
			if(a == b);// ++counth;
			else
				++countt;
		}
		else
			if(a == b)
				++counth;
	}
	cout << countt << endl;
	cout << counth << endl;
	//system("pause");
	return 0;
}