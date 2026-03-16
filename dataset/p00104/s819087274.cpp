// 2011/01/07 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int H, W;
		cin >> H >> W;
		if(H==0&&W==0)
			break;

		char til[101][101];
		for(int i=0; i<H; i++)
			for(int j=0; j<W; j++){
				char tmp;
				do{
					cin >> tmp;
				}while(tmp!='>'&&tmp!='<'&&tmp!='v'&&tmp!='^'&&tmp!='.');
				til[i][j] = tmp;
			}

		bool flg[101][101];
		for(int i=0; i<H; i++)
			for(int j=0; j<W; j++)
				flg[i][j] = false;

		int x = 0;
		int y = 0;
		while(true){
			if(flg[y][x]){
				cout << "LOOP" << endl;
				break;
			}

			flg[y][x] = true;

			if(til[y][x]=='>')
				x++;
			else if(til[y][x]=='<')
				x--;
			else if(til[y][x]=='v')
				y++;
			else if(til[y][x]=='^')
				y--;
			else{
				cout << x << ' ' << y << endl;
				break;
			}
		}
	}

	return 0;
}