#include <stdio.h>
int main()
{
char c;
while(scanf("%c",&c) != EOF){
if('a'<=c && c <='z')
printf("%c",c-=32);
else
printf("%c",c);
}
return 0;
}