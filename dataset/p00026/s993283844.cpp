#include <iostream>
using namespace std;
int cell[30][30];
int main(){
	while(true){
		char dum;
		int x,y,size;
		cin >> x;
		if(cin.eof())break;
		cin >> dum;
		x +=10;
		cin >> y;
		y +=10;
		cin >> dum;
		cin >> size;
		if(size == 1){
			cell[x][y-1]++;cell[x-1][y]++;cell[x][y]++;cell[x+1][y]++;cell[x][y+1]++;
		}
		else if(size == 2){
			for(int i= -1;i<=1;i++)
				for(int j = -1;j<=1;j++)
					cell[x+i][y+j]++;
		
		}
		else
		{
			for(int i= -1;i<=1;i++)
				for(int j = -1;j<=1;j++)cell[x+i][y+j]++;
			cell[x][y-2]++;cell[x-2][y]++;cell[x+2][y]++;cell[x][y+2]++;
		}
	}
	int max = 0,empty = 0;
	for(int i=10;i<=19;i++)
		for(int j = 10;j<=19;j++)
		{
			if(cell[i][j] == 0) empty++;
			else if(max < cell[i][j]) max=cell[i][j];
		}
	cout << empty << endl;
	cout << max << endl;
	return 0;
}