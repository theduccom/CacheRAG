#include <iostream>
#include<algorithm>
using namespace std;
int map[11][11];
int dx[] = { 0, 0, 0, 1, -1, 1, 1, -1, -1, 0, 0, 2, -2 };
int dy[] = { 0, 1, -1, 0, 0, -1, 1, 1, -1, 2, -2, 0, 0 };
int ans;
int total;
void draw(int x, int y, int size){
	for (int i = 0; i < size * 4 + 1; i++){
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx < 0 || xx >= 10 || yy < 0 || yy >= 10) continue;
		map[yy][xx]++;
		ans = max(ans, map[yy][xx]);
		if (map[yy][xx] == 1)total--;
	}
}
int main(){
	int x, y, size;
	char c;
	total = 10 * 10;
	while (cin >> x >> c >> y >> c >> size){
		draw(x, y, size);
	}
	cout << total << endl;
	cout << ans << endl;
	return 0;
}