#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,p;
	string s;
	cin >> n;
	while(n--)
	{
		if(cin.peek()=='\n') cin.ignore();
		getline(cin,s);
		while(p=s.find("Hoshino"), p!=-1)
		{
			s.replace(p,7,"Hoshina");
		}
		cout << s << endl;
	}
}