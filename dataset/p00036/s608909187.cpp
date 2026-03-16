#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int field[20][20]={0};
  for(;;){
    if(scanf("%1d",&field[5][5]) == EOF) break;
    for(int i=0; i<8; i++)
      for(int j=0; j<8; j++)
	if(i!=0 || j!=0) scanf("%1d",&field[i+5][j+5]);
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
	if(field[i+5][j+5] == 1 && field[i+6][j+5] == 1 && field[i+6][j+6] == 1 && field[i+5][j+6] == 1){cout <<"A"<<endl; goto flag;}
	if(field[i+5][j+5] == 1 && field[i+6][j+5] == 1 && field[i+7][j+5] == 1 && field[i+8][j+5] == 1){cout <<"B"<<endl; goto flag;}
	if(field[i+5][j+5] == 1 && field[i+5][j+6] == 1 && field[i+5][j+7] == 1 && field[i+5][j+8] == 1){cout <<"C"<<endl; goto flag;}
	if(field[i+5][j+5] == 1 && field[i+6][j+5] == 1 && field[i+6][j+4] == 1 && field[i+7][j+4] == 1){cout <<"D"<<endl; goto flag;}
	if(field[i+5][j+5] == 1 && field[i+5][j+6] == 1 && field[i+6][j+6] == 1 && field[i+6][j+7] == 1){cout <<"E"<<endl; goto flag;}
	if(field[i+5][j+5] == 1 && field[i+6][j+5] == 1 && field[i+6][j+6] == 1 && field[i+7][j+6] == 1){cout <<"F"<<endl; goto flag;}
	if(field[i+5][j+5] == 1 && field[i+5][j+6] == 1 && field[i+6][j+5] == 1 && field[i+6][j+4] == 1){cout <<"G"<<endl; goto flag;}
      }
    }
  flag:;
  }
  return 0;
}