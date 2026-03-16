#include <stdio.h>

void judge_leap_year(int a, int b);

int existance_leap_year(int a, int b);

int main(void)
{
    while(1) {
      int exist;
      int start_year, end_year;
      scanf("%d %d", &start_year, &end_year);
      static int k = 0;
      ++k;
      if (start_year == 0 && end_year == 0) {
        break;
      } else {exist = existance_leap_year(start_year, end_year);
        if (k != 1) {
          printf("\n");
        }
        if (exist == 1) {
          judge_leap_year(start_year, end_year);
        } else {
          printf("NA\n");
        }
      }
    }
    return 0;
}

void judge_leap_year(int a, int b)
{
  int year;
      for (year = a; year <= b; year++) {
      if (year % 400 == 0) {
        printf("%d\n", year);
      } else if (year % 4 == 0 && year % 100 != 0) {
        printf("%d\n", year);
      }
    }
}
//閏年を記述する 

int existance_leap_year(int a, int b)
{
    int n = 0;
    int year;
    for (year = a; year <= b; year++) {
      if (year % 400 == 0) {
        n = 1;
        break;
      } else if (year % 4 == 0 && year % 100 != 0) {
        n = 1;
        break;//一度閏年を検出した時点でループを抜ける。                                                                                                                             
      }
    }
    return n;
}
//閏年があった時、１を返す                                                                                                                                                           