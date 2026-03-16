#include <iostream>
#include <string>

using namespace std;

bool saiki( char stage[101][101], int xs, int ys, int xg, int yg, int w, int h, bool data[101][101] )
{
	data[xs][ys] = true;
	if( xs == xg && ys == yg ) return true;
	if( xs + 1 <= w && stage[xs + 1][ys] == stage[xs][ys] && data[xs + 1][ys] == false )if( saiki( stage, xs + 1, ys, xg, yg, w, h, data ) ) return true;
	if( xs - 1 >= 1 && stage[xs - 1][ys] == stage[xs][ys] && data[xs - 1][ys] == false ) if( saiki( stage, xs - 1, ys, xg, yg, w, h, data ) ) return true;
	if( ys + 1 <= h && stage[xs][ys + 1] == stage[xs][ys] && data[xs][ys + 1] == false ) if( saiki( stage, xs, ys + 1, xg, yg, w, h, data ) ) return true;
	if( ys - 1 >= 1 && stage[xs][ys - 1] == stage[xs][ys] && data[xs][ys - 1] == false ) if( saiki( stage, xs, ys - 1, xg, yg, w, h, data  ) ) return true;

	return false;
}


int main(int argc, char const* argv[])
{
	char stage[101][101];
	bool data[101][101];
	int w,h;
	int xs,ys;
	int xg,yg;
	int n;

	while( cin >> w >> h && w != 0 ){
		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;

		for( int i = 0;i < 101;i++ ){
			for( int j = 0;j < 101;j++ ){
				stage[i][j] = 0;
				data[i][j] = false;
			}
		}

		for( int i = 0;i < n;i++ ){
			int c,d,x,y;
			cin >> c >> d >> x >> y;

			if( d == 0 ){
				for( int j = 0;j < 2;j++ ){
					for( int k = 0;k < 4;k++ ){
						stage[k + x][j + y] = c;
					}
				}
			} else if( d == 1 ){
				for( int j = 0;j < 4;j++ ){
					for( int k = 0;k < 2;k++ ){
						stage[k + x][j + y] = c;
					}
				}
			}
		}
		if( saiki( stage, xs, ys, xg, yg, w, h ,data ) ) cout << "OK" << endl;
		else cout << "NG" << endl;
	}

	return 0;
}