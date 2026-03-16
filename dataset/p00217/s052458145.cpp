#include<stdio.h>
#include <iostream>
using namespace std;
int main(void){

	int n,i,j,d1,d2,p,a,d=-1,c=-1,max=-1;
	scanf("%d",&n);
	while ( n > 0){
		
		for (i = 0; i < n; i++){
			scanf("%d %d %d", &p, &d1, &d2);
			a = d1 + d2;
			if (a > max){
				c = p;
				d = a;
				max = a;
			}
		}
		max = -1;

			printf("%d %d\n", c , d);
			scanf("%d", &n);
	}
}