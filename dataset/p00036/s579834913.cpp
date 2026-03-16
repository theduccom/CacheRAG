#include <iostream>
using namespace std;
char ma[8][8];
bool p(int i,int j){return (0<=i&&i<8&&0<=j&&j<8)&&(ma[i][j] == '1');}
void c(int x,int y){

  if(p(y-3,x))cout << 'B'<<endl;
  else if(p(y,x-3))cout << 'C' << endl;
  else if(p(y-2,x+1))cout << 'D' << endl;
  else if(p(y-1,x-2))cout << 'E' << endl;
  else if(p(y-2,x-1))cout << 'F' << endl;
  else if(p(y,x-1) &&p(y-1,x+1))cout << 'G' << endl;
  else cout << 'A' <<endl;

}

int main(){
  int x,y;
  while(cin >> ma[0][0]){

    for(int i = 0 ; i < 8 ; i++ ){
      for(int j = 0 ; j < 8 ; j++ ){
	if(i + j == 0)continue;
	cin >> ma[i][j]; 
	if(ma[i][j] == '1'){x = j,y = i;}
      }
    }

    int f = 0;
    c(x,y);
  }
  return 0;
}