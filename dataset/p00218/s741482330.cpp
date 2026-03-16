#include<cstdio>
#include<algorithm>
int main(void)
{
	int n,pm[10000],pe[10000],pj[10000],i,j;
	scanf("%d",&n);
	while(n!=0){
		j=0;
		for(i=0;i<n;i++)
			scanf("%d %d %d",&pm[i],&pe[i],&pj[i]);
		for(i=0;i<n;i++){
			if(pm[i]==100||pe[i]==100||pj[i]==100||(pm[i]+pe[i])/2>=90||(pm[i]+pe[i]+pj[i])/3>=80)
				printf("A\n");
			else if((pm[i]+pe[i]+pj[i])/3>=70||(pm[i]+pe[i]+pj[i])/3>=50&&pm[i]>=80||(pm[i]+pe[i]+pj[i])/3>=50&&pe[i]>=80)
				printf("B\n");
			else
				printf("C\n");
		}
		scanf("%d",&n);
	}
	return 0;
}