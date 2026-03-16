#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true){
		int N;
		scanf("%d",&N);
		if(N==0)break;
		int Q[10];
		for(int i=0;i<10;i++){
			Q[i]=0;
		}
		for(int i=0;i<N;i++){
			int num;
			scanf("%d",&num);
			Q[num]++;
		}
		for(int i=0;i<10;i++){
			if(Q[i]==0){
				printf("-\n");
			}
			else{
				for(int j=0;j<Q[i];j++){
					printf("*");
				}
				printf("\n");
			}
		}
	}
	return 0;
}