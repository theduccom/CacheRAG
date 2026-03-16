#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<map>
#define f first
#define s second
using namespace std;

int INF = (1<<21);
typedef pair<int,int> P;// f=to s=cost
vector<P> info[22];
int m_cost[22];
priority_queue<P, vector<P>, greater<P> > que;//queueに入るコストは合計コスト
int n, m;
int x1, x2;
int ans, y2;

void dijkstra(){
  while(!que.empty()){
    P now = que.top(); que.pop();
    int size = info[now.f].size();
    for(int i = 0; i < size; i++){
      if(info[now.f][i].s + now.s < m_cost[info[now.f][i].f]){
	m_cost[info[now.f][i].f] = info[now.f][i].s + now.s;
	P next;
	next.f = info[now.f][i].f;
	next.s = m_cost[info[now.f][i].f];
	que.push(next);
      }
    }
  }
  return;
}
    
int main(){
  for(int i = 0; i < 22; i++) m_cost[i] = INF;
  cin >> n;
  cin >> m;
  for(int i = 0; i < m; i++){
    P p;
    int a, b, c, d;
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    p.f = b; p.s = c;
    info[a].push_back(p);
    p.f = a; p.s = d;
    info[b].push_back(p);
  }

  scanf("%d,%d,%d,%d", &x1, &x2, &ans, &y2);
  ans -= y2; 
  P p; p.f = x1; p.s = 0;
  que.push(p);
  dijkstra();
  
  ans -= m_cost[x2];

  for(int i = 0; i < 22; i++) m_cost[i] = INF;
  p.f = x2; p.s = 0;
  que.push(p);
  dijkstra();
  
  ans -= m_cost[x1];

  cout << ans << endl;
}