#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
const int MAX_N =10010;

bool prime[MAX_N];
void sieve(){
	for(int i =1;i <MAX_N;i++){
		prime[i]=true;
	}
	prime[0]=false,prime[1]=false;
	for(int i =2;i*i<MAX_N;i++){
		if(prime[i])
		for(int j =i+i;j<MAX_N;j+=i){
			prime[j]=false;
		}
	}
}

int main(){
	sieve();
	int n;
	while(cin>>n,n){
		for(int i = n;i >=2;i--){
			if(prime[i]&&prime[i-2]){
				cout <<i-2<<" "<<i<<endl;
				break;
			}
		}
	}
	return 0;
}