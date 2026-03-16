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
//int mod=1000000007



bool is_Leap(int n){
	if(n%400==0)return true;
	if(n%100==0)return false;
	if(n%4==0)return true;
	return false;
}


int main(){
	int a,b;
	bool f=false;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		if(f)cout<<endl;
		else f=true;
		vi v;
		for(int i=a; i<=b; i++){
			if(is_Leap(i))v.pb(i);
		}
		if(v.empty())cout<<"NA"<<endl;
		else{
			rep(i,v.size()){
				cout<<v[i]<<endl;
			}
		}
	}
}