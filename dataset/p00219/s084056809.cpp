#include <cstdio>
#include <vector>

int main(){
	int n;
	int self;
	
	while(1){
		scanf("%d" , &n);
		if(n == 0){ break; }
		int ice[10];
		for(int i=0;i<10;i++){
			ice[i] = 0;
		}
		for(int i=0;i<n;i++){
			scanf("%d",&self);
			ice[self]++;
		}
		for(int i=0;i<10;i++){
			if(ice[i] == 0){
				printf("-");
			}else{
				for(int j=0;j<ice[i];j++){
					printf("*");
				}
			}
			printf("\n");
		}
		
	}
	return 0;
}