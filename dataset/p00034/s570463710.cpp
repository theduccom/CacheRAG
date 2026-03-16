#include <bits/stdc++.h>
using namespace std;
int main(){
  int w[10],a,b,i;
  double t,d;
  while(cin>>w[0]){
  for(i=1;i<10;i++)scanf(",%d",&w[i]);
  int sum[10]={0};
  sum[0]=w[0];
  for(i=1;i<10;i++)sum[i]+=sum[i-1]+w[i];
  scanf(",%d,%d",&a,&b);
  t=(double)sum[9]/(a+b);
  d=(double)t*a;
  for(i=0;i<10;i++)if(d<=sum[i]){
    cout<<i+1<<endl;
    break;
  }
  }
}