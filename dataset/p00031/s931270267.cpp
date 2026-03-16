#include <stdio.h>

int main()
{
	int n;
	int i;
	int weight[]={1,2,4,8,16,32,64,128,256,512};
	bool isFirsttime;

	while(scanf("%d", &n)!=EOF){
		isFirsttime=true;
		for(i=0; i<10; i++){
			if(n%2==1){
				if(isFirsttime){ printf("%d", weight[i]); isFirsttime=false; }
				else printf(" %d", weight[i]);
			}
			n = n>>1;
		}
		printf("\n");
	}

	return 0;
}