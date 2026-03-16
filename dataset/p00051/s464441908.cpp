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


int stoia(string a){
	int ret = 0;
	int sc = 1;
	rep(i,a.size()){
		ret += (a[a.size()-1-i]-'0')*sc;
		sc*=10;
	}
	return ret;
}

int main(){
	
	int n;
	cin>>n;
	
	rep(lp, n){
		string a;
		cin>>a;
		
		sort(a.begin(),a.end());
		
		string b = a;
		
		reverse(a.begin(),a.end());
		
		string c = a;
		
		printf("%d\n",stoia(c)-stoia(b));
	}
	
}