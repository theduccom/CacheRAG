#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

	int N,Q;
	while(1){int c=0;
	cin>>N;if(N==0)break;
	long long int n[4002][3]={};
	for(int i=0;i<4001;i++)
	{n[i][1]=0;n[i][2]=i;}

	for(int i=0;i<N;i++){
		long long int x,y,z;
		cin>>x>>y>>z;
		if(n[x][0]+y*z<=1000000)n[x][0]+=y*z;
		else if(n[x][0]+y*z>1000000)n[x][0]=1000000;
		if(n[x][1]==0){c++;n[x][1]=c;}
	
	}
	for(int i=0;i<4001;i++){
		for(int j=4000;j>i;j--){
			if(n[j][1]<n[j-1][1]){
				int t=n[j][0];n[j][0]=n[j-1][0];n[j-1][0]=t;
				int T=n[j][1];n[j][1]=n[j-1][1];n[j-1][1]=T;
				int TT=n[j][2];n[j][2]=n[j-1][2];n[j-1][2]=TT;
			}
		}
	}
	bool f=false;
	for(int i=0;i<4001;i++){
		if(n[i][0]>=1000000){cout<<n[i][2]<<endl;f=true;}
	}
	if(f==false)cout<<"NA"<<endl;
	
	}
	return 0;
}