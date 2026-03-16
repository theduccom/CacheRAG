#include<stdio.h>
#include<string.h>

int main(){
	char ss[2][110][111];
	int w,h,i,x,y,loop;
	
	while(~scanf("%d%d",&w,&h)){
		if(w==0 && h==0)break;
		
		memset(ss,0,sizeof(ss));
		
		for(i=0;i<w;i++){
			scanf(" %s ",ss[0][i]);
		}
		
		x=0;
		y=0;
		loop=0;
		ss[1][y][x]=1;
		while(1){
			switch(ss[0][y][x]){
			case '>':
				++x;
				loop=ss[1][y][x];
				ss[1][y][x]=1;
				break;
			case '<':
				--x;
				loop=ss[1][y][x];
				ss[1][y][x]=1;
				break;
			case '^':
				--y;
				loop=ss[1][y][x];
				ss[1][y][x]=1;
				break;
			case 'v':
				++y;
				loop=ss[1][y][x];
				ss[1][y][x]=1;
				break;
			}
			
			if(loop)break;
			if(ss[0][y][x]=='.')break;
		}
		
		if(loop==1){
			printf("LOOP\n");
		}else{
			printf("%d %d\n",x,y);
		}
	}
	return 0;
}