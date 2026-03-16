#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-8

int main(){

	vector<vector<int>>cnt(10, vector<int>(10, 0));
	
	while(1){
		int x, y, c;
		if(scanf("%d,%d,%d", &x, &y, &c) == EOF)break;
		if(c == 1){
			for(int i = -1; i <= 1; i++){
				for(int j = -1; j <= 1; j++){
					if(abs(i) + abs(j) > 1) continue;
					int xx = x + i, yy = y + j;
					if(0 <= xx && xx < 10 && 0 <= yy && yy < 10)cnt[yy][xx]++;
				}
			}
		}
		else if(c == 2){
			for(int i = -1; i <= 1; i++){
				for(int j = -1; j <= 1; j++){
					int xx = x + i, yy = y + j;
					if(0 <= xx && xx < 10 && 0 <= yy && yy < 10)cnt[yy][xx]++;
				}
			}
		}
		else{
			for(int i = -2; i <= 2; i++){
				for(int j = -2; j <= 2; j++){
					if(abs(i) + abs(j) > 2) continue;
					int xx = x + i, yy = y + j;
					if(0 <= xx && xx < 10 && 0 <= yy && yy < 10) cnt[yy][xx]++;
				}
			}
		}
		
	}
	
	int free = 0;
	int maxi = 0;
	rep(i, 10){
		rep(j, 10){
			if(cnt[i][j] == 0) free++;
			maxi = max(maxi, cnt[i][j]);
		}
	}
	
	cout << free << endl << maxi << endl;
	
	return 0;
}