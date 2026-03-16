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
		if(n==0)break;
		
		int t=0;
		int f=0;
		
		int cn = n;
		while(cn!=0){
			cn/=2;
			t+=cn;
		}
		
		int dn = n;
		while(dn!=0){
			dn/=5;
			f+=dn;
		}
		
		printf("%d\n",min(t,f));
	}
}