#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int x1[4] = {-1,0,0,1}, y1[4] = {0,1,-1,0};
	int x2[4] = {-1,-1,1,1}, y2[4] = {-1,1,-1,1};
	int x3[4] = {-2,0,0,2}, y3[4] = {0,-2,2,0};
	int p[10][10], x, y, s, nx, ny, maxl = 0, count = 0;
	for(int i = 0;i < 10;i++)
		for(int j = 0;j < 10;j++)p[i][j] = 0;
	char c;
	while(cin >> x >> c >> y >> c >> s){
		
		//cout << x << " " << y << " " << s << endl;
		//if(s == 0)break;
		
		p[y][x]++;
		for(int i = 0;i < 4;i++){
			nx = x + x1[i];ny = y + y1[i];
			if(nx>=0&&nx<10&&ny>=0&&ny<10)p[ny][nx]++;
		}
		if(s > 1){
			for(int i = 0;i < 4;i++){
				nx = x + x2[i];ny = y + y2[i];
				if(nx>=0&&nx<10&&ny>=0&&ny<10)p[ny][nx]++;
			}
			if(s == 3){
				for(int i = 0;i < 4;i++){
					nx = x + x3[i];ny = y + y3[i];
					if(nx>=0&&nx<10&&ny>=0&&ny<10)p[ny][nx]++;
				}
			}
		}
	}
	/*for(int i = 0;i < 10;i++){
		for(int j = 0;j < 10;j++)cout << p[i][j] << " ";
		cout << endl;
	}*/
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 10;j++){
			maxl = max(maxl, p[i][j]);
			if(!p[i][j])count++;
		}
	}
	cout << count << endl << maxl << endl;
	return 0; 
}