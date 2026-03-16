#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)

static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;


int s[110];
string st;

int main(){
	while(cin>>st){
		rep(i,110) s[i]=0;
		rep(i,st.size()){
			if(st[i]=='I') s[i]=1;
			else if(st[i]=='V') s[i]=5;
			else if(st[i]=='X') s[i]=10;
			else if(st[i]=='L') s[i]=50;
			else if(st[i]=='C') s[i]=100;
			else if(st[i]=='D') s[i]=500;
			else if(st[i]=='M') s[i]=1000;
		}
		int MAX=s[0],num=0;
		int res=0;
		bool f[110];
		rep(i,110) f[i]=true;
		//rep(i,st.size()) cout<<s[i]<<" ";
		//cout<<endl;
		rep(i,st.size()-1){
			if(s[i]<s[i+1]){
				if(f[i]){
					res-=2*s[i];
					f[i]==false;
					f[i+1]=false;
				}
			}
		}
		rep(i,st.size()) res+=s[i];
		cout<<res<<endl;
	}
	return 0;
}