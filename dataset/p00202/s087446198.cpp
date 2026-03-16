#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(s,i,n) for(int i=(s);i<(n);i++)
 
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

int gold[1000001];
int n,x;

bool sosu(int x){
	if( x == 1 || x == 2 || x == 3){
		return true;
	}
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	while(true){
		cin >> n >> x;
		if(n == 0){
			break;
		}
		memset(gold,0,sizeof(gold));

		vi meshi;
		int buf;
		rep(i,n){
			cin >> buf;
			meshi.pb(buf);
			gold[buf] = 1;
		}

		rep(i,x){
			if(gold[i] == 1){
				rep(j,meshi.size()){
					if(i+meshi[j] <= x){
						gold[i+meshi[j]] = 1;
					}
				}
			}
		}

		buf = x;
		while(true){
			if(x==0){
				break;
			}
			if(gold[x] == 1){
				bool check = sosu(x);
				if(check){
					break;
				}
			}

			
			x--;
		}
		if(x==0){
			cout << "NA" << endl;
		}else{
			cout << x << endl;
		}

		
	}
}