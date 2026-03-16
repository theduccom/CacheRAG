#include<stdio.h>
int main(){
	int a;
	while(scanf("%d",&a),a){
		for(int i=0;i<a;i++){
			int b,c,d;
			scanf("%d%d%d",&b,&c,&d);
			if(b==100||c==100||d==100||b+c>=180||b+c+d>=240)printf("A\n");
			else if(b+c+d>=210||(b+c+d>=150&&(b>=80||c>=80)))printf("B\n");
			else printf("C\n");
		}
	}
}