#include <iostream>
#include <algorithm>
#define N 50000
using namespace std;

int main(){
  bool ip[N];
  int p[N];
  for(int i=0;i<N;i++) ip[i]=true;
  int q=0;
  ip[0]=ip[1]=false;
  for(int i=0;i<N;i++){
    if(ip[i]){
      p[q++]=i;
      for(int j=i*2;j<N;j+=i) ip[j]=false;
    }
  }
  int n,a;
  while(1){
    cin>>n;
    a=0;
    if(n==0) break;
    if(n%2){
      if(binary_search(p,p+q,n-2)) a=1;
    }
    else{
      for(int i=0;p[i]<=n/2;i++){
	if(binary_search(p+i,p+q,n-p[i])) a++;
      }
    }
    cout<<a<<endl;
  }
  return 0;
}