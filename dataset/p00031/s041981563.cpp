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
	int n;
	while(cin>>n){
		bool flg = false;
		rep(i,20){
			if((n&(1<<i))>0){
				if(flg)printf(" ");
				printf("%d",(1<<i));
				flg=true;
			}
		}puts("");
	}
	
	
}