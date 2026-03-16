#include<iostream>
using namespace std;
int main(){
  int n,sans,lans,nk,count=0;
  while(cin>>n){
    nk = n;
    for(int i=nk-1;i>=2;i--){
      for(int j=1;j<=i;j++){
	if(i%j==0) count++;
      }
      if(count==2){
	cout << i << ' ';
	count = 0;
	break;
      }
      else count = 0;
    }
    for(int i=nk+1;i<=50021;i++){
      for(int j=1;j<=i;j++){
	if(i%j==0) count++;
      }
      if(count==2){
	cout << i << endl;
	count = 0;
	break;
      }
      else count = 0;
    }
  }
    return 0;
}