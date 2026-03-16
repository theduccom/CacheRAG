#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)
#define size_of(a) (int)(a).size()
#define allof(a) (a).begin(),(a).end()

int to[8][3] = {
	{1, 4, -1},
	{0, 2, 5},
	{1, 3, 6},
	{2, 7, -1},
	{0, 5, -1},
	{1, 4, 6},
	{2, 5, 7},
	{3, 6, -1},
};

struct State {
	int step, p[8];
	
	int zero() {
		for_(i,0,8) if (p[i] == 0) return i;
		return -1;
	}
	
	int getHash() {
		int hash = 0;
		for_(i,0,8) hash = 10 * hash + p[i];
		return hash;
	}
};

int main() {
	State ini;
	ini.step = 0;
	for_(i,0,8) ini.p[i] = i;
	
	map< int, int > hash;
	hash[ini.getHash()] = 0;
	
	queue< State > que;
	que.push(ini);
	
	while (!que.empty()) {
		State s = que.front(); que.pop();
		
		s.step++;
		
		int t = s.zero();
		
		for_(i,0,3) {
			int nxt = to[t][i];
			
			if (nxt != -1) {
				swap(s.p[t], s.p[nxt]);
				
				int hs = s.getHash();
				
				if (hash.find(hs) == hash.end()) {
					que.push(s);
					hash[hs] = s.step;
				}
				
				swap(s.p[t], s.p[nxt]);
			}
		}
	}
	
	int dumy;
	while (cin >> dumy) {
		ini.p[0] = dumy;
		for_(i,1,8) cin >> ini.p[i];
		cout << hash[ini.getHash()] << endl;
	}
}