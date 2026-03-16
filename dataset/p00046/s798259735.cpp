#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int main(){
	double mi=10000000;
	double ma=0;
	double h;
	while(cin>>h){
		mi=min(mi,h);
		ma=max(ma,h);
	}
	cout<<ma-mi<<endl;
}

