/*****include*****/
#include <iostream>
#include <fstream>
#include <queue>

/*****名前空間*****/
using namespace std;

/*****グローバル変数置き場*****/
/*****その他関数置き場*****/
/*****main関数*****/
int main(){
	/*****変数置き場*****/
	int width;
	int height;
	int pField[101][101];
	int pVisited[101][101];
	int xs,ys;
	int xg,yg;
	int xn,yn;
	int x2,y2;
	int c,d,x,y;
	int n;
	queue<int> Qx;
	queue<int> Qy;
	int cs;
	int dx[] = {0,1,0,-1};
	int dy[] = {-1,0,1,0};
	/*****ファイルオープン*****/	
	/*ofstream fout("output.txt");
	ifstream fin("input.txt");
	if(!fout || !fin){
		cout << "Can't open the file.\n";
		return;
	}*/
	
	/*****処理部*****/
	while(1){
		xn = 0;
		yn = 0;
		for(int i=0;i<101;i++){
			for(int j=0;j<101;j++){
				pVisited[i][j] = 0;
				pField[i][j] = 0;
			}
		}
		cin >> width >> height;
		if(width == 0 && height == 0)	break;
		//int *pField = new int [height][width];
		//int *pVisited = new int [height][width];
		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> c >> d >> x >> y;
			if(d==0){
				for(int j=0;j<2;j++){
					for(int k=0;k<4;k++){
						pField[j+y][k+x] = c;
					}
				}
			}else{
				for(int j=0;j<4;j++){
					for(int k=0;k<2;k++){
						pField[j+y][k+x] = c;
					}
				}
			}
		}
		/*for(int i=0;i<21;i++){
			for(int j=0;j<21;j++){
				cout << pField[i][j];
			}
			cout << endl;
		}*/
		cs = pField[ys][xs];
		//cout << cs << endl;
		Qx.push(xs);
		Qy.push(ys);
		pVisited[ys][xs] = 1;
		while(!(Qx.empty() && Qy.empty())){
			xn = Qx.front();
			Qx.pop();
			yn = Qy.front();
			Qy.pop();
			//cout << yn << " " << xn << endl;
			/*if(xn == xg && yn == yg){
				break;
			}*/
			for(int i=0;i<4;i++){
				x2 = xn + dx[i];
				y2 = yn + dy[i];
				if(pField[y2][x2]==cs){
					if(!pVisited[y2][x2]){
						Qx.push(x2);
						Qy.push(y2);
						pVisited[y2][x2] = 1;
					}
				}
			}
		}
		/*for(int i=0;i<21;i++){
			for(int j=0;j<21;j++){
				cout << pVisited[i][j];
			}
			cout << endl;
		}*/
		if(pVisited[yg][xg]){
			cout << "OK" << endl;
		}else{
			cout << "NG" << endl;
		}
	}
	/*****処理終了後*****/
	/*fout.close();
	fin.close();*/
	//delete[] pField;
	//delete[] pVisited;
	return 0;
}