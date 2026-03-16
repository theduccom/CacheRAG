#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

int main(){

	int n,m,min_time[101][101],min_cost[101][101],from,to,cost,time,num,r;

	while(true){
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0)break;

		for(int i = 1; i <= m; i++){
			for(int k = 1; k <= m; k++){
				if(i != k){
					min_time[i][k] = 2000000000;
					min_cost[i][k] = 2000000000;
				}else{
					min_time[i][k] = 0;
					min_cost[i][k] = 0;
				}
			}
		}

		for(int i = 0; i < n; i++){
			scanf("%d %d %d %d",&from,&to,&cost,&time);
			min_time[from][to] = time;
			min_cost[from][to] = cost;
			min_time[to][from] = time;
			min_cost[to][from] = cost;
		}

		for(int k = 1; k <= m; k++){
			for(int i = 1; i <= m; i++){
				if(min_time[i][k] == 2000000000)continue;
				for(int p = 1; p <= m; p++){
					if(min_time[k][p] == 2000000000)continue;
					min_time[i][p] = min(min_time[i][p],min_time[i][k] + min_time[k][p]);
				}
			}

			for(int i = 1; i <= m; i++){
				if(min_cost[i][k] == 2000000000)continue;
				for(int p = 1; p <= m; p++){
					if(min_cost[k][p] == 2000000000)continue;
					min_cost[i][p] = min(min_cost[i][p],min_cost[i][k] + min_cost[k][p]);
				}
			}
		}

		scanf("%d",&num);

		for(int i = 0; i < num; i++){
			scanf("%d %d %d",&from,&to,&r);
			if(r == 1){
				printf("%d\n",min_time[from][to]);
			}else{
				printf("%d\n",min_cost[from][to]);
			}
		}
	}

	return 0;
}