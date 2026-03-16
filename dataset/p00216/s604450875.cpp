#include<stdio.h>
int main(){
	int a;
	while(scanf("%d",&a),~a){
		int rev=1150;
		if(a>=30)rev+=(a-30)*160+1400+1250;
		else if(a>=20)rev+=(a-20)*140+1250;
		else if(a>=10)rev+=(a-10)*125;
		printf("%d\n",4280-rev);
	}
}