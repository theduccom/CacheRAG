#include <stdio.h>
#include <utility>
#include <vector>
using namespace std;
const int INF=(1<<29);
int min(int a,int b){
    if(a>b)return b;
    return a;
}
int main(){
    int n,m,l,r,dis[110][110],cost[110][110],c,t;
    while(1){
    scanf("%d%d",&m,&n);
        if(n==0&&m==0)return 0;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)dis[i][j]=cost[i][j]=INF;
    for(int i=0;i<m;i++){
        scanf("%d%d%d%d",&l,&r,&c,&t);
        dis[l][r]=dis[r][l]=t;
        cost[l][r]=cost[r][l]=c;
    }
    for(int k=1;k<=n;k++)for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
        dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
        cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&l,&r,&m);
        if(m==0)printf("%d\n",cost[l][r]);
        else printf("%d\n",dis[l][r]);
    }
    }
}