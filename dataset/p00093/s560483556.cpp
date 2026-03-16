#include <stdio.h>

void leap_year(int year);
int leap_year_judge(int year_a, int year_b);

int main(void)
{
	int year_a, year_b, exist;
	int i = 0;
	while (1) {
		scanf("%d %d", &year_a, &year_b);
		exist = leap_year_judge(year_a, year_b);
		if (year_a == 0 && year_b == 0) {
			break;
		} else if (exist == 1) {
			if (i !=0) {
			printf("\n");
			}
			for (int i = year_a; i <= year_b; i++) {
				leap_year(i);
			}
		} else {
			if (i !=0) {
			printf("\n");
			}
			printf("NA\n");
		}
		i++;
		
	}
	return 0;
}

void leap_year(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("%d\n", year);
	} 
}

int leap_year_judge(int year_a, int year_b)
{
	int judge = 0;
	for (int i = year_a; i <= year_b; i++) {
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
			judge = 1;
		}
	}
	return judge;
}