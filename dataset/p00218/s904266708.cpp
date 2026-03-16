#include<stdio.h>

void dividing(int pm, int pe, int pj);

int main(void)
{
  int n;
  int pm, pe, pj;
  while (1) {
    int i = 0;
    scanf("%d", &n);
  if (n == 0) {
    break;
  } else {
  while (i < n) {
    scanf("%d %d %d", &pm, &pe, &pj);
    dividing(pm, pe, pj);
    i++;
  }
  }
  }
  return 0;
}

void dividing(int pm, int pe, int pj)
{
  if (pm == 100 || pe == 100 || pj == 100) {
    printf("A\n");
  }
  else if (pm + pe >= 90 * 2){
    printf("A\n");
  }
  else if (pm + pe + pj >= 80 * 3){
    printf("A\n");
  }
  else if (pm + pe + pj >= 70 * 3){
    printf("B\n");
  }
  else if((pm + pe + pj >= 50 * 3) && (pm >= 80 || pe >= 80)){
    printf("B\n");
  } else {
    printf("C\n");
  }
}