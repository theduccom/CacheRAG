#include <iostream>
using namespace std;

char field[100][100];

void search(int y,int x)
{
	if(field[y][x] == '.')
		cout << x << " " << y << endl;
	else if(field[y][x] == '0')
		cout << "LOOP" << endl;
	else{
		if(field[y][x] == '>'){
			field[y][x] = '0';
			search(y,x+1);
		}
		else if(field[y][x] == '<'){
			field[y][x] = '0';
			search(y,x-1);
		}
		else if(field[y][x] == 'v'){
			field[y][x] = '0';
			search(y+1,x);
		}
		else if(field[y][x] == '^'){
			field[y][x] = '0';
			search(y-1,x);
		}
	}
}

int main()
{
	int w,h;
	while(cin >> w >> h){
		if(!w && !h)
			break;
		for(int i=0;i<w;i++){
			for(int j=0;j<h;j++){
				cin >> field[i][j];
			}
		}
		search(0,0);
	}
	return 0;
}