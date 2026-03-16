#include<bits/stdc++.h>
using namespace std;
#define MAX_V 25
#define INF 1<<21

int d[MAX_V][MAX_V];	//d[u][v]テ」ツ?ッティツセツコe=(u,v)テ」ツ?ョテ」ツつウテ」ツつケテ」ツδ?テ・ツュツ佚・ツ慊ィテ」ツ?療」ツ?ェテ」ツ??・ツ?エテ・ツ青暗」ツ?ッINFテ」ツ??」ツ?淌」ツ??」ツ?妖[i][i]=0テ」ツ?ィテ」ツ?凖」ツつ?
int n, m;	//テゥツ?づァツつケテヲツ閉ー

void warshall_floyd(){
	for(int k = 0; k < n; k++){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}




int main(){
	for(int i = 0; i < MAX_V; i++){
		for(int j = 0; j < MAX_V; j++){
			d[i][j] = INF;
		}
	}


	cin >> n >> m;
	char c;
	for(int i = 0; i < m; i++){
		int a1, b1, c1, d1;
		cin >> a1 >> c >> b1 >> c >> c1 >> c >> d1;
		d[a1-1][b1-1] = c1;
		d[b1-1][a1-1]	= d1;	
	}
	int x1, x2, y1, y2;
	cin >> x1 >> c >> x2 >> c >> y1 >> c >> y2;
	
	warshall_floyd();
	cout << y1 - y2 - d[x1-1][x2-1] - d[x2-1][x1-1] << endl;
}