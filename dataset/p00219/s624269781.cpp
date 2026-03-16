#include<iostream>
using namespace std;
int main(){
  int n,ice;
 int kind[10];


 while(1){
   for(int i=0;i<10;i++){
   kind[i]=0;}
   cin >> n;
   if(n==0)break;
   for(int k=0;k<n;k++){
     cin >> ice;
       
    for(int i=0;i<10;i++){
      if(ice==i){
	kind[i]++;}
  }
   }
   
 for(int i=0;i<10;i++){
   if(kind[i]==0){cout <<"-";}
  for(int j=0;j<kind[i];j++){
    cout <<"*";}
  cout <<endl;}
 }       
  return 0;
}