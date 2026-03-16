#include<stdio.h>
int main(void)
{
	char capa,capb;
	int ball[3];
	int i,j,temp;
	
	ball[0]=1;
	ball[1]=0;
	ball[2]=0;
	while(scanf(" %c,%c",&capa,&capb)!=EOF){
		if(capa=='A'){
			i=0;
		}
		else if(capa=='B'){
			i=1;
		}
		else if(capa=='C'){
			i=2;
		}
		if(capb=='A'){
			j=0;
		}
		else if(capb=='B'){
			j=1;
		}
		else if(capb=='C'){
			j=2;
		}
		temp=ball[i];
		ball[i]=ball[j];
		ball[j]=temp;
	}
	for(i=0;i<3;i++){
		if(ball[i]==1){
			if(i==0){
				printf("A\n");
				break;
			}
			if(i==1){
				printf("B\n");
				break;
			}
			if(i==2){
				printf("C\n");
				break;
			}
		}
	}
	return 0;
}