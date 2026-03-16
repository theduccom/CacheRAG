#include <stdio.h>
#include <queue>
using namespace std;
typedef pair<int,int> P;

int main()
{
	int x,y;
	char map[100][101];
	bool visited[100][100];
	char mapkind[5] = {"><^v"};
	int tx[4] = {1,-1,0,0},ty[4] = {0,0,-1,1};
	queue<P> que;
	P now;

	scanf("%d%d",&y,&x);

	while(x != 0 && y != 0){
		for(int i = 0; i < y; i++){
			for(int j = 0; j < x; j++){
				visited[i][j] = false;
			}
		}
		for(int i = 0; i < y; i++){
			scanf("%s",map[i]);
		}

		now.first = 0; now.second = 0;
		que.push(now);

		while(!que.empty()){
			now = que.front();
			for(int i = 0; i < 4; i++){
				if(map[now.second][now.first] == mapkind[i]){
					if(!visited[now.second + ty[i]][now.first + tx[i]] ){
						visited[now.second + ty[i]][now.first + tx[i]] = true;
						now.second += ty[i];
						now.first += tx[i];
						que.push(now);
						break;
					}
				}
			}
			que.pop();
		}

		if(map[now.second][now.first] == '.'){
			printf("%d %d\n",now.first,now.second);
		}
		else{
			printf("LOOP\n");
		}

		scanf("%d%d",&y,&x);
	}
	
	
	return 0;
}