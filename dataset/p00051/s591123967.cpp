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

//10????´?????¨????
int take(int n)
{
  int a=1;
  int i;

  rep(i,n)
    a*=10;

  return a;

}

int main()
{
  int n;
  int i,j;
  char a;
  int v[8];
  cin>>n;

  rep(i,n){
    rep(j,8){
      scanf("\n%c",&a);
      v[j]=a-'0';
    }

    sort(v,v+8);

    int max=0,min=0;

    rep(j,8){
      max+=v[j]*take(j);
      min+=v[7-j]*take(j);
    }
    cout<<max-min<<endl;
  }
}