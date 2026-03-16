#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  bool prime[110000];
  int i,j;
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    rep(i,110000)
      prime[i]=false;
    for(i=2;i<110000;i++){
      if(prime[i])continue;
      for(j=2;i*j<110000;j++)
	prime[i*j]=true;
    }
    int ans=0;
    int num=0;
   
    for(i=2;i<110000;i++){
      if(prime[i])continue;
      num++;
      ans+=i;
      if(num==n)break;
    }
    cout<<ans<<endl;
  }
}