#include <stdio.h>
char classify(int pm, int pe, int pj);

int main(void)
{
    int n, pm, pe, pj;
    while (1) {
	scanf("%d", &n);
	if (n == 0){
	    break;
	} else {
	    for (int i = 0;i < n;i ++){
		scanf("%d %d %d", &pm, &pe, &pj); 
		printf("%c\n", classify(pm, pe, pj));
	    }
	}
    }
    return 0;
}

char classify(int pm, int pe, int pj)
{
    int ave = (pm + pe + pj) / 3;
    if (pm == 100 || pe == 100 || pj == 100){
	return 'A';
    } else if ((pm + pe) / 2 >= 90){
	return 'A';
    } else if (ave >= 80){
	return 'A';
    } else if (ave >= 70){
	return 'B';
    } else if (ave >= 50 && (pm >= 80 || pe >= 80)){
	return 'B';
    } else {
	return 'C';
    }
}