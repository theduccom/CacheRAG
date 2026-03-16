#include <iostream>
#include <string>
using namespace std;

void next(string& str)
{
	for(int i=0; i<str.length(); i++)
	{
		if('a'<=str[i] && str[i]<='z')
		{
			str[i] = ((str[i]-'a'+25)%26)+'a';
		}
	}
}

int main()
{
	string str;
	while(getline(cin,str))
	{
		for(int i=0; i<26; ++i,next(str))
		{
			if(-1!=str.find("the") || -1!=str.find("this") || -1!=str.find("that"))
			{
				cout << str << endl;
				break;
			}
		}
	}

	return 0;
}