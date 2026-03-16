#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int i,j;
	int ans=0;
	
	for(;cin >> str;)
	{
		for(i=0,j=str.size()-1;;)
		{
			if(i>j)
			{
				ans++;
				break;
			}
			if(str[i]==str[j])
			{
				i++;
				j--;
			}
			else
				break;
		}
	}
	cout << ans << endl;
}