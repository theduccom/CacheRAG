#include <iostream>

using namespace std;

int cell[10][10];

int main() {
  int x, y, size;
  int max = 0, zero = 0;

  while (cin >> x) {
    cin.ignore();
    cin >> y;
    cin.ignore();
    cin >> size;

    switch (size) {
      case 3:
        if(x >= 2)
          cell[x-2][y]++;
        if(y >= 2)
          cell[x][y-2]++;
        if(x <= 7)
          cell[x+2][y]++;
        if(y <= 7)
          cell[x][y+2]++;
      case 2:
        if(x >= 1){
          if(y >= 1)
            cell[x-1][y-1]++;
          if(y <= 8)
            cell[x-1][y+1]++;
          }
        if(x <= 8){
          if(y >= 1)
            cell[x+1][y-1]++;
          if(y <= 8)
            cell[x+1][y+1]++;
        }
      case 1:
        if(x >= 1)
          cell[x-1][y]++;
        if(x <= 8)
          cell[x+1][y]++;
        if(y >= 1)
          cell[x][y-1]++;
        if(y <= 8)
          cell[x][y+1]++;
        cell[x][y]++;
    }
  }

  for(int i = 0; i < 10; i++)
    for(int j = 0; j < 10; j++){
      if(!cell[i][j])
        zero++;
      else if(cell[i][j] > max)
        max = cell[i][j];
    }

  cout << zero << endl << max << endl;

}