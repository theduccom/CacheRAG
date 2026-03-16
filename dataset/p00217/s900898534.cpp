#include<stdio.h>
int main(){
	int a;
	while(scanf("%d",&a),a){
		int ret1=0;
		int ret2=0;
		for(int i=0;i<a;i++){
			int b,c,d;
			scanf("%d%d%d",&b,&c,&d);
			if(c+d>ret1){
				ret1=c+d;
				ret2=b;
			}
		}
		printf("%d %d\n",ret2,ret1);
	}
}