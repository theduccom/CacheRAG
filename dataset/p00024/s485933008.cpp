#include<cstdio>

int main(){
	double v;
	int n;
	while(scanf("%lf", &v) + 1){
		n = 1;
		while(n)
		{
			n++;
			if(v * v <= 2 * 9.8 * (5 * n - 5)){
				printf("%d\n", n);
				n = 0;
			}
		}
	}
	return 0;
}