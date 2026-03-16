#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second

//typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
//typedef vector<ll> vl;
//typedef vector<vl> vll;
typedef pair<int,int> pii;
//typedef pair<ll,ll> pll;

double calcs(double x1,double x2,double x3,double y1,double y2,double y3){
	double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	double s=(a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}


int main(){
	double tx,ty,nx,ny,ix,iy,s=0.0;
	char c;
	cin>>tx>>c>>ty>>nx>>c>>ny;
	while(cin>>ix>>c>>iy){
		s+=calcs(tx,nx,ix,ty,ny,iy);
		nx=ix;
		ny=iy;
	}
	printf("%.15lf\n",s);
}