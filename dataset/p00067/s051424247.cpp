#include <iostream>
using namespace std;

int cnt;
char field[13][13];

void solve(int x,int y)
{
	field[y][x] = '0';
	if(x+1 < 12)
		if(field[y][x+1] == '1')
			solve(x+1,y);
	if(x-1 >= 0)
		if(field[y][x-1] == '1')
			solve(x-1,y);
	if(y+1 < 12)
		if(field[y+1][x] == '1')
			solve(x,y+1);
	if(y-1 >= 0)
		if(field[y-1][x] == '1')
			solve(x,y-1);
}

int main()
{
	while(1){
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				cin >> field[i][j];
				if(cin.eof())
					return 0;
			}
		}
		cnt = 0;
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(field[i][j] == '1'){
					cnt++;
					solve(j,i);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
				
		