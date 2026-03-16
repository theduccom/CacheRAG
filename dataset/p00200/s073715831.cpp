#include<iostream>
#define N 100

using namespace std;

const int infty = 1<<27;

int main()
{
  while(true){
    int n,m;
    cin >> n >> m;
    if( n == 0 && m == 0 )break;
    
    int gcost[N][N];
    int gtime[N][N];
    
    for(int i = 0; i < N; ++i){
      for(int j = 0; j < N; ++j){
	gtime[i][j] = gcost[i][j] = infty;
      }
    }
    
    for(int i = 0; i < n; ++i){
      int a,b,cost,time;
      
      cin >> a >> b >> cost >> time;
      --a;--b;
      gcost[a][b] = gcost[b][a] = cost;
      gtime[a][b] = gtime[b][a] = time;
    }
  
    for(int k = 0; k < m; ++k){
      for(int i = 0; i < m; ++i){
	for(int j = 0; j < m; ++j){
	  gcost[i][j] = min( gcost[i][j], gcost[i][k]+gcost[k][j] );
	  gtime[i][j] = min( gtime[i][j], gtime[i][k]+gtime[k][j] );
	}
      }
    }
    
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; ++i){
      int st,ed,r;
      cin >> st >> ed >> r;
      --st;--ed;
      if(st==ed){
	cout << 0 << endl;
	continue;
      }
      if( r == 0 ){
	cout << gcost[st][ed] << endl;
      }else{
	cout << gtime[st][ed] << endl;
      }
    }    
  }

  return 0;
}