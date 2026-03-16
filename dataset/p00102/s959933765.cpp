#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int n,d[11][11];

int main(){
	while(cin>>n){
		if(n==0)return 0;
		for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>d[i][j];
		int ss=0;
		for(int i=0;i<n;i++){
			int s=0;
			for(int j=0;j<n;j++)s+=d[i][j];
			d[i][n]=s;
			ss+=s;
			s=0;
			for(int j=0;j<n;j++)s+=d[j][i];
			d[n][i]=s;
		}
		d[n][n]=ss;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				int m=1,p=10;
				while(d[i][j]>=p){m++;p*=10;}
				for(int k=0;k<5-m;k++)cout<<" ";
				cout<<d[i][j];
			}
			cout<<endl;
		}
	}
}