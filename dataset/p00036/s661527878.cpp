#include <iostream>

using namespace std;

int main() {
	char a;
	bool hantei;
	while (cin >> a) {
		int graph[10][10] = {0};
		hantei = false;
		graph[1][1] = a - '0';
		for (int j = 2; j < 9; j++) {
			cin >> a;
			graph[1][j] = a - '0';
		}
		for (int i = 2; i < 9; i++) {
			for (int j = 1; j < 9; j++) {
				cin >> a;
				graph[i][j] = a - '0';
			}
		}
		for (int i = 1; i < 9; i++) {
			for (int j = 1; j < 9; j++) {
				if (graph[i][j] == 1) {
					if (graph[i][j+1] == 1) {
						if (graph[i+1][j+1] == 1) {
							if (graph[i+1][j] == 1) {
								cout << 'A' << endl;
							} else {
								cout << 'E' << endl;
							}
						} else {
							if (graph[i+1][j] == 1) {
								cout << 'G' << endl;
							} else {
								cout << 'C' << endl;
							}
						}
					} else {
						if (graph[i+2][j] == 1) {
							cout << 'B' << endl;
						} else {
							if (graph[i+1][j+1] == 1) {
								cout << 'F' << endl;
							} else {
								cout << 'D' << endl;
							}
						}
					}
					hantei = true;
					break;
				}
			}
			if (hantei == true) {
				break;
			}
		}
	}
	return 0;
}