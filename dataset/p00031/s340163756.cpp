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

//C++11

int main() {
	for (int w; cin >> w;) {
		string s = "";
		for (int i = 9; i >= 0; i--) {
			int a = pow(2, i);
			if (w / a) {
				if (s == "")
					s = to_string(a);
				else
					s = to_string(a) + " " + s;
				w -= a;
			}
		}
		cout << s << endl;
	}

	return 0;
}