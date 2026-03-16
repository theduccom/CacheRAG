#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n, point[4], count;
	char str[50];

	while (cin >> n != NULL) {
		getchar();
		for (int i = 0; i < n; i++) {
			memset(point, 0, sizeof(point));
			count = 0;
			while (count != 3) {
				cin >> str;
				if (strcmp(str, "HIT") == 0) {
					for (int j = 2; j >= 0; j--) {
						if (point[j]) {
							point[j] = 0;
							point[j+1] += 1;
						}
					}
					point[0] = 1;
				} else if (strcmp(str, "OUT") == 0) {
					count++;
				} else if (strcmp(str, "HOMERUN") == 0) {
					int c = 0;
					for (int j = 0; j < 3; j++) {
						if (point[j])
							c++;
						point[j] = 0;
					}
					point[3] += c + 1;
				}
			}
			cout << point[3] << endl;
		}
	}

	return 0;
}