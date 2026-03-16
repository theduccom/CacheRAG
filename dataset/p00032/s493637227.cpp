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
	
	int s=0,t=0;
	int a,b,c;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		//if(a==0)break;
		if(a*a+b*b==c*c)s++;
		if(a==b)t++;
	}
	printf("%d\n%d\n",s,t);
	
}