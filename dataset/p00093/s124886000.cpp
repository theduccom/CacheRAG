#include <stdio.h>

int hantei(int year);
//???????????´????????????????????????????????????

int main(void)
{
	int year[2];
	int NA = -1;
	int leapyear[3000];
	for(int i = 0; i < 3000; i++) {
		leapyear[i] = hantei(i);
	}
	for(;;) {
		scanf("%d %d", &year[0], &year[1]);
		if(year[0] == 0 && year[1] == 0) {
			break;
		}else if(NA != -1) {
			printf("\n");
		}
		NA = 0;
		for(int i = year[0]; i <= year[1]; i++) {
			if(leapyear[i] == 1) {
				printf("%d\n", i);
				NA++;
			}
		}
		if(NA == 0) {
			printf("NA\n");
		}
	}
	return 0;
}

int hantei(int year)
{
	if(year % 400 == 0) {
		return 1;
	}else if(year % 100 == 0) {
		return 0;
	}else if(year % 4 == 0) {
		return 1;
	}else{
		return 0;
	}
} 