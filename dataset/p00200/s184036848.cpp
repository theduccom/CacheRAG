#include<iostream>
#include<vector>
#include<string>
#define int long long
using namespace std;

signed main() {
	int a, b;
	while (cin >>b>>a, a | b) {
		vector<vector<int>>cost(a, vector<int>(a, 2147483647));
		vector<vector<int>>time(a, vector<int>(a, 2147483647)); 
		for (int c = 0; c < b; c++) {
			int d, e, f, g;
			cin >> d >> e >> f >> g;
			d--; e--;
			cost[d][e] = cost[e][d] = f;
			time[d][e] = time[e][d] = g;
		}
		for (int h = 0; h < a; h++) {
			for (int i = 0; i < a; i++) {
				for (int j = 0; j < a; j++) {
					if (i == j)cost[i][j] = time[i][j] = 0;
					else {
						cost[i][j] = (cost[i][j] < cost[i][h] + cost[h][j]) ? (cost[i][j]) : (cost[i][h] + cost[h][j]);
						time[i][j] = (time[i][j] < time[i][h] + time[h][j]) ? (time[i][j]) : (time[i][h] + time[h][j]);
					}
				}
			}
		}
		int l;
		cin >> l;
		for (int r = 0; r < l; r++) {
			int x, y, z;
			cin >> x >> y >> z;
			x--; y--;
			if (z) { cout << time[x][y] << endl; }
			else { cout << cost[x][y] << endl; }
		}
	}
}