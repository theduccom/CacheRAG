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
	
	
	int a,b;
	int sum=0,c=0;
	int sumb=0;
	
	while(scanf("%d,%d",&a,&b)!=EOF){
		sum += a*b;
		sumb += b;
		c++;
	}
	
	printf("%d\n%d\n",sum,int(sumb/(double)c+0.5));
	
}