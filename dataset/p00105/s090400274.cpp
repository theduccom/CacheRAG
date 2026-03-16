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
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	string s;
	int n;
	map<string,vector<int> >in;
	while(cin>>s>>n)in[s].pb(n);
	map<string,vector<int> >::iterator it;
	for(it=in.begin();it!=in.end();it++){
		string d=it->first;
		sort(all(in[d]));
		cout<<d<<endl;
		rep(i,in[d].size()-1)cout<<in[d][i]<<" ";
		cout<<in[d][in[d].size()-1]<<endl;
	}
}