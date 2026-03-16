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
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	int n;
	cin >> n;
	string S;
	rep(i,n){
		int OUT = 0;
		int mnd = 0;
		int score = 0;
		while(OUT != 3){
			cin >> S;
			if(S == "OUT")OUT++;
			if(S == "HIT"){
				mnd++;
				if(mnd > 3){
					mnd--;
					score++;
				}
			}
			if(S == "HOMERUN"){
				score += mnd+1;
				mnd = 0;
			}
		}
		FIN(score);

	}

	return 0;
}