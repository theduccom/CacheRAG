#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

using namespace std;

int main(){
	int N;
	cin>>N;
	double xa,ya,ra,xb,yb,rb;
	REP(i,N){
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		double d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		if (d>ra+rb){
			cout<<0<<endl;
		}
		else if (fabs(ra-rb)<=d){
			cout<<1<<endl;
		}
		else if (ra>rb){
			cout<<2<<endl;
		}
		else{
			cout<<-2<<endl;
		}
	}
	return 0;
}