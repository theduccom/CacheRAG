#include <iostream>
#define r(i,n) for(int i=0;i<n;i++)
int a[51000];
using namespace std;
int main(){
  for(int i=2;i<51000;i++){
    for(int j=i*2;j<51000;j+=i)a[j]++;
  }
  int n;
  while(cin>>n){
    for(int i=n-1;i>=2;i--)if(!a[i]){cout<<i<<' ';break;}
    for(int i=n+1;i<=51000;i++)if(!a[i]){cout<<i<<endl;break;}
  }
}