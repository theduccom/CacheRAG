#include <stdio.h>

int main() {
  int i, j, k;

  scanf("%d %d %d", &i, &j, &k);

  if (i == 1 && j == 0 && k == 0){
    printf("Close\n");
  } else if (i == 0 && j == 1 && k == 0) {
    printf("Close\n");
  } else if (i == 1 && j == 1 && k == 0) {
    printf("Open\n");
  } else if (i == 0 && j == 0 && k == 1) {
    printf("Open\n");
  } else if (i == 0 && j == 0 && k == 0) {
    printf("Close\n");
  } else {
    printf("Close\n");
  }
  
  return 0;
}

