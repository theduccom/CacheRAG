#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
int main(){
    for(;;){
        int n,m;
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)break;
        vector<vector<int> > costs(m,vector<int>(m,-1));
        vector<vector<int> > times(m,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            int a,b,cost,time;
            scanf("%d%d%d%d",&a,&b,&cost,&time);
            a--;b--;
            costs[a][b]=cost;
            costs[b][a]=cost;
            times[a][b]=time;
            times[b][a]=time;
        }
        int k;
        scanf("%d",&k);
        for(int i=0;i<k;i++){
            int p,q,r;
            scanf("%d%d%d",&p,&q,&r);
            p--;q--;
            if(r==1){
                vector<int> d(m,-1);
                d[p]=0;
                priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > lens;
                lens.push(make_pair(0,p));
                while(!lens.empty()){
                    pair<int,int> p = lens.top();
                    lens.pop();
                    int v=p.second;
                    if(d[v]<p.first)continue;
                    for(int j=0;j<m;j++){
                        if(times[v][j]!=-1&&(d[j]>d[v]+times[v][j]||d[j]==-1)){
                            d[j]=d[v]+times[v][j];
                            lens.push(make_pair(d[j],j));
                        }
                    }
                }
                printf("%d\n",d[q]);
            }else{
                vector<int> d(m,-1);
                d[p]=0;
                priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > lens;
                lens.push(make_pair(0,p));
                while(!lens.empty()){
                    pair<int,int> p = lens.top();
                    lens.pop();
                    int v=p.second;
                    if(d[v]<p.first)continue;
                    for(int j=0;j<m;j++){
                        if(costs[v][j]!=-1&&(d[j]>d[v]+costs[v][j]||d[j]==-1)){
                            d[j]=d[v]+costs[v][j];
                            lens.push(make_pair(d[j],j));
                        }
                    }
                }
                printf("%d\n",d[q]);
            }
        }
    }
}