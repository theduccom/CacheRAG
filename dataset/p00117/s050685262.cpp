#include <iostream>
using namespace std;

int main(){
	const int nmax = 21;
	int route[nmax][nmax];
	int n;
	int m;
	int a, b, c, d;
	int x1, x2, y1, y2;
	char ch;
	int cost1, cost2;
	cin >> n >> m;
	for(int i = 0; i < nmax; i++){
		for(int j = 0; j < nmax; j++){
			route[i][j] = -1;
		}
	}
	for(int i = 0; i < m; i++){
		cin >> a >> ch >> b >> ch >> c >> ch >> d;
		route[a][b] = c;
		route[b][a] = d;
	}
	for(int i = 1; i < nmax; i++){
		for(int j = 1; j < nmax; j++){
			if(route[j][i] != -1)
				for(int k = 1; k < nmax; k++)
					if(route[i][k] != -1)
						if(route[j][k] == -1 || (route[j][i] + route[i][k] < route[j][k]))
							route[j][k] = route[j][i] + route[i][k];
		}
	}
	cin >> x1 >> ch >> x2 >> ch >> y1 >> ch >> y2;
	cost1 = route[x1][x2];
	cost2 = route[x2][x1];
	cout << y1 - y2 - cost1 - cost2 << endl;
	return 0;
}