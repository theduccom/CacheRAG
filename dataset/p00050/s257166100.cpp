#include<stdio.h>
#include <string.h>
int main(void){
char str[1000];
int i,l;
 
fgets(str,1000,stdin);
l=strlen(str);
for(i=0;i<l;i++){
if(str[i]=='p' && str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='c'&&str[i+4]=='h'){
str[i]='a';
str[i+1]='p';
str[i+2]='p';
str[i+3]='l';
str[i+4]='e';
i=i+4;
}else if(str[i]=='a' && str[i+1]=='p'&&str[i+2]=='p'&&str[i+3]=='l'&&str[i+4]=='e'){
str[i]='p';
str[i+1]='e';
str[i+2]='a';
str[i+3]='c';
str[i+4]='h';
i=i+4;
}
     
}
printf("%s",str);
return 0;
}