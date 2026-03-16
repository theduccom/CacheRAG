#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
char a[]="apple";
char p[]="peach";
main(){
  char str[1111];
  fgets(str,sizeof(str),stdin);
  int n=strlen(str);
  for(int i=0;i<n-5;i++){
    int ac=0;
    int pc=0;  
    for(int j=0;j<5;j++){
      if(str[i+j]==a[j]) ac++;
      if(str[i+j]==p[j]) pc++;
    }
    if(ac==5){
      for(int j=0;j<5;j++){
	str[i+j]=p[j];
      }
    }else if(pc==5){
      for(int j=0;j<5;j++){
	str[i+j]=a[j];
      }
    }

  }
  printf("%s",str);
}