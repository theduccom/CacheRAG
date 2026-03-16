#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
using namespace std;
bool calc(vector<vector<char> >, int y, int x);
int resultx;
int resulty;
set<string> passed;

int main() {
  while(true) {
    passed.clear();
  int width, height;
  cin >> width >> height;
  if(width == 0 && height == 0) break;
  vector<vector<char> > field(width, vector<char>(height));
  for(int w = 0; w < width; ++w) {
    for(int h = 0; h < height; ++h) {
      cin >> field[w][h];
    }
  }
  if(calc(field, 0, 0)) cout << resulty << " " << resultx << endl;
  }
  return 0;
}

bool calc(vector<vector<char> > field, int y, int x) {
  stringstream ss;
  ss << y << ',' << x;
  // cout << ss.str() << endl;
  if(passed.find(ss.str()) != passed.end()) {
    cout << "LOOP" << endl;
    return false;
  }
  passed.insert(ss.str());
  switch(field[x][y]) {
    case '>':
      return calc(field, y + 1, x);
      break;
    case '<':
      return calc(field, y - 1, x);
      break;
    case '^':
      return calc(field, y, x - 1);
      break;
    case 'v':
      return calc(field, y, x + 1);
      break;
    case '.':
      resultx = x;
      resulty = y;
      return true;
  }
}