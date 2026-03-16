#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
const int MA=50000;
int p[100000],tcnt,ans[100000];
int main(){
	for(int i=2;i<=60000;i++){
		bool f=1;
		for(int j=2;j*j<=i;j++)if(i%j==0)f=0;
		if(f)p[tcnt]=i,tcnt++;
	}
	for(int i=0;i<MA;i++){
		if(p[i]>MA)break;
		for(int j=0;j<MA;j++){
			if(p[i]+p[j]>MA)break;
			if(i>j)continue;
			ans[p[i]+p[j]]++;
		}
	}
	
	int n;
	while(cin>>n,n)cout<<ans[n]<<endl;
	
}