#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  while(1){
  cin>>n>>m;
  if(!n&&!m)break;
  priority_queue <int> Q;
  for(int i=0,a;i<n;i++)cin>>a,Q.push(a);

  int ans=0,cnt=0,sum=0;
  while(!Q.empty()){
    int t=Q.top();Q.pop();
    cnt++;
    sum+=t;
    if(n&&cnt==m) ans+=sum-t,sum=cnt=0,n--;
  }
  ans+=sum;
  cout <<ans<<endl;
  }
  return 0;
}