#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>

using namespace std;

void Solution()
{
    int cost[22][22] = {{0}};
    
    int n, m;
    int i, j, k;
    int a, b, c, d;
    
    char comma;
    
    cin>>n>>m;
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            cost[i][j] = 1<<28;
        }
    }
    
    for(i=0; i < m; i++)
    {
        cin>>a>>comma>>b>>comma>>c>>comma>>d;
        
        cost[a][b] = c;
        cost[b][a] = d;
    }
    
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
            }
        }
        
    }
    
    cin>>a>>comma>>b>>comma>>c>>comma>>d;
    
    cout<<c - d- cost[a][b] - cost[b][a]<<endl;
}

int main()
{
    Solution();
    return 0;
}