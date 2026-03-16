#include <stdio.h>
#include <algorithm>
using namespace std;

bool IsEqual(int* begin, int size)
{
	for (int i = 1; i < size; i++)
	{
		if (begin[i] != begin[i - 1]) return false;
	}
	return true;
}

int main()
{
	int card[5];

	while (true)
	{
		for (int i = 0; i < 5; i++)
		{
			if (scanf("%d,", &card[i]) == -1) return 0;
		}
		sort(card, card + 5);

		if	(IsEqual(card, 4)) printf("four card\n");

		else if (IsEqual(card + 1, 4)) printf("four card\n");

		else if (IsEqual(card, 3) && IsEqual(card + 3, 2)) printf("full house\n");

		else if (IsEqual(card, 2) && IsEqual(card + 2, 3)) printf("full house\n");

		else if (card[0] + 1 == card[1] && card[1] + 1 == card[2]
			  && card[2] + 1 == card[3] && card[3] + 1 == card[4]) printf("straight\n");

		else if (card[0] == 1 && card[1] == 10 && card[2] == 11
			  && card[3] == 12 && card[4] == 13) printf("straight\n");

		else if (IsEqual(card, 3) || IsEqual(card + 1, 3) || IsEqual(card + 2, 3)) printf("three card\n");

		else if (IsEqual(card, 2) && IsEqual(card + 2, 2)) printf("two pair\n");

		else if (IsEqual(card + 1, 2) && IsEqual(card + 3, 2)) printf("two pair\n");

		else if (IsEqual(card, 2) && IsEqual(card + 3, 2)) printf("two pair\n");

		else
		{
			for (int i = 0; i < 4; i++)
			{
				if (IsEqual(card + i, 2))
				{
					printf("one pair\n");
					break;
				}
				if (i == 3)
				{
					printf("null\n");
				}
			}
		}
	}

	return 0;
}