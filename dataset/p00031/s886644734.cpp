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
stack<int> sta;

int main()
{
  int w;
  int wei[10]={512,256,128,64,32,16,8,4,2,1};
  int i,j;

  while(scanf("%d",&w)!=EOF){

    rep(i,10){
      if(wei[i]<=w){
	sta.push(wei[i]);
	w-=wei[i];
      }
    }

    while(1){
      cout<<sta.top();
      sta.pop();
      if(sta.size()==0)break;
      cout<<" ";
    }//while1
    cout<<endl;

  }
}