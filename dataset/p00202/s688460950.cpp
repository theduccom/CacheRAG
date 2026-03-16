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
  bool prime[1000005]={};//true   
  int n,x,i,j,k;

  rep(i,1000005)
    prime[i]=true;
  for(i=2;i<1000005;i++){
    if(prime[i])
      for(j=2;i*j<1000005;j++)
	prime[i*j]=false;
  }

  while(1){
    int price[30]={};
    int cost[2000005]={};
    cin>>n>>x;
    if(n==0 && x==0)break;
    rep(i,n){
      cin>>price[i];
      cost[price[i]]++;
    }

    rep(i,x)
      if(cost[i])
	rep(j,n)
	  cost[i+price[j]]++;


    for(i=x;i>0;i--)
      if(cost[i]>0 && prime[i])break;

    if(i)
      cout<<i<<endl;
    else
      cout<<"NA"<<endl;
  }
}