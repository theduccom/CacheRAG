#include<iostream>
#include<string>
using namespace std;
int main(){
	char dp[8][8];
	char a='X';
	while(cin>>dp[0][0]){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i!=0||j!=0)
			    cin>>dp[i][j];
		}
	}
	for(int i=0;i<8-1;i++){
		for(int j=0;j<8-1;j++){
			if(dp[i][j]=='1'&&dp[i][j+1]=='1'&&dp[i+1][j]=='1'&&dp[i+1][j+1]=='1')
				a='A';
		}
	}
	for(int i=0;i<8-3;i++){
		for(int j=0;j<8;j++){
			if(dp[i][j]=='1'&&dp[i+1][j]=='1'&&dp[i+2][j]=='1'&&dp[i+3][j]=='1')
				a='B';
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8-3;j++){
			if(dp[i][j]=='1'&&dp[i][j+1]=='1'&&dp[i][j+2]=='1'&&dp[i][j+3]=='1')
				a='C';
		}
	}
	for(int i=0;i<8-2;i++){
		for(int j=0;j<8-1;j++){
			if(dp[i][j+1]=='1'&&dp[i+1][j]=='1'&&dp[i+1][j+1]=='1'&&dp[i+2][j]=='1')
				a='D';
		}
	}
	for(int i=0;i<8-1;i++){
		for(int j=0;j<8-2;j++){
			if(dp[i][j]=='1'&&dp[i][j+1]=='1'&&dp[i+1][j+1]=='1'&&dp[i+1][j+2]=='1')
				a='E';
		}
	}
	for(int i=0;i<8-2;i++){
		for(int j=0;j<8-1;j++){
			if(dp[i][j]=='1'&&dp[i+1][j]=='1'&&dp[i+1][j+1]=='1'&&dp[i+2][j+1]=='1')
				a='F';
		}
	}
	for(int i=0;i<8-1;i++){
		for(int j=0;j<8-2;j++){
			if(dp[i][j+1]=='1'&&dp[i][j+2]=='1'&&dp[i+1][j]=='1'&&dp[i+1][j+1]=='1')
				a='G';
		}
	}
	cout<<a<<endl;
	}
	return 0;
}