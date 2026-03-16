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
	cin>>n;
	while(n--){
		int in[4]={0};
		string s;
		int co=0;
		while(cin>>s){
			if(s=="OUT")co++;
			if(co==3)break;
			if(s=="HIT"){
				rep(i,3){
					in[3-i]+=in[2-i];
					in[2-i]=0;
				}
				in[0]++;
			}
			if(s=="HOMERUN"){
				rep(i,3){
					in[3]+=in[i];
					in[i]=0;
				}
				in[3]++;
			}
			//cout<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<in[3]<<endl;
		}
		cout<<in[3]<<endl;
	}
}