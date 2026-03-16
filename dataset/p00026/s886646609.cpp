#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int masu[13][13]={0},x,y,s;
	while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
		x+=2,y+=2;
		if(s==1){
			for(int i=x-1;i<=x+1;i++)masu[i][y]++;
			masu[x][y-1]++;
			masu[x][y+1]++;
		}else if(s==2){
			for(int i=x-1;i<=x+1;i++){
				for(int j=y-1;j<=y+1;j++){
					masu[i][j]++;
				}
			}
		}else{
			for(int i=x-1;i<=x+1;i++){
				for(int j=y-1;j<=y+1;j++){
					masu[i][j]++;
				}
			}
			masu[x-2][y]++,masu[x+2][y]++;
			masu[x][y-2]++,masu[x][y+2]++;
		}
	}
	int siro=0,koi=0;
	for(int i=2;i<=11;i++){
		for(int j=2;j<=11;j++){
			if(masu[i][j]==0)siro++;
			if(koi<masu[i][j])koi=masu[i][j];
		}
	}
	cout<<siro<<endl<<koi<<endl;
	return 0;
}