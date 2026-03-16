#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	char commma;
	int num;
	string blood;
	int a = 0, b = 0, ab = 0, o = 0;
	while (1) {
		cin >> num >> commma >> blood;
		if (cin.eof())break;//??\????????????????????°break
		if (blood == "A")a++;
		else if (blood == "B")b++;
		else if (blood == "AB")ab++;
		else o++;
	}
	cout << a << endl;
	cout << b << endl;
	cout << ab << endl;
	cout << o << endl;
	return 0;
}