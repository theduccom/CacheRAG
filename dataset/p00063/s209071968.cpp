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

char str[120];

int main()
{
  int i;
  int sum=0;

  while(scanf("%s",str)!=EOF){
    if(strlen(str)==1){
      sum++;
      continue;
    }
    rep(i,(strlen(str)+1)/2)
      if(str[i]!=str[strlen(str)-i-1]){
	break;
      }
    if(i>=(strlen(str)+1)/2)
      sum++;
  }
  cout<<sum<<endl;
}