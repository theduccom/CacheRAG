#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		for(int i=0;i<str.size();i++)
		{
			string sstr; sstr=str.substr(i,5);
			if(sstr=="apple") {string tmp="peach"; for(int j=0;j<5;j++) str[i+j]=tmp[j];}
			else if(sstr=="peach") {string tmp="apple"; for(int j=0;j<5;j++) str[i+j]=tmp[j];}
		}
		cout << str << endl;
	}
}