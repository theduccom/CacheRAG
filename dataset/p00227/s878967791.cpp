#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,m;
  int p[11111];
  int sum;
  while(1){
    cin>>n>>m;
    sum=0;
    if(n+m==0) break;
    for(int i=0;i<n;i++){
      cin>>p[i];
    }
    sort(p,p+n,greater<int>());
    for(int i=0;i<n;i++){
      sum=sum+p[i];
      if((i+1)%m==0){
	sum=sum-p[i];
      }
    }
    
    cout<<sum<<endl;
  }
}

      