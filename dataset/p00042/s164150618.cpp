#include<algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int W,n,c=1;
	while(scanf("%d%d",&W,&n),W){
		int w[n],v[n]; rep(i,n)scanf("%d,%d",v+i,w+i);
		int opt[n][W+1]; rep(i,n)rep(j,W+1)opt[i][j]=0;
		
		rep(i,n)rep(j,W+1){
			int a=i>0?opt[i-1][j]:0,b=i>0&&j>=w[i]?opt[i-1][j-w[i]]:0;
			if(j<w[i])opt[i][j]=a;
			else opt[i][j]=max(a,v[i]+b);
		}
		int mx=0,mi;
		rep(j,W+1)if(opt[n-1][j]>mx)mx=opt[n-1][j],mi=j;
		printf("Case %d:\n%d\n%d\n",c++,mx,mi);
	}
	return 0;
}