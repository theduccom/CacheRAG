#include <cstdio>
#include <queue>
#include <iostream>
#include <string.h>
#include <map>
#include <string>

using namespace std;

//int board[4][6];
int input[8];
struct P {
  int x,y;
  int state[4][6];
};
queue<P> que;
map<string, int> m;
int sh_x[4] = {0, 0, -1, 1};
int sh_y[4] = {1, -1, 0, 0};

void solve() {
  P p;
  int n_x, n_y;
  int i,j,k;
  int index = 0;
  memset(p.state, -1, sizeof(p.state));
  for(i=1;i<3;i++) {
    for(j=1;j<5;j++) {
      p.state[i][j] = index;
      index++;
    }
  }
  p.x = 1;
  p.y = 1;
  p.state[1][1] = 0;
  que.push(p);
  m["01234567"] = 0;

  while(que.size()) {
    P pos = que.front(); que.pop();
    string now;
    for(i=1;i<3;i++) {
      for(j=1;j<5;j++) {
        now.push_back('0' + pos.state[i][j]);
      }
    }

    for(i=0;i<4;i++) {
      n_x = pos.x + sh_x[i];
      n_y = pos.y + sh_y[i];
      if (pos.state[n_y][n_x] != -1) {
        P n_pos;
        for(j=0;j<4;j++) {
          for(k=0;k<6;k++)
            n_pos.state[j][k] = pos.state[j][k];
        }
        n_pos.state[pos.y][pos.x] = n_pos.state[n_y][n_x];
        n_pos.x = n_x;
        n_pos.y = n_y;
        n_pos.state[n_y][n_x] = 0;

        string next;
        for(j=1;j<3;j++) {
          for(k=1;k<5;k++) {
            next.push_back('0' + n_pos.state[j][k]);
          }
        }

        if (m.find(next) == m.end()) {
          //cout<< next << endl;
          m[next] = m[now] + 1;
          que.push(n_pos);
        }
      }
    }
  }
}

int main() {
  solve();
  int i;
  while(scanf("%d %d %d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7])!=-1)
  {
    string s;
    for(i=0;i<8;i++)
      s.push_back('0' + input[i]);
    cout<< m[s] <<endl;
  }
  return 0;
}


