#include <string.h>
#include <cmath>
#include <stdio.h>

int main()
{
	int n;
	char a[10000],b[10000],sum[10000];
	int len_a,len_b,len_max;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%s",a);
		scanf("%s",b);
		len_a = strlen(a);
		len_b = strlen(b);
		
		if(len_a > 80 || len_b > 80){
			printf("overflow\n");
			continue;
		}

		if(len_a > len_b){
			len_max = len_a;
		}else{
			len_max = len_b;
		}
		for(int j = 1; j <= len_max; j++){
			if(len_a - j < 0){
				sum[len_max - j] = b[len_b - j];
			}else if(len_b - j < 0){
				sum[len_max - j] = a[len_a - j];
			}else{
				sum[len_max - j] = a[len_a - j] + b[len_b - j] - '0';
			}
		}
		sum[len_max] = '\0';
		for(int j = len_max - 1; j >= 0; j--){
			if(sum[j] > '9' && j > 0){
				sum[j] = sum[j] - 10;
				sum[j - 1]++;
			}
		}
		if(sum[0] > '9' && len_max == 80){
			printf("overflow\n");
			continue;
		}
		if(sum[0] > '9'){
			sum[0] = sum[0] - 10;
			printf("1");
		}
		printf("%s\n",sum);
	}
	return 0;
}