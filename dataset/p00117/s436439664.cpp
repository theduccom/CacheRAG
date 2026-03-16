#include <iostream>
#include <algorithm>
#define INF 1000000
using namespace std;

int main(){
    int n,m,a,b,c,d;
    char ch;
    int cost[21][21];

    for(int i=0;i<21;i++){
        for(int j=0;j<21;j++){
            cost[i][j]=INF;
        }
    }

    cin>>n>>m;

    for(int i=0;i<m;i++){
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        cost[a][b]=c;
        cost[b][a]=d;
    }

    cin>>a>>ch>>b>>ch>>c>>ch>>d;

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
            }
        }
    }

    cout<<c-cost[a][b]-cost[b][a]-d<<endl;

    return 0;
}