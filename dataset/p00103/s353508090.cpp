#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)

using namespace std;

int n, point, out;
bool b[5];
string s;

int main(){
	cin >> n;
	REP(k, n){
		while (true){
			cin >> s;
			if (s == "HIT"){
				if (b[3]) { point++; b[3] = 0; }
				if (b[2]) { b[3] = 1; b[2] = 0; }
				if (b[1]) { b[2] = 1; }
				b[1] = 1;
			}
			else if (s == "OUT") {
				out++;
				if (out == 3) { cout << point << endl; break; }
			}
			else if (s == "HOMERUN"){
				if (b[1]) point++;
				if (b[2]) point++;
				if (b[3]) point++;
				point++;
				b[1] = b[2] = b[3] = 0;
			}
		}
		point = 0;
		out = 0;
		b[1] = b[2] = b[3] = 0;
	}
}