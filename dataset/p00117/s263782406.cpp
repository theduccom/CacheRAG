#include<iostream>
#include<climits>
using namespace std;

int cost[21][21],mindist[21],cur,cur_spot;
bool used[21];

int cost_sum(int n,int x1,int x2){
  
  for(int _=1 ; _ <= 20 ; _++){
    mindist[_]=1e9;
    used[_]=false;
  }
  
  mindist[x1]=0;
  
  for(int _=0 ; _ < n ; _++){
    cur=INT_MAX;
    for(int i=1 ; i <= n ; i++){
      if( cur >= mindist[i] && used[i] == false){
	cur=mindist[i];
	cur_spot=i;
      }
    }
    used[cur_spot]=true;
    
    for(int i=1 ; i <= n ; i++){
      if(cost[cur_spot][i] != -1){
	if(mindist[i] > mindist[cur_spot] + cost[cur_spot][i]){
	  mindist[i]=mindist[cur_spot] + cost[cur_spot][i];
	}
      }
    }
    
  }
  
  return mindist[x2];
}    
int main(){
  
  int n,m,a,b,c,d,x1,x2,y1,y2;
  int cost_go,cost_back;
  char dam;
  
  cin >>n;
  cin >>m;
  
  for(int _=0 ; _ < 20 ; _++){
    for(int __=0 ; __<20 ; __++){
      cost[_][__]=-1;
    }
  }
  
  for(int _=0 ; _ < m ; _++){
    cin >>a>>dam>>b>>dam>>c>>dam>>d;
    
    cost[a][b]=c;
    cost[b][a]=d;
  }
  
  cin >>x1>>dam>>x2>>dam>>y1>>dam>>y2;
  
  cost_go=cost_sum(n,x1,x2);
  cost_back=cost_sum(n,x2,x1);
  
  cout <<y1-y2-cost_go-cost_back<<endl;
  
  return 0;
}