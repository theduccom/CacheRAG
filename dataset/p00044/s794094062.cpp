#include<iostream>
#include<string>
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
  int n;
  int i,j;

  bool prime[55000]={};//?´???°??????
  for(i=2;i<55000;i++){
    if(prime[i])continue;
    else
      for(j=2;i*j<55000;j++)
	prime[i*j]=true;
  }

  while(scanf("%d",&n)!=EOF){
    for(i=n-1;i>1;i--)
      if(prime[i]==false){
	cout<<i<<" ";
	break;
      }
    for(i=n+1;i<55000;i++)
      if(prime[i]==false){
	cout<<i<<endl;
	break;
      }
  }
}