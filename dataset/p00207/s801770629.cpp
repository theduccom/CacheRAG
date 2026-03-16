#include<stdio.h>
#include<algorithm>
#include<functional>
int w,h;
int xs,ys,xg,yg;
int n;
int c,d,x,y;
int map[101][101];
int flg=0,temp;
void func(int ,int);
using namespace std;
int main(void){
	while(1){
		scanf("%d %d",&w,&h);
		if(w==0 && h==0){
			break;
		}
		int i,j,k;
		for(i=1;i<=100;i++){
			for(j=1;j<=100;j++){
				map[i][j]=0;
			}
		}
		scanf("%d %d %d %d %d",&xs,&ys,&xg,&yg,&n);
		for(i=0;i<n;i++){
			scanf("%d %d %d %d",&c,&d,&x,&y);
			if(d==0){
				for(k=0;k<=1;k++){
					for(j=0;j<=3;j++){
						map[y+k][x+j]=c;
					}
				}
			}
			if(d==1){
				for(k=0;k<=3;k++){
					for(j=0;j<=1;j++){
						map[y+k][x+j]=c;
					}
				}
			}
			/*for(j=1;j<=10;j++){
				for(k=1;k<=10;k++){
					printf("%d ",map[j][k]);
				}
				printf("\n");
			}
			printf("\n");*/
		}
		flg=0;
		if(map[ys][xs]==map[yg][xg] && map[ys][xs]!=0){
			temp=map[ys][xs];
			map[ys][xs]=0;
			func(ys,xs);
		}/*
		for(i=1;i<=10;i++){
			for(j=1;j<=10;j++){
				printf("%d ",map[i][j]);
			}
			printf("\n");
		}*/
		if(flg==1){
			printf("OK\n");
		}
		else {
			printf("NG\n");
		}
	}
	return 0;
}
void func(int y,int x){
	int dy[4]={0,1,0,-1},dx[4]={1,0,-1,0};
	int i,xx,yy;
	if(flg==0){
		for(i=0;i<4;i++){
			yy=y+dy[i];
			xx=x+dx[i];
			if(yy<=h && yy>=1 && xx<=w && xx>=1 && map[yy][xx]==temp){
				map[yy][xx]=0;
				if(xg==xx && yg==yy){
					flg=1;
					break;
				}
				func(yy,xx);
			}
		}
	}
}