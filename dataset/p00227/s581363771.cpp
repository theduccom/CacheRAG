#include<iostream>
#include<algorithm>
using namespace std;
int main(){

  int n,m,a[1000],sum,dis,p;
  
  while(1){
    
    sum=0;
    dis=0;
      
    cin >>n>>m;
    
    if( n == 0 && m == 0 )break;
    
    for(int i=0 ; i < n ; i++){
      cin >>a[i];
      sum+=a[i];
    }
    
    sort(a,a+n);
    
    for(int i=n-m ; i >= 0  ; i-=m ){
      dis+=a[i];
    }
    
    p=sum-dis;
    
    cout <<p<<endl;
    
  }
  return 0;
}