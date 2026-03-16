#include<iostream>

using namespace std;

const int inf = 1e8;

int d[201][201][2];
int E,V;

int main(){
  while(cin>> E >> V,E+V){
    for(int i = 0 ;  i < V ; i ++)
      for(int j = 0 ; j < V ; j ++){
	d[i][j][0] = inf;
	d[i][j][1] = inf;
      }
    int s,t,c,ti;
    for(int i = 0 ; i < E ; i ++){
      cin>>s>>t>>c>>ti;
      s--; t--;
      d[s][t][0] = c;
      d[s][t][1] = ti;
    
      d[t][s][0] = c;
      d[t][s][1] = ti;
    }
    
    for(int k=0; k < V; k++){
        for(int i=0; i < V; i++){
            for(int j=0; j < V; j++){
                d[i][j][1] = min(d[i][j][1], d[i][k][1] + d[k][j][1]);
                d[i][j][0] = min(d[i][j][0], d[i][k][0] + d[k][j][0]);
            }
        }
    }

    int num;
    cin>>num;
    for(int i = 0 ; i < num ; i ++){
      int start , terminus , version;
      cin>>start >> terminus >> version;
      start -- ; terminus --;
      cout<<(version?d[start][terminus][1]:d[start][terminus][0]) <<endl;
    }
  }
}