#include<iostream>
using namespace std;

char F[102][102];
bool MazeJudge;
int xg,yg;

char ItoC(int i){
	if(i==1){
		return '1';
	}else if(i==2){
		return '2';
	}else if(i==3){
		return '3';
	}else if(i==4){
		return '4';
	}else if(i==5){
		return '5';
	}
}

void DFS(int X,int Y,char C)
{
	if(F[X][Y]!=C)
		return;

	F[X][Y] = '.';

	if(X==xg&&Y==yg){
		MazeJudge = true;
		return;
	}
	
	DFS(X-1,Y  ,C);
	DFS(X  ,Y+1,C);
	DFS(X+1,Y  ,C);
	DFS(X  ,Y-1,C);
}
	

int main()
{
	while(true){
		for(int j=0;j<102;j++){
			for(int i=0;i<102;i++){
				F[i][j] = '0';
			}
		}

		MazeJudge = false;
		int w,h;
		cin >> w >> h;
		if(w==0&&h==0)
			break;

		int xs,ys;
		cin >> xs >> ys >> xg >> yg;

		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
    			char color = ItoC(c);
			if(d==0){
				F[x  ][y  ] = color;
				F[x+1][y  ] = color;
				F[x+2][y  ] = color;
				F[x+3][y  ] = color;
				F[x  ][y+1] = color;
				F[x+1][y+1] = color;
				F[x+2][y+1] = color;
				F[x+3][y+1] = color;
			}else if(d==1){
				F[x  ][y  ] = color;
				F[x+1][y  ] = color;
				F[x  ][y+1] = color;
				F[x+1][y+1] = color;
				F[x  ][y+2] = color;
				F[x+1][y+2] = color;
				F[x  ][y+3] = color;
				F[x+1][y+3] = color;		
			}
		}
		
		//デバッグ用迷路表示
		/*for(int j=0;j<102;j++){
			for(int i=0;i<102;i++){
				cout << F[i][j];
			}
			cout << endl;
		}*/

		char rc = F[xs][ys];
		DFS(xs,ys,rc);
		if(MazeJudge==true){
			cout << "OK" << endl;
		}else if(MazeJudge==false){
			cout << "NG" << endl;
		}
	}

	return 0;
}
