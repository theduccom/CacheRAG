#include <stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>

int main(){
int x,a,b,c,d;
char n[3];
a=0;
b=0;
c=0;
d=0;

while(scanf("%d,%s",&x,n)!=EOF){
if(n[0]=='A'&&n[1]=='B')d++;
else if(n[0]=='A')a++;
else if(n[0]=='B')b++;
else if(n[0]=='O')c++;
}
printf("%d\n%d\n%d\n%d\n",a,b,d,c);

return 0;
}