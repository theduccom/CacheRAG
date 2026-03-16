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
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
map<string,int>tmp;
string s;
int q[8][3]={
	{1,4,0},{0,2,5},{1,3,6},{2,3,7},
	{0,4,5},{1,4,6},{2,5,7},{3,6,7},
};
int main(){
	tmp["01234567"]=1;
	vector<string>out;
	out.pb("01234567");
	while(out.size()){
		//cout<<out.size()<<" "<<out[0]<<endl;
		string s=out[0];
		out.erase(out.begin());
		int d=tmp[s];
		int c;
		rep(i,8)if(s[i]=='0')c=i;
		rep(j,3){
			string w=s;
			swap(w[q[c][j]],w[c]);
			if(!tmp[w]){
				tmp[w]=d+1;
				out.pb(w);
				//cout<<w<<endl;
			}
		}
	}
	string in;
	while(cin>>in){
		string w;
		rep(i,7){cin>>w;in+=w;}
		cout<<tmp[in]-1<<endl;
	}
}