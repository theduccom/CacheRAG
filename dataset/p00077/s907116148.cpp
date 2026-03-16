#include <iostream>
#include <string>
using namespace std;

void Slove(string str)	{
	string answer="";

	for (int i=0; i<str.length(); ++i)	{
		if (str[i] == '@')	{
			for (int j=0; j<str[i+1]-'0'; j++)
				answer+=str[i+2];
			i+=2;
		}
		else	answer+=str[i];
	}
	cout << answer << endl;
}

int main(void)	{
	string str;

	while (cin >> str)
		Slove(str);
	return 0;
}