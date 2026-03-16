#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int p[10][10]={0};
	int x,y,s;
	while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
		if(s==1){
			p[x][y]+=1;
			if(x-1>=0&&x-1<=9)
			p[x-1][y]+=1;
			if(x+1>=0&&x+1<=9)
			p[x+1][y]+=1;
			if(y-1>=0&&y-1<=9)
			p[x][y-1]+=1;
			if(y+1>=0&&y+1<=9)
			p[x][y+1]+=1;
		}
		else{
			for(int i=x-1;i<=x+1;i++){
				for(int j=y-1;j<=y+1;j++){
					if(i>=0&&i<=9){
						if(j>=0&&j<=9){
							p[i][j]+=1;
						}
					}
				}
			}
			if(s==3){
				if(x-2>=0&&x-2<=9)
				p[x-2][y]+=1;
				if(x+2>=0&&x+2<=9)
				p[x+2][y]+=1;
				if(y-2>=0&&y-2<=9)
				p[x][y-2]+=1;
				if(y+2>=0&&y+2<=9)
				p[x][y+2]+=1;
			}
		}
	}
	int noink=0,dense=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			p[i][j]==0 ? noink++:0;
			dense<p[i][j] ? dense=p[i][j]:0;
		}
	}
	printf("%d\n%d\n",noink,dense);
}