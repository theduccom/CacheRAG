#include <stdio.h>
int pa(void)
{
    printf("A\n");
}

int pb(void)
{
    printf("B\n");
}

int pc(void)
{
    printf("C\n");
}

int main(void)
{
    int n, i,sum, pm[10000], pj[10000], pe[10000];
    while(1) {
	scanf("%d", &n);
	if (n == 0) {
	    break;
	}
	sum = pm[i] + pe[i] + pj[i];
	for (i = 0; i < n; i++) {
	    scanf("%d %d %d", &pm[i], &pj[i], &pe[i]);
	    sum = pm[i] + pe[i] + pj[i];
	    if (pm[i] == 100 || pj[i] == 100 || pe[i] == 100) {
		pa();
	    } else if (pm[i] + pe[i] >= 180) {
		pa();
	    } else if (sum >= 240) {
		pa();
	    } else if (sum >= 210) {
		pb();
	    } else if (sum >= 150 && (pm[i] >= 80 || pe[i] >= 80)) {
		pb();
	    } else {
		pc();
	    }
	}
    }
    return 0;
}