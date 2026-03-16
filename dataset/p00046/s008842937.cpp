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
  double mountain[55]={};
  int i=0,j;
  while(scanf("%lf",&mountain[i])!=EOF)
    i++;
  double high=0.0,low=1000000.0;
  rep(j,i){
    high=max(high,mountain[j]);
    low=min(low,mountain[j]);
  }
  printf("%.1f\n",high-low);
}