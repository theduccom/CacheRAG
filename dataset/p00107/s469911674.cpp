#include <stdio.h>
#include <math.h>

int main(void)
{
	double len;
	double wid;
	double hei;
	double s[3];
	int n;
	int ent;
	int entd;
	int min;
	int i, j;
	
	while (1){
		scanf("%lf %lf %lf", &len, &wid, &hei);
		if (len == 0 && wid == 0 && hei == 0){
			break;
		}
		scanf("%d", &n);
		for (i = 0; i < n; i++){
			scanf("%d", &ent);
			entd = ent * 2;
			s[0] = sqrt(len * len + wid * wid);
			s[1] = sqrt(wid * wid + hei * hei);
			s[2] = sqrt(len * len + hei * hei);
			
			min = s[0];
			for (j = 1; j < 3; j++){
				if (min > s[j]){
					min = s[j];
				}
			}
			if (entd > min) printf("OK\n");
			else printf("NA\n");
		}
	}
	return (0);
}