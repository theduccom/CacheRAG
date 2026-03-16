#include<iostream>
#include<string>
using namespace std;

string s[10];

int main() {
	while(1){
		int t = 0;
		int r = 0;
		bool flag = false;
		for (int i = 0; i < 8; i++) {
			if (!(cin >> s[i]))return 0;
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++)
			{
				if (s[i][j] == '1') {
					if (flag == false) { t = 8 * i + j; flag = true; };
					r += 8 * i + j;
				}
			}
		}
		r -= 4 * t;
		if (r == 18)cout << 'A' << endl;
		else if (r == 48)cout << 'B' << endl;
		else if (r == 6)cout << 'C' << endl;
		else if (r == 30)cout << 'D' << endl;
		else if (r == 20)cout << 'E' << endl;
		else if (r == 34)cout << 'F' << endl;
		else if (r == 16)cout << 'G' << endl; }
}