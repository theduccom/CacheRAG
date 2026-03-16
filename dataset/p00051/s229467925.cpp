#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n[8],k,max,min,a;
  char s;
  cin>>a;
  for(int i=0;i<a;i++){
    for(int j=0;j<8;j++){
      cin>>s;
      n[j]=s-'0';
    }
    sort(n,n+8);
    k=1;
    max=0;
    for(int j=0;j<8;j++){
      max+=n[j]*k;
      k*=10;
    }
    reverse(n,n+8);
    k=1;
    min=0;
    for(int j=0;j<8;j++){
      min+=n[j]*k;
      k*=10;
    }
    cout<<max-min<<endl;  
  }
  return 0;
}