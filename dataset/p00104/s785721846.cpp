#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define rep(I,N) for(int I = 0; I < (int)(N); I++)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
string IntToStr(int);


int main(void){
	int h, w;
	while(cin >> h >> w, h){
		char S[103][103];
		int map[102][102];
		fill_n(*map, 102*102, -1);
		rep(i, h){
			cin >> S[i];
			rep(j,w){
				if(S[i][j] == '>')map[i][j] = 0;
				else if(S[i][j] == '<')map[i][j] = 1;
				else if(S[i][j] == '^')map[i][j] = 2;
				else if(S[i][j] == 'v')map[i][j] = 3;
			}

		}
		int memo[102][102];
		fill_n(*memo, 102*102, 0);
		int x = 0;
		int y = 0;
		int cnt = 0;
		while(1){
			if(S[y][x] == '.'){
				cout << x << " " << y << endl;
				break;
			}
			if(memo[y][x] == 1 && cnt != 0){
				FIN("LOOP");
				break;
			}
			int dir = map[y][x];
			memo[y][x] = 1;
			x += dx[dir];
			y += dy[dir];
			cnt++;
		}
	}

	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}