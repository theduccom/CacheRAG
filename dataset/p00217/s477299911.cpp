#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,a,b,max,ans,num;
  
  while(1){

    max=0;
    ans=0;
  
    cin>>n;

    if(n==0) break;
    
    for(int i=0;i<n;i++){
      cin>>num>>a>>b;
      a+=b;
      if(max < a){
	max=a;
	ans=num;
      }
    }
    cout<<ans<<" "<<max<<endl;
  }
  
  
    return 0;
}

