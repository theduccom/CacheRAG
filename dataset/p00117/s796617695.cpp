#include <iostream>
#include <cstdio>
#include <cmath>
#define INF 100000000
using namespace std;

int main(){
	int d[20][20];
	int n,m,s,g,v,p;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++) d[i][j] = INF;
		d[i][i] = 0;
	}
	for(int i = 0;i < m;i++){
		int a,b,c,e;
		scanf("%d,%d,%d,%d",&a,&b,&c,&e);
		d[a - 1][b - 1] = c;
		d[b - 1][a - 1] = e;
	}
	for(int k = 0;k < n;k++){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++) d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
		}
	}
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	cout << v - p - (d[s - 1][g - 1] + d[g - 1][s - 1]) << endl;
	return 0;
}