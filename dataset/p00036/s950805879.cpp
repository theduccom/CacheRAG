
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j,k;
  int n=8;
  vector<string> s;
  string t;
  while(cin>>t)s.push_back(t);

  rep(i,s.size()){
    for(j=i;j<i+n;j++)rep(k,n)if(s[j][k]=='1'){
	if(j+1<i+n && k+1<n && s[j][k+1]=='1' && s[j+1][k]=='1' && s[j+1][k+1]=='1')
	  cout<<"A"<<endl;
	if(j+3<i+n && s[j+1][k]=='1' && s[j+2][k]=='1' && s[j+3][k]=='1')
	  cout<<"B"<<endl;
	if(k+3<n && s[j][k+1]=='1' && s[j][k+2]=='1' && s[j][k+3]=='1')
	  cout<<"C"<<endl;
	if(j+2<i+n && k!=0 && s[j+1][k]=='1' && s[j+1][k-1]=='1' && s[j+2][k-1]=='1')
	  cout<<"D"<<endl;
	if(j+1<i+n && k+2<n && s[j][k+1]=='1' && s[j+1][k+1]=='1' && s[j+1][k+2]=='1')
	  cout<<"E"<<endl;
	if(j+2<i+n && k+1<n && s[j+1][k]=='1' && s[j+1][k+1]=='1' && s[j+2][k+1]=='1')
	  cout<<"F"<<endl;
	if(j+1<n+i && k && k+1<n && s[j][k+1]=='1' && s[j+1][k]=='1' && s[j+1][k-1]=='1')
	  cout<<"G"<<endl;
	goto END;
      }
  END:i+=n-1;
  }
}