#include<cstdio>
using namespace std;
void func(int,int);
char sima[13][13];
int x,y;
int cnt=0;
int main(void)
{
	int i,j;
	while(scanf("%s",sima[0])!=EOF){
		for(i=1;i<12;i++){
			scanf("%s",sima[i]);
		}
		cnt=0;
		for(i=0;i<12;i++){
			for(j=0;j<12;j++){
				if(sima[i][j]=='1'){
					cnt++;
					func(i,j);
				}
			}
		}
		printf("%d\n",cnt);
		
	}
	return 0;
}
void func(int y,int x)
{
	if(y-1>=0){
		if(sima[y-1][x]=='1'){
			sima[y-1][x]=0;
			func(y-1,x);
		}
	}
	if(x+1<=12){
		if(sima[y][x+1]=='1'){
			sima[y][x+1]=0;
			func(y,x+1);
		}
	}
	if(y+1<=12){
		if(sima[y+1][x]=='1'){
			sima[y+1][x]=0;
			func(y+1,x);
		}
	}
	if(x-1>=0){
		if(sima[y][x-1]=='1'){
			sima[y][x-1]=0;
			func(y,x-1);
		}
	}
}

	
	