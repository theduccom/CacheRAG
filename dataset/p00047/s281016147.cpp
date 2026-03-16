#include<stdio.h>

int main(void){
	char a,b;
	int tp[]={1,0,0},temp,i;
	while(scanf("%c,%c",&a,&b)!=EOF){
		temp=tp[a-'A'];tp[a-'A']=tp[b-'A'];
		tp[b-'A']=temp;
	}
	for(i=0;i<3;i++){
		if(tp[i]==1){
			printf("%c\n",i+'A');
			break;
		}
	}
	return 0;
}