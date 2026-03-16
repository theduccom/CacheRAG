#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

  int a;
  char s[11];
  int b[4]={0};

  while(scanf("%d,%s",&a,s) != EOF){
    if(s[0]=='B') b[1]++;
    else if(s[0]=='O') b[3]++;
    else if(s[1]=='B') b[2]++;
    else b[0]++;
  }

  for(int i=0;i<4;i++){
    printf("%d\n",b[i]);
  }

  return 0;
}