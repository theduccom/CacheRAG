#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;

map<string, int> ninzu;

int main()
{
	ninzu["A"] = 0;
	ninzu["B"] = 0;
	ninzu["AB"] = 0;
	ninzu["O"] = 0;
	
	int bangou;
	char kanma;
	string type;
	
	
	//scanf("%d%s", &bangou, &type);
	//cout << bangou << " " << type << endl;
	
	//while (~scanf("%d,%s\n", &bangou, &type))
	while (cin >> bangou >> kanma >> type)
	{
		//cout << type << endl;
		ninzu[type]++;
	}
	
	
	
	cout << ninzu["A"] << endl;
	cout << ninzu["B"] << endl;
	cout << ninzu["AB"] << endl;
	cout << ninzu["O"] << endl;
	
	
	return 0;
}