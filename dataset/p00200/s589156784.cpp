#include <cstdio>
#include <iostream>
#include <string>
#define INF (1<<21)
using namespace std;

int main(){
  int i,j,k,kk,aa,bb,n,m,a,b,d,dd,c[101][101],t[101][101],f;
  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;

    for(i=1;i<=m;i++){
      for(j=1;j<=m;j++){
	if(i == j){
	  c[i][j] = 0;
	  t[i][j] = 0;
	}
	else{
	  c[i][j] = INF;
	  t[i][j] = INF;
	}
      }
    }

    for(i=0;i<n;i++){
      cin >> a >> b >> d >> dd;
      c[a][b] = c[b][a] = d;
      t[a][b] = t[b][a] = dd;
    }

    for(k=1;k<=m;k++){
      for(i=1;i<=m;i++){
	for(j=1;j<=m;j++){
if(t[i][k] >= INF || t[k][j] >= INF || c[i][k] >= INF || c[k][j] >= INF) continue; 
	  if(t[i][k] + t[k][j] > INF || c[i][k] + c[k][j] > INF) continue;
	  t[i][j] = min(t[i][j],t[i][k] + t[k][j]);
	  c[i][j] = min(c[i][j],c[i][k] + c[k][j]);
	}
      }
    }

    cin >> kk;
    for(i=0;i<kk;i++){
      cin >> aa >> bb >> f;
      if(f) cout << t[aa][bb] << endl;
      else cout << c[aa][bb] << endl;
    }

  }
  return 0;
}