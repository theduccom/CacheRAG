#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n!=-1){
    int a=1150;
    if(n>10){
      if(n>20){
	a+=1250;
	if(n>30){
	  a+=1400+160*(n-30);
	}else{
	  a+=140*(n-20);
	}
      }else{
	a+=125*(n-10);
      }
    }
    cout<<4280-a<<endl;
    cin>>n;
  }
  return 0;
}

