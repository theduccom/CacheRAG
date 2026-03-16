#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	char c[5];
	int i, j;
	int sum[14];
	int max, max2;
	
	while (scanf("%d, %d, %d, %d, %d", &c[0], &c[1], &c[2], &c[3], &c[4]) != EOF){
		
		for (i = 0; i < 14; i++){
			sum[i] = 0;
		}
		
		
		for (i = 0; i < 5; i++){
			sum[c[i]-1]++;
		}
		
		max = 0;
		max2 = 0;
		
		for (i = 0; i < 14; i++){
			if (max < sum[i]){
				max = sum[i];
			}
			else if (max2 < sum[i]){
				max2 = sum[i];
			}
		}
		
		int ch;
		
		for (i = 0; i < 10; i++){
			
			ch = 0;
			
			for (j = 0; j < 5; j++){
				
				if (sum[(i + j) % 13] == 1){
					ch++;
				}
			}
			if (ch == 5){
				break;
			}
		}
		
		if (max == 4){
			printf("four card\n");
		}
		else if (max == 3 && max2 == 2){
			printf("full house\n");
		}
		
		
		else if (ch == 5){
			printf("straight\n");
		}
		
		else if (max == 3){
			printf("three card\n");
		}
		else if (max == 2 && max2 == 2){
			printf("two pair\n");
		}
		else if (max == 2){
			printf("one pair\n");
		}
		else {
			printf("null\n");
		}
	}
	return (0);
}