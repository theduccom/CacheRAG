#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int base[6], out = 0, score = 0, n, eventnum = 0, a = 0;
vector<string> event;
string s;

void Hit()
{
	base[2] = 0;
	if (base[1]) base[2] = 1;
	if (base[0]) base[1] = 1;
	base[0] = 1;
}

void Homerun()
{
	for (int j = 0; j < 3; j++)	{
		base[j] = 0;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < 3*n; i++) {
		while (true) {
			cin >> s;
			event.push_back(s);
			a++;
			eventnum++;
			if (event.at(a - 1) == "OUT") break;
		}
	}
	for (int i = 0; i < eventnum; i++) {
		if (event.at(i) == "HIT") {
			if (base[2] == 1) score += 1;
			Hit();
		}
		else if (event.at(i) == "HOMERUN")	{
			score += (base[0] + base[1] + base[2] + 1);
			Homerun();
		}
		else {
			out++;
			if (out == 3) {
				cout << score << endl;
				for (int j = 0; j < 3; j++) base[j] = 0;
				score = out = 0;
			}
		}
	}
	return 0;
}