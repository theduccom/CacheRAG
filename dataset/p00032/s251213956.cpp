#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int rectnum = 0;
	int lozenum = 0;
	while(true)
	{
	int a,b,c;
	cin >> a;
	if(cin.eof())break;
	fgetc(stdin);
	cin >> b;
	fgetc(stdin);
	cin >> c;
	if((a*a+b*b)==c*c)rectnum++;
	if(a==b)lozenum++;
	}
	cout << rectnum << endl;
	cout << lozenum << endl;
	return 0;
}