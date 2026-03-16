#include<cstdio>

using namespace std;

int main(void){
	
	int l[10];
	int v1,v2;
	
	while(scanf("%d,", &l[0]) != EOF){
		
		int tl = 0;
		int v1l = 0,v2l = 0;
		for(int i = 1; i < 10; i++){
			scanf("%d,", &l[i]);
		}
		scanf("%d,%d", &v1, &v2);
		
		for(int i = 0; i < 10; i++){
			l[i]*=100;
		}
		for(int i = 0; i < 10; i++){
			tl += l[i];
		}
		
		int cnt = 0;
		
		while(v1*cnt+v2*cnt < tl)cnt++;
		
		tl = 0;
		
		for(int i = 0;; i++){
			if(tl+l[i] >= v1*cnt){
				printf("%d\n",i+1);
				break;
			}else{
				tl+=l[i];
			}
		}
	}
	return 0;
}