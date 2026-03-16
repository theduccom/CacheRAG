#include <cstdio>
#include <iostream>
using namespace std;

int H, W;
char tiles[110][110];

int main() {
  while (scanf("%d %d", &H, &W), H || W) {
    for (int i=0; i<H; i++) {
      for (int j=0; j<W; j++) {
	cin >> tiles[i][j];
      }
    }
    
    int x, y;
    x = y = 0;

    /*
    puts("debug");
    for (int i=0; i<H; i++) {
      for (int j=0; j<W; j++) {
	cout << tiles[i][j];
      }
      cout << endl;
    }
    puts("debugend");
    */
    
    while (tiles[y][x] != '.' && tiles[y][x] != '*') {   
      // printf("debug %d %d %c\n", x, y, tiles[y][x]);

      char c = tiles[y][x];
      tiles[y][x] = '*';
      if (c == '>') {
	x++;
      } else if (c == '<') {
	x--;
      } else if (c == '^') {
	y--;
      } else if (c == 'v') {
	y++;
      }

    }

    // printf("%c\n", tiles[y][x]);
    
    if (tiles[y][x] == '.') {
      printf("%d %d\n", x, y);
    } else {
      puts("LOOP");
    }
  }
}