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
	  
	  double a;
	  while(cin>>a){
	  	double t = a/9.8;
		for(int i=0;;i++){
			double h = 5*i-5;
			if(h>=4.9*t*t){
				printf("%d\n",i);
				break;
			}
		}
	  }
	
}