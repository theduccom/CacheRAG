#include <iostream>
#include <cstdio>
#include <queue>
#include <cstdlib>

#define SIZE 8
#define WIDTH 4

using namespace std;

int distances[SIZE][SIZE][SIZE][SIZE][SIZE][SIZE][SIZE][SIZE];
int way[4] = { -1, 1, -WIDTH, WIDTH };

typedef struct{
	int v[SIZE];
} field_t;

void solve(){
	queue<field_t> q;

	q.push({ { 0, 1, 2, 3, 4, 5, 6, 7 } });

	while (!q.empty()){
		field_t a = q.front();
		q.pop();

		for (int i = 0; i < SIZE; i++){
			if (a.v[i] == 0){
				for (int j = 0; j < 4; j++){
					int newpos = i + way[j];
					if (newpos < 0 || newpos >= SIZE || abs(newpos%WIDTH - i%WIDTH) > 1) continue;
					int dist = distances[a.v[0]][a.v[1]][a.v[2]][a.v[3]][a.v[4]][a.v[5]][a.v[6]][a.v[7]];
					a.v[i]		= a.v[newpos];
					a.v[newpos]	= 0;
					if (distances[a.v[0]][a.v[1]][a.v[2]][a.v[3]][a.v[4]][a.v[5]][a.v[6]][a.v[7]]) {
						a.v[newpos] = a.v[i];
						a.v[i] = 0;
						continue; 
					}
					distances[a.v[0]][a.v[1]][a.v[2]][a.v[3]][a.v[4]][a.v[5]][a.v[6]][a.v[7]] = dist + 1;
					q.push(a);
					a.v[newpos] = a.v[i];
					a.v[i] = 0;
				}
				break;
			}
		}
	}
	distances[0][1][2][3][4][5][6][7] = 0;
}

int main(){
	solve();
	
	int a[SIZE];
	while (~scanf("%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7])){
		cout << distances[a[0]][a[1]][a[2]][a[3]][a[4]][a[5]][a[6]][a[7]] << endl;
	}
}