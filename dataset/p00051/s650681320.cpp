#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,i,j,k;
	string str;
	string str2[16];
	int ans[4];
	
	cin >> n ;
	
	for(i=0;i<n;i++)
	{
		cin >> str ;
		for(j=0;j<8;j++)
		{
			for(k=j+1;k<8;k++)
			{
				if(str[j]<str[k])
				{
					char a;
					a=str[j];
					str[j]=str[k];
					str[k]=a;
				}
			}
		}
		str2[0]=str;
		for(j=0;j<8;j++)
		{
			for(k=j+1;k<8;k++)
			{
				if(str[j]>str[k])
				{
					char a;
					a=str[j];
					str[j]=str[k];
					str[k]=a;
				}
			}
		}
		str2[1]=str;
		ans[0] = atoi(str2[0].c_str());
		ans[1] = atoi(str2[1].c_str());
		cout << ans[0]-ans[1] << endl;
	}
}