#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <set>
#include <stack>
#include <queue>
#include <time.h>

using namespace std;
typedef long long ll;
#define pl pair<ll,ll>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define foreach(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); itr++)
#define dbg(x) cout << #x"="<< (x) << endl
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back(a) 
#define in(x) cin >> x;
#define all(x) (x).begin(), (x).end()
#define INF 2147483600
#define fi first
#define se second

int main(){
	int n;
	while(cin>>n){
		bool flg=false;
		rep(i,10){
			if(1&(n>>i)){
				if(flg) cout<<' ';
				cout<<pow(2,i);
				flg=true;
			}
		}
		cout<<endl;
	}
    return 0;
}