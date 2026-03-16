#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <cmath>
#include <map> 
using namespace std;
 
const int MAX= 10000100;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()

int main(void){
  int n,m;
  cin>>n>>m;
  vector<vector<int> > town(n,vector<int>(n+1,1000));
  
  int a,b,c,d;
  for(int i = 0 ; i < m ; i ++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    town[--a][--b] = c;
    town[b][a] = d;
  }
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  int start = --a;
  int end = --b;
  int get = c;
  int lose = d;
  
  int max = 0;
  /*
  rep(i,town.size()){
    cout<<i<< " : ";
    rep(j,town[i].size()){
      printf("%4d ",town[i][j]);
    }
    cout<<endl;
  }
  */
  for(int k = 0 ; k < n ; k ++){
    for(int i = 0 ; i < n ; i ++){
      for(int j = 0 ; j < n ; j ++){
        town[i][j]=min(town[i][j],town[i][k]+town[k][j]);
      }
    }
  }
  //cout<<town[start][end]<<" "<<town[end][start]<<endl;
  cout<<get-lose-town[start][end]-town[end][start]<<endl;
  return 0;
}