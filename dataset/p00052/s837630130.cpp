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
     
int take(int n)
{
  int a=1,i;
  rep(i,n)
    a*=5;
  return a;
}

int main()
{
  int n;
  int i;

  while(1){
    cin>>n;
    if(n==0)break;
    int sum=0;

    for(i=1;i<10;i++){
      if(n/take(i)==0)break;
      sum+=n/take(i);
    }
    cout<<sum<<endl;
  }
}