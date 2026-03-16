#include <bits/stdc++.h>
#define FOR(v, a, b) for(int v = (a); v < (b); ++v)
#define FORE(v, a, b) for(int v = (a); v <= (b); ++v)
#define REP(v, n) FOR(v, 0, n)
#define UNWORDS(vec, str) for(int i = 0; i < (vec).size(); ++i) cout << (i ? str : "") << (vec)[i]
#define UNLINES(vec) for(int i = 0; i < (vec).size(); ++i) cout << (vec)[i] << endl
#define RS resize
#define CLR clear
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
using namespace std;

int dir[5] = {0,1,0,-1,0};

int field[14][14];

int rec(int x, int y){
	
	field[x][y] = 0;
	
	REP(i, 4){
		if(field[x + dir[i]][y + dir[i + 1]] == 1){
			rec(x + dir[i], y + dir[i + 1]);
		}
	}
	
	return 1;
}

int main(){
	
	vector< string > lines;
	string str;
	int cnt;
	
	while(cin >> str){
		lines.PB(str);
	}
	
	REP(i, lines.size() / 12){
		cnt = 0;
		FORE(j, 1, 12){
			FORE(k, 1, 12){
				field[j][k] = lines[j - 1 + i * 12][k - 1] - '0';
			}
		}
		
		FORE(j, 1, 12){
			FORE(k, 1, 12){
				if(field[j][k] == 1){
					cnt += rec(j, k);
				}
			}
		}
		cout << cnt << endl;
	}
	
	return 0;
}