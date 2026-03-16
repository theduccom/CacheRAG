#include<stdio.h>

int main(){
	char ev[30];
	int ten,n,out,rui[4];
	
	scanf("%d ",&n);
	
	while(n--){
		out=0;
		ten=0;
		rui[1]=rui[2]=rui[3]=0;
		while(out<3){
			scanf(" %s ",ev);
			
			if(ev[1]=='U'){
				++out;
			}
			if(ev[1]=='I'){
				if(rui[3]==1){
					++ten;
				}
				rui[3]=rui[2];
				rui[2]=rui[1];
				rui[1]=1;
			}
			if(ev[1]=='O'){
				ten+=rui[1]+rui[2]+rui[3]+1;
				rui[1]=rui[2]=rui[3]=0;
			}
//			printf("%d %d %d %d\n",ten ,rui[1],rui[2],rui[3]);
		}
		printf("%d\n",ten);
	}
	return 0;
}