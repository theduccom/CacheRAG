#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,i,j;
  int p[1001];
  int sum;
  while(1){
    cin>>n>>m;
    if(n==0&&m==0) break;
    for(i=0;i<n;++i) cin>>p[i];
    sort(p,p+n);
    sum=0;
    if(n%m==0){
      for(i=0;i<n;i+=m)
	for(j=1;j<m;++j)
	  sum+=p[i+j];
    }else{
      for(i=0;i<n%m;++i)
	sum+=p[i];
      for(;i<n;i+=m)
	for(j=1;j<m;++j)
	  sum+=p[i+j];
    }
    cout<<sum<<endl;
  }
  return 0;
}