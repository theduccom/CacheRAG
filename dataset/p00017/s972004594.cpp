#include<iostream>
using namespace std;
int main()
{
	string s;
	for(;getline(cin,s);)
	{
		bool f=0;
		for(;!f;)
		{
			for(int i=0;i<s.size();i++)
			{
				if(s[i]>='a'&&s[i]<='z')
				{
					s[i]--;
					if(s[i]<'a')s[i]='z';
				}
			}
			string t[3]={"the","this","that"};
			for(int i=0;!f&&i<3;i++)
			{
				for(int j=0;!f&&j+t[i].size()<s.size();j++)
				{
					if(s.substr(j,t[i].size())==t[i])
					{
						cout<<s<<endl;
						f=1;
					}
				}
			}
		}
	}
}

