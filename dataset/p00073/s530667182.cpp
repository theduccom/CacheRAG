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
	int x,h;
	while(cin>>x>>h,h&x){
		
		double p = sqrt(x*x/4.0+h*h);
		double sum =0;
		sum+=x*x;
		sum+=x*p/2*4;
		
		printf("%.9lf\n",sum);
	}
}