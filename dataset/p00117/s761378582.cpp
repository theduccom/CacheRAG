#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define INF (1<<21)
int main(){
	int n,m,a,b,c,d;
	cin >> n,m;
	int wf[20][20];
	rep(i,20)rep(j,20)wf[i][j] = (i==j?0:INF);
	cin >> m;
	rep(i,m){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		a--,b--;
		wf[a][b] = c , wf[b][a] = d;
	}
	rep(k,n)rep(i,n)rep(j,n)wf[i][j] = min(wf[i][j],wf[i][k]+wf[k][j]);
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	a--,b--;
	cout << c-d-wf[a][b]-wf[b][a] << endl;
}