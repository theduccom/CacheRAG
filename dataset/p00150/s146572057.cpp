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

  vector<bool> prime(10005,true);
  for(i=2;i<10005;i++)if(prime[i])
    for(j=2;i*j<10005;j++)
      prime[i*j]=false;
  prime[0]=prime[1]=false;

  while(1){
    cin>>n;
    if(n==0)break;
    for(;n>0;n--)
      if(prime[n]&&prime[n-2]){
        cout<<n-2<<" "<<n<<endl;
        break;
      }
  }
}