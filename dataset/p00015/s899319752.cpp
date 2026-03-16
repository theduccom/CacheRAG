#include <stdio.h>
#include <string.h>

#define BUF_SIZE 256

int main(void) {
	char buf[BUF_SIZE];
	int num1[BUF_SIZE];
	int num2[BUF_SIZE];
	int sum[BUF_SIZE];
	char str1[BUF_SIZE];
	char str2[BUF_SIZE];
	int n;
	int i, j, k;
	
	
	fgets(buf, sizeof(buf), stdin);
	sscanf(buf, "%d", &n);
	
	for (i=0; i<n; i++) {
		for (j=0; j<100; j++) {
			num1[j] = num2[j] = sum[j] = 0;
		}
		
		// first integer
		fgets(buf, sizeof(buf), stdin);
		sscanf(buf, "%s", &str1);
		
		// second integer
		fgets(buf, sizeof(buf), stdin);
		sscanf(buf, "%s", &str2);
		
		// overflow
		if (strlen(str1) > 80 || strlen(str2) > 80) {
			printf("overflow\n");
			continue;
		}
		
		// ??????
		for (j=0; j<strlen(str1)-1; j++)  ;
		for (k=0; j>=0; k++) {
			num1[k] = str1[j] - '0';
			j--;
		}
		for (j=0; j<strlen(str2)-1; j++)  ;
		for (k=0; j>=0; k++) {
			num2[k] = str2[j] - '0';
			j--;
		}
		
		// sum
		for (j=0; j<80; j++) {
			sum[j] += num1[j]+num2[j];
			if (sum[j]/10 >= 1) {
				sum[j+1] += sum[j]/10;
				sum[j] = sum[j]%10;
			}
		}
		
		if (sum[80] > 0) {
			printf("overflow\n");
		}
		else {
			for (j=79; sum[j]==0 && j!=0; j--)  ;
			for (; j>=0; j--) {
				printf("%d", sum[j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}