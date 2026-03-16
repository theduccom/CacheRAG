#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m, a, b, c, d, s[22][22], inf = 100000, i, j, k;
	char temp;
	cin >> n;
	cin >> m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i != j) {
				s[i][j] = inf;
			}
			else {
				s[i][j] = 0;
			}
		}
	}
	for (i = 0; i < m; i++) {
		cin >> a >> temp >> b >> temp >> c >> temp >> d;
		s[a - 1][b - 1] = c;
		s[b - 1][a - 1] = d;
	}
	for (k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				s[i][j] = min(s[i][j], s[i][k] + s[k][j]);
			}
		}
	}
	cin >> a >> temp >> b >> temp >> c >> temp >> d;
	cout << c - d - s[a - 1][b - 1] -s[b-1][a-1]<< endl;
	return 0;
}