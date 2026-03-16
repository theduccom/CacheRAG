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
	int a,b;
	int q=false;
	while(cin>>a>>b,a||b){
		if(q)cout<<endl;
		q=true;
		bool h=false;
		loop(i,a,b+1)if(i%400==0||(i%100&&i%4==0)){
			h=true;
			cout<<i<<endl;
		}
		if(!h)cout<<"NA"<<endl;
	}
}