#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str[128];
	string ans[128];
	int page[128];
	int i,j,k;
	char aa[64];
	
	cin >> str[0] ;
	for(i=0;cin >> page[i] ;i++)
	{
		cin >> str[i+1] ;
	}
	for(j=0;j<i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(str[j]>str[k])
			{
				string a;
				int p;
				a=str[j];	str[j]=str[k];	str[k]=a;
				p=page[j];	page[j]=page[k];	page[k]=p;
			}
		}
	}
	for(j=0;j<i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(str[j]==str[k])
			{
				if(page[j]>page[k])
				{
					int a;
					a=page[j];
					page[j]=page[k];
					page[k]=a;
//					cout << "page replaced" << endl;
//					cout << "word:" << str[j] << " page1:" << page[j] << " page2:" << page[k] << " j:" << j << " k:" << k << endl;
				}
			}
		}
	}
	
	for(j=0;j<i;j++)
	{
		if(str[j]!="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz")
		{
			sprintf(aa,"%d",page[j]);
			ans[j]+=aa;
			for(k=j+1;k<i;k++)
			{
				if(str[j]==str[k])
				{
					str[k]="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
					sprintf(aa,"%d",page[k]);
					ans[j]+=" ";
					ans[j]+=aa;
				}
			}
		}
	}
	
	for(j=0;j<i;j++)
	{
		if(str[j]!="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz")
		{
			cout << str[j] << endl;
			cout << ans[j] << endl;
		}
	}
}