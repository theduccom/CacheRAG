#include <cstdio>

int n;

int main(){
	while(scanf("%d", &n),n){
		int num = 0,dis = -1;
		for(int i = 0; i < n; i++){
			int p,d1,d2;
			scanf("%d%d%d", &p, &d1, &d2);
			if(d1+d2 > dis){
				dis = d1+d2;
				num = p;
			}
		}
		printf("%d %d\n", num, dis);
	}
}