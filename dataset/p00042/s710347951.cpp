#include<iostream>
#include<cstdio>

using namespace std;
#define MAX 1000

struct Item{
  int value,weight;
};
int max;
int N,W;
Item items[MAX];
int H[MAX+1][MAX+1];//Óëµ«
int cc=1;

void compute(){
  for(int w=0;w<=W;w++) H[0][w]=0;
  for(int i=1;i<=N;i++) H[i][0]=0;
  
  for(int i=1;i<=N;i++){
    for(int w=1;w<=W;w++){
      if(items[i].weight <= w){
	if(items[i].value + H[i-1][w-items[i].weight] >  H[i-1][w]){
	  H[i][w] = items[i].value + H[i-1][w-items[i].weight];
	}
	else H[i][w]=H[i-1][w];
      }
      else H[i][w] = H[i-1][w];
    }
  }

}

void input(){
  cin >> N;
  for(int i=1;i<=N;i++){
    scanf("%d,%d", &items[i].value,&items[i].weight);
  }
}

void calc(){
  int sw=10000;//àÁÆà¿¢³¢wðÛ¶
  for(int i=1;i<=N;i++){
    for(int w=1;w<=W;w++){
      if(H[i][w] == H[N][W] && w<=sw){
	sw = w;
      }
    }
  }
  printf("Case %d:\n%d\n%d\n",cc,H[N][W],sw);  
}


int main(){

  int maxValue;
  while(cin >> W){
    if(W==0)break;
    input();
    compute();
    calc();
    cc++;


  }
}