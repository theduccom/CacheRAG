#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int f[30][30] = {0};
  for(;;){
    if(scanf("%1d%1d%1d%1d%1d%1d%1d%1d%",&f[10][10],&f[11][10],&f[12][10],&f[13][10],&f[14][10],&f[15][10],&f[16][10],&f[17][10]) == EOF){break;}
    for(int i=1; i<8; i++){
      scanf("%1d%1d%1d%1d%1d%1d%1d%1d%",&f[10][10+i],&f[11][10+i],&f[12][10+i],&f[13][10+i],&f[14][10+i],&f[15][10+i],&f[16][10+i],&f[17][10+i]);
    }
    bool flag = true;
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
	if(f[10+i][10+j] && flag){
	  if(f[11+i][10+j] && f[10+i][11+j] && f[11+i][11+j]){cout <<"A"<<endl;flag = false;}
	  if(f[10+i][11+j] && f[10+i][12+j] && f[10+i][13+j]){cout <<"B"<<endl;flag = false;}
	  if(f[11+i][10+j] && f[12+i][10+j] && f[13+i][10+j]){cout <<"C"<<endl;flag = false;}
	  if(f[11+i][10+j] && f[10+i][11+j] && f[11+i][9+j]){cout <<"D"<<endl;flag = false;}
	  if(f[11+i][10+j] && f[11+i][11+j] && f[12+i][11+j]){cout <<"E"<<endl;flag = false;}
	  if(f[10+i][11+j] && f[11+i][11+j] && f[11+i][12+j]){cout <<"F"<<endl;flag = false;}
	  if(f[11+i][10+j] && f[11+i][9+j] && f[12+i][9+j]){cout <<"G"<<endl;flag = false;}
	}
      }
    }
  }
  return 0;
}