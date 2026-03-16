#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
  int xi,yi,size,xy[50][50] = {0};
  int white,top;
  string str;
  while(cin >> str) {
    xi = atoi(str.substr(0,1).c_str());
    yi = atoi(str.substr(2,1).c_str());
    size = atoi(str.substr(4,1).c_str());
    if((size == 1) ||(size == 2)||(size == 3)) {
      xy[xi+10][yi+10]++;
      xy[xi+1+10][yi+10]++;
      xy[xi-1+10][yi+10]++;
      xy[xi+10][yi+1+10]++;
      xy[xi+10][yi-1+10]++;
    }
    if((size == 2) || (size == 3)) {
      xy[xi+1+10][yi+1+10]++;
      xy[xi+1+10][yi-1+10]++;
      xy[xi-1+10][yi+1+10]++;
      xy[xi-1+10][yi-1+10]++;
    }
    if(size == 3) {
      xy[xi+10][yi+2+10]++;
      xy[xi+10][yi-2+10]++;
      xy[xi+2+10][yi+10]++;
      xy[xi-2+10][yi+10]++;
    }
  }
  white = 0;
  top = xy[10][10];
  for(int i=0;i<10;i++) {
    for(int j=0;j<10;j++) {
      if(xy[i+10][j+10] == 0)
        white++;
      if(xy[i+10][j+10] > top)
        top = xy[i+10][j+10];
    }
  }
  cout << white << endl << top << endl;
}