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
  int x,h;
  while(1){
    cin>>x;
    cin>>h;
    if(x==0 && h==0)break;
    double sum=x*x;
    double len=sqrt(h*h+sum/4);
    sum+=len*x*2;
    printf("%f\n",sum);
  }
}