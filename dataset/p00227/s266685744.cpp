#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  
  while(1){
    cin>>n>>m;
    if(n==0 && m==0) break;
    int array[n],sum=0;
    for(int i=0;i<n;i++)
      cin>>array[i];
    sort(array,array+n);
    reverse(array,array+n);
    for(int i=0;i<n;i++){
      if((i+1)%m==0) array[i]=0;
      sum+=array[i];
    }   
    cout<<sum<<endl;
  }
  return 0;
}