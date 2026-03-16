#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
#define repab(i,a,b) for(int i=a;i<b;i++)

int main(int argc, char **argv)
{
  const int margin = 3;
  const int field_size = 8;
  map<char, pair<vi, vi>> m;
  m['A'] = make_pair(vi({-1,  0, -1}), vi({ 0, -1, -1}));
  m['B'] = make_pair(vi({ 0,  0,  0}), vi({-1, -2, -3}));
  m['C'] = make_pair(vi({-1, -2, -3}), vi({ 0,  0,  0}));
  m['D'] = make_pair(vi({ 0,  1,  1}), vi({-1, -1, -2}));
  m['E'] = make_pair(vi({-1, -1, -2}), vi({ 0, -1, -1}));
  m['F'] = make_pair(vi({ 0, -1, -1}), vi({-1, -1, -2}));
  m['G'] = make_pair(vi({-1,  0,  1}), vi({ 0, -1, -1}));
  char c;
  int x, y;
  for (;;) {
    vector<vi> field(field_size+margin*2, vi(field_size+margin*2, 0));
    x = y = 0;
    repab (j, margin, field_size+margin) {
      repab (i, margin, field_size+margin) {
        cin.get(c);
        field[i][j] = c-'0';
        if (field[i][j]) {
          x = i;
          y = j;
        }
      }
      cin.get(c); // maybe '\n'
    }
    if (cin.eof())
      break;
    cin.get(c); // maybe '\n'

    for (char c = 'A'; c <= 'G'; c++) {
      vi& cordx = m[c].first;
      vi& cordy = m[c].second;
      if (field[x][y]
          && field[x+cordx[0]][y+cordy[0]]
          && field[x+cordx[1]][y+cordy[1]]
          && field[x+cordx[2]][y+cordy[2]]) {
        cout << c << endl;
        break;
      }
    }
  }
  return 0;
}