#include<stdio.h>
int w,h;
int is(int x,int y){
	return (x>=0 && x < w && y>=0 && y< h)?1:0;
}
int main(void){
	const int dx[4]={0,-1,0,1};
	const int dy[4]={-1,0,1,0};
	int qx[100000];
	int qy[100000];
	int p,mx;
    int n,m[101][101]={0};
    int xs,ys,xg,yg,a,c,d,x,y,cnt,f;
	for(;;){
		scanf("%d %d",&w,&h);
		//printf("%d %d\n",w,h);
		if(w==0)break;
		for(int i=0;i<w;i++){
			for(int j=0;j<h;j++){
				m[i][j]=0;
			}
		}
		scanf("%d %d %d %d",&xs,&ys,&xg,&yg);
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d %d %d",&c,&d,&x,&y);
			for(int j=0;j<(d==0?2:4);j++){
				for(int k=0;k<(d==0?4:2);k++){
					m[x-1+k][y-1+j]=c;
				}
			}
		}
		c = m[xs-1][ys-1];
/**		if(c==0){
			puts("NG");
			continue;
		}//**/
		p=0;
		mx=1;
		qx[0]=xs-1;
		qy[0]=ys-1;
		m[xs-1][ys-1]=-1;
		f=1;
/**
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				printf("%3d",m[j][i]);
			}
			puts("");
		}
				printf("%d\n",c);
				/**/
		while(f==1 && p<mx){
			cnt = 0;
			for(int i=0;i<4;i++){
				x = qx[p] + dx[i];
				y = qy[p] + dy[i];
				if(is(x,y)==1 && m[x][y] == c){
					m[x][y]=-1;
					qx[mx+cnt] = x;
					qy[mx+cnt] = y;
					cnt++;
					if(x == xg-1 && y == yg-1)f=0;
					//printf("%d %d にいるよ,%d\n",x+1,y+1,i);
				}
			}
			mx += cnt;
			p++;
		}/**
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				printf("%3d",m[j][i]);
			}
			puts("");
		}
				printf("%d\n",c);
				/**/

		puts(f?"NG":"OK");
	}
    return 0;
}