#include<cstdio>

using namespace std;

int date[12];

int main()
{
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&date[0],&date[1],&date[2],&date[3],&date[4],&date[5],&date[6],&date[7],&date[8],&date[9],&date[10],&date[11])!=EOF)
	{
		int line=0;//合計の距離
		for(int i=0;i<10;i++)line+=date[i];
		double d = line*date[10];
		d/=(date[10]+date[11]);
		int k=0;
		for(int i=0;i<10;i++)
		{
			k+=date[i];
			if(d<=k)
			{
				printf("%d\n",i+1);
				break;
			}
		}
	}
}