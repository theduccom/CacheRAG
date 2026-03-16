#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define INF (1<<21)

int main()
{
	int wf[20][20];
	int n,m,a,b,c,d;
	
	/*ú»*/
	rep(i,20)
		rep(j,20)
			wf[i][j] = INF;
	rep(i,20)
		wf[i][i] = 0;
		
	/*üÍ*/
	cin >> n >> m;
	rep(i,m){
		scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
		a--;b--;
		wf[a][b] = c;
		wf[b][a] = d;
	}
	scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
	a--;b--;
	
	/* [VtCh@ */
	rep(k,n)
		rep(i,n)
			rep(j,n)
				wf[i][j] = min(wf[i][j],wf[i][k]+wf[k][j]);
	
	/* oÍ */
	cout << c - d - wf[a][b] - wf[b][a] << endl;
}