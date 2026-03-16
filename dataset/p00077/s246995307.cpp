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

string s;

int main(){
	while(getline(cin,s)){
		rep(i,s.size()){
			if(s[i]=='@'){
				rep(j,s[i+1]-'0') cout<<s[i+2];
				i+=2;
			}
			else cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}