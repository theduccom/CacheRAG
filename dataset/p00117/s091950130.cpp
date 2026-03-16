#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
using namespace std;
typedef pair<int,int>pii;
const int INF=100000000;
struct edge{
    int to,cost;
    edge(int a,int b){
        to=a;cost=b;
    }
    edge(){}
};
vector<vector<edge> >V;

int dijkstra(int s,int g){
    int d[100];
    fill(d,d+100,INF);
    d[s]=0;
    priority_queue<pii>Q;
    Q.push(pii(0,s));
    while(!Q.empty()){
        pii p=Q.top();Q.pop();
        int n=p.second,cost=p.first;
        if(d[n]<cost)continue;
        d[n]=cost;
        for(int i=0;i<V[n].size();i++){
            edge e=V[n][i];
            if(d[e.to]>d[n]+e.cost){
                Q.push(pii(d[n]+e.cost,e.to));
            }
        }
    }

    return d[g];
}
int main(){
    int n,m;
    cin>>n>>m;
    V.resize(n);
    for(int i=0;i<m;i++){
        int a,b,ab,ba;
        scanf("%d,%d,%d,%d",&a,&b,&ab,&ba);
        a--;b--;
        V[a].push_back(edge(b,ab));
        V[b].push_back(edge(a,ba));
    }
    int s,g,w,c;
    scanf("%d,%d,%d,%d",&s,&g,&w,&c);
    s--;g--;
    cout<<w-c-dijkstra(s,g)-dijkstra(g,s)<<endl;
    return 0;
}