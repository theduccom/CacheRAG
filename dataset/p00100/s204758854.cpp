#include<stdio.h>

int main(void) {
	long long int a, b, count = 1, number = 0, syain[4010], tanka[4010], suuryou[4010], score[4010] = {}, noruma = 1000000, sens = 0;
	while (count) {
		sens = 0;
		long long int score[4010] = {};
		scanf("%d", &count);
		for (size_t i = 0; i < count; i++)
		{
			scanf("%lld %lld %lld", &syain[number], &tanka[number], &suuryou[number]);
			score[syain[number]] += tanka[number] * suuryou[number];
			if (score[syain[number]] >= noruma)
			{
				printf("%lld\n", syain[number]);
				sens++;
			}
			number++;
		}
		if (sens == 0 && count != 0)
		{
			printf("NA\n");
		}
	}
	return 0;
}