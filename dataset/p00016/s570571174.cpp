#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define li long long int
#define ld long long double
#define PI 3.1415926535897932384626
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  double x=0,y=0;
  int a=0,b=0;
  double arg=90;
  while(1){
    scanf("%d,%d",&a,&b);
    if(a==0 && b==0)break;
    double radian=arg*PI/180.0;
    x+=a*cos(radian);
    y+=a*sin(radian);
    arg-=b;
  }
  a=x;
  b=y;
  cout<<a<<endl;
  cout<<b<<endl;
}