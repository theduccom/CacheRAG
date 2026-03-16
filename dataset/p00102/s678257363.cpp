#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int n,data[11][11];
	while(1){
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			data[n][i]=0;
			for(int j=0;j<n;j++){
				cin>>data[j][i];
				data[n][i]+=data[j][i];
			}
		}
		for(int i=0;i<=n;i++){
			data[i][n]=0;
			for(int j=0;j<n;j++){
				data[i][n]+=data[i][j];
			}
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				printf("%5d",data[j][i]);
			}
			cout<<endl;
		}
	}
	return 0;
}