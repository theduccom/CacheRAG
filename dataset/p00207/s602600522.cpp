#include<stdio.h>
int w,h;
int xs,ys;
int xg,yg;
int n;
int ib[100][100];
bool used[100][100];
int i,j;
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};

bool search(int a,int b,int c){
	bool ok=false;
	for(int k=0;k<4;k++){
		if(a+dx[k]>=0&&a+dx[k]<w&&b+dy[k]>=0&&b+dy[k]<h){
			if(!used[a+dx[k]][b+dy[k]]&&ib[a+dx[k]][b+dy[k]]==c){
				used[a+dx[k]][b+dy[k]]=true;
				if(a+dx[k]==xg-1&&b+dy[k]==yg-1)return true;
				if(search(a+dx[k],b+dy[k],c))ok=true;
			}
		}
	}
	return ok;
}

int main(){
	while(1){
		scanf("%d %d",&w,&h);
		if(w==0&&h==0)return 0;
		scanf("%d %d",&xs,&ys);
		scanf("%d %d",&xg,&yg);
		scanf("%d",&n);
		for(i=0;i<w;i++)for(j=0;j<h;j++){
			ib[i][j]=0;
			used[i][j]=false;
		}
		for(i=0;i<n;i++){
			int c,d,x,y;
			scanf("%d %d %d %d",&c,&d,&x,&y);
			if(d==0)for(j=0;j<4;j++)for(int k=0;k<2;k++)ib[x+j-1][y+k-1]=c;
			if(d==1)for(j=0;j<2;j++)for(int k=0;k<4;k++)ib[x+j-1][y+k-1]=c;
		}
		if(search(xs-1,ys-1,ib[xs-1][ys-1]))printf("OK\n");
		else printf("NG\n");
	}
}