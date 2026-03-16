#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<functional>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)

int main(){

	int n;
	cin >> n;

	rep(i,n){

	vector<int>v;
	int d=0;
	char k;

	rep(j,8){
	cin >> k;
	v.push_back(k-'0');
	}

	sort(v.begin(),v.end());

	rep(l,8) d+=pow(10.0,l)*(v[l]-v[7-l]);

	cout << d << endl;

	v.clear(); d=0;

	}




	return 0;
}