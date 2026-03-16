#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	int i, max;
	string str[1000];
	cin >> max; getchar();
	for(i = 0; i < max; i++)
		getline(cin, str[i]);

	for(i = 0; i < max; i++)
	{
		string::size_type pos(str[i].find("Hoshino"));
		while(pos != string::npos)
		{
			str[i].replace(pos, strlen("Hoshina"), "Hoshina");
			pos = str[i].find("Hoshino", pos + strlen("Hoshina"));
		}
		cout << str[i] << endl;
	}
}