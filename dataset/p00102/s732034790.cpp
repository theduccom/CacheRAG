#include<cstdio>
#include<algorithm>
#include<functional>
#include<iostream>
#include<cmath>
#define LL long long
using namespace std;
int main(void)
{
	LL n,dist[114][114],i,j,k,sum;
	while(1) {
		cin>>n;
		if(!n)break;
		for(i=0;i<n;i++) {
			sum=0;
			for(j=0;j<n;j++) {
				cin>>dist[i][j];
				sum+=dist[i][j];
			}
			dist[i][n]=sum;
		}
		for(i=0;i<=n;i++) {
			sum=0;
			for(j=0;j<n;j++) {
				sum+=dist[j][i];
			}
			dist[n][i]=sum;
		}
		for(i=0;i<=n;i++) {
			for(j=0;j<=n;j++) {
				printf("%5d",dist[i][j]);
			}
			cout<<endl;
		}
	}
	return 0;
}