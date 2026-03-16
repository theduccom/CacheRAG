#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define BE(c) c.begin(),c.end()
#define PB push_back
#define F first
#define S second
#define BEB(s) s
using namespace std;
int main(){
	double x,h;
	while(1){
		cin>>x>>h;
		if(!x&&!h)break;
		printf("%.6f\n",sqrt((x/2)*(x/2)+h*h)*x*2+x*x);
		
	}
	return 0;
}