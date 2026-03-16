#include <stdio.h>

int main(){
	int i,l[10],v[2];
	double far;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v[0],&v[1]) != EOF){
		for(i = 1;i < 10;i++){
			l[i] += l[i - 1];
		}
		far = (double)(l[9] * v[0]) / (v[0] + v[1]);
		for(i = 0;i < 10;i++){
			if(far <= l[i]) {
				printf("%d\n",i + 1);
				break;
			}
		}
	}
	return 0;
}