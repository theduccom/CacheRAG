#include <iostream>
#include <string>
using namespace std;

int main(){
	string str[100];
	int v[100][100];
	int h, w;
	while(cin >> h >> w, h){
		fill((int*)v, (int*)(v+100), false);
		for(int i = 0;i < h;i++)cin >> str[i];
		int x = 0, y = 0;
		while(1){
			if(str[y][x] == '.'){cout << x << " " << y << endl;break;}
			if(v[y][x]){cout << "LOOP" << endl;break;}
			v[y][x] = true;
			if(str[y][x] == '>')x++;
			if(str[y][x] == '<')x--;
			if(str[y][x] == '^')y--;
			if(str[y][x] == 'v')y++;
		}
	}
}