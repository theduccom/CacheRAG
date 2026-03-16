#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
const int inf = 1000000000;

/*
void show(vector<vector<int> > &array){
	for(int i = 0; i < array.size(); i++){
		for(int j = 0; j < array[i].size(); j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
*/

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int> > cost(n + 1, vector<int>(n + 1, inf));
	int town_a, town_b, from_a_to_b, from_b_to_a;
	for(int i = 0; i < m; i++){
		scanf("%d,%d,%d,%d", &town_a, &town_b, &from_a_to_b, &from_b_to_a);
		cost[town_a][town_b] = from_a_to_b;
		cost[town_b][town_a] = from_b_to_a;
	}
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	
	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				if(cost[i][j] > cost[i][k] + cost[k][j])
					cost[i][j] = cost[i][k] + cost[k][j];
	cout << y1 - cost[x1][x2] - cost[x2][x1] - y2 << endl;
}