#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n&&n)
	{
		int a[15][15]={};
		for(int i=0;i<n;i++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				sum+=a[i][j];
			}
			a[i][n]=sum;
		}
		for(int j=0;j<=n;j++)
		{
			int sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=a[i][j];
			}
			a[n][j]=sum;
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				printf("%5d",a[i][j]);
			}
			printf("\n");
		}
		
	}
	/*
	int ix,*pix;
	double dx,*pdx;
	
	scanf("%d",&ix);
	scanf("%lf",&dx);
	
	pix=&ix;
	pdx=&dx;
	
	
	
	printf("ix = %d, pix = %d\n",ix,*pix);
	printf("dx = %lf, pdx = %lf\n",dx,*pdx);
	*/
}