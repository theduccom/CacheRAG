#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 1010001000
#define loop(i, n) for (int i = 1; i < n; i++)

int main()
{
int n, m; 
while(cin >> n >> m,(n|m)){
m++;
vector<vector<int> > time(m,vector<int>(m,INF)), cost(m,vector<int>(m,INF));
loop(i, n+1){
int a,b,c,t; cin>>a>>b>>c>>t;
time[a][b]=t;time[b][a]=t;
cost[a][b]=c;cost[b][a]=c;
}
loop(k, m){loop(i, m){loop(j, m){
time[i][j]=min(time[i][j],time[i][k]+time[k][j]);
cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
}}}
int k; cin>>k;
loop(i, k+1){
int p,q,r; cin>>p>>q>>r;
if(r) cout<<time[p][q]<<endl;
else cout<<cost[p][q]<<endl;
}
}
return 0;

}