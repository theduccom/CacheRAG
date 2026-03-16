#include<iostream>
using namespace std;

int main(){
  while(true){
    int n,m;
    cin >> n >> m;
    if(n==0 && m==0){
      break;
    }

    int INF=1000000000;
    int way_co[m][m];
    int way_ti[m][m];
    for(int i=0; i<m; i++){
      for(int j=0; j<m; j++){
        way_co[i][j] = INF;
        way_ti[i][j] = INF;
        if(i==j){
          way_co[i][j] = 0;
          way_ti[i][j] = 0;
        }
      }
    }

    int a,b,cost,tim;
    for(int i=0; i<n; i++){
      cin >> a >> b >> cost >> tim;
      way_co[a-1][b-1] = way_co[b-1][a-1] = cost;
      way_ti[a-1][b-1] = way_ti[b-1][a-1] = tim;
    }

    int d_co[m][m];
    int d_ti[m][m];
    for(int i=0; i<m; i++){
      for(int j=0; j<m; j++){
        d_co[i][j] = way_co[i][j];
        d_ti[i][j] = way_ti[i][j];
      }
    }

    for(int k=0; k<m; k++){
      for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
          if(d_co[i][j] > d_co[i][k] + d_co[k][j]){
            d_co[i][j] = d_co[i][k] + d_co[k][j];
          }
          if(d_ti[i][j] > d_ti[i][k] + d_ti[k][j]){
            d_ti[i][j] = d_ti[i][k] + d_ti[k][j];
          }
        }
      }
    }
    int y;
    cin >> y;
    for(int i=0; i<y; i++){
      int a,b,c;
      cin >> a >> b >> c;
      if(c==0){
        cout << d_co[a-1][b-1] << endl;
      }else{
        cout << d_ti[a-1][b-1] << endl;
      }
    }
  }
  return 0;
}

