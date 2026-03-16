#include<stdio.h>

int main()
{
	int a, b;
	int sumw = 0, sumb = 0, n = 0;
	while( scanf("%d,%d", &a, &b) != -1 ){
		sumw += a * b;
		sumb += b;
		n++;
	}
	
	int aveb = (double)sumb / n + 0.5;
	printf("%d\n%d\n", sumw, aveb);
	return 0;
}