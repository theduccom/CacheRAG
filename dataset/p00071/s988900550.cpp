#include <iostream>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <sstream>
#include <istream>
#include <cmath>
#include <cstdio>

using namespace std;

#define vci vector<int>
#define vcs vector<string>
#define pb push_back
#define sz size()
#define mapii map<int, int>
#define mapci map<char, int>
#define mapsi map<string, int>
#define all(x) x.begin(), x.end()
#define minit(a, i) memset(a, i, sizeof(a));

#define for_(i, a, b) for (int i=(int)a; i<(int)b; i++)
#define for_d(i, a, b) for (int i=(int)a-1; i>=b; i--)
#define for_r(i, a, b, c) for (int i=(int)a; i<(int)b; i += c)
#define for_dr(i, a, b, c) for (int i=(int)a-1; i>=b; i -= c)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

template <class T> int __builtin_popcount(T n) { return n ? 1 + __builtin_popcount(n & (n - 1)) : 0; }

typedef long long ll;
typedef double D;

const int iINF = 2147483647;
const ll lINF = 9223372036854775807;

template <class T> inline void dbg(T t) { cout << t << endl; }


int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};


void solve(vcs& board, int bi, int bj) {
	board[bi][bj] = '0';
	
	for_(d, 0, 4) {
		for_(k, 1, 4) {
			int ni = bi + dx[d]*k, nj = bj + dy[d]*k;
			if (ni<0 || ni>=8 || nj<0 || nj>=8) continue;
			
			if (board[ni][nj]=='1') solve(board, ni, nj);
		}
	}
}

int main() {
	int n; cin >> n;
	
	for_(i, 0, n) {
		vcs board(8);
		for_(j, 0, 8) cin>>board[j];
		
		int bi, bj; cin>>bj>>bi;
		
		cout << "Data " << i+1 << ":" << endl;
		solve(board, bi-1, bj-1);
		for_(j, 0, 8) cout << board[j] << endl;
	}
	
	return 0;
}