#include<iostream>

using namespace std;
bool flag[60000];
int main()
{
	flag[0]=flag[1]=true;

	for(int i=2;i<60000;i++)
	{
		if(!flag[i])
		{
			for(int j=i*2;j<60000;j+=i) flag[j]=true;
		}
	}

	int n,low,up;
	while(cin>>n)
	{
		for(int i=n-1;;i--)
		{
			if(!flag[i]) {low=i; break;}
		}
		for(int i=n+1;;i++)
		{
			if(!flag[i]) {up=i; break;}
		}
	
		cout<<low<<" "<<up<<endl;
	}
	return 0;
}
			