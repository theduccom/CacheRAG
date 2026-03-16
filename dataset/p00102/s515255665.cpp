#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
	
	int n,h,w;
	while(cin>>n){
		if(n!=0){
		int sw=0;
		vector< vector<int> >c(n+2,vector<int>(n+2));
		for(int i=0;i<n;i++){
				w=0;
			for(int j=0;j<n;j++){
				cin>>c[i][j];
				w+=c[i][j];
			}
			c[i][n]=w;
			sw+=w;
		}
		for(int i=0;i<n;i++){
			h=0;
			for(int j=0;j<n;j++){
			h+=c[j][i];
		}
			c[n][i]=h;
		}
		c[n][n]=sw;
		for(int i=0;i<n+1;i++){
			for(int j=0;j<n+1;j++)
			printf("%5d",c[i][j]);
			cout<<endl;
		}
		
		
	}
		else
			break;
	}
		
	
}