#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	char a;
	
	for(;cin.get(a);)
	{
		if(a=='\n')
		{
			cout << endl;
			break;
		}
		a=toupper(a);
		cout << a ;
	}
}