// 2011/05/24 Tazoe

#include <iostream>
using namespace std;

void bom(char fld[8][8], int x, int y)
{
	if(fld[y][x]=='0')
		return;

	fld[y][x] = '0';

	if(x-1>=0)
		bom(fld, x-1, y);
	if(x-2>=0)
		bom(fld, x-2, y);
	if(x-3>=0)
		bom(fld, x-3, y);
	if(x+1<8)
		bom(fld, x+1, y);
	if(x+2<8)
		bom(fld, x+2, y);
	if(x+3<8)
		bom(fld, x+3, y);
	if(y-1>=0)
		bom(fld, x, y-1);
	if(y-2>=0)
		bom(fld, x, y-2);
	if(y-3>=0)
		bom(fld, x, y-3);
	if(y+1<8)
		bom(fld, x, y+1);
	if(y+2<8)
		bom(fld, x, y+2);
	if(y+3<8)
		bom(fld, x, y+3);
}

int main()
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		char fld[8][8];
		for(int j=0; j<8; j++)
			for(int k=0; k<8; k++)
				cin >> fld[j][k];

		int x, y;
		cin >> x;
		cin >> y;
		x--;
		y--;

		bom(fld, x, y);

		cout << "Data " << i+1 << ":" << endl;
		for(int j=0; j<8; j++){
			for(int k=0; k<8; k++)
				cout << fld[j][k];
			cout << endl;
		}
	}

	return 0;
}