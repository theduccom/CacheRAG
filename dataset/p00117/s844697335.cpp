#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
struct CITY{
  vector<int> to;
  vector<int> pay;
  int cost;
  bool done;
};
int main(){
  int n,m,a,b,c,d,x,y,z,w,ans_cost=0;
  CITY vil[30];
  cin >>n>>m;
  for(int i=0; i<m; i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    vil[a-1].to.push_back(b-1);
    vil[a-1].pay.push_back(c);
    vil[b-1].to.push_back(a-1);
    vil[b-1].pay.push_back(d);
  }
  scanf("%d,%d,%d,%d",&x,&y,&z,&w);
  x--;y--;
    for(int i=0; i<n; i++){vil[i].cost = 999999;vil[i].done = false;}
  vil[x].cost = 0;
  for(int j=0; j<n; j++){
    int r = 0,p = 9999999;
    for(int i=0; i<n; i++){
      if(!vil[i].done){if(vil[i].cost<p){p = vil[i].cost;r = i;}}
    }
    vil[r].done = true;
    for(int i=0; i<vil[r].to.size(); i++){
      vil[vil[r].to[i]].cost = min(vil[vil[r].to[i]].cost,vil[r].cost+vil[r].pay[i]);
    }
  }
  ans_cost+=vil[y].cost;
    for(int i=0; i<n; i++){vil[i].cost = 999999;vil[i].done = false;}
  vil[y].cost = 0;
  for(int j=0; j<n; j++){
    int r = 0,p = 9999999;
    for(int i=0; i<n; i++){
      if(!vil[i].done){if(vil[i].cost<p){p = vil[i].cost;r = i;}}
    }
    vil[r].done = true;
    for(int i=0; i<vil[r].to.size(); i++){
      vil[vil[r].to[i]].cost = min(vil[vil[r].to[i]].cost,vil[r].cost+vil[r].pay[i]);
    }
  }
  ans_cost+=vil[x].cost;
  cout <<z-w-ans_cost<<endl;
  return 0;
}