#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n;
	while(cin>>n,n){
		map<ll,ll>in;
		vector<ll>name;
		rep(i,n){
			ll a,b,c;
			cin>>a>>b>>c;
			if(!in[a])name.pb(a);
			in[a]+=b*c;
		}
		bool h=false;
		rep(i,name.size()){
			if(in[name[i]]>=1e6){
				h=true;
				cout<<name[i]<<endl;
			}
		}
		if(!h)cout<<"NA"<<endl;
	}
}