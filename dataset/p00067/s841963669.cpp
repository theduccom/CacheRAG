#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> pii;

int main()
{
  int i,j,k;
  int h,w;
  int dx[4]={0,1,0,-1};
  int dy[4]={1,0,-1,0};

  while(1){
    int sum=0;
    int c[20][20]={};
    char str[20];
    rep(i,12){
      if(scanf("%s",str)==EOF)return 0;
      rep(j,12)
        c[i+1][j+1]=str[j]-'0';
    }

    while(1){
      bool next=false;
      queue<pii> q;

      rep(i,14){
        rep(j,14)
          if(c[i][j]==1){
            next=true;
            break;
          }
        if(next)break;
      }
      if(next==false)break;
     q.push(pii(i,j));//y,x                                              
      sum++;
      while(q.size()){
        i=q.front().first;
        j=q.front().second;
        q.pop();
        c[i][j]=0;
        rep(k,4){
          int y=i+dy[k];
          int x=j+dx[k];
          if(c[y][x]==1){
            q.push(pii(y,x));
            c[y][x]=0;
          }
        }
      }

    }
    cout<<sum<<endl;
  }
}