#include<iostream>
#include<cstdio>
#include<cstring>

int main(){
  char s1[101]={0};
  char s2[101]={0};
  int count=0,flag=0;

  while(scanf("%s",s1)!=EOF){
    int len=strlen(s1);
    /* if(len==1){
      count++;
      flag++;
      }*/
    for(int i=0;i<len;i++){
      s2[i]=s1[len-1-i];
    }
    s2[len]='\0';
    if(strcmp(s1,s2)==0){
      count++;
    }
    flag=0;
  }

  printf("%d\n",count);
  return(0);
}