#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int INF = 10000000,MAX = 21;
int main(){
	int n,m,edge[MAX][MAX],a,b,c,d,s,g,p,pp;
	cin >> n >> m;
	for(int i = 0;i < MAX;++i){
		for(int j = 0;j < MAX;++j){
			edge[i][j] = INF;
		}
		edge[i][i] = 0;
	}
	for(int i = 0;i < m;++i){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		edge[a][b] = c;
		edge[b][a] = d;
	}
	scanf("%d,%d,%d,%d",&s,&g,&p,&pp);
	p -= pp;
	for(int k = 1;k <= n;++k){
		for(int i = 1;i <= n;++i){
			for(int j = 1;j <= n;++j){
				edge[i][j] = min(edge[i][j],edge[i][k] + edge[k][j]);
			}
		}
	}
	cout << p - (edge[s][g] + edge[g][s]) << endl;
	return 0;
}