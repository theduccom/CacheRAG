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
	
	int a[10];
	double u,v;
	
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%lf,%lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&u,&v)!=EOF){
		int sum = 0;
		rep(i,10)sum+=a[i];
		
		double par = u/(u+v);
		double pos = sum*par;
		
		int sum2 = 0;
		rep(i,10){
			sum2 += a[i];
			if(sum2+0.0000001>pos){
				printf("%d\n",i+1);
				break;
			}
		}
	}
	
}