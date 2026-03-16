#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
  int W,H;
  while(scanf("%d%d", &H, &W)){
    if ((H == 0) && (W == 0)){
      break;
    }
    vector<vector<char> > m(H, vector<char>(W, ' '));
    vector<vector<int> > v(H, vector<int>(W, 0));
    for (int i = 0; i < H; i++){
      for (int j = 0; j < W; j++){
        scanf(" %c", &(m[i][j]));
      }
    }
    int x = 0, y = 0;
    bool loop = false;
    while(m[y][x] != '.'){
      if (v[y][x] != 0){
        loop = true;
        printf("LOOP\n");
        break;
      }else{
        v[y][x] = 1;
        if (m[y][x] == '>'){
          x++;
	}else if (m[y][x] == 'v'){
          y++;
	}else if (m[y][x] == '<'){
          x--;
	}else if (m[y][x] == '^'){
          y--;
	}
      }
    }
    if (!loop){
      printf("%d %d\n", x, y);
    }
  }
  return 0;
}