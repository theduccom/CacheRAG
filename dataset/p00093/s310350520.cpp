#include<stdio.h>

void leap_year(int start_year, int end_year);

int main(void)
{
 int start_year;
 int end_year;
   int i = 0;
   while(1){
   scanf("%d %d", &start_year, &end_year);
   if (start_year == 0 && end_year == 0) {
     break;
  } else {
    if ( i == 1) {
      printf("\n");
  }
    leap_year(start_year, end_year);
    i = 1;
   }
   }
   return 0;
}

void leap_year(int start_year, int end_year)
{
 int n = 0;
 int year = start_year;
   while (year <= end_year){
     if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
     printf("%d\n", year);
     n++;
   }
     year++;
 }
 if (n == 0){
   printf("NA\n");
  }
}

 