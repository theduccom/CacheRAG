#include <iostream>
#include <string>

using namespace std;

void  move(char t[100][100][2], int *x, int *y) {
  t[*y][*x][1] = 1;
  if (t[*y][*x][0] == '>')
    (*x)++;
  else if (t[*y][*x][0] == '<')
    (*x)--;
  else if (t[*y][*x][0] == '^')
    (*y)--;
  else if (t[*y][*x][0] == 'v')
    (*y)++;
}

int main(int argc, char *argv[]) {
  int h, w;
  char tile[100][100][2];
  while (true) {
    cin >> h >> w;
    if (h == 0 && w == 0)
      break;

    string tmp;
    // skip '\n'                                                                                                                                                                                            
    getline(cin, tmp);
    for (int i = 0; i < h; i++) {
      getline(cin, tmp);
      for (int j = 0; j < w; j++) {
        tile[i][j][0] = tmp[j];
        tile[i][j][1] = 0;
      }
    }
    /*                                                                                                                                                                                                      
    for (int i = 0; i < h; i++) {                                                                                                                                                                           
      for (int j = 0; j < w; j++)                                                                                                                                                                           
        cout << tile[i][j][0];                                                                                                                                                                              
      cout << endl;                                                                                                                                                                                         
    }                                                                                                                                                                                                       
    */
    int x = 0, y = 0;
    while (true) {
      move(tile, &x, &y);
      /*                                                                                                                                                                                                    
      cout << x << ' ' << y << endl;                                                                                                                                                                        
      */
      if (tile[y][x][0] == '.') {
        cout << x << ' ' << y << endl;
        break;
      } else if (tile[y][x][1] > 0) {
        cout << "LOOP" << endl;
        break;
      }
    }
  }
  return 0;
}