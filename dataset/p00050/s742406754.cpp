#include <stdio.h>
char Tex[1005];int i=0,j;
void corr() {if (Tex[j-4]=='p' && Tex[j-3]=='e' && Tex[j-2]=='a' && Tex[j-1]=='c') {Tex[j-4]='a',Tex[j-3]=Tex[j-2]='p',Tex[j-1]='l',Tex[j]='e';return;}
	if (Tex[j-4]=='a' && Tex[j-3]=='p' && Tex[j-2]=='p' && Tex[j-1]=='l') Tex[j-4]='p',Tex[j-3]='e',Tex[j-2]='a',Tex[j-1]='c',Tex[j]='h';}
int main() {while (1) {Tex[i]=getchar();if (Tex[i]==EOF) break;i++;}Tex[i]=0;for (j=4;j<i;j++) if (Tex[j]=='h' || Tex[j]=='e') corr();printf("%s",Tex);return 0;}