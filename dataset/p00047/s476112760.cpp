#include<stdio.h>

bool a=true,b=false,c=false;
int main(){
	char x,y,t;
	
	while(~scanf(" %c%c%c",&x,&t,&y)){
		bool d;
		if((x=='A'&&y=='B')||(x=='B'&&y=='A')){
			d=a;
			a=b;
			b=d;
		}else if((x=='B'&&y=='C')||(x=='C'&&y=='B')){
			d=b;
			b=c;
			c=d;
		}else{
			d=c;
			c=a;
			a=d;
		}
	}
	if(a)printf("A\n");
	if(b)printf("B\n");
	if(c)printf("C\n");
}