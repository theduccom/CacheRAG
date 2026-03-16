#include<iostream>
using namespace std;

int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		int dt[n+1][n+1];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>dt[i][j];
			}
		}
		for(int x=0;x<n+1;x++){
			dt[x][n]=0;
		}
		for(int y=0;y<n;y++){
			dt[n][y]=0;
		}
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				dt[k][n]+=dt[k][l];
			}
		}
		for(int x=0;x<=n;x++){
			for(int y=0;y<n;y++){
				dt[n][x]+=dt[y][x];
			}
		}
		for(int a=0;a<=n;a++){
			for(int b=0;b<=n;b++){
				if(dt[a][b]/10==0)cout<<"    "<<dt[a][b];
				else if(dt[a][b]/100==0)cout<<"   "<<dt[a][b];
				else if(dt[a][b]/1000==0)cout<<"  "<<dt[a][b];
				else if(dt[a][b]/10000==0)cout<<" "<<dt[a][b];
				else if(dt[a][b]/100000==0)cout<<dt[a][b];
			}
			cout<<endl;
		}
	}
	return 0;
}