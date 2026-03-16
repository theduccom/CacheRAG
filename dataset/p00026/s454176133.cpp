#include <cstdio>
using namespace std;

#define N 10
// init map
int MAP[N][N];
int D_MAX = 5;
int DROP[3][5][5] = {
  {
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,1,1,1,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
  },
  {
    {0,0,0,0,0},
    {0,1,1,1,0},
    {0,1,1,1,0},
    {0,1,1,1,0},
    {0,0,0,0,0},
  },
  {
    {0,0,1,0,0},
    {0,1,1,1,0},
    {1,1,1,1,1},
    {0,1,1,1,0},
    {0,0,1,0,0},
  },
};

int main() {
  int x,y,size;
  while(~scanf("%d,%d,%d",&x,&y,&size)) {
    size = size - 1;
    for(int i=0;i<D_MAX;i++) {
      int xi = x + i - 2;
      if(xi <= -1 || xi >= N) continue;
      for(int j=0;j<D_MAX;j++) {
        int yi = y + j - 2;
        if(yi <= -1 || yi >= N) continue;
        MAP[xi][yi] += DROP[size][i][j];
      }
    }
  }

  int max_z = 0;
  int cnt = 0;
  for(int i=0;i<N;i++) {
    for(int j=0;j<N;j++) {
      if(MAP[i][j] == 0)
        cnt++;
      if(MAP[i][j] > max_z) {
        max_z = MAP[i][j];
      }
    }
  }
  printf("%d\n%d\n",cnt,max_z);
}