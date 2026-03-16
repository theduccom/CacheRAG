#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  while(cin >>s){
    int field[30][30]={0};
    for(int i=0; i<8; i++){
      if(i!=0) cin >>s;
      for(int j=0; j<8; j++) if(s[j] == '1') field[10+j][10+i] = 1;
    }
    for(int i=0; i<30; i++){
      for(int j=0; j<30; j++){
	if(field[j][i] == 1){
	  if(field[j+1][i] == 1 && field[j][i+1] == 1 && field[j+1][i+1] == 1) cout <<"A"<<endl;
	  if(field[j][i+1] == 1 && field[j][i+2] == 1 && field[j][i+3] == 1) cout <<"B"<<endl;
	  if(field[j+1][i] == 1 && field[j+2][i] == 1 && field[j+3][i] == 1) cout <<"C"<<endl;
	  if(field[j][i+1] == 1 && field[j-1][i+1] == 1 && field[j-1][i+2] == 1) cout <<"D"<<endl;
	  if(field[j+1][i] == 1 && field[j+1][i+1] == 1 && field[j+2][i+1] == 1) cout <<"E"<<endl;
	  if(field[j][i+1] == 1 && field[j+1][i+1] == 1 && field[j+1][i+2] == 1) cout <<"F"<<endl;
	  if(field[j+1][i] == 1 && field[j][i+1] == 1 && field[j-1][i+1] == 1) cout <<"G"<<endl;
	  break;
	}
      }
    }
  }
  return 0;
}