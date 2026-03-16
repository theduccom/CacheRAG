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
	int a,b;
	while(cin>>a>>b,a||b){
		vector<int>in(a);
		rep(i,a)cin>>in[i];
		sort(all(in));
		int sum=0;
		int co=0;
		for(int i=a-1;i>=0;i--){
			co++;
			if(co==b){
				co=0;
				continue;
			}
			sum+=in[i];
		}
		cout<<sum<<endl;
	}
}