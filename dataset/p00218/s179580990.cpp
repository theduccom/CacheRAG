#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int n,i,j,pm[10000],pe[10000],pj[10000],flg;
	
	while(1){
		
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++) scanf("%d %d %d",&pm[i],&pe[i],&pj[i]);
		for(i=0;i<n;i++){
			flg=0;
			if(pm[i]==100 || pe[i]==100 || pj[i]==100) {
				printf("A\n");
				flg=1;
			}
			else if((double)(pm[i]+pe[i])/2>=90){
				printf("A\n");
				flg=1;
			}
			else if((double)(pm[i]+pe[i]+pj[i])/3>=80){
				printf("A\n");
				flg=1;
			}
			else if((double)(pm[i]+pe[i]+pj[i])/3>=70){
				printf("B\n");
				flg=1;
			}
			else if((double)(pm[i]+pe[i]+pj[i])/3>=50){
				if(pm[i]>=80 || pe[i]>=80){
					printf("B\n");
					flg=1;
				}
			}
			if(flg==0){
				printf("C\n");
			}
		}
	}
	return 0;
}
	