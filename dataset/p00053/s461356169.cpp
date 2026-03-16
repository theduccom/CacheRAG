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

int a[160001];
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
	while(true){
	cin >> n;
	if(n==0) break;

	REP(i,0,160000) a[i]=i;

	REP(i,2,400){
	if(f(i)){
	for(int j=2*i;j<=160000;j+=i)
	a[j]=0;
	}
	}

	int c=0; int s=0;
	REP(i,2,160000){
	if(a[i]!=0){
	s+=a[i];
	c++;
	}

	if(c==n) break;

	}

    cout << s << endl;

	}

	return 0;
}