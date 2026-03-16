#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int n,i,j;
	
	cin >> n;
	
	for(i=0;i<=n;i++)
	{
		getline(cin,str);
		
		if(i!=0)
		{
			for(;;)
			{
				if(str.find("Hoshino")<str.size())
					str[str.find("Hoshino")+6]='a';
				else
					break;
			}
			cout << str << endl;
		}
	}
}