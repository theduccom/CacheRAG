#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch;
	int n;
	cin>>n;
	cin.get(ch);
	for(int i=0;i<n;i++)
	{
		string str;
		while(1)
		{
			cin.get(ch);
			if(ch=='\n')break;
			str+=ch;
		}
		while(1)
		{
			int idx=str.find("Hoshino");
			if(idx==-1)break;
			str[idx+6]='a';
		}
		cout<<str<<endl;
	}
	
	return 0;
}