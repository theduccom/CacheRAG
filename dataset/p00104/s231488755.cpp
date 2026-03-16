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
//int mod=1000000007;

int h,w;
vector<string> s;
vector<vi> v;
int x,y;
bool f;
char ope[4]={'>','<','^','v'};
int mx[4]={1,-1,0,0};
int my[4]={0,0,-1,1};

void calc(){
	if(v[y][x]){
		f=false;
		return;
	}
	v[y][x]=1;
	for(int i=0; i<4; i++){
		if(s[y][x]==ope[i]){
			x+=mx[i];
			y+=my[i];
			calc();
		}
	}
}


int main(){
	while(cin>>h>>w){
		if(h==0&&w==0)break;
		vector<string> t(h);
		vector<vi> u(h,vi(w,0));
		for(int i=0; i<h; i++)cin>>t[i];
		s=t;
		v=u;
		x=0;
		y=0;
		f=true;
		calc();
		if(f)cout<<x<<" "<<y<<endl;
		else cout<<"LOOP"<<endl;
	}
}