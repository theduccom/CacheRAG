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
	
	double a;
	while(cin>>a){
		double sum = 0;
		rep(i,10){
			sum += a;
			if(i%2==0)a*=2;
			else a/=3;
		}
		printf("%.9lf\n",sum);
	}
}