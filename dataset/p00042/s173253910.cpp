#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<(b); i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int IMAX=((1<<30)-1)*2+1;
const double EPS=1e-10;
//int mod=1000000007


int w,n;
vector<vi> v(1010,vi(1010,-1));
vector<pii> p(1010,pii(0,0));

void init(){
	rep(i,1010){
		rep(j,1010){
			v[i][j]=-1;
		}
	}
}

int calc(int i,int j){
	if(i>=n)return 0;
	if(v[i][j]!=-1)return v[i][j];
	int ret;
	if(j-p[i].se<0)ret=calc(i+1,j);
	else {
		ret=max(calc(i+1,j),p[i].fi+calc(i+1,j-p[i].se));
	}

	// rep(i,n){
	// 	rep(j,w+1){
	// 		printf("%3d ",v[i][j]);
	// 	}
	// 	cout<<endl;
	// }
	// cout<<endl;


	return v[i][j]=ret;
}

int main(){
	char c;
	int Case=0;
	int a,b;
	while(cin>>w && w>0){
		init();
		cin>>n;
		rep(i,n){
			cin>>p[i].fi>>c>>p[i].se;
		}
		a=calc(0,0);
		for(int i=1; i<=w; i++){
			//init();
			if(a<calc(0,i)){
				a=calc(0,i);
				b=i;
			}
		}
		
		cout<<"Case "<<(++Case)<<":"<<endl;
		cout<<a<<endl;
		cout<<b<<endl;
		
	}
}