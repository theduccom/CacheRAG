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
	int n,m;
	while(cin>>n>>m,n||m){
		vector<string>in(n);
		rep(i,n)cin>>in[i];
		int x=0,y=0;
		int co=0;
		while(co!=20000){
			if(in[x][y]=='>')y++;
			else if(in[x][y]=='<')y--;
			else if(in[x][y]=='v')x++;
			else if(in[x][y]=='^')x--;
			else break;
			co++;
		}
		if(co==20000)cout<<"LOOP"<<endl;
		else cout<<y<<" "<<x<<endl;
	}
}