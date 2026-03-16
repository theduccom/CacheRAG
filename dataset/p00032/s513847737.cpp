#include<cstdio>

int chou=0;
int hisi=0;

int date_1,date_2,date_3;

int main()
{
	while(scanf("%d,%d,%d",&date_1,&date_2,&date_3)!=EOF)
	{
		if(date_1*date_1+date_2*date_2==date_3*date_3)chou++;
		else if(date_1==date_2)hisi++;
	}
	printf("%d\n%d\n",chou,hisi);
	return 0;
}