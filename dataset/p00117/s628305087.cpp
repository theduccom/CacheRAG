#include <iostream>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;

typedef pair<int,int> mypair;


int dak(int st, int gl, int n, int m, vector<vector<int> > zct){
	vector<int> mct(n+1,1<<22);
	vector<bool> use(n+1,false);
	mct[st]=0;
	priority_queue<mypair, vector<mypair>, greater<mypair> > pq;
	pq.push(mypair(0,st));
	while(!pq.empty()){
		int ct = pq.top().first;
		int to = pq.top().second;
		pq.pop();
		if(use[to]) continue;
		use[to]=true;
		
		rep(i,m){
			if( mct[i] > mct[to]+ zct[to][i]){
					mct[i] = mct[to] + zct[to][i];
				pq.push(mypair(mct[i],i));
			}
		}
	}
	return mct[gl];

}

int main(void){

int n,m;
int a,b,c,d;
int x1,x2,y1,y2;
char k;
	cin >> n >> m;
	vector<vector<int> > zct(n+1,vector<int>(n+1,1<<20));
	rep(i,m){
		cin >>a >>k >>b >>k >>c >>k >>d;
		a--;  b--;
		zct[a][b]=c; zct[b][a]=d;
	}
	cin >>x1 >>k >>x2 >>k >>y1 >>k >>y2;
	x1--; x2--;
	int ans = y1 - (y2 +dak(x1,x2,n,m,zct) + dak(x2,x1,n,m,zct));
	cout << ans << endl;

	return 0;
	
}