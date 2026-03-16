#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>
#include <sstream>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef long long ll;

const int MAX_SIZE = 10000;

struct edge{
	int to;
	int cost;
};

typedef pair<int,int> P;
int V;

const int MAX_V = 5000;

vector<edge> G[MAX_V];
vector<edge> G2[MAX_V];
int d[MAX_V];
const int INF = 100000000;

int prevv[MAX_V];

void dijkstra(int s){
  priority_queue<P,vector<P>,greater<P> > que;
  fill(d,d+MAX_V,INF);
  fill(prevv,prevv+MAX_V,-1);
  d[s] = 0;
  que.push(P(0,s));
  while(!que.empty()){
    P p = que.top();
    que.pop();
    int v = p.second;
    if(d[v] < p.first)
      continue;
    for(int i = 0; i < G[v].size(); i++){
      edge e = G[v][i];
      if(d[e.to] > d[v] + e.cost){
	d[e.to] = d[v] + e.cost;
	que.push(P(d[e.to],e.to));
	// ツつサツづ個ノツーツドツづ鳴づ個催短ツ仰猟猟」ツ経ツ路ツづーツ記ツ録ツつオツづつィツつュ
	prevv[e.to] = v;
      }
    }
  }
}
void dijkstra2(int s){
  priority_queue<P,vector<P>,greater<P> > que;
  fill(d,d+MAX_V,INF);
  fill(prevv,prevv+MAX_V,-1);
  d[s] = 0;
  que.push(P(0,s));
  while(!que.empty()){
    P p = que.top();
    que.pop();
    int v = p.second;
    if(d[v] < p.first)
      continue;
    for(int i = 0; i < G2[v].size(); i++){
      edge e = G2[v][i];
      if(d[e.to] > d[v] + e.cost){
	d[e.to] = d[v] + e.cost;
	que.push(P(d[e.to],e.to));
	// ツつサツづ個ノツーツドツづ鳴づ個催短ツ仰猟猟」ツ経ツ路ツづーツ記ツ録ツつオツづつィツつュ
	prevv[e.to] = v;
      }
    }
  }
}

int main(){

	int n,m;
	while(cin>>n>>m&&!(n==0&&m==0)){
		for(int i = 0; i < n; i++){
			int from,to,money,time;
			cin>>from>>to>>money>>time;
			edge e;
			e.to=to;
			e.cost=money;
			G[from].push_back(e);
			e.to=from;
			G[to].push_back(e);

			e.cost=time;
			G2[to].push_back(e);
			e.to=to;
			G2[from].push_back(e);

		}
		int k;
		cin>>k;
		for(int i = 0; i < k; i++){
			int s,g,r;
			cin>>s>>g>>r;
			if(r==0){
				dijkstra(s);
				cout<<d[g]<<endl;
			}
			else{
				dijkstra2(s);
				cout<<d[g]<<endl;
			}
		}
		for(int i = 0; i < MAX_V; i++){
			G[i].clear();
			G2[i].clear();
		}
	}


	return 0;
}