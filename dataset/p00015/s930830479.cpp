#include <stdio.h>
#include <string.h>
#include <math.h>

#define DIGIT 100000

int main(void){
	char temp[1000];
	int a[100];
	int b[100];
	int c[100];
	int t;
	int n;

	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int k=0; k<100; k++){
			a[k] = 0;
			b[k] = 0;
			c[k] = 0;
		}
		int j;
		scanf("%s", temp);

		for(int k=0, j=strlen(temp)-1; j>=0; k++){
			for(int l=0; l<5; l++, j--){
				if(j < 0) break;
				a[k] +=	(temp[j] - '0') * pow(10, l);
			}
		}

		scanf("%s", temp);
		for(int k=0, j=strlen(temp)-1; j>=0; k++){
			for(int l=0; l<5; l++, j--){
				if(j < 0) break;
				b[k] +=	(temp[j] - '0') * pow(10, l);
			}
		}

		for(j=0; j<100; j++){
			t = a[j] + b[j] + c[j];
			c[j] = t % DIGIT;
			c[j+1] += (t / DIGIT);
		}
		
		j=99;
		while(c[j] == 0 && j >= 0) j--;
		if(j == -1){
			printf("0\n");
		}else if(j > 15){
			printf("overflow\n");
		}else{
			printf("%d", c[j]);
			j--;
			for(; j>=0; j--){
				printf("%05d", c[j]);
			}
			printf("\n");
		}
	}

	return 0;
}