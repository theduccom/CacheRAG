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

string b(int a[]) {
	int cnt[14+4] = {};
	for (int i = 0; i < 5; i++)
		cnt[a[i]]++;

	string r = "null";
	int c[6] = {};
	for (int i = 1; i <= 13; i++) {
		c[cnt[i]]++;
		if (cnt[i] && cnt[i + 1] && cnt[i + 2] && cnt[i + 3] && cnt[i + 4])
			r = "straight";
	}
	if (cnt[10] && cnt[11] && cnt[12] && cnt[13] && cnt[1])
		r = "straight";

	if (c[4])r = "four card";
	else if (c[3] && c[2])r = "full house";
	else if (c[3])r = "three card";
	else if (c[2] == 2)r = "two pair";
	else if (c[2])r = "one pair";

	return r;
}

int main() {
	int a[5];
	char c;
	while (cin >> a[0] >> c >> a[1] >> c >> a[2] >> c >> a[3] >> c >> a[4])
		cout << b(a) << endl;

	return 0;
}