#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct edge{
    int to;
    int cost;
    edge(int _to,int _cost){
        to=_to,cost=_cost;
    }
};
struct node{
    int num;
    int cost;
    node(int _num,int _cost){
        num=_num,cost=_cost;
    }
    bool operator<(const node &a)const{
        if(cost==a.cost)num>a.num;
        return cost>a.cost;
    }
};
int N,M;
vector<edge> E[1000];
int main(){
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int a,b,c,d;
        scanf("%d,%d,%d,%d",&a,&b,&c,&d);
        a--;b--;
        E[a].push_back(edge(b,c));
        E[b].push_back(edge(a,d));
    }
    int x1,x2,y1,y2;
    scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
    x1--;
    x2--;
    int karians=0;

    priority_queue<node> Q;
    int mini[1000]={1};
    //??????
    for(int i=0;i<1000;i++)mini[i]=2000000000;
    Q.push(node(x1,0));
    mini[x1]=0;
    while(!Q.empty()){
        node now=Q.top();Q.pop();
        for(int i=0;i<E[now.num].size();i++){
            if(mini[E[now.num][i].to]>mini[now.num]+E[now.num][i].cost){
                mini[E[now.num][i].to]=mini[now.num]+E[now.num][i].cost;
                Q.push(node(E[now.num][i].to,mini[now.num]+E[now.num][i].cost));
            }
        }
    }
    karians+=mini[x2];

    //??°???
    for(int i=0;i<1000;i++)mini[i]=2000000000;
    Q.push(node(x2,0));
    mini[x2]=0;
    while(!Q.empty()){
        node now=Q.top();Q.pop();
        for(int i=0;i<E[now.num].size();i++){
            if(mini[E[now.num][i].to]>mini[now.num]+E[now.num][i].cost){
                mini[E[now.num][i].to]=mini[now.num]+E[now.num][i].cost;
                Q.push(node(E[now.num][i].to,mini[now.num]+E[now.num][i].cost));
            }
        }
    }
    karians+=mini[x1];

    cout<<y1-y2-karians<<endl;
}