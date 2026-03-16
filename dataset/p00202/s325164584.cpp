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
#define MAX 10000000
bool sosu[MAX];
int main(){
	memset(sosu,true,MAX);
	for(int i=4;i<MAX;i+=2)sosu[i]=false;
	for(int i=3;i<MAX;i+=2)
	for(int j=3*i;j<MAX;j+=2*i)sosu[j]=false;
	int n,b;
	while(cin>>n>>b,n||b){
		vector<int>in(n);
		rep(i,n)cin>>in[i];
		vector<bool>h(b+10);
		h[0]=true;
		rep(i,n){
			rep(j,b-in[i]+1)if(h[j])h[j+in[i]]=true;
		}
		for(int i=b;i>=0;i--){
			if(!i)cout<<"NA"<<endl;
			else if(sosu[i]&&h[i]){
				cout<<i<<endl;
				break;
			}
		}
	}
}