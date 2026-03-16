#include<iostream>
using namespace std;

int main() {
	char zu[8][8];

	while (cin >> zu[0]) {
		for (int i = 1;i < 8;i++)cin >> zu[i];

		int a, b;
		for (int i = 0;i < 8;i++) {
			for (int j = 0;j < 8;j++) {
				if (zu[i][j] == '1') {
					a = i;
					b = j;
					goto FIN;
				}
			}
		}
		FIN:

		if (a<=6&&b<=6&&zu[a][b] == zu[a][b + 1] &&zu[a][b]== zu[a + 1][b] &&zu[a][b]== zu[a + 1][b + 1])cout << 'A' << endl;
		else if (a<=4&&zu[a][b] == zu[a + 1][b]&&zu[a][b] == zu[a + 2][b] && zu[a][b] == zu[a + 3][b])cout << 'B' << endl;
		else if (b <= 4 && zu[a][b] == zu[a][b + 1] && zu[a][b] == zu[a][b + 2] && zu[a][b] == zu[a][b + 3])cout << 'C' << endl;
		else if (b >= 1 && a <= 5 && zu[a][b]== zu[a + 1][b] && zu[a][b] == zu[a + 1][b - 1] && zu[a][b] == zu[a + 2][b - 1])cout << 'D' << endl;
		else if (b <= 5 && zu[a][b] == zu[a][b + 1] && zu[a][b] == zu[a + 1][b + 1] && zu[a][b] == zu[a + 1][b + 2])cout << 'E' << endl;
		else if (a <= 5 && zu[a][b] == zu[a + 1][b] && zu[a][b] == zu[a + 1][b + 1] && zu[a][b] == zu[a + 2][b + 1])cout << 'F' << endl;
		else cout << 'G' << endl;
	}
	return 0;
}