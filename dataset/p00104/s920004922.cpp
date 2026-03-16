#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n,m;
  while(cin >>n>>m,n||m){
    cin.ignore();
    int field[101][101] = {0},x = 0,y = 0;
    bool check[101][101] = {false};
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
	char c;
	scanf("%c",&c);
	if(c == '>'){field[j][i] = 1;}
	if(c == '<'){field[j][i] = 2;}
	if(c == '^'){field[j][i] = 3;}
	if(c == 'v'){field[j][i] = 4;}
      }
      scanf("%*c");
    }
    for(;;){
      if(check[x][y]){x = -1;cout <<"LOOP"<<endl;break;}
      check[x][y] = true;
      if(!field[x][y]){break;}
      else if(field[x][y] == 1){x++;}
      else if(field[x][y] == 2){x--;}
      else if(field[x][y] == 3){y--;}
      else if(field[x][y] == 4){y++;}
    }
    if(x>=0){cout <<x<<" "<<y<<endl;}
  }
  return 0;
}