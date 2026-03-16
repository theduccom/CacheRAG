#include <iostream>
using namespace std;
  char field[8+3*2][8+3*2];

void bomb(int x, int y) {
  field[x][y] = '0';
  for(int i=1;i<4;i++) {
    if(field[x+i][y] == '1') bomb(x+i,y);
    if(field[x-i][y] == '1') bomb(x-i,y);
    if(field[x][y+i] == '1') bomb(x,y+i);
    if(field[x][y-i] == '1') bomb(x,y-i);
  }
}


int main () {
  int n,firstx,firsty;
  string str;
  cin >> n;
  for(int k=0;k<n;k++) {
    for(int i=0;i<8;i++) {
      for(int j=0;j<8;j++) {
        cin >> field[3+j][3+i];
      }
    }

    cin >> firstx;
    cin >> firsty;
    bomb(firstx-1+3,firsty-1+3);
    cout << "Data " << k+1 << ":" << endl;
    for(int i=0;i<8;i++) {
      for(int j=0;j<8;j++) {
        cout << field[3+j][3+i];
      }
      cout << endl;
    }
  }
}