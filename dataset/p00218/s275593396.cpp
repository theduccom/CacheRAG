#include <stdio.h>

void class_judge(int math, int en, int ja);

int main(void)
{
	int set, math, en, ja;
	while (1) {
		scanf("%d", &set);
		if (set == 0) {
			break;
		} else {
			for (int i = 0; i < set; i++) {
				scanf("%d %d %d", &math, &en, &ja);
				class_judge(math ,en ,ja);
			}
		}
	}
	return 0;
}

void class_judge(int math, int en, int ja)
{
	if (math == 100 || en == 100 || ja == 100) {
		printf("A\n");
	} else if ((math + en) / 2 >= 90) {
		printf("A\n");
	} else if ((math + en + ja) / 3 >= 80) {
		printf("A\n");
	} else if ((math + en + ja) / 3 >= 70) {
		printf("B\n");
	} else if ((math + en + ja) / 3 >= 50 && (math >= 80 || en >= 80)){
		printf("B\n");
	} else {
		printf("C\n");
	}
}