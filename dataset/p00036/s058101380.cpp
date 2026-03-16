#include <iostream>
#include <cstdio>

using namespace std;

int dx[7][3] = {1, 1, 0, 0, 0, 0, 1, 2, 3, 0, -1, -1, 1, 1, 2, 0, 1, 1, 1, 0, -1};
int dy[7][3] = {0, -1, -1, -1, -2, -3, 0, 0, 0, -1, -1, -2, 0, -1, -1, -1, -1, -2, 0, -1, -1};

char field[10][10];

int main()
{
  while (true) {
    for (int i = 0; i < 10; i++) {
      fill(field[i], &field[i][10], '0');
    }
    if (scanf("%c ", &field[1][1]) != 1) {break;}
    for (int i = 2; i < 9; i++) {
      scanf("%c ", &field[1][i]);
    }
    for (int i = 2; i < 9; i++) {
      for (int j = 1; j < 9; j++) {
	scanf("%c ", &field[i][j]);
      }
    }
    
    /*for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
	printf("%c ", field[i][j]);
      }
      printf("\n");
      }*/

    for (int i = 1; i <= 8; i++) {
      for (int j = 1; j <= 8; j++) {
	if (field[i][j] == '1') {
	  int c = 0;
	  for (c = 0; c < 7; c++) {
	    for (int k = 0; k < 3; k++) {
	      if (field[i - dy[c][k]][j + dx[c][k]] == '0') {goto next;}
	    }
	    printf("%c\n", 'A' + c);
	    goto end;
	  next:;
	  }
	}
      }
    }
  end:;
  }
}