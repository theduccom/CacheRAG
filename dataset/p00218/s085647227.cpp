#include<stdio.h>
#include <iostream>
using namespace std;
int main(void){

	int n,i,j,pm,pe,pj,a,d=-1,c=-1,max=-1;
	scanf("%d",&n);
	while ( n > 0){
		for (i = 0; i < n; i++){
			scanf("%d %d %d",&pm,&pe,&pj);
			if ((pm == 100 || pe == 100 || pj == 100) || ((pm + pe) / 2>=90||(pe+pj+pm)/3>=80)){

				printf("A\n");
			}
			else if ((pe + pj + pm) / 3 >= 70 || ((pm + pj + pe) / 3 >= 50 && (pe >= 80 || pm >= 80))){
				printf("B\n");
			}
			else printf("C\n");
		}
			scanf("%d", &n);
	}
}