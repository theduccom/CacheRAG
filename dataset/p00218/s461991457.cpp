#include<stdio.h>

int main(){
	int n,pm,pe,pj;
	int i;
	char grade;

	while(scanf("%d",&n),n){

		for(i = 0; i < n; i++){
			scanf("%d %d %d",&pm,&pe,&pj);
			int ave = (pm + pe + pj) / 3;
			if(pm == 100 || pe == 100 || pj == 100){
				grade = 'A';
			}else if((pm + pe) / 2  >= 90){
				grade = 'A';
			}else if(ave >= 80){
				grade = 'A';
			}else if(ave >= 70){
				grade = 'B';
			}else if(ave >= 50 && (pm >= 80 || pe >= 80)){
				grade = 'B';
			}else{
				grade = 'C';
			}
			printf("%c\n",grade);
		}
	}

	return 0;
}