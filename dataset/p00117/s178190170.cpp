#include <iostream>
#include <cstdio>
#include <algorithm>
const int MAX_N = 20, INF = 500000;
int dis[MAX_N+1][MAX_N+1];

//V ¸_ from n_ to I_
int wfloyd(int V, int from, int to){
	for(int k=0;k<=V;k++){
		for(int i=0;i<=V;i++){
			for(int j=0;j<=V;j++)dis[i][j] = std::min(dis[i][j], dis[i][k] + dis[k][j]);
		}
	}
	return dis[from][to];
}

int main(){
	//Initialization
	for(int i=0;i<MAX_N+1;i++){
		for(int j=0;j<MAX_N+1;j++){
			dis[i][j] = INF;
		}
	}

	//Input
	int n, m;//XÌC¹Ì
	std::cin >> n >> m;
	for(int i=0;i<m;i++){
		int a, b, c, d;
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		dis[a][b] = c;
		dis[b][a] = d;
	}

	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);

	//Processing
	int lowest = wfloyd(n,x1,x2) + wfloyd(n,x2,x1),
		res = y1 - y2 - lowest;

	std::cout << res << std::endl;
	return 0;
}