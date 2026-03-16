#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  double l;
  int a,b,c=0,d=0,e=0;
  while(scanf("%d,%d",&a,&b)!=EOF){
    c+=a*b;
    d+=b;
    e++;
  }
  l=(double)d/e+0.5;
  cout<<c<<endl<<(int)l<<endl;
}