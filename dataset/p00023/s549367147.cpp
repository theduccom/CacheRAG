#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int n, i;
	double xa, ya, ra, xb, yb, rb;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf", &xa, &ya, &ra, &xb, &yb, &rb);
		double lr = ra>rb ? ra : rb,
			sr = ra > rb ? rb : ra,
			distance = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
		if (distance > ra + rb)
		{
			printf("0\n");
		}
		else if (distance < lr - sr)
		{
			if (lr == ra)printf("2\n");
			else printf("-2\n");
		}
		else
			printf("1\n");
	}
	return 0;
}