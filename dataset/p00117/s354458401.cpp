#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

const int MAX_C = 21;
const int INF = (1<<25);

int edge[MAX_C][MAX_C];
int cost[MAX_C];
int come[MAX_C];

int n,m;

int solve(int start ,int fin){
  fill(come,come+MAX_C,0);
  come[0] = 1;
  for(int i = n+1; i < MAX_C; i++) come[i] =1;
  fill(cost,cost+MAX_C,INF);
  queue <int> Q;
  cost[start]= 0;

  while(1){
    int minPos=-1,minCos = INF;

    for(int i = 0; i < MAX_C; i++){
      if(!come[i]){
	if(minCos > cost[i]){
	  minCos = cost[i];
 	  minPos = i;
	}
      }
    }
    if(minPos == -1) break;
    come[minPos] = 1;

    for(int i = 1; i < MAX_C; i++){
      if(edge[minPos][i] != INF) Q.push(i);
    }

    while(!Q.empty()){
      int now = Q.front();
      Q.pop();
      cost[now] = min(cost[now],cost[minPos] + edge[minPos][now]);
    }
  } 
  return cost[fin];
}

void init(){
  for(int i = 0; i < MAX_C; i++) fill(edge[i],edge[i]+MAX_C,INF);
  fill(cost,cost+MAX_C,INF);
  fill(come,come+MAX_C,0);
  come[0] = 1;
}

int main(){
  char trash;
  while(cin >> n && n){
    init();
    cin >> m;
    for(int i = 0; i < m; i++){
      int from,to,cft,ctf;
      cin >> from >> trash >> to >> trash >> cft >> trash>> ctf;
      edge[from][to] = cft;
      edge[to][from] = ctf;
    }
    int start,fin,mon,cos;
    cin >> start >>trash >> fin >> trash >> mon >> trash >> cos;
    cout << mon - cos - solve(start,fin) - solve(fin,start) << endl;
  }
  return 0;
}