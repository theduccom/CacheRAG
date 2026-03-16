#include <iostream>
#include <string>
using namespace std;

int main()
{
	char sastr;
	sastr = 'a' - 'A'; //大文字と小文字の差
	string str;
	char newch;
	getline(cin,str);	
	for (int i = 0 ; i < str.size() ; i++)
	{
		if (( str[i] >= 'a') && ('z' >= str[i]))
		{
			newch =+ str[i] - sastr;
		} else 
		{
			newch =+ str[i];
		}
		cout << newch;	
	}
	cout <<endl;
	return 0;
}