#include <iostream>
#include <cstdlib>
using namespace std;
int field[12][12];

char search(int y,int x) {
  if(field[y][x+1] == 1) { //A
    if(field[y][x+2] == 1) {
      return 'C';
    }
    if(field[y+1][x] == 1&&field[y+1][x+1] == 1) {
      return 'A';
    }
    if(field[y+1][x] == 1&&field[y+1][x-1] == 1) {
      return 'G';
    }
    if(field[y+1][x+1] == 1&&field[y+1][x+2] == 1) {
      return 'E';
    }
  }
  if(field[y+2][x] == 1) {
    return 'B';
  }
  if(field[y+1][x-1] == 1) {
    return 'D';
  }
  if(field[y+2][x+1] == 1) {
    return 'F';
  }
  return 'X';
}

void solve() {
  for(int i=0;i<8;i++) {
    for(int j=0;j<8;j++) {
      if(field[i+1][j+1] != 0) {
        cout << search(i+1,j+1) << endl;
        return;
      }
    }
  }
}

int main() {
  string str;
  while(1) {
    for(int i=0;i<8;i++) {
      getline(cin,str);
      if(str.size() == 0) return 0;
      for(int j=0;j<8;j++) {
        field[i+1][j+1] = atoi(str.substr(j,1).c_str());
      }
    }
    solve();
    getline(cin,str); //kill \n
  }
}