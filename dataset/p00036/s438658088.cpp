#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;
  
#define rep(i,n) for(int i=0;i<int(n);++i)
  
static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;
static const double eps = 1e-8;


string s[10];
int sq[10][10]={0};
int x,y;

int solve(){
	if(sq[x][y+1]==1&&sq[x+1][y]==1&&sq[x+1][y+1]==1) return 1;
	else if(sq[x+3][y]==1) return 2;
	else if(sq[x][y+3]==1) return 3;
	else if(sq[x+2][y-1]==1) return 4;
	else if(sq[x+1][y+2]==1) return 5;
	else if(sq[x+2][y+1]==1) return 6;
	else if(sq[x+1][y-1]==1) return 7;
}


int main(){
	
	while(cin>>s[0]){
		x = y = -1;
		
		rep(i,7){
			cin>>s[i+1];
		}
		rep(i,8){
			rep(j,8){
				if(s[i][j]=='0') sq[i+1][j+1]=0;
				else sq[i+1][j+1]=1;
			}
		}
 		
		rep(i,8){
			bool f=false;
			rep(j,8){
				//cout<<i+1<<" "<<j+1<<" "<<sq[i+1][j+1]<<endl;
				if(sq[i+1][j+1]==1){
					x=i+1;
					y=j+1;
					f=true;
					break;
				}
			}
			if(f) break;
		}
					
		//cout<<"x,y= "<<x<<" "<<y<<endl;
		/*
		rep(i,8){
			rep(j,8){
				cout<<sq[i+1][j+1];
			}
			cout<<endl;
		}
		cout<<endl;
		*/
		switch (solve()){
			case 1: cout<<"A\n";
					break;
			case 2: cout<<"B\n";
					break;
			case 3: cout<<"C\n";
					break;
			case 4: cout<<"D\n";
					break;
			case 5: cout<<"E\n";
					break;
			case 6: cout<<"F\n";
					break;
			case 7: cout<<"G\n";
					break;
		default: cout<<"error\n";
			break;
		}
		rep(i,10){
			rep(j,10){
				sq[i][j]=0;
			}
		}
	}
	//while(cin>>t) cout<<t<<endl;
	return 0;
}