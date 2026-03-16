#include<iostream>
#include<string>
using namespace std;
int main()
{
	int dx[] = {1,1,0,0,0,0,1,2,3,0,-1,-1,1,1,2,0,1,1,1,0,-1};
	int dy[] = {0,1,1,1,2,3,0,0,0,1,1,2,0,1,1,1,1,2,0,1,1};
	string abc = " ABCDEFG";
	string map[8];
	while (cin >> map[0]){
		
		for (int i = 1; i < 8; i++){
			cin >> map[i];
		}
		int cnt = 0;
		int flag = 0;
		for (int i = 0; i < 8; i++){
			for (int i2 = 0; i2 < 8; i2++){
				if (map[i][i2] == '1'){
					for (int i3 = 1; i3 <= 21; i3++){
						int x = i2 + dx[i3 - 1];
						int y = i + dy[i3 - 1];
						if (x >= 0 && x < 8 && y >= 0 && y < 8 && map[y][x] == '1'){
							cnt++;
						}
						if (i3 % 3 == 0){
							if (cnt == 3){
								flag = i3 - 1; cout << abc[(i3) / 3] << endl;
								cnt = 0;
							}
							cnt = 0;
						}
					}
				}
			}
		}
	}
}