#include <cstdio>

int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==-1)break;
		if(n<=10)printf("%d\n",4280-1150);
		else{
			int price = 1150;
			if(n<=20){
				for(int i=0;i<n-10;++i){
					price+=125;
				}
				printf("%d\n", 4280-price);
			}else if(n<=30){
				price+=125*10;
				for(int i=0;i<n-20;++i){
					price+=140;
				}
				printf("%d\n",4280-price);
			}else {
				price += (125+140) * 10;
				for(int i=0;i<n-30;++i){
					price+=160;
				}
				printf("%d\n",4280-price);
			}
		}
	}
}