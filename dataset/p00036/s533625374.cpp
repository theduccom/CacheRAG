#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

int main() {
	while (true){
		if (cin.eof())
			break;
		bool cell[8][8] = { false };
		int ans = 0;
		string s;
		getline(cin, s);
		if (s.empty())
			continue;
		REP(j, 8){
			if (s[j] == '1')
				cell[0][j] = true;
		}
		REP(i, 7){
			getline(cin, s);
			REP(j, 8){
				if (s[j] == '1')
					cell[i+1][j] = true;
			}
		}
		REP(i, 8){
			REP(j, 8){
				if (cell[i][j]){
					REP(k, 3)
						REP(l, 3)
						if (i + (k - 1) >= 0 && i + (k - 1) < 8 && j + (l - 1) >= 0 && j + (l - 1) < 8 && cell[i + (k - 1)][j + (l - 1)])
							ans += 1 << (8 - (k * 3 + l));
					i = 8;
					j = 8;
				}
			}
		}
		switch (ans){
		case 27:
			cout << 'A' << endl;
			break;
		case 18:
			cout << 'B' << endl;
			break;
		case 24:
			cout << 'C' << endl;
			break;
		case 22:
			cout << 'D' << endl;
			break;
		case 25:
			cout << 'E' << endl;
			break;
		case 19:
			cout << 'F' << endl;
			break;
		case 30:
			cout << 'G' << endl;
			break;
		}
	}
}