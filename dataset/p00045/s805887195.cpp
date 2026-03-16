#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define sort(ss) sort(ss.begin(), ss.end())
#define rsort(ss) sort(ss.rbegin(), ss.rend())
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	int x,m;
	double ans=0,ave=0,ss=0;
	char a;
	while(cin>>x>>a>>m){
		ss++;
		ave+=m;
		ans+=x*m;
	}
	cout<<ans<<endl;
	double q=ave/ss-(int)(ave/ss);
	if(q>=0.50000000) cout<<(int)(ave/ss)+1<<endl;
	else cout<<(int)(ave/ss)<<endl;
}