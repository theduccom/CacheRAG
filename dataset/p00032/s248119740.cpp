#include <stdio.h>

int w1, w2, w3;

int is_rect(void){
	return w3*w3 == w1*w1 + w2*w2;
}

int is_hishi(void){
	return w1 == w2;
}

int main(void){
	int cr = 0, ch = 0;
	while(scanf("%d,%d,%d", &w1, &w2, &w3) != EOF){
		cr += is_rect();
		ch += is_hishi();
	}
	printf("%d\n%d\n", cr, ch);
	return 0;
}