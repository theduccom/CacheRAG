#include<cstdio>
#include<cmath>

using namespace std;

double date[2][3];
int n;

int main()
{
	scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%lf",&date[i][j]);
		}
	}
	double d = sqrt((date[0][0]-date[1][0])*(date[0][0]-date[1][0])+(date[0][1]-date[1][1])*(date[0][1]-date[1][1]));
	if(date[0][2]-date[1][2]>d) printf("2\n");
	else if(date[1][2]-date[0][2]>d)printf("-2\n");
	else if(date[0][2]+date[1][2]<d)printf("0\n");
	else printf("1\n");
	}
	return 0;

}