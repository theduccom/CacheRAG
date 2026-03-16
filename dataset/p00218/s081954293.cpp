#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i;
  int a[1000],n,p,q,r;
  while(cin>>n&&n){
    for(i=0;i<n;i++){
      cin>>p>>q>>r;
      if(p==100||q==100||r==100)
	a[i]=0;
      else if(p+q>179)
	a[i]=0;
      else if(p+q+r>239)
	a[i]=0;
      else if(p+q+r>209)
	a[i]=1;
      else if(p+q+r>149&&(p>79||q>79))
	a[i]=1;
      else
	a[i]=2;
    }
    for(i=0;i<n;i++)
      cout<<(char)('A'+a[i])<<endl;
  }
  return 0;
}