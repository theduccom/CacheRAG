#include <cstdio>

#define MAX 1000000

bool prime[MAX] = {true};
int p[10000] = {0};

void eratos(void);

int main(void)
{
	eratos();
	
	int n, sum;
	
	while (scanf("%d", &n)){
		if (n == 0) break;
		
		sum = 0;
		for (int i = 0; i < n; i++){
			sum += p[i];
//			printf("p[i] : %d\n", p[i]);
		}
		printf("%d\n", sum);
	}
	
	return (0);
}

void eratos(void)
{
	int pnum = 0;
	for (int i = 0; i < MAX; i++) prime[i] = true;
	for (int i = 2; pnum < 10000; i++){
		if (prime[i]){
			p[pnum++] = i;
			for (int j = 2; i * j < MAX + 1; j++){
				prime[i * j] = false;
			}
		}
	}
	return;
}