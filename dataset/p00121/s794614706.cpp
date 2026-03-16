#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <string>

#define pb push_back
#define all(c) (c).begin(), (c).end()

using namespace std;

#define N 8
#define BUFSIZE 32
char buf[BUFSIZE];
int d[4] = { 4, -4, 1, -1 };
int pow10[8] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000 };

int main()
{
	queue<int> q;
	map<int, int> m;
	q.push(1234567);
	m[1234567] = 0;
	while (!q.empty()) {
		int t = q.front();
		q.pop();
		if (t == 76543210) break;
		int z;
		int u = t;
		for (z = 0; z < N; ++z) {
			if (u % 10 == 0) break;
			u /= 10;
		}

		for (int i = 0; i < 4; ++i) {
			int k = z + d[i];
			if (k < 0 || k > 7) continue;
			if (z == 3 && k == 4 || z == 4 && k == 3) continue;
			int next = t;
			int d = next / pow10[k] % 10;
			next -= d * pow10[k];
			next += d * pow10[z];
			if (m.find(next) == m.end()) {
				m[next] = m[t] + 1;
				q.push(next);
			}
		}
	}
	while (fgets(buf, BUFSIZE, stdin) != NULL) {
		int ans;
		int v = 0;
		for (int i = 0; i < 15; i += 2)
			v = v * 10 + buf[i] - '0';
//		char* p = strtok(buf, " ");
//		while (p != NULL) { v = v * 10 + *p - '0'; p = strtok(NULL, " "); }
		if (m.find(v) != m.end())
			ans = m[v];
		else {
			queue<int> q2;
			map<int, int> m2;
			q2.push(v);
			m2[v] = 0;
			while (!q2.empty()) {
				int t = q2.front();
				q2.pop();
				if (t == 1234567) { ans = m2[t]; break; }
				int z;
				int u = t;
				for (z = 0; z < N; ++z) {
					if (u % 10 == 0) break;
					u /= 10;
				}

				for (int i = 0; i < 4; ++i) {
					int k = z + d[i];
					if (k < 0 || k > 7) continue;
					if (z == 3 && k == 4 || z == 4 && k == 3) continue;
					int next = t;
					int d = next / pow10[k] % 10;
					next -= d * pow10[k];
					next += d * pow10[z];
					/*
					if (m.find(next) != m.end()) {
						ans = m[next] + m2[t] + 1;
						break;
					}
					*/
					if (m2.find(next) == m2.end()) {
						m2[next] = m2[t] + 1;
						q2.push(next);
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}