#include<cstdio>

int main(void){
	int sum_p = 0, sum_q = 0, cnt = 0;

	while( true ){
		int p, q;

		if( 2 != scanf("%d,%d", &p, &q) ){
			break;
		}
		cnt++;
		sum_p += p * q;
		sum_q += q;
	}

	printf("%d\n%.0f\n", sum_p, (double)sum_q / cnt + 0.5);
	return 0;
}