#include <stdio.h>
int main() {
	bool RB[60000];int j,i;for (i=0;i<60000;RB[i++]=true);for (i=2;i*i<=60000;i++) if (RB[i]) for (j=i*i;j<=60000;j+=i) RB[j]=false;
	while (scanf("%d",&j)!=EOF) {for (i=j-1;!RB[i];i--);printf("%d ",i);for (i=j+1;!RB[i];i++);printf("%d\n",i);}return 0;}