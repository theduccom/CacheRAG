#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <climits>

using namespace std;

#define MAX_V 20

int d[MAX_V][MAX_V];
int V;

void wf(){
  for(int k=0;k<V;k++)
    for(int i=0;i<V;i++)
      for(int j=0;j<V;j++)
	d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}


int main(){
  int m;
  cin>>V>>m;

  for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
      d[i][j]=100000;
    }
    d[i][i]=0;
  }

  int a,b,c,e;
  char yomisute;
  for(int i=0;i<m;i++){
    cin>>a>>yomisute>>b>>yomisute>>c>>yomisute>>e;
    --a;--b;
    d[a][b]=c;
    d[b][a]=e;
  }
  
  wf();


  cin>>a>>yomisute>>b>>yomisute>>c>>yomisute>>e;
  int money=0;

  a--;b--;
  money=d[a][b]+d[b][a];
  cout<<c-e-money<<endl;
}