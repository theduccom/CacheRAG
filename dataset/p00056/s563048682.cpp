#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

#define MAX 50000

int main(void)
{
	bool p[MAX + 5];
	int i, j;
	
	for (i = 0; i <= MAX; i++){
		p[i] = true;
	}
	p[0] = p[1] = false;
	for (i = 2; i <= MAX; i++){
		if (p[i]){
			for (j = (i * 2); j <= MAX; j += i){
				p[j] = false;
			}
		}
	}
	
	int n;
	while (scanf("%d", &n)){
		if (n == 0) break;
		int res = 0;
		for (i = 2; i <= (n / 2); i++){
			if (p[i] && p[n - i]) res++;
		}
		printf("%d\n", res);
	}
		
	return (0);
}