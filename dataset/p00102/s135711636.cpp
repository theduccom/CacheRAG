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
		vector<vector<int> >in(n+1,vector<int>(n+1));
		rep(i,n)rep(j,n)cin>>in[i][j];
		rep(i,n){
			int sum=0;
			rep(j,n)sum+=in[i][j];
			in[i][n]=sum;
		}
		rep(i,n+1){
			int sum=0;
			rep(j,n)sum+=in[j][i];
			in[n][i]=sum;
		}
		rep(i,n+1){
			rep(j,n+1)printf("%5d",in[i][j]);
			cout<<endl;
		}
	}
}