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
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef pair<double,double> P;
typedef complex<double> CP;
typedef long long ll;


int main(){
	string s;
	int res=0;
	
	while(cin>>s){
		string t;
		rep(i,s.size()){
			t[i]=s[s.size()-1-i];
		}
		bool f=true;
		rep(i,s.size()){
			if(s[i]!=t[i]){
				f=false;
				break;
			}
		}
		if(f) res++;
	}
	cout<<res<<endl;
	return 0;
}
		
		