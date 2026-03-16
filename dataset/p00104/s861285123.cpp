#include <string>
#include <iostream>
using namespace std;
int H, W; string S[100]; bool used[100][100];
void solve(int x, int y) {
	if (used[y][x]) { printf("LOOP\n"); return; } used[y][x] = true;
	switch (S[y][x]) {
		case '.': printf("%d %d\n", x, y); break;
		case '>': solve(x + 1, y); break;
		case '<': solve(x - 1, y); break;
		case 'v': solve(x, y + 1); break;
		case '^': solve(x, y - 1); break;
	}
}
int main() {
	while (true) {
		scanf("%d%d", &H, &W);
		if (H == 0 && W == 0) break;
		for (int i = 0; i < H; i++) cin >> S[i];
		for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) used[i][j] = false;
		solve(0, 0);
	}
	return 0;
}