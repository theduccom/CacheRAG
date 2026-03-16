#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j;
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    rep(i,n){
      int m,e,j;
      cin>>m>>e>>j;

      if(m==100 || e==100 || j==100)
        cout<<"A"<<endl;

      else if(m+e>=180)
        cout<<"A"<<endl;

      else if(m+e+j>=240)
        cout<<"A"<<endl;

      else if(m+e+j>=210)
        cout<<"B"<<endl;

      else if(m+e+j>=150 &&( m>=80 || e>=80 ))
        cout<<"B"<<endl;

      else
        cout<<"C"<<endl;

    }
  }
}