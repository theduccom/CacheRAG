#include<iostream>
#include<string>
using namespace std;
int main()
{
	string in;
	while(cin>>in) 
	{
		string ans="";
		for(int i = 0; i < in.size(); ++i)
		{
			if(in[i]!='@') ans+=in[i];
			else 
			{
				int j=in[i+1]-'0';
				while(j--) ans+=in[i+2];
				i+=2;
			}
		}
		cout<<ans<<endl;
	}
  return 0;
}