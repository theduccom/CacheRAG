#include<bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include<string>
using namespace std;
int main(){
	char tile[101][101];
	int dp[101][101]={0};
	bool finished=false;
	int x,y;
	while(1){
		cin>>y>>x;
		memset(dp,0,sizeof(dp));
		finished=false;
		if(y==0 && x==0){
			break;
		}
		for(int i=0;i<y;i++){
			for(int j=0;j<x;j++){
				cin>>tile[i][j];
			}
		}int i=0,j=0;
		while(1){
			switch(tile[i][j]){
			case '>': j++ ;dp[i][j]++;break;
			case '<': j--;dp[i][j]++;break;
			case '^': i--;dp[i][j]++;break;
			case 'v': i++;dp[i][j]++;break;
			case '.': cout<<j<<" "<<i<<endl;finished=true; break;
			}
			if(finished==true){
				break;
			}
			if(dp[i][j]==2){
				cout<<"LOOP"<<endl;
				break;
			}
		}
	}
	return 0;
}