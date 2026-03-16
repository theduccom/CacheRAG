#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<queue>
#include<stack>
#include<deque>
using namespace std;

int main() {
	int a; cin >> a;
	for (int b = 0; b < a; b++) {
		double x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double s = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		if (s+r1<r2) {
			puts("-2");
		}
		else if (s+r2<r1) {
			puts("2");
		}
		else if (s - r2 - r1 > 0) {
			puts("0");
		}
		else puts("1");
	}
}