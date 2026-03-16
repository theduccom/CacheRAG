#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p,d1,d2,number,maxs;
  while(1){
    maxs=0;
    cin>>n;
    if(n==0) break;
    for(int i=0;i<n;i++){
      cin>>p>>d1>>d2;
      if(maxs<d1+d2){
	number=p;
	maxs=d1+d2;
      }
    }
    cout<<number<<' '<<maxs<<endl;
  }
  return(0);
}

