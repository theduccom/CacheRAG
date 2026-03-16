#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
  int n;
  char line[1000];
  fgets(line,sizeof(line),stdin);
  sscanf(line,"%d",&n);
  char buf[1500];
  for(int i=0;i<n;i++){
    char s[1500];
    fgets(buf,sizeof(buf),stdin);
    sscanf(buf,"%[^\n]",s);
    int j=0;
    while(s[j]!='\0'){
      if(strncmp((s+j),"Hoshino",7)==0){
	s[j+6]='a';
      }
      j++;
    }
    printf("%s\n",s);
  }
  return 0;
}