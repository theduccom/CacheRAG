#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,m,a,b,c,d,x1,x2,y1,y2;
	char ch;
	cin >> n >> m;
	vector< vector<int> > road(n+1,vector<int>(n+1,100001));
	for (int i = 0; i < m; i++) {
		cin >> a >> ch >> b >> ch >> c >> ch >> d;
		road[a][b] = c;
		road[b][a] = d;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (road[i][k] != 100001 && road[k][j] != 100001)
					if(road[i][j] > road[i][k] + road[k][j]) road[i][j] = road[i][k] + road[k][j];
			}
		}
	}
	cin >> x1 >> ch >> x2 >> ch >> y1 >> ch >> y2;
	cout << y1 - y2 - road[x1][x2] - road[x2][x1] << endl;
	return 0;
}