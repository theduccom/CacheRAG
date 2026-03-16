#include <iostream>
#include <cmath>
#include <map>
#include <queue>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define INF 0x7f7f7f7f
#define PI acos(-1.0)

#define L(x)    (x) << 1
#define R(x)    (x) << 1 | 1
#define lowbit(x)   (x)&(-x)
#define Mid(l, r)   (l + r) >> 1
#define Min(x, y)   (x) < (y) ? (x) : (y)
#define Max(x, y)   (x) < (y) ? (y) : (x)
#define iabs(x)     (x) < 0 ? -(x) : (x)
#define CLR(arr, val)    memset(arr, val, sizeof(arr))

using namespace std;

map<string, int> res;

int dir[4] = {1, -1, 4, -4};

void bfs() {
	queue<string> que;
	que.push("01234567");
	while (!que.empty()) {
		string u = que.front();
		que.pop();

		int pos;
		for (int i = 0; i < 8; i++) {
			if (u[i] == '0')	pos = i;
		}
		for (int i = 0; i < 4; i++) {
			if (pos + dir[i] >= 0 && pos + dir[i] < 8 &&
			        !(pos == 3 && dir[i] == 1) && !(pos == 4 && dir[i] == -1)) {
				string v = u;
				swap(v[pos], v[pos + dir[i]]);
				if (res[v] == 0) {
					res[v] = res[u] + 1;
					que.push(v);
				}
			}
		}
	}
}

int main() {
	res["01234567"] = 1;
	bfs();
	
	char ch;
	while (cin >> ch) {
		string str = "";
		str += ch;
		for (int i = 1; i < 8; i++) {
			cin >> ch;
			str += ch;
		}
		cout << res[str] - 1 << endl;		
	}
	return 0;
}