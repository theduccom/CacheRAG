#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	int m[100] = {};
	int e[100] = {};
	int j[100] = {};
	string rank[10000] = {};
	int g = 0;
	while (cin >> n&&n) {
		for (int k = 0; k < n; k++) {
			cin >> m[k] >> e[k] >> j[k];
		}
		for (int i = 0; i < n; i++) {
			int s = (m[i] + e[i] + j[i]) / 3;
			g++;
			if ((m[i] == 100)||(e[i] == 100)||(j[i] == 100)) {
				rank[i] = "A";
			}
			else if ((m[i] + e[i]) / 2 >= 90) {
				rank[i] = "A";
			}
			else if (s >= 80) {
				rank[i] = "A";
			}
			else if (s >= 70) {
				rank[i] = "B";
			}
			else if (s >= 50 && m[i] >= 80) {
				rank[i] = "B";
			}
			else {
				rank[i] = "C";
			}
			cout << rank[i] << endl;
		}

	}

	return 0;
	
}