#include<stdio.h>
char c[100][100];
int main(){
	int a;
	int b;
	while(scanf("%d%d",&a,&b),a){
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				scanf(" %c",&c[i][j]);
		
		int s=0;
		int t=0;
		while(1){
			switch(c[s][t]){
				case '>':
					c[s][t]='x';
					t++;
					break;
				case '<':
					c[s][t]='x';
					t--;
					break;
				case 'v':
					c[s][t]='x';
					s++;
					break;
				case '^':
					c[s][t]='x';
					s--;
					break;
			}
			if(c[s][t]=='x')break;
			if(c[s][t]=='.')break;
		}
		if(c[s][t]=='x')printf("LOOP\n");
		else printf("%d %d\n",t,s);
	}
}