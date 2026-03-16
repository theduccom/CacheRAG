#include<iostream>
using namespace std;
#define INF 100000000
int main(){
  int n,m,k;
  while(cin>>n>>m){
    if(n==0&&m==0) break;
    int glaf[m+1][m+1][2];
    for(int i=0;i<=m;i++){
      for(int j=0;j<=m;j++)
        glaf[i][j][0] = glaf[i][j][1] = INF;
      glaf[i][i][0] = glaf[i][i][1] = 0;
    }
    int a,b,cost,time;
    for(int i=0;i<n;i++){
      cin >> a >> b >> cost >> time;
      glaf[a][b][0] = glaf[b][a][0] = cost;
      glaf[a][b][1] = glaf[b][a][1] = time;
    }
    for(int x=1;x<=m;x++){
      for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
          glaf[i][j][0] = min(glaf[i][j][0],glaf[i][x][0]+glaf[x][j][0]);
          glaf[i][j][1] = min(glaf[i][j][1],glaf[i][x][1]+glaf[x][j][1]);
        }
      }
    }
    cin >> k;
    int p,q,r;
    for(int i=0;i<k;i++){
      cin >> p >> q >> r;
      cout << glaf[p][q][r] << endl;
    }
  }
}

