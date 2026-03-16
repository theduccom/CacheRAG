#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <climits> 
#include <map>
using namespace std;

const int MAX_V = 1000; 
const int INF = 100000; 
int v; 
int g[MAX_V][MAX_V]; 
int g2[MAX_V][MAX_V];
int d[MAX_V]; 
bool used[MAX_V]; 


void dijkstra(int s)
{
  fill(d, d + v, INF);
  fill(used, used + v, false);
  d[s] = 0;
  for(;;){
    int i = -1;
    for(int j = 0; j < v; ++j)
      if(!used[j] && (i == -1 || d[i] > d[j]))
	i = j;
    if(i == -1)break; 
    used[i] = true;
    for(int j = 0; j < v; ++j)
      d[j] = min(d[j], d[i] + g[i][j]);
  }
}

void dijkstra2(int s)
{
  fill(d, d + v, INF);
  fill(used, used + v, false);
  d[s] = 0;
  for(;;){
    int i = -1;
    for(int j = 0; j < v; ++j)
      if(!used[j] && (i == -1 || d[i] > d[j]))
	i = j;
    if(i == -1)break; 
    used[i] = true;
    for(int j = 0; j < v; ++j)
      d[j] = min(d[j], d[i] + g2[i][j]);
  }
}


int main()
{
  for(;;){
    int gv, ge;
    
    cin >> ge >> gv;
    if(ge==0){return 0;}

    fill(&g[0][0], &g[MAX_V][0], 100000);
    fill(&g2[0][0], &g2[MAX_V][0], 100000);


    for(int i = 0; i < ge; ++i){
      int gs, gt, gd,gd2;
      cin >> gs >> gt >> gd >> gd2;
      g[gs-1][gt-1]=gd;
      g[gt-1][gs-1]=gd;
      g2[gs-1][gt-1]=gd2;
      g2[gt-1][gs-1]=gd2;
    }
    v = gv;

    //for(int i=0;i<v;i++){for(int j=0;j<v;j++){cout << g[i][j] << " ";}cout << endl;}

    //for(int i=0;i<v;i++){for(int j=0;j<v;j++){cout << g2[i][j] << " ";}cout << endl;}


    
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
      int p,q,r;
      cin >> p >> q >> r;
      if(r==0){
	dijkstra(p-1);
	//for(int j=1;j<=gv;j++)
	  cout << d[q-1] << endl;
      }else{
	dijkstra2(p-1);
	//for(int j=0;j<=gv;j++)
	  cout << d[q-1] << endl;
      }
    }
  }
  return 0;
}