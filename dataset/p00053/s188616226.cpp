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
  bool prime[110000]={};
  int i,j;
  int n;

  for(i=2;i<110000;i++){
    if(prime[i]==true)continue;
    for(j=2;i*j<110000;j++)
      prime[i*j]=true;
  }
  while(1){
    cin>>n;
    if(n==0)break;
    int sum=0;
    j=0;
    for(i=2;i<110000;i++)
      if(prime[i]==false){
	sum+=i;
	j++;
	if(j==n)break;
      }
    cout<<sum<<endl;
  }
}