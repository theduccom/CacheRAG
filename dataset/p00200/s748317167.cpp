#include<iostream>

#define INF 100000;
using namespace std;


int main(){
  int n,m;
  while(1){
    cin>>n>>m;
    if(n==0&&m==0){break;}
    int s_tim[m][m];
    int c_money[m][m];
    int a,b,cost,tim;

    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        s_tim[i][j]=INF;
        c_money[i][j]=INF;
      }
    }
    for(int i=0;i<m;i++){
      s_tim[i][i]=0;
      c_money[i][i]=0;
    }
    for(int i=0;i<n;i++){
      cin>>a>>b>>cost>>tim;
      s_tim[a-1][b-1]=tim;s_tim[b-1][a-1]=tim;
      c_money[a-1][b-1]=cost;c_money[b-1][a-1]=cost;
    }

    for(int k=0;k<m;k++){
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          if(s_tim[i][j]>s_tim[i][k]+s_tim[k][j]){
            s_tim[i][j]=s_tim[i][k]+s_tim[k][j];
          }
          if(c_money[i][j]>c_money[i][k]+c_money[k][j]){
            c_money[i][j]=c_money[i][k]+c_money[k][j];
          }
        }
      }
    }

    int contacts,p,q,r;
    cin>>contacts;

    for(int i=0;i<contacts;i++){
      cin>>p>>q>>r;
      if(r){cout<<s_tim[p-1][q-1];}
      else{ cout<<c_money[p-1][q-1];}
      cout<<endl;
    }
  }
}
