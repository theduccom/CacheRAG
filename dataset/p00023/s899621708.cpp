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


#define X real()
#define Y imag()
typedef complex<double> P;

int main(){
	  
	int n;
	cin>>n;
	rep(i,n){	
		double xa,ya,ra,xb,rb,yb;
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		
		P a = P(xa,ya);
		P b = P(xb,yb);
		
		double c = abs(a-b);
		
		if(abs(ra-rb)>c){
			if(ra>rb)puts("2");
			else puts("-2");
			continue;
		}
		if(ra+rb<c){
			puts("0");
			continue;
		}
		puts("1");
	}
	
}