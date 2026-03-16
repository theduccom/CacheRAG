#include<stdio.h>
int main(void)
{
	int a, b, r;
	int rectangle = 0, rhombus = 0;
	while(scanf("%d,%d,%d", &a, &b, &r) == 3)
	{
		if(a == b)
			rhombus++;
		else if(a*a + b*b == r*r)
			rectangle++;
	}
	printf("%d\n%d\n", rectangle, rhombus);
	return 0;
}