#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

int m;

int f(string s1,string s2,int x){
	if(m>80){cout<<"overflow";return 0;}
	if(s1.size()<=m&&s2.size()<=m&&x==0)return 0;
	if(s1.size()>m)x+=s1[s1.size()-m-1]-'0';
	if(s2.size()>m)x+=s2[s2.size()-m-1]-'0';
	++m;
	f(s1,s2,x/10);
	if(m<=80)cout<<x%10;
	return 0;
}

int main(){
	int n;
	cin>>n;
	rep(i,n){
		m=0;
		string s1,s2;
		cin>>s1>>s2;
		f(s1,s2,0);
		cout<<endl;
	}
	return 0;
}