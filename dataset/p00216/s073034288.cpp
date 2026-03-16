#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#define REP(i, n) for(int i = 0;i < n;i++)
#define ll long long
#define INF 114514
using namespace std;




int main(){
	int w;
	while (1) {
		int p = 1150;
		cin >> w;
		if (w == -1) return 0;
		if (w > 10 && w <= 20) {
			p += 125 * (w - 10);
		}
		if (w > 20 && w <= 30) {
			p += 1250;
			p += 140 * (w - 20);
		}
		if (w > 30) {
			p += 2650;
			p += 160 * (w - 30);
		}
		cout << 4280 - p << endl;
	}
	return 0;
}