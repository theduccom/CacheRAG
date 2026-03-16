#include<stdio.h>
#include<string.h>

int main(void){

	int sum,out;
	int runner[3];
	char act[8];
	int n;
	int i,j;

	scanf("%d",&n);

	for(i=0;i<n;i++){

		sum = 0;
		out = 0;
		runner[0] = runner[1] = runner[2] = 0;

		while(out < 3){

			scanf("%s",act);

			if(strcmp("HIT",act) == 0){
				if(runner[2] == 1)
					runner[2] = 0,sum++;
				if(runner[1] == 1)
					runner[1] = 0,runner[2] = 1;
				if(runner[0] == 1)
					runner[0] = 0,runner[1] = 1;

				runner[0] = 1;

			}
			else if(strcmp("HOMERUN",act)==0){
				sum++;

				for(j=0;j<3;j++){
					if(runner[j] == 1){
						runner[j] = 0;
						sum++;
					}
				}
			}
			else if(strcmp("OUT",act)==0){

				out++;
			}
		}

		printf("%d\n",sum);

	}

	return 0;
}