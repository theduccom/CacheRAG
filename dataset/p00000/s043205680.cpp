#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<a[i]<<'x'<<a[j]<<'='<<a[i]*a[j]<<endl;
		}
	}
	return 0;
}
