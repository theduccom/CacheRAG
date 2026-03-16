#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true){
		int N;
		scanf("%d",&N);
		if(N==0)break;
		for(int i=0;i<N;i++){
			int m,e,j;
			scanf("%d%d%d",&m,&e,&j);
			if(m==100||e==100||j==100){
				printf("A\n");
			}
			else if(m+e>=180){
				printf("A\n");
			}
			else if(m+e+j>=240){
				printf("A\n");
			}
			else if(m+e+j>=210){
				printf("B\n");
			}
			else if(m+e+j>=150&&(m>=80||e>=80)){
				printf("B\n");
			}
			else{
				printf("C\n");
			}
			
		}
	}
	return 0;
}