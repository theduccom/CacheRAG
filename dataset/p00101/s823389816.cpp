#include <stdio.h>
#include <string.h>
 char x[1000];
 char *q;
    int y[1000];
    int n,i,j;
  int main(void){
   scanf("%d\n",&n);
   for(i=0;i<n;i++){
        gets(x);
        while(strstr(x,"Hoshino") != NULL){
		q=strstr(x,"Hoshino");
		q[6]='a';
		}
		puts(x);
   }
return 0;
}      