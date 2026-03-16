#include<iostream>
#include<vector>

using namespace std;

int main(void){
  int n,m;
  cin>>n>>m;
  vector<vector<int> > t(n,vector<int>(n,1<<22));
  int a,b,c,d;
  char dm;
  for(int i = 0 ; i < m ; i ++){
    cin>>a>>dm>>b>>dm>>c>>dm>>d;
    a--,b--;
    t[a][b] = c;
    t[b][a] = d; 
  }
  
  int x1,x2,y1,y2;
  cin>>x1>>dm>>x2>>dm>>y1>>dm>>y2;
  for(int i = 0 ; i < n ; i ++) 
    t[i][i] = 0;
  for(int k = 0 ; k < n ; k ++)
  for(int i = 0 ; i < n ; i ++)
  for(int j = 0 ; j < n ; j ++)
    t[i][j] = min(t[i][j] , t[i][k] + t[k][j]);
  
  int s = t[--x1][--x2];
  int r = t[x2][x1];
  cout<< y1 - (y2 + s + r) <<endl;
}