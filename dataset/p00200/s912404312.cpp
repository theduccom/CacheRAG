#include<iostream>
#include<algorithm>
using namespace std;

const int MAX=100;
const int INF=(1<<21);

int main(){

  int n,m;
  int a,b,cost,time;
  int p,q,r;
  int rail_cost[MAX][MAX];
  int rail_time[MAX][MAX];
  int k;
  while(1){
    cin>> n>> m;
    if(n==0 && m==0) break;
  
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      rail_cost[i][j]=INF;
      rail_time[i][j]=INF;
    }
  }

  for(int i=0;i<n;i++){
    cin>> a>> b>> cost>> time; 
    rail_cost[a-1][b-1]=rail_cost[b-1][a-1]=cost;
    rail_time[a-1][b-1]=rail_time[b-1][a-1]=time;
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      for(int k=0;k<m;k++){
	rail_cost[j][k]=min(rail_cost[j][k],rail_cost[j][i]+rail_cost[i][k]);
	rail_time[j][k]=min(rail_time[j][k],rail_time[j][i]+rail_time[i][k]);
      }
    }
  }

  cin>> k;
  for(int i=0;i<k;i++){
    cin>> p>> q>> r;
    if(r==0){
      cout<< rail_cost[p-1][q-1]<< endl;
    }else{
      cout<< rail_time[p-1][q-1]<< endl;
    }
  }

  }
}