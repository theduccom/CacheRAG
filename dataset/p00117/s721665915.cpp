#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


int di(int s, int f, vector< vector<int> > E, const int Size){
	int* cost = new int[Size + 1];
	bool* used = new bool[Size + 1];

	for(int i = 0; i < Size + 1; i++){
		cost[i] = INT_MAX / 4;
		if(i == s){
			cost[i] = 0;
		}
		used[i] = false;
	}

	while(true){
		int v = -1;
		for(int i = 0 ; i < Size + 1; i++){
			if( !used[i] && (v == -1 || cost[v] > cost[i])){
				v = i;
			}
		}
		if(v == -1){
			break;
		}
		used[v] = true;

		for(int i = 0; i < Size + 1; i++){
			cost[i] = min(cost[i], cost[v] + E[v][i]);
		}
	}

	return cost[f];
}


int main(){
	int n, m;
	int x1, x2, y1, y2;
	char dummy;
	int cost = 0;

	cin >> n;
	cin >> m;

	int* a = new int[m + 1];
	int* b = new int[m + 1];
	int* c = new int[m + 1];
	int* d = new int[m + 1];

	vector< vector <int > > E(n + 1, vector<int> (n + 1, INT_MAX / 4));


	for(int i = 1; i <= m; i++){
		cin >> a[i] >> dummy >> b[i] >> dummy >> c[i] >> dummy >> d[i];
		E[a[i]][b[i]] = c[i];
		E[b[i]][a[i]] = d[i];
	}
	cin >> x1 >> dummy >> x2 >> dummy >> y1 >> dummy >> y2;


	cost += di(x1, x2, E, n);
	cost += di(x2, x1, E, n);

	cout << y1 - y2 - cost << endl;
}