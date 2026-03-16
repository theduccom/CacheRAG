#include<stdio.h>
int main(void)
{
	char a,s,d;
	int f,g,h,i,j;
	f=1;
	g=0;
	h=0;
	while(scanf("%c,%c",&a,&s)!=EOF){
		if(a=='A'&&s=='B'||a=='B'&&s=='A'){
			i=f;
			f=g;
			g=i;
		}
		if(a=='A'&&s=='C'||a=='C'&&s=='A'){
			i=f;
			f=h;
			h=i;
		}
		if(a=='B'&&s=='C'||a=='C'&&s=='B'){
			i=g;
			g=h;
			h=i;
		}
		//printf("A=%d B=%d C=%d\n",f,g,h);
	}
	if(f==1){
		printf("A\n");
	}
	if(g==1){
		printf("B\n");
	}
	if(h==1){
		printf("C\n");
	}
	return 0;
}