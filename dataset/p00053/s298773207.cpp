#include<cstdio>
#include<iostream>
#include<algorithm>

#define MAX 1000001

using namespace std;

char prime[MAX];

void furui(int n)
{
  int i,j;
  prime[0]=prime[1]=1;
  for(i=2;i*i<=n;i++){
    if( prime[i] ) continue;
    for(j=i*2;j<=n;j+=i){
      prime[j]=1;
    }
  }
}

main(){
  int n;
  int i,j;
  int ans;
  furui(MAX-1);
  while(1){
    ans=j=0;
    cin >> n;
    if(!n) break;
    for(i=0;i<MAX-1;i++){
      if(j>=n) break;
      if(prime[i]==0){
	ans+=i;
	j++;
      }
    }
    cout << ans << endl;
  }
}