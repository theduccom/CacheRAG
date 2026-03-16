#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

string R = "IVXLCDM";
int r[7] = { 1,5,10,50,100,500,1000 };

int RtoA(string s) {
	int re = 0, si = s.size();
	if (si >= 2) {
		for (int i = 6; i >= 0; i--) {
			int a = s.find(R[i]);
			//cout << a << endl;
			if (a != -1) {
				//cout << RtoA(s.substr(0, a)) << " " << RtoA(s.substr(a + 1)) << endl;
				re = r[i] - RtoA(s.substr(0, a)) + RtoA(s.substr(a + 1));
				break;
			}
		}
	}
	else if (si == 1)
		re = r[R.find(s)];

	return re;
}

int main() {
	for (string s; cin >> s;)
		cout << RtoA(s) << endl;
	return 0;
}