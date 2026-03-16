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
  int a,b,c;
  int n1=0,n2=0;

  while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
    if(a*a+b*b==c*c)n1++;
    if(a==b)n2++;
  }
  cout<<n1<<endl;
  cout<<n2<<endl;
}