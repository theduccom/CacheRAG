#include <stdio.h>
#include <string.h>

#define MAX_DIGIT 80

void add(char *buf1, char *buf2){
	int len1 = strlen(buf1);
	int len2 = strlen(buf2);
	if(len1 > MAX_DIGIT || len2 > MAX_DIGIT){
		printf("overflow\n");
		return;
	}
	
	int out[MAX_DIGIT + 2];
	int i = 0;
	int carry = 0;
	while(len1 > 0 || len2 > 0){
		out[i] = carry;
		if(len1 > 0){
			len1--;
			out[i] += buf1[len1] - '0';
		}
		if(len2 > 0){
			len2--;
			out[i] += buf2[len2] - '0';
		}
		if(out[i] >= 10){
			carry = 1;
			out[i] -= 10;
		}else{
			carry = 0;
		}
		i++;
	}
	if(carry > 0){
		out[i] = carry;
	}else{
		i--;
	}
	if(i >= MAX_DIGIT){
		printf("overflow\n");
		return;
	}
	for(; i >= 0; i--){
		printf("%d", out[i]);
	}
	printf("\n");
}

int main(){
	int n;
	char buf1[10000], buf2[10000];
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", buf1);
		scanf("%s", buf2);
		add(buf1, buf2);
	}
	
	return 0;
}