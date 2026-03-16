#include <iostream>
using namespace std;

int n;
int w,h;
int xs,ys;
int xg,yg;
int color;
int c,d,xb,yb;

int b[100][100];

bool flag;

void saiki(int y,int x,int c){
	if(b[y][x] != c || flag || b[y][x]==0)return;
	b[y][x]=-1;
	if(y==yg&&x==xg)flag = 1;
	if(x-1>=0)saiki(y,x-1,c);
	if(y-1>=0)saiki(y-1,x,c);
	if(x+1<w)saiki(y,x+1,c);
	if(y+1<h)saiki(y+1,x,c);
}

int main(){
	while(cin >> w >> h && w ){
		/*ú»*/
		for(int i=0;i<100;i++)for(int j=0;j<100;j++)b[i][j]=0;
		/*üÍ*/
		cin >> xs >> ys;
		cin >> xg >> yg;
		xs-=1;ys-=1;xg-=1;yg-=1;
		
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> c >> d >> xb >> yb;
			xb-=1;yb-=1;
			if(d==0){
				for(int i=0;i<4;i++){
					b[yb  ][xb+i]=c;
					b[yb+1][xb+i]=c;
				}
			}else{
				for(int i=0;i<4;i++){
					b[yb+i][xb  ]=c;
					b[yb+i][xb+1]=c;
				}				

			}
		}
		flag = 0;
		saiki(ys,xs,b[ys][xs]);
/*		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++)cout << b[i][j];
			cout << endl;
		}*/
		if(flag)cout << "OK";
		else cout << "NG";
		cout << endl;
	}
}