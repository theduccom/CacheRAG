#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int main(){
	string s[7][4]={
		{
			"1100",
			"1100",
			"0000",
			"0000"
		},{
			"1000",
			"1000",
			"1000",
			"1000"
		},{
			"1111",
			"0000",
			"0000",
			"0000"
		},{
			"0100",
			"1100",
			"1000",
			"0000"
		},{
			"1100",
			"0110",
			"0000",
			"0000"
		},{
			"1000",
			"1100",
			"0100",
			"0000"
		},{
			"0110",
			"1100",
			"0000",
			"0000"
		}
	};
	
	const int N = 8;
	const int M = 4;
	string m[N];
	while(cin>>m[0]){
		reps(i,1,N)cin>>m[i];
		
		rep(i,N){
			rep(j,N){
				
				rep(c,7){
					bool ok = true;
					rep(k,M){
						rep(p,M){
							int x = j+p;
							int y = i+k;
							if(x>=N || y>=N){
								if(s[c][k][p]=='1')ok=false;
							}else{
								if(s[c][k][p]!=m[y][x])ok=false;
							}
						}
					}
					if(ok){
						printf("%c\n",'A'+c);
						goto A;
					}
				}
			}
		}
		A:;
	}
	
}