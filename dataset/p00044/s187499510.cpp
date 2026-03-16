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


bool f(int n){
	int p;
	REP(i,2,n){
	if(n%i==0){
	p=i;
	break;
	}
	}
	if(p==n) return true;
	else return false;
}

int main(){

	int n;
	while(cin >> n){

	int p1,p2;

	for(int i=n+1;;i++){
	if(f(i)){ p1=i; break;}

	}

	for(int i=n-1;;i--){
	if(f(i)){ p2=i; break;}

	}

	cout << p2 << " " << p1 << endl;

	}

	return 0;
}