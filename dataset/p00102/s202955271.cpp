#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n;

	while (scanf("%d", &n), n){
		int sum = 0, e_sum[10] = {0};
		for (int i = 0; i < n; i++){
			int num;
			int r_sum = 0;
			for (int j = 0; j < n; j++){
				scanf("%d", &num);
				r_sum += num;
				e_sum[j] += num;
				printf("%5d", num);
			}
			sum += r_sum;
			printf("%5d\n", r_sum);
		}

		for (int i = 0; i < n; i++){
			printf("%5d", e_sum[i]);
		}
		printf("%5d\n", sum);
	}

	return (0);
}