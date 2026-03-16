#include <stdio.h>
#include <string.h>
int main() {char Tex[1005],i,j,ans=0;while (scanf("%s",&Tex)!=EOF) {for (j=strlen(Tex)-1,i=0;i<=j && Tex[i]==Tex[j];i++,j--);if (i>j) ans++;}printf("%d\n",ans);return 0;}