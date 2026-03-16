#include<iostream>
using namespace std;
#define rep() for(int i = 1;i <= 3;i++)
char map[10][10];
void sim(int x,int y) {
	map[x][y] = '0';
	rep(){
		if (x - i <= 0)break;
		else if (map[x - i][y] == '1')sim(x - i, y);
	}
	rep(){
		if (x + i >= 9)break;
		else if (map[x + i][y] == '1')sim(x + i, y);
	}
	rep() {
		if (y - i <= 0)break;
		else if (map[x][y - i] == '1')sim(x, y - i);
	}
	rep() {
		if (y + i >= 9)break;
		else if (map[x][y + i] == '1')sim(x, y + i);
	}
	return;
}
void input() {
	for (int i = 1; i <= 8; i++) { for (int j = 1; j <= 8; j++)cin >> map[i][j]; }
	return;
}
void output() {
	for (int i = 1; i <= 8; i++) { 
		for (int j = 1; j <= 8; j++) cout << map[i][j]; 
		cout << endl;
	}
	return;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		input();
		int x, y;
		cin >> x >> y;
		sim(y,x);
		cout << "Data " << i + 1 << ":\n";
		output();
	}
}