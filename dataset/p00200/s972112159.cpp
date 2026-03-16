#include<iostream>
using namespace std;
int MAX=100000;
int main(){
  while(true){
    int n,m;
    cin>>n>>m;
    if(!n&&!m)
      break;
    int a,b,cost,timer;
    int costs[m][m];
    int timers[m][m];
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        costs[i][j]=MAX;
        timers[i][j]=MAX;
      }
      costs[i][i]=0;
      timers[i][i]=0;
    }

    for(int i=0;i<n;i++){
      cin>>a>>b>>cost>>timer;
      costs[a-1][b-1]=cost;
      timers[a-1][b-1]=timer;
      costs[b-1][a-1]=cost;
      timers[b-1][a-1]=timer;
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        for(int k=0;k<m;k++){
          if(costs[j][k]>(costs[j][i]+costs[i][k])){
            costs[j][k]=costs[j][i]+costs[i][k];
            costs[k][j]=costs[j][i]+costs[i][k];
          }
          if(timers[j][k]>(timers[j][i]+timers[i][k])){
            timers[j][k]=timers[j][i]+timers[i][k];
            timers[k][j]=timers[j][i]+timers[i][k];
          }
        }
      }
    }
    int k;
    int p;
    int q;
    bool r;
    cin>>k;
    for(int i=0;i<k;i++){
      cin>>p>>q>>r;
      if(r){
        cout<<timers[p-1][q-1]<<endl;
      }else if(!r){
        cout<<costs[p-1][q-1]<<endl;
      }
    }
  }
    return 0;
}

