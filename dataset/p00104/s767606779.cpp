#include<stdio.h>
char t[100][100];
int main(){
	int h,w;
	int i,j;
	while(1){
	scanf("%d %d",&h,&w);
	if(h==0)return 0;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			scanf(" %c",&t[i][j]);
		}
	}
	int x=0,y=0;
	int c=1;
	while(t[x][y]!='.'){
		char ch=t[x][y];
		switch(ch){
		case '>':y++;break;
		case '<':y--;break;
		case 'v':x++;break;
		case '^':x--;break;
		}
		c++;
		if(c>w*h)break;
	}
	if(t[x][y]=='.')printf("%d %d\n",y,x);
	else printf("LOOP\n");
	}
}