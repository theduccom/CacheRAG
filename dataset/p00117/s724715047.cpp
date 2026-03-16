#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 30
#define INFTY (1<<21)
int main(){
	int a1, b1, c1, d1, x1, x2, y2, y1, n, m; 
	int dai[MAX][MAX];
	char v;
	for (int i = 0;i<MAX;i++){
		for(int l=0;l<MAX;l++){
			dai[i][l] = INFTY;
		}
	}
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> a1 >> v >> b1 >> v >> c1 >> v >>  d1;
		dai[a1-1][b1-1] = c1;
		dai[b1-1][a1-1] = d1;
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++){
			for (int k = 0; k < m; k++){
				dai[j][k] = min(dai[j][k], dai[j][i] + dai[i][k]);
			}
		}
	}
	cin >> x1 >> v >> x2 >> v >> y1 >> v >> y2;
	cout << y1 - (y2 + dai[x1-1][x2-1]+dai[x2-1][x1-1]) << endl;
	return 0;
}