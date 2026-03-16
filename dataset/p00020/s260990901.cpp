#include<stdio.h>
#include<string.h>
main(){
  char yui[100]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  /* CHAR YUI1[100]="abcdef*/

  char s[10000];
  int a,i;
  
  fgets(s,sizeof(s),stdin);
  
  a=strlen(s);

  for(i=0;i<a;i++){
    if(97<=s[i] && 122>=s[i]){
      s[i]-=32;
    }
  }

 
  printf("%s",s);


  return 0;
}