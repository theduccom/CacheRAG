#include <stdio.h>
#include <string.h>
int main()
{
char str[81];
int i,j,l;
while(fgets(str,sizeof(str),stdin) != NULL){
l = strlen(str);
for(i = 0; i < 26; i++){
if(strstr(str,"the") != '\0' || strstr(str,"this") != '\0' || strstr(str, "that") != '\0')
break;
else{
for(j = 0; j < l; j++){
if(('a' <= str[j] && str[j] <= 'y') || ('A' <= str[j] && str[j] <= 'Y'))
str[j]++;
else if(str[j] == 'z')
str[j] = 'a';
else if(str[j] == 'Z')
str[j] = 'A';
}
}
}
printf("%s", str);
}
return 0;
}