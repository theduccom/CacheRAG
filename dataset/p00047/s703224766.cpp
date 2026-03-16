#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  char c1,c2;
  int boll[3]={1,0,0};
  int tmp;

  while(scanf("%c,%c",&c1,&c2) != EOF){
    
    tmp = boll[c1-'A'];
    boll[c1-'A'] = boll[c2-'A'];
    boll[c2-'A'] = tmp;

  }
  
  if(boll[0]==1)
    puts("A");
  else if(boll[1]==1)
    puts("B");
  else
    puts("C");

  return 0;
}