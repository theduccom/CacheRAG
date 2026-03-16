#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  bool field[12][12] = {};
  string s;
  while(cin >> s) {
    rep(i, 8) {
      field[0][i] = s[i] == '1';
    }
    loop(i, 1, 8) {
      cin >> s;
      loop(j, 0, 8) {
        field[i][j] = s[j] == '1';
      }
    }
   
    char ans = '.';
    rep(i, 8) {
      rep(j, 8) {
        if(field[i][j]) {
          if(field[i][j+1] && field[i+1][j] && field[i+1][j+1]) ans = 'A';
          else if(field[i+1][j] && field[i+2][j] && field[i+3][j]) ans = 'B';
          else if(field[i][j+1] && field[i][j+2] && field[i][j+3]) ans = 'C';
          else if(field[i][j+1] && field[i+1][j+1] && field[i+1][j+2]) ans = 'E';
          else if(field[i+1][j] && field[i+1][j+1] && field[i+2][j+1]) ans = 'F';
          else if(field[i+1][j] && field[i+1][j-1] && field[i+2][j-1]) ans = 'D';
          else ans = 'G';
          break;
        }
      }
      if(ans != '.') break;
    }
    cout << ans << endl;
    getline(cin, s);
  }
}