#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int x[10][10];
  int a,b,c;
  int cou=0,max=0;
  int ink[3]={5,9,13};
  int tmp[3][2][13]={
    {{0,0,1,0,-1},{0,-1,0,1,0}},
    {{0,0,1,1,1,0,-1,-1,-1},{0,-1,-1,0,1,1,1,0,-1}},
    {{0,0,1,1,1,0,-1,-1,-1,0,2,0,-2},{0,-1,-1,0,1,1,1,0,-1,-2,0,2,0}}
  };
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      x[i][j] = 0;
    }
  }
  while(scanf("%d,%d,%d\n",&a,&b,&c) != EOF){
    c--;
    for(int i=0;i<ink[c];i++){
      if(a+tmp[c][0][i]>=0 && a+tmp[c][0][i]<10 && b+tmp[c][1][i]>=0 && b+tmp[c][1][i]<10){
	x[a+tmp[c][0][i]][b+tmp[c][1][i]]++;
      }
    }
  }
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(x[i][j] == 0){
	cou++;
      }
      else if(x[i][j] > max){
	max = x[i][j];
      }
    }
  }
  cout << cou << endl << max << endl;
}