#include <iostream>

using namespace std;

/** Problem0071 : Bombs Chain **/
char field[8][8];

void exprosion(int x, int y)
{
	field[x][y] = '0';

	for (int i=1; i<4; i++) {
		if (0<=x-i && field[x-i][y]=='1')	exprosion(x-i, y);
		if (x+i<8 && field[x+i][y]=='1')	exprosion(x+i, y);
		if (0<=y-i && field[x][y-i]=='1')	exprosion(x, y-i);
		if (y+i<8 && field[x][y+i]=='1')	exprosion(x, y+i);
	}
}

int main()
{
	int n, x, y;
	
	cin >> n;
	for (int i=0; i<n; i++) {
		for (int i=0; i<8; i++)
			for (int j=0; j<8; j++)
				cin >> field[i][j];
		cin >> x >> y;
	
		exprosion(y-1, x-1);
		
		cout << "Data " << i+1 << ":" << endl;
		for (int i=0; i<8; i++) {
			for (int j=0; j<8; j++)
				cout << field[i][j];
			cout << endl;
		}
	}
}