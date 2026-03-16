#include <iostream>
#include <math.h>
#include <queue>
#include <map>
#include <string>
using namespace std;
typedef pair <int, int>P;
map<int, int> d;
queue<P> que;
int t[8] = { 1,10,100,1000,10000,100000,1000000,10000000 };
int bfs() {
	queue<P> que;
	que.push(P(81234567,7));
	d[81234567] = 0;
	while (que.size()) {
		P p = que.front(); que.pop();
		//if (p.first == 81234567)  break; 
	    int a1;
		if (p.second!=7&&p.second!=3) {
		a1 = p.first + (8 - (p.first / t[p.second+1]) % 10)*(t[p.second + 1] - t[p.second + 1] / 10);
			if (d[a1] == 0) {
				que.push(P(a1, p.second + 1));
				d[a1] = d[p.first] + 1;
			}
		}
	    int b1;
		if (p.second != 0&&p.second != 4) {
		b1 = p.first + (8 - (p.first / t[p.second - 1]) % 10)*(-10* t[p.second - 1] + t[p.second - 1]);
			if (d[b1] == 0) {
				que.push(P(b1, p.second - 1));
				d[b1] = d[p.first] + 1;
			}
		}
	    int c1;
		if (p.second<4) {
		c1 = p.first + (8 - (p.first / (t[p.second] * t[4])) % 10)*(t[p.second] *t[4]- t[p.second]);
			if (d[c1] == 0) {
				que.push(P(c1, p.second + 4));
				d[c1] = d[p.first] + 1;
			}
		}
	    int e1;
		if (p.second > 3) {
		e1 = p.first - (8 - (p.first / (t[p.second] /t[4])) % 10)*(t[p.second] - t[p.second] /t[4]);
			if (d[e1] == 0) {
				que.push(P(e1, p.second - 4));
				d[e1] = d[p.first] + 1;
			}
		}
	}
}
int main() {
	bfs();
	int  x = 0, y = 0, z = 0; int a[8]; bool flag = true;
	while (flag) {
		x = 0;
		for (int i = 0; i < 8; i++) {
			cin >> a[i];
			if (a[i] == 0) { a[i] = 8; y = 7 - i; }
			x += a[i] * t[7 - i];
		}
		if (z == x) {
			break;
		}
		else {
			z = x;
		}
		if (x == 81234567) { cout << 0 << endl; }
		else { cout << d[x] << endl; }
	}
}