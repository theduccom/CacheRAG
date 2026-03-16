#include <bits/stdc++.h>
using namespace std;
int chain(int x,int y);

char mas[8][8];

int main(){
  int n;
  int x,y;
  cin >> n;
  for(int p = 0;p < n;p++){

    for(int i = 0;i < 8;i++){
      for(int j = 0;j < 8;j++){
	cin >> mas[i][j];
      }
    }
    
    cin >> x >> y;
    x--;y--;
    chain(x,y);
    cout << "Data" << " " << p + 1 << ":" << endl;
    for(int i = 0;i < 8;i++){
      for(int j = 0;j < 8;j++){
	cout << mas[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}

int chain(int x,int y){
  mas[y][x] = '0';
  for(int i = 1;i <= 3;i++){
    if(x + i <= 7){
      if(mas[y][x + i] == '1'){
	chain(x + i,y);
      }
    }
    if(y + i <= 7){
      if(mas[y + i][x] == '1'){
	chain(x,y + i);
      }
    }
    if(x - i >= 0){
      if(mas[y][x - i] == '1'){
	chain(x - i,y);
      }
    }
    if(y - i >= 0){
      if(mas[y - i][x] == '1'){
	chain(x,y - i);
      }
    }
  }
  return 0;
}