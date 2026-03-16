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

string s[3]={"HIT","HOMERUN","OUT"};


int main(){
	map<string,vi> m;
	string s;
	int a;
	while(cin>>s>>a){
		m[s].pb(a);
	}
	for(map<string,vi>::iterator it=m.begin(); it!=m.end(); it++){
		bool f=false;
		cout<<it->fi<<endl;
		sort(all(it->se));
		for(int i=0; i<it->se.size(); i++){
			if(f)cout<<" ";
			cout<<it->se[i];
			f=true;
		}
		cout<<endl;
	}
}