#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

#define inf 1000000000

int n,m;
int C[101][101];
int T[101][101];

int main(){
	while(1){
		cin>>n>>m;
		if(n==0)break;
		for(int i=0;i<101;i++){
			for(int j=0;j<101;j++){
				C[i][j]=inf;
				T[i][j]=inf;
			}
		}
		for(int i=0;i<n;i++){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			C[a][b]=C[b][a]=c;
			T[a][b]=T[b][a]=d;
		}
		
		for(int k=1;k<=m;k++){
			for(int i=1;i<=m;i++){
				for(int j=1;j<=m;j++){
					C[i][j]=min(C[i][j],C[i][k]+C[k][j]);
					T[i][j]=min(T[i][j],T[i][k]+T[k][j]);
				}
			}
		}
		
		int l;
		cin>>l;
		for(int i=0;i<l;i++){
			int a,b,c;
			cin>>a>>b>>c;
			if(c==0){
			printf("%d\n",C[a][b]);
			}else{
			printf("%d\n",T[a][b]);
			}
		}
	}
}