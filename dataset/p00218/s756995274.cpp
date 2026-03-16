#include<bits/stdc++.h>
using namespace std;
main(){
  int n,pm,pe,pj;
  while(1){
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>pm>>pe>>pj;
      if(pm==100||pe==100||pj==100||(pe+pm)/2>=90||(pe+pm+pj)/3>=80){
	cout<<'A'<<endl;
      }
      else if((pe+pm+pj)/3>=70||((pe+pm+pj)/3>=50&&(pe>=80||pm>=80))){
	cout<<'B'<<endl;
      }
      else{
	cout<<'C'<<endl;
      }
    }
  }
}