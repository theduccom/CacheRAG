#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int margin = 3;
const int paper_size = 10;
int cordx[] = {0,  0, -1, 0, 1, -1, -1, 1,  1,  0, -2, 0, 2};
int cordy[] = {0, -1,  0, 1, 0, -1,  1, 1, -1, -2,  0, 2, 0};

int main(int argc, char **argv)
{
  vvi paper(paper_size+margin*2, vi(paper_size+margin*2, 0));
  int x, y, size;
  char com;
  for (;;) {
    cin >> x >> com >> y >> com >> size;
    if (cin.eof())
      break;

    for (int i = 0; i < 1+4*size; i++) {
      paper[margin+x+cordx[i]][margin+y+cordy[i]]++;
    }
  }

  int empty_nr = 0;
  int max_score = 0;
  for (int i = margin; i < margin+paper_size; i++) {
    for (int j = margin; j < margin+paper_size; j++) {
      if (paper[i][j]) {
        max_score = max(max_score, paper[i][j]);
      } else {
        empty_nr++;
      }
    }
  }
  cout << empty_nr << endl;
  cout << max_score << endl;

  return 0;
}