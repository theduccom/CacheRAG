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
	
	string s;
	int cnt=0;
	while(cin>>s){
		int a = 0;
		
		bool ok = true;
		rep(i,s.size())if(s[i]!=s[s.size()-i-1])ok=false;
		
		if(ok)cnt++;
	}
	printf("%d\n",cnt);
	
	
}