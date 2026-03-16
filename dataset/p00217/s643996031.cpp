#include <stdio.h>

int main()
{
	int NO,max,p,d1,d2;
	int n,i,j;

	scanf("%d",&n);

	while(n != 0){
		max = 0;

		for(i = 0; i < n; i++){
			scanf("%d%d%d",&p,&d1,&d2);
			if(max < d1+d2){
				max = d1+d2;
				NO = p;
			}
		}

		printf("%d %d\n",NO,max);

		scanf("%d",&n);
	}

	return 0;
}