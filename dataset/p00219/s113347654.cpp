#include<stdio.h>
int table[10];
int main(){
	int a;
	while(scanf("%d",&a),a){
		for(int i=0;i<10;i++)table[i]=0;
		for(int i=0;i<a;i++){
			int b;
			scanf("%d",&b);
			table[b]++;
		}
		for(int i=0;i<10;i++){
			if(table[i]==0)printf("-\n");
			else{
				for(int j=0;j<table[i];j++)printf("*");
				printf("\n");
			}
		}
	}
}