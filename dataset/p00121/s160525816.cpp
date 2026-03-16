#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef queue< pair<int, int> > qpii;
typedef vector<int> vi;
typedef vector<int, int> vii;
typedef vector<string> vs;
typedef vector< pair<int, int> > vpii;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

map<string, int> d;

void bfs() {
	int dn[4] = {4, -4, -1, 1};
	queue<string> qs;

	qs.push("01234567");
	d["01234567"] = 0;

	while(qs.size()) {
		string s = qs.front(); qs.pop();
		int n = s.find("0");
		rep(i,0,4) {
			int ne = n + dn[i];
			if(0<=ne && ne<8) {
				if((n==4&&ne==3) || (n==3&&ne==4)) continue;
				string ss = s;

				char tmp = ss[n];
				ss[n] = ss[ne];
				ss[ne] = tmp;

				if(d.find(ss)==d.end()) {
					qs.push(ss);
					d[ss] = d[s] +1;
				}
			}
		}
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	bfs();

	while(1) {
		string in = "";
		char num;
		rep(i,0,8) {
			if(cin >> num) in += num;
			else return 0;
		}
		cout << d[in] << endl;
	}

	return 0;
}