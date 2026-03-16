#include <stdio.h>

int main(void){
	int i , l[10] , v1 , v2 , d , l2[10];
	double pos;
	while(scanf("%d" , l)!=EOF){
		for(i=1;i<10;i++){
			scanf(",%d" , &l[i]);
		}
		scanf(",%d,%d" , &v1 , &v2);
		d = 0;
		for(i=0;i<10;i++){
			d += l[i];
		}
		pos = ((double)v1 / (v1 + v2)) * d;
		l2[0] = l[0];
		for(i=1;i<10;i++){
			l2[i] = l2[i-1] + l[i];
		}
		for(i=1;i<=10;i++){
			if(pos <= l2[i-1]){
				printf("%d\n" , i);
				break;
			}
		}
	}
	return 0;
}