#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stdio.h>
#include <cstring>
using namespace std;
int field[12+2][12+2] ={0};


void island(int x,int y) {
  int dx[4] = {1,0,-1,0};
  int dy[4] = {0,-1,0,1};
  field[x][y] = 0;
  for(int i=0;i<4;i++) {
    if((field[x+dx[i]][y+dy[i]] == 1)&&(1 <= x)&&(x <= 12)&&(1 <= y)&&(y <= 12)){
      island(x+dx[i],y+dy[i]);
    }
  }
}

int main() {
  string str;
  int ans = 0;
  while(getline(cin,str)) {
    if(str.empty()) break;
    for(int i=0;i<12;i++) {
      for(int j=0;j<12;j++) {
        field[i+1][j+1] = atoi(str.substr(j,1).c_str());
      }
      getline(cin,str);
    }

    for(int i=0;i<12;i++) {
      for(int j=0;j<12;j++) {
        if(field[i+1][j+1] == 1) {
          island(i+1,j+1);
          ans++;
        }
      }
    }
    cout << ans << endl;
    ans = 0;
    // int field[12+2][12+2] ={0};
    memset(field,0,sizeof(field));
    /*     getline(cin,str);//erase \n
           if(cin.eof()) break;*/
  }
  return 0;
}