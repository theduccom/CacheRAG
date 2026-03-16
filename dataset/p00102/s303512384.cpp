#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(cin>>n,n){
		int a[11][11]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][n]+=a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[n][i]+=a[j][i];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[n][n]+=a[i][j];
			}
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				printf("%5d",a[i][j]);
			}
			cout<<endl;
		}
	}
}