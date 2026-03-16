#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

  string str;
  int cnt=0;
  
  while(cin>>str){
    
    int len = str.size();
    
    int flg=1;
    for(int i=0;i<(len/2);i++){
      if(str[i] != str[len-1-i]){
	flg=0;
	break;
      }
    }

    cnt+=flg;

  }

  printf("%d\n",cnt);

  return 0;
}