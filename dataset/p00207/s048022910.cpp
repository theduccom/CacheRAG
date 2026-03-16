#include <iostream>
#include <cstring>
using namespace std;

int w,h;
int field[102][102];
int sx,sy;
int gx,gy;
int n;
int color;
bool ans;

void DFS(int x,int y)
{
	if(x == gx && y == gy){
		ans = true;
		return;
	}
	if(field[y][x] == -1)
		return;
	field[y][x] = -1;
	if(color == field[y][x-1])
		DFS(x-1,y);
	if(color == field[y][x+1])
		DFS(x+1,y);
	if(color == field[y-1][x])
		DFS(x,y-1);
	if(color == field[y+1][x])
		DFS(x,y+1);
}
int main()
{
	while(cin >> w >> h){
		if(!w&&!h)
			break;
		ans = false;
		memset(field,-1,sizeof(field));
		cin >> sx >> sy;
		cin >> gx >> gy;
		cin >> n;
		for(int i=0;i<n;i++){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			if(d == 1){
				for(int i=0;i<4;i++){
					for(int j=0;j<2;j++){
						field[y+i][x+j] = c;
					}
				}
			}
			else if(d == 0){
				for(int i=0;i<2;i++){
					for(int j=0;j<4;j++){
						field[y+i][x+j] = c;
					}
				}
			}
		}
		color = field[sy][sx];
		DFS(sx,sy);
		if(ans)
			cout << "OK" << endl;
		else
			cout << "NG" << endl;
	}
	return 0;
}