#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int n,a[N][N];
signed main(void){
	ios::sync_with_stdio(false);
	while(cin>>n&&n){
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		for(int i=1,sum;i<=n;i++){
			sum=0;
			for(int j=1;j<=n;j++)
				sum+=a[i][j];
			a[i][n+1]=sum;
		}
		for(int j=1,sum;j<=n;j++){
			sum=0;
			for(int i=1;i<=n;i++)
				sum+=a[i][j];
			a[n+1][j]=sum;
		}
		int sum=0;
		for(int i=1;i<=n;i++)
			 sum+=a[i][n+1];
		a[n+1][n+1]=sum;
		for(int i=1;i<=n+1;i++,cout<<endl)
			for(int j=1;j<=n+1;j++)
				cout<<setw(5)<<a[i][j];
	}
}