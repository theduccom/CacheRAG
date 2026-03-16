#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <fstream>
#include <tuple>
#include <set>
#include <functional> 
#include <string.h>
//#include <assert.h>
//#include <typeinfo.h>
#include <time.h>

#define X first
#define Y second
#define MP make_pair
#define MT make_tuple
#define FOR(i, n) for(int (i) = 0; (i) < (n); ++(i))
#define REP(i, a, n) for(int (i) = (a); (i) < (n); ++(i))
typedef long long ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll > pll;
using namespace std;

const int INIT_SIZE_MAX = (1 << 29) + 10;
const int INIT_SIZE_MIN = -(1 << 29) - 10;
const int INIT_SIZE = 0;
const int MAX = 8;
const int DIR_SIZE = 12;
const double PI = 3.1415926535897932384;

template<class T, class U>
void convert(T &t, U &u){
	stringstream ss;
	ss << t;
	ss >> u;
}

int dx[] = { -1, 0, 1, 0, -2, 0, 2, 0, -3, 0, 3, 0};
int dy[] = { 0, -1, 0, 1, 0, -2, 0, 2, 0, -3, 0, 3};

int main(){
	int n; cin >> n;
	FOR(k, n){
		cin.ignore();

		vector<vector<char> > tb(MAX, vector<char>(MAX, ' '));
		FOR(i, MAX) FOR(j, MAX) cin >> tb[i][j];

		pii s;
		cin >> s.X >> s.Y;
		--s.X; --s.Y;

		queue<pii> q;
		q.push(s);

		while (!q.empty()){
			pii t = q.front(); q.pop();

			if (tb[t.Y][t.X] == '0') continue;

			tb[t.Y][t.X] = '0';

			FOR(i, DIR_SIZE){
				if (t.X + dx[i] < 0 || t.X + dx[i] >= MAX) continue;
				if (t.Y + dy[i] < 0 || t.Y + dy[i] >= MAX) continue;

				if (tb[t.Y + dy[i]][t.X + dx[i]] == '1'){
					q.push(MP(t.X + dx[i], t.Y + dy[i]));
				}
			}

		}

		cout << "Data " << k + 1 << ":" << endl;
		FOR(i, MAX){
			FOR(j, MAX){
				cout << tb[i][j];
			}
			cout << endl;
		}

	}
	return 0;
}