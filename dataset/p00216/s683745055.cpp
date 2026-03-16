#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <map>
#include <climits>
#include <sstream>
using namespace std;

#define reep(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) reep((i),0,(n))
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second
#define mkp make_pair

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vint;
static const int INF=1<<24;

template <class T>
void initvv(vector<vector<T> > &v,int a,int b, const T  &t = T()){
	v.assign(a,vector<T>(b,t));
}

//v.erase(unique(v.begin(),v.end()),v.end());

int a[30];
int main(){
	int n;
	rep(i,11){
		a[i]=1150;
	}
	reep(i,11,21){
		a[i]+=a[i-1]+125;
	}
	reep(i,21,31){
		a[i]+=a[i-1]+140;
	}
	while(cin>>n,n!=-1){
		if(n>30){
			cout<<-a[30]-(n-30)*160+4280<<endl;
		}
		else{
			cout<<-a[n]+4280<<endl;
		}
	}
}