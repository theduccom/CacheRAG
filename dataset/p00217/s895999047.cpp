#include<bits/stdc++.h>
using namespace std;
main(){
  int n,p,d1,d2,mp,mc;
  while(1){
    cin>>n;
    if(n==0)break;
    mc=0;
    mp=0;
    for(int i=0;i<n;i++){
      cin>>p>>d1>>d2;
      if(d1+d2>mc){
	mc=d1+d2;
	mp=p;
      }
    }
    cout<<mp<<" "<<mc<<endl;
  }
}