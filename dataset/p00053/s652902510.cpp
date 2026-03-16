#include <iostream>
#define N 104730
using namespace std;

int main(){
  int n;
  int m=0;
  bool ip[N];
  int p[10000];
  for(int i=0;i<N;i++) ip[i]=true;
  ip[0]=ip[1]=false;
  for(int i=2;i<N;i++){
    if(ip[i]){
      p[m++]=i;
      for(int j=2*i;j<N;j+=i) ip[j]=false;
    }
  }
  while(1){
    int a=0;
    cin>>n;
    if(n==0) break;
    for(int i=0;i<n;i++) a+=p[i];
    cout<<a<<endl;
  }
  return 0;
}