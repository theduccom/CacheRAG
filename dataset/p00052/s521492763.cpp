#include<iostream>
using namespace std;

int main(void){
  int num;
  while(cin>>num,num){
    int cnt = 0;
    for(int i = 0 ; i <= num ; i ++){
      int now = i;
      if(now/5){
	while(now%5==0){
	  cnt ++;
	  now /= 5;
	}
      }      
    }
    cout<<cnt<<endl;
  }
} 