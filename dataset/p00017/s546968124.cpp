#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str,t;
	while(getline(cin,str))
	{
		for(int i = 0;i < 26;++i)
		{
			t = str;
			for(int j = 0;j < str.size();++j)
			{
				if(t[j] == ' ' || t[j] == '.') continue;
				t[j] = (t[j] - 'a' + i) % 26 + 'a';
			}
			if(t.find("that",0) != string::npos || t.find("this",0) != string::npos || t.find("the",0) != string::npos){
				cout << t << endl;
				break;
			}
		}
	}
	return 0;
}