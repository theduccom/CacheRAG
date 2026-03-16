#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a,b,c,d;
	int G[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			G[i][j] = 100000000;
	for(int i = 0; i < m; i++){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		G[a - 1][b - 1] = c;
		G[b - 1][a - 1] = d;
	}
	int s,g,v,p;
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	s--; g--;
	vector <int> used(n,0);
	vector <int> dist(n,100000000);
	dist[s] = 0;
	while(1){
		int va = -1;
		for(int i = 0; i < n; i++)
			if(used[i] == 0 && (va == -1 || dist[va] > dist[i]))
				va = i;
		if(va == -1)
			break;
		used[va] = 1;
		for(int i = 0; i < n; i++)
			dist[i] = min(dist[i] , G[va][i] + dist[va]);
	}
	int iki = dist[g];
	used = vector <int> (n,0);
	dist = vector <int> (n,100000000);
	dist[g] = 0;
	while(1){
		int va = -1;
		for(int i = 0; i < n; i++)
			if(used[i] == 0 && (va == -1 || dist[va] > dist[i]))
				va = i;
		if(va == -1)
			break;
		used[va] = 1;
		for(int i = 0; i < n; i++)
			dist[i] = min(dist[i] , G[va][i] + dist[va]);
	}
	cout << v - p - dist[s] - iki << endl;
}