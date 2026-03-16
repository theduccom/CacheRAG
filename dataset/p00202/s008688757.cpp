#include <iostream>
#include <queue>
using namespace std;
bool so[1000000]={};
int yomax,N;
int nmax;
int ryo[30];

void bfs(){
  queue <int> Q;
  bool visited[1000000]={};
  nmax=0;
  Q.push(0);
  while(Q.empty()==0){
    int u=Q.front();
    Q.pop();
    visited[u] = 1;
    if(so[u]==0 && nmax<u)
      nmax=u;
    for(int i=0;i<N;i++)
      if(u+ryo[i]<=yomax && visited[u+ryo[i]]==0){
	visited[u+ryo[i]] =1;
	Q.push(u+ryo[i]);
      }
  }
}


int main(){
  so[0] = 1;
  so[1] = 1;
  for(int i=2;i*i<=1000000;i++)
    if(so[i] == 0)
      for(int j=2;j*i<=1000000;j++)
	so[i*j] =1;

  while(cin>>N>>yomax){
    if(N==0 && yomax==0) break;
    for(int i=0;i<N;i++)
      cin>>ryo[i];
    bfs();
    if(so[nmax]==0) cout<<nmax<<endl;
    else cout<<"NA"<<endl;
  }

  return 0;
}