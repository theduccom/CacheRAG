#include<bits/stdc++.h>
using namespace std;
int main(){
  double n;
  while(cin>>n){
    double now=n,sum=n;
    for(int j=0;j<9;j++){
      if(j%2==0){
	now=now*2;
	sum+=now;
      }else if(j%2==1){
	now=now/3;
	sum+=now;
      }
    }
    printf("%.8f\n",sum);
  }
  return 0;
}