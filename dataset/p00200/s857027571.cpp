#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
#define INF 1e+8
struct Data {
	int cost,time;
	Data(){}
	Data(int cost, int time):cost(cost),time(time){}
};
int main() {
	int n,m;
	while(scanf("%d%d",&n,&m),(n|m)) {
		Data d[101][101];
		for(int i = 0; i < 101; i++) {
			for(int j = 0; j < 101; j++) {
				d[i][j] = Data(INF,INF);
			}
		}
		for(int i = 0; i < n; i++) {
			int a,b,cost,time;
			scanf("%d%d%d%d",&a,&b,&cost,&time);
			a--;b--;
			d[a][b] = Data(cost,time);
			d[b][a] = Data(cost,time);
		}
		for(int k = 0; k < m; k++) {
			for(int i = 0; i < m; i++) {
				for(int j = 0; j < m; j++) {
					d[i][j].cost = min(d[i][j].cost,d[i][k].cost + d[k][j].cost);		
					d[j][i].cost = min(d[j][i].cost,d[j][k].cost + d[k][i].cost);		
					d[i][j].time = min(d[i][j].time,d[i][k].time + d[k][j].time);		
					d[j][i].time = min(d[j][i].time,d[j][k].time + d[k][i].time);		
				}
			}
		}
		int k;
		scanf("%d",&k);
		for(int i = 0; i < k; i++) {
			int p,q,r;
			scanf("%d%d%d",&p,&q,&r);
			p--;q--;
			if(r == 0)
				printf("%d\n",d[p][q].cost);
			else 
				printf("%d\n",d[p][q].time);
		}
	}
	return 0;
}