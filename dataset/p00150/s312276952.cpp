#include<bits/stdc++.h>
using namespace std;
int n, m[10001];
bool p(int x){
  if(m[x]>=0) return m[x];
  for(int i=2;i*i<=n;i++) {
    if(x%i==0) return m[x]=0;
  }
  return m[x]=1;
}
main() {
  memset(m,-1,sizeof(m));
  while(cin>>n&&n) {
    int mx=5;
    for(int i=2;i<=n-2;i++)if((p(i)&p(i+2)))mx = i;
    printf("%d %d\n",mx,mx+2);
  }
  return 0;
}