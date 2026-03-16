#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){

  char in[101],in_reverse[101];
  int num,cnt=0;

  while(1){
    
    if(scanf("%s",in) == EOF)break;
    
    num=0;
    for(int i=0 ; in[i] != '\0' ; i++){
      num++;
    }
    
    for(int i=0 ; i < num ; i++){
      in_reverse[i]=in[num-1-i];
    }
    in_reverse[num]='\0';
    
    //cout <<in_reverse<<in<<endl;
    
    if(strcmp(in,in_reverse) == 0)cnt++;
    
  }
  
  cout <<cnt<<endl;
  
  
  return 0;
}