#include <stdio.h>
int main(){
char c[100],ans='A';
while(scanf("%s",c)!=EOF){
if(c[0]==ans)ans=c[2];
else if(c[2]==ans)ans=c[0];
}
printf("%c\n",ans);
}