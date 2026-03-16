#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n!=0){
    int a,b,c;
    for(int i=0;i<n;i++){
      cin>>a>>b>>c;
      if(a==100||b==100||c==100||(a+b)/2>=90||(a+b+c)/3>=80){
	cout<<'A'<<endl;
      }else if((a+b+c)/3>=70||((a+b+c)/3>=50&&(a>=80||b>=80))){
	cout<<'B'<<endl;
      }else{
	cout<<'C'<<endl;
      }	
    }
    cin>>n;
  }
  return 0;
}

