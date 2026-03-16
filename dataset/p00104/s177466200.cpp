#include<iostream>
using namespace std;

int main(){
	int H,W;
	while(1){
		cin>>H>>W;
		if(H==0 && W==0)break;
		char ct[H][W];
		int flg[H][W];
		int error=0;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin>>ct[i][j];
				flg[i][j]=0;
			}
		}
		int nowX=0,nowY=0,ansX=0,ansY=0;
		while(1){
			if(flg[nowY][nowX]==1){
				cout<<"LOOP"<<endl;
				error=1;
				break;
			}
			flg[nowY][nowX]=1;
			if(ct[nowY][nowX]=='>'){
				nowX++;
			}else if(ct[nowY][nowX]=='<'){
				nowX--;
			}else if(ct[nowY][nowX]=='^'){
				nowY--;
			}else if(ct[nowY][nowX]=='v'){
				nowY++;
			}else if(ct[nowY][nowX]=='.'){
				ansX=nowX;
				ansY=nowY;
				break;
			}
		}
		if(error!=1){
			cout<<nowX<<" "<<nowY<<endl;
		}
	}
	return 0;
}