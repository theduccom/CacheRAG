#include <stdio.h>

void leap(int a, int b);

int main(void)
{
    int a, b, n;
    n = 0;
    while (1){
	scanf("%d %d", &a, &b);
	if (a == 0 && b == 0) {
	    break;
	}
	if (n != 0) {
	    printf("\n");
	}
	leap(a, b);
	n ++;
    }
    return 0;
}

void leap(int a, int b)
{
    int count = 0;
    for (int i = a; i < b + 1; i ++) {
	if (i % 400 == 0) {
	    printf("%d\n", i);
	    count ++;
	} else if (i % 4 == 0 && i % 100 != 0) {
	    printf("%d\n", i);
	    count ++;
	}
    }
    if (count == 0) {
	printf("NA\n");
    }
}