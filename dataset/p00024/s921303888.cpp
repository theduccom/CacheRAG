#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	ios::sync_with_stdio(false);
	double v;
	while (cin>>v){
		int N;
		for (N=2;;N++){
			double t;
			t=sqrt((5*N-5)/4.9);
			if (9.8*t>=v){
				break;
			}
		}
		cout<<N<<endl;
	}
	return 0;
}