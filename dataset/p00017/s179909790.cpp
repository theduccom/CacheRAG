#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
	string str;
	while(getline(cin, str))
	{
		string word;
		int n = str.size();
		for(int j = 0; j < 26; ++j)
		{
			word.clear();
			for(int i = 0; i < n; ++i)
			{
				if('a' <= str[i] && str[i] <= 'z')
				{
					word += (str[i] + j -'a') % 26 + 'a';
				}
				else
				{
					word += str[i];
				}
			}
			if(word.find("this") != -1 || word.find("the") != -1 || word.find("that") != -1)
			{
				cout << word << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}