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

int leapYear(int year)
{
  if(year%4==0 && year%100!=0)
    return 1;
  else if(year%400==0)
    return 1;
  else
     return 0;  
}
queue<int> q;
int main(void)
{
  int a,b;
  int i=-1;

  while(1){
    bool ans=true;
    cin>>a>>b;
    if(a==0 && b==0)break;
    if(i>=0)
      cout<<endl;
    for(i=a;i<=b;i++)
      if(leapYear(i)){
	cout<<i<<endl;
	ans=false;
      }
    if(ans)
      cout<<"NA"<<endl;
  }
}