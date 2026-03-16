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
  int len[10];
  int v1,v2;
  int i,j;

  while(scanf(" %d",&len[0])!=EOF){
    int lensum=len[0];
    for(i=1;i<10;i++){
      scanf(",%d",&len[i]);
      lensum+=len[i];
    }
    scanf(",%d,%d",&v1,&v2);
    int ratio=v1+v2;
    double place=(lensum*v1*1.0)/ratio; //?????????????????????
    rep(i,10){
      place-=len[i];
      if(place<=0){
	cout<<i+1<<endl;
	break;
      }
    }
  }
}