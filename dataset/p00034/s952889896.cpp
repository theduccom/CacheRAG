#include <stdio.h>

int main(void)
{
	int dis[10], v1, v2;
	int i, j, sum;
	double x, cross;
	
	while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &dis[0], &dis[1], &dis[2], &dis[3], &dis[4], &dis[5], &dis[6], &dis[7], &dis[8], &dis[9], &v1, &v2) != EOF){
		
		sum = 0;
		for (i = 0; i < 10; i++){
			sum += dis[i];
		}
		x = (double)sum / (v1 + v2);
		cross = v1 * x;
		
		i = 0;
		while (cross > 0){
			cross -= dis[i];
			i++;
		}
		printf("%d\n", i);
	}
	
	return (0);
}