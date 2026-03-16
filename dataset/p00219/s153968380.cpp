#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	while (1) {
		int a;
		cin >> a;
		if (a == 0)break;
		vector<int>s(10);
		for (int b = 0; b < a; b++)
		{
			int c;
			cin >> c;
			s[c]++;
		}
		for (int e : s) {
			if (e == 0)cout << '-' << endl;
			else {
				for (int f = 0; f < e; f++) {
					cout << '*';
				}
				cout << endl;
			}
		}
	}
}