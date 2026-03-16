#include<iostream>
#include<iomanip>

using namespace std;

int matrix[11][11];

int main()
{
	int n,sum;
	
	for(;;)
	{
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>matrix[i][j];
			}
		}

		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=matrix[i][j];
			}
			matrix[i][n]=sum;
		}
		for(int j=0;j<n;j++)
		{
			sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=matrix[i][j];
			}
			matrix[n][j]=sum;
		}
		sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=matrix[i][n];
		}
		matrix[n][n]=sum;
		
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				cout<<setfill(' ')<<setw(5)<<right<<matrix[i][j];
			}
			cout<<endl;
		}
	}
}