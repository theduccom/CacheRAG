#include<iostream>
#define N 20
#define M 10000
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
using namespace std;

int data[N][N];
void init(){
  rep(i,N){
    rep(j,N){
      if(i==j)data[i][j] = 0;
      else data[i][j] = M;
    }
  }
}

void input(int *a,int *b,int *c,int *d){
  char dm;
  cin >> *a >> dm >> *b >> dm >> *c >> dm >> *d;
  --*a;
  --*b;
}
int main(void){  
  int n,m;
  int a,b,c,d;
  int x1,x2,y1,y2;
  char dm;
  init();
  cin>>n>>m;
  
  rep(i,m){
    input(&a,&b,&c,&d);
    data[a][b] = c;
    data[b][a] = d;
  }
   
  rep(k,n)
    rep(i,n)
      rep(j,n)
        data[i][j] = min(data[i][j],data[i][k] + data[k][j]);
  
  input(&x1,&x2,&y1,&y2);
   
 
  cout << (y1 - (y2 + data[x1][x2] + data[x2][x1])) << endl;
}