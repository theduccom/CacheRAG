#include <stdio.h>

int main(void){
	int n;
	int bestP, bestD, p, d1,d2;
	
	while (scanf("%d",&n), n){
		bestD = bestP = 0;
		for (int i=0; i<n; i++){
			scanf("%d %d %d", &p, &d1, &d2);
			if (d1+d2 > bestD){
				bestD = d1+d2;
				bestP = p;
			}
		}
		printf("%d %d\n", bestP, bestD);
	}
	return 0;
}