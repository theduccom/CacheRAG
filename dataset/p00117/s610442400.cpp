#include<iostream>
#include<algorithm>
using namespace std;

const int SIZE = 20;
const int MAX = 255;
int town,way;
int e[SIZE][SIZE];
int cost[SIZE];
bool used[SIZE];

int dijkstra(int start, int end){
	for(int i=0; i<town; i++){
		cost[i] = MAX;
		used[i] = false;
	}
	cost[start] = 0;

	while(1){
		//step1
		int v = -1;
		for(int i=0; i<town; i++)
			if(!used[i] && (v==-1 || cost[v]>cost[i])) v=i;
		if(v==-1) break;
		//step2
		used[v] = true;
		//step3
		for(int i=0; i<town; i++)
			cost[i] = min(cost[i],cost[v]+e[v][i]);
	}

	return cost[end];
}

int main(void){
	int start,end,money,price,prize;
	char dummy;

	cin >> town >> way;
	for(int i=0; i<town; i++){
		for(int j=0; j<town; j++){
			e[i][j]=MAX;
		}
	}
	for(int i=0; i<way; i++){
		int a,b,atob,btoa;
		cin >> a >> dummy >> b >> dummy >> atob >> dummy >> btoa;
		a--; b--;
		e[a][b] = atob;
		e[b][a] = btoa;
	}
	cin >> start >> dummy >> end >> dummy >> money >> dummy >> price;
	end--; start--;

	prize = money - price;
	prize -= dijkstra(start,end);
	prize -= dijkstra(end,start);

	cout << prize << endl;
}