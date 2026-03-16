#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int n, m, a, b, c, d;
	int data[25][25];
	int start, end, money, price;
	
	for (int i = 0; i < 25; i++){
		for (int j = 0; j < 25; j++){
			data[i][j] = 10000000;
		}
	}
	
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		data[a][b] = c;
		data[b][a] = d;
	}
	scanf("%d,%d,%d,%d", &start, &end, &money, &price);
	
	for (int k = 1; k <= n; k++){
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				data[i][j] = min(data[i][j], data[i][k] + data[k][j]);
			}
		}
	}
	
	cout << money - (price + data[start][end] + data[end][start]) << endl;
	
	return 0;
}