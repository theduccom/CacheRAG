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




int main(){
	vi v(3);
	int n,r;
	while(cin>>v[0]>>v[1]>>v[2]){
		if(v[0]==0&&v[1]==0&&v[2]==0)break;
		sort(all(v));
		int d=(v[0]*v[0]+v[1]*v[1]);
		cin>>n;
		rep(i,n){
			cin>>r;
			r*=r;
			r*=4;
			if(r>d)cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
}