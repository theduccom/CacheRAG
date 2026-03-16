#include<cstdio>

int main(){
	int a[10];
	int v1,v2,l;
	int t;
	while(1 + scanf("%d,", &t)){
		l = 0;
		for(int i = 0; i < 10; i++){
			l += t;
			a[i] = l;
			scanf("%d,", &t);
		}
		v1 = t;
		scanf("%d", &v2);
		for(int i = 0; i < 10; i++){
			if((v1 + v2) * a[i] < v1 * l && v1 * l <= (v1 + v2) * a[i + 1]){
				printf("%d\n", i + 2);					
			}
		}
	}
	return 0;
}