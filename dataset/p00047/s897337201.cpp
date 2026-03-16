#include<iostream>

using namespace std;

int main()
{
	char cup[4];
	int ans[4]={1,0,0,0};
	int i=0;
	
	for(;cin >> cup[i];)
	{
		i++;
		if(i==3)
		{
			int a;
			a=ans[cup[0]-'A'];
			ans[cup[0]-'A']=ans[cup[2]-'A'];
			ans[cup[2]-'A']=a;
			i=0;
		}
	}
	for(i=0;i<3;i++)
	{
		if(ans[i]==1)
		{
			char a;
			a='A'+i;
			cout << a << endl;
		}
	}
}