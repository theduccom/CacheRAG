#include <iostream>
#include <string>

using namespace std;

char table[12][12]={0};

int main(void){
	int sx,sy;
	while(true){
		for(int y=1;y<=8;y++)
			for(int x=1;x<=8;x++)
				cin >> table[x][y],table[x][y]-='0';
		if(cin.eof())
			break;
		for(int y=1;y<=8;y++)
			for(int x=1;x<=8;x++)
				if(table[x][y])
					sx=x,sy=y,x=9,y=9;
		if(table[sx][sy]&table[sx+1][sy]&table[sx][sy+1]&table[sx+1][sy+1])
			cout << 'A' << endl;
		else if(table[sx][sy]&table[sx][sy+1]&table[sx][sy+2]&table[sx][sy+3])
			cout << 'B' << endl;
		else if(table[sx][sy]&table[sx+1][sy]&table[sx+2][sy]&table[sx+3][sy])
			cout << 'C' << endl;
		else if(table[sx][sy]&table[sx-1][sy+1]&table[sx][sy+1]&table[sx-1][sy+2])
			cout << 'D' << endl;
		else if(table[sx][sy]&table[sx+1][sy]&table[sx+1][sy+1]&table[sx+2][sy+1])
			cout << 'E' << endl;
		else if(table[sx][sy]&table[sx][sy+1]&table[sx+1][sy+1]&table[sx+1][sy+2])
			cout << 'F' << endl;
		else if(table[sx][sy]&table[sx+1][sy]&table[sx-1][sy+1]&table[sx][sy+1])
			cout << 'G' << endl;
	}
}