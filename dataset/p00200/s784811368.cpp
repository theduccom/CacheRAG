#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
typedef pair<int,int>P;
int Start,End;
const int INF=100000000;
struct edge{
    int to,cost;
    edge(int a,int b){
        to=a;cost=b;
    }
    edge(){}
};
int dijkstra(vector<vector<edge> >V){
    priority_queue<P,vector<P>,greater<P> >Q;
    int d[100];
    fill(d,d+100,INF);
    d[Start]=0;
    Q.push(P(0,Start));

    while(Q.size()){
        P p=Q.top();Q.pop();
        int v=p.second;
        if(d[v]<p.first)continue;
        for(int i=0;i<V[v].size();i++){
            int to=V[v][i].to;
            int cost=V[v][i].cost;
            if(d[to]>d[v]+cost){
                d[to]=d[v]+cost;
                Q.push(P(d[to],to));
            }
        }
    }
    return d[End];
}
int main(){
    int n,m;
    while(cin>>n>>m,n||m){
        vector<vector<edge> >V[2];
        V[0].resize(m);V[1].resize(m);
        while(n--){
            int a,b,cost,time;
            cin>>a>>b>>cost>>time;a--;b--;
            V[0][a].push_back(edge(b,cost));
            V[0][b].push_back(edge(a,cost));

            V[1][a].push_back(edge(b,time));
            V[1][b].push_back(edge(a,time));
        }
        int k;
        cin>>k;
        while(k--){
            int r;
            cin>>Start>>End>>r;Start--;End--;
            cout<<dijkstra(V[r])<<endl;
        }
    }
    return 0;
}