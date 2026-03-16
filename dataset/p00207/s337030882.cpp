#include<iostream>
using namespace std;

int block[101][101];
int oblock[101][101];
int xg,yg,w,h;

int go (int xs, int ys) {
	//cout << xs << " " << ys << endl;
	oblock[xs][ys] = 1;
	if ( xs > w && ys > h ) {
		return 0;
	}
//	else if ( xs == w && ys == h ) {cout >> "NG" >> endl; return 0;}
	if ( xs > 1 && block[xs-1][ys] == block[xs][ys] && !oblock[xs-1][ys] ){ go( xs-1,ys ); }
	if ( ys > 1 && block[xs][ys-1] == block[xs][ys] && !oblock[xs][ys-1] ){ go( xs,ys-1 ); }
	if ( xs < w && block[xs+1][ys] == block[xs][ys] && !oblock[xs+1][ys] ){ go( xs+1,ys ); }
	if ( ys < h && block[xs][ys+1] == block[xs][ys] && !oblock[xs][ys+1] ){ go( xs,ys+1 ); }
}

int main() {
	while ( cin >> w && cin >> h ) {
		if ( !(w + h) )	break;
		//各ブロックの初期化
		for ( int i = 0; i < w; i++ ) {
			for ( int j = 0; j < h; j++ ) {
				block[i][j] = 0;
				oblock[i][j] = 0;
			}
		}
		int n,xs,ys;
		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;
		//各ブロックの情報の入力
		for ( int i = 0; i < n; i++ ) {
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			int tate,yoko;
			if ( d ) {yoko=2;tate=4;}
			else {yoko=4;tate=2;}
			//カラーの入力
			for ( int j = x; j < x + yoko; j++ ) {
				for ( int k = y; k < y + tate; k++ ) {
					block[j][k] = c;
				}
			}
		}
		/*for ( int i = 0; i < w; i++ ) {
			for ( int j = 0; j < h; j++ ) {
				cout << block[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;*/
		//経路探索
		if ( block[xs][ys] )	go ( xs, ys );
		if ( oblock[xg][yg] )	cout << "OK" << endl;
		else	cout << "NG" << endl;
		/*for ( int i = 0; i < w; i++ ) {
			for ( int j = 0; j < h; j++ ) {
				cout << oblock[i][j] << " ";
			}
			cout << endl;
		}*/
	}
}