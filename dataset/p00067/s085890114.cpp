#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) r.begin(),r.end()

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<=(b); i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int IMAX=((1<<30)-1)*2+1;
const double EPS=1e-10;
//int mod=1000000007;



string s[12];
vector<vi> f(12,vi(12,0));
int ans=0;
int dx[]={-1,0,1,0},dy[]={0,-1,0,1};

void init(){
	rep(i,12){
		rep(j,12){
			f[i][j]=0;
			s[i][j]='\0';
		}
	}
	ans=0;
}

void calc(int x,int y,int fl){
	if(x<0||x>11||y<0||y>11)return;
	if(s[y][x]=='0'||f[y][x])return;
	f[y][x]=1;
	if(!fl)ans++;
	for(int i=0; i<4; i++){
		calc(x+dx[i],y+dy[i],1);
	}
}

int main(){
	while(1){
		init();
		for(int i=0; i<12; i++){
			cin>>s[i];
		}
		rep(i,12){
			rep(j,12){
				calc(i,j,0);
			}
		}
		if(s[0][0]!='\0')cout<<ans<<endl;
		if(cin.eof())break;
	}
}