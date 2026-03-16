#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) cerr << #x << "=" << static_cast<bitset<16> >(x) << endl;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 100000000;
typedef double D;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={-1, 0, 1, 0}, dy[4]={0, -1, 0, 1};
using namespace std;
typedef pair<int, int> P;
/** Problem0121 : Seven Puzzle **/
map<string, int> list;
int d[4] = {1, -1, 4, -4};

int main()
{
	queue<string> Q;
	Q.push("01234567");
	list["01234567"] = 1;
	
	while (Q.size()) {
		string s = Q.front(); Q.pop();
		int pos = (int)s.find("0", 0);
		rep(i, 4) {
			int npos = pos+d[i];
			if (0<=npos && npos<8 && !(npos==3 && pos==4) && !(pos==3 && npos==4)) {
				string ns = s;
				swap(ns[pos], ns[npos]);
				if (list[ns] == 0) {
					Q.push(ns);
					list[ns] = list[s]+1;
				}
			}
		}
	}
	
	while (1) {
		string in;
		rep(i, 8) {
			char c; cin>>c;
			in+=c;
		}
		if (cin.eof()) break;
		cout << list[in]-1 << endl;
	}
}