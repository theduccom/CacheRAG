#include <iostream>
#include <cstdio>
#include <limits.h>
using namespace std;


				
int main()
{
	int n,m,a,b,co,ti,p,r;
	int money[100][100];
	int time[100][100];

	while(cin >> n >> m && n && m)
	{
		/*[m-1][m-1]ツづ慊づづ個配ツ療アツづーツ渉可甘コツ可サ*/
		for(int i=0;i<100;i++)
			for(int j=0;j<100;j++)
				time[i][j]=money[i][j]= (i-j) ? (1<<22) : 0;

		for(int i=0;i<n;i++)
		{
			cin >> a >> b >> co >> ti;
			money[a-1][b-1]=money[b-1][a-1]=co;
			time[a-1][b-1]=time[b-1][a-1]=ti;
		}
		/*ツδ渉ーツシツδδδ仰フツδ債イツドツ法 for time*/
		for(int k=0;k<m;k++)
			for(int i=0;i<m;i++)
				for(int j=0;j<m;j++)
					time[i][j]=time[j][i]=min(time[i][j],time[i][k]+time[k][j]);
					
		/*ツδ渉ーツシツδδδ仰フツδ債イツドツ法 for cost*/	
		for(int k=0;k<m;k++)
			for(int i=0;i<m;i++)
				for(int j=0;j<m;j++)
					money[i][j]=money[j][i]=min(money[i][j],money[i][k]+money[k][j]);
		cin >> p;
		
		/*
		for(int i=0;i<m;i++)
		{
			
			for(int j=0;j<m;j++)printf("%10d",money[i][j]);
			cout << endl;
		}
		*/
		
		for(int i=0;i<p;i++)
		{
			cin >> a >> b >> r;
			cout <<(r?time[a-1][b-1]:money[a-1][b-1])<< endl;
		}
	}
}
			
	