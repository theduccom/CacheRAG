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

bool prime[10100];
int a[10100];
int main(){
	rep(i,10100){
		prime[i]=true;
	}
	prime[0]=prime[1]=false;
	for(int i=2;i*i<10100;i++){
		if(prime[i]){
			for(int j=i*i;j<10100;j+=i){
				prime[j]=false;
			}
		}
	}
	int M=5;
	reep(i,5,10100){
		if(prime[i]&&prime[i-2]){
			M=i;
		}
		a[i]=M;
	}
	int n;
	while(cin>>n,n){
		cout<<a[n]-2<<" "<<a[n]<<endl;
	}
}