#include <iostream>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int h, w;

  while (cin >> h >> w, h + w){
  	int dx = 0, dy = 0;
    string tile[101];
    bool done[101][101], flag = false;

    REP(i, h){
      REP(j, w) done[i][j] = false;
    }
    REP(i, h) cin >> tile[i];
    while (tile[dy][dx] != '.'){
      if (done[dy][dx]){
        flag = true;
        cout << "LOOP" << endl;
        break;
      }
      done[dy][dx] = true;
      if (tile[dy][dx] == '<') dx--;
      if (tile[dy][dx] == '>') dx++;
      if (tile[dy][dx] == '^') dy--;
      if (tile[dy][dx] == 'v') dy++;
    }
    if (flag) continue;
    cout << dx << " " << dy << endl;
  }
}