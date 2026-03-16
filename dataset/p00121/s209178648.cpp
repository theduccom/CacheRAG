#include <algorithm>
#include <cstdio>
#include <map>
#include <queue>
using namespace std;

map<int, int> ma;

int encode(int a[]) {
	int res = 0;
	for (int i = 0; i < 8; i++)
		res |= a[i] << (i * 3);
	return res;
}

void decode(int x, int a[]) {
	for (int i = 0; i < 8; i++)
		a[i] = (x >> (i * 3)) & 7;
}

void bfs() {
	int i[] = {0, 1, 2, 4, 5, 6, 0, 1, 2, 3};
	int j[] = {1, 2, 3, 5, 6, 7, 4, 5, 6, 7};
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int x = encode(a);
	ma[x] = 0;
	queue<int> que;
	que.push(x);
	while (!que.empty()) {
		int x = que.front();
		que.pop();
		int a[8];
		decode(x, a);
		for (int k = 0; k < 10; k++) {
			if (a[i[k]] != 0 && a[j[k]] != 0)
				continue;
			swap(a[i[k]], a[j[k]]);
			int _x = encode(a);
			if (ma.count(_x) == 0) {
				ma[_x] = ma[x] + 1;
				que.push(_x);
			}
			swap(a[i[k]], a[j[k]]);
		}
	}
}

int main() {
	bfs();
	for (;;) {
		int a[8];
		for (int i = 0; i < 8; i++)
			if (scanf("%d", &a[i]) == EOF)
				return 0;
		printf("%d\n", ma[encode(a)]);
	}
	return 0;
}