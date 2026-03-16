#include <iostream>
#include <fstream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int n,m,p[1000];

int main(){
	while(cin>>n>>m&&n){
		rep(i,n)cin>>p[i];
		sort(p,p+n,greater<int>());
		int ans=0;
		rep(i,n)if((i+1)%m)ans+=p[i];
		cout<<ans<<endl;
	}
}