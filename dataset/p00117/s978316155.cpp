#include<iostream>
#include<cstdio>
#define max 100
#define inf 100000000
using namespace std;
int dijkustra(int s, int e);
int n,m;
int G[max][max];


int main(){
  int start,goal;
  int a,b,c,d,money,pay,go,back;
  cin >>n>>m;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) G[i][j]=inf;}

  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    a--;b--;
    //  cout << "hoge\n";
    G[a][b]=c;
    G[b][a]=d;
  }
  
  scanf("%d,%d,%d,%d",&start,&goal,&money,&pay);

  go = dijkustra(start-1,goal-1);
  back = dijkustra(goal-1,start-1);
 
 cout <<money-pay-go-back<<endl; 
    return 0;
}

int dijkustra(int s,int g){
  int mindist[max];
  bool used[max];
  int qur,value,next;

  for(int i=0;i<n;i++){
    mindist[i]=inf;
    used[i]=false;
  }

  mindist[s]=0;

  while(1){

    /* for(int i=0;i<n;i++)
      cout<<mindist[i]<<" ";     
      cout <<endl;*/


    value=inf;
    for(int i=0;i<n;i++){
      if(value > mindist[i]  && used[i] == false){
	value=mindist[i];
	qur=i;}
    }
    //    cout <<value<<endl;
    used[qur]=true;
    if(value==inf)break;

    for(int j=0;j<n;j++){
      if(G[qur][j]!=inf){
	next = j;
	if(mindist[next] > mindist[qur] + G[qur][next])
	  mindist[next] = mindist[qur] + G[qur][next];
 	}
    }

  }
  return mindist[g];
}