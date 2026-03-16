#include <iostream>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n;
  while(cin>>n){
    int s=0,a[10],k=0;
    for(int i=512;i>0;i/=2)if(n>=i){
        a[k++]=i;
	n-=i;
      }
    for(int i=k-1;i>=0;i--,s++){
      if(!s)cout<<a[i];
      else cout<<' '<<a[i];
    }
    cout<<endl;
  }
}