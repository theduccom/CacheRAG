#include <stdio.h>

int main()
{
	while (true)
	{
		int d[10];
		int va, vb;
		int sumd = 0;

		for (int i = 0; i < 10; i++)
		{
			if (scanf("%d,", &d[i]) == -1) return 0;
			sumd += d[i];
		}
		scanf("%d,%d", &va, &vb);

		double p = double(sumd) / double(va + vb) * double(va);
		int ans = 0;
		while (p > 0)
		{
			p -= d[ans];
			ans++;
		}

		printf("%d\n", ans);
	}

	return 0;
}