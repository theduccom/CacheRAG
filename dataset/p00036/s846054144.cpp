#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  for(;;){
    int field[30][30]={0};
    if(scanf("%1d",&field[10][10]) == EOF) break;
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
	if(i == 0 && j == 0) continue;
	scanf("%1d",&field[10+i][10+j]);
      }
    }
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
	if(field[i+10][j+10] == 0) continue;
	if(field[i+11][j+10] == 1 && field[i+10][j+11] == 1 && field[i+11][j+11] == 1){cout <<"A"<<endl;goto flag;}
	if(field[i+11][j+10] == 1 && field[i+12][j+10] == 1 && field[i+13][j+10] == 1){cout <<"B"<<endl;goto flag;}
	if(field[i+10][j+11] == 1 && field[i+10][j+12] == 1 && field[i+10][j+13] == 1){cout <<"C"<<endl;goto flag;}
	if(field[i+11][j+10] == 1 && field[i+11][j+9] == 1 && field[i+12][j+9] == 1){cout <<"D"<<endl;goto flag;}
	if(field[i+10][j+11] == 1 && field[i+11][j+11] == 1 && field[i+11][j+12] == 1){cout <<"E"<<endl;goto flag;}
	if(field[i+11][j+10] == 1 && field[i+11][j+11] == 1 && field[i+12][j+11] == 1){cout <<"F"<<endl;goto flag;}
	if(field[i+10][j+11] == 1 && field[i+11][j+10] == 1 && field[i+11][j+9] == 1){cout <<"G"<<endl;goto flag;}
      }
    }
  flag:;
  }
  return 0;
}