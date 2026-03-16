#include <cstdio>

int n;

int main(){
	while(scanf("%d", &n),n){
		for(int i = 0; i < n; i++){
			int pm, pe, pj,ave;
			scanf("%d%d%d", &pm, &pe, &pj);
			ave = (pm+pe+pj)/3;
			if(pm == 100 || pe == 100 || pj == 100 || ave >= 80 || (pm+pe)/2 >= 90) printf("A\n");
			else if(ave >= 70 || (ave>=50&&(pm>=80||pe>=80))) printf("B\n");
			else printf("C\n");
		}
	}
}