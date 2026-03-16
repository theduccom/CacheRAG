#include <stdio.h>

int main(){
	int start_apple[200],start_peach[200],flag1=0,flag2=0,judge1=0,judge2=0,i,j,k;
	char alternative[]="pop'n";
	char apple[]="apple";
	char peach[]="peach";
	char buf[1001];
	fgets(buf,1000,stdin);
	for(i=0;i<996;i++){
		for(j=0;j<5;j++){
			if(buf[i+j]==apple[j]){judge1++;}
			if(buf[i+j]==peach[j]){judge2++;}
		}
		if(judge1==5){start_apple[flag1]=i; flag1++; judge1=0; judge2=0;}
			else if(judge2==5){start_peach[flag2]=i; flag2++; judge1=0; judge2=0;}
			else{judge1=0; judge2=0;}
	}
		for(j=0;j<5;j++){
			for(k=0;k<flag1;k++){
				if(start_apple[0]==0&&flag1==0)break;
				buf[start_apple[k]+j]=peach[j];
			}
			for(k=0;k<flag2;k++){
				if(start_peach[0]==0&&flag2==0)break;
				buf[start_peach[k]+j]=apple[j];
			}
		}
		buf[1000]='\n';
	printf("%s",buf);
	return 0;
}