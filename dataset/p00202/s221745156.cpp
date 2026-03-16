#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j,k,l;
  int a[30],m,n;
  bool b[1000001],c[1000001];
  memset(c,0,1000001);
  c[2]=1;
  for(i=3;i<1000000;i+=2){
    l=(int)sqrt(i)+1;
    for(k=3;k<l;k+=2){
      if(i%k==0)
	break;
    }
    if(k>=l)
      c[i]=1;
  }
  while(cin>>m>>n&&m+n){
    for(i=0;i<m;i++)
      cin>>a[i];
    memset(b,0,1000001);
    b[0]=1;
    for(i=0;i<n;i++){
      if(b[i]){
	for(j=0;j<m;j++){
	  if(i+a[j]<=n)
	    b[i+a[j]]=1;
	}
      }
    }
    for(i=n;i>0;i--){
      if(b[i]&&c[i])
	break;
    }
    if(i)
      cout<<i<<endl;
    else
      cout<<"NA"<<endl;
  }
  return 0;
}