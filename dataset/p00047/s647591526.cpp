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

int main() {
	int a[3] = { 1 };
	for (char b,c,d; cin >> b>>c>>d;) {
		switch (b + d) {
		case 'B' + 'C':
			swap(a[1], a[2]);
			break;
		case 'C' + 'A':
			swap(a[2], a[0]);
			break;
		case 'A' + 'B':
			swap(a[0], a[1]);
			break;
		}
	}
	if (a[0])cout << "A" << endl;
	else if (a[1])cout << "B" << endl;
	else cout << "C" << endl;
	

	return 0;
}