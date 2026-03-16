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

double area(double ax,double ay,double bx,double by,double cx,double cy)
{
  double l1,l2,l3;

  l1=sqrt( (ax-bx)*(ax-bx)+(ay-by)*(ay-by) );
  l2=sqrt( (bx-cx)*(bx-cx)+(by-cy)*(by-cy) );
  l3=sqrt( (cx-ax)*(cx-ax)+(cy-ay)*(cy-ay) );

  double s=(l1+l2+l3)/2;
  return sqrt( s*(s-l1)*(s-l2)*(s-l3) );
}

int main()
{
  double len[20][2]={};
  int n=0;

  while(scanf("%lf,%lf",&len[n][0],&len[n][1])!=EOF)
    n++;
  double sum=0;

  int i,j,k;
  for(i=2;i<n;i++)
    sum+=area(len[0][0],len[0][1],len[i-1][0],len[i-1][1],len[i][0],len[i][1]);
  cout<<sum<<endl;

}