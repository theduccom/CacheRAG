#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int wf[20][20];
	int n,m,a,b,c,d;
	cin >> n >> m;
	
	rep(i,n)rep(j,n)wf[i][j]=(1<<21);
	
	rep(i,m){
		scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
		a--;b--;
		wf[a][b] = c;
		wf[b][a] = d;
	}
	scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
	a--;b--;
	
	rep(k,n)rep(i,n)rep(j,n)wf[i][j]=min(wf[i][j],wf[i][k]+wf[k][j]);
	
	cout << c-d-wf[a][b]-wf[b][a] << endl;

}