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
  int x,y,size;
  int paper[15][15]={};
  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){

    x+=2;
    y+=2;

    paper[y][x]++;
    paper[y+1][x]++;
    paper[y-1][x]++;
    paper[y][x-1]++;
    paper[y][x+1]++;

    if(size>1){

      paper[y-1][x-1]++;
      paper[y-1][x+1]++;
      paper[y+1][x-1]++;
      paper[y+1][x+1]++;

      if(size==3){

	paper[y][x-2]++;
	paper[y][x+2]++;
	paper[y-2][x]++;
	paper[y+2][x]++;

      }
    }
  }
  int white=0;
  int m=0;
  int i,j;

  for(i=2;i<12;i++)
    for(j=2;j<12;j++){
    if(paper[i][j]==0)white++;
    m=max(m,paper[i][j]);
  }
  cout<<white<<endl;
  cout<<m<<endl;
}