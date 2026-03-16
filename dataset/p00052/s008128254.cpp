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


int c2=0,c5=0;

void f(int n){

	if(n%2==0){
		c2++;
		f(n/2);
	}
	else return;
}

void g(int n){

	if(n%5==0){
		c5++;
		g(n/5);
	}
	else return;
}

int main(){

while(true){

	int n;
	cin >> n;
	if(n==0) break;

	for(int i=2;i<=n;i+=2)
	f(i);

	for(int i=5;i<=n;i+=5)
	g(i);

	cout << min(c2,c5) << endl;

	c2=0; c5=0;

}

	return 0;
}