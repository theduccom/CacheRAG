#include<stdio.h>
#include<math.h>

int main()
{
	double limit;
	int floor;
	while (scanf("%lf", &limit) != EOF)
	{
		for (floor = 0;; floor++)
		{
			double speed = sqrt(19.6 * 5 * (floor - 1));
			if (speed >= limit)
			{
				printf("%d\n", floor);
				break;
			}
		}
	}
	return 0;
}