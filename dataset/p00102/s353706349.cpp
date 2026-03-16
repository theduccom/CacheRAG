#include <iostream>
#include <cstdio>
#define MAX_N 15
using namespace std;
int main(){
	int n,i,j;
	while(1){
		cin >> n;
		if(n==0)break;
		int a[MAX_N][MAX_N];
		for(i=0;i<=n;i++){
			for(j=0;j<=n;j++){
				a[i][j]=0;
			}
		}


		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin >> a[i][j];
			}
		}

		int sum1=0,sum[MAX_N];
		for(i=0;i<n;i++){
			for(j=0;j<=n;j++){
				sum1+=a[i][j];
				if(j==n){
					a[i][j]=sum1;
					sum1=0;
				}
			}
		}

		for(j=0;j<=n;j++){
			for(i=0;i<=n;i++){
				sum1+=a[i][j];
				if(i==n){
					a[i][j]=sum1;
					sum1=0;
				}
			}
		}


		for(i=0;i<=n;i++){
			for(j=0;j<n;j++){
				printf("%5d",a[i][j]);
			}
			printf("%5d\n",a[i][n]);
		}

	}
	return 0;
}