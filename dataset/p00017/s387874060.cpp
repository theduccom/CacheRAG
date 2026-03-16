#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string henkan(string a)
{
	for (unsigned int i = 0; i < a.size(); i++)
	{
		if (a[i] != ' '&&a[i] != '.'&&a[i]!='\n')
		{
			if (a[i] == 'z')a[i] = 'a';
			else 
				a[i] += 1;
		}
	}
	return a;
}
bool check(string a)
{
	string x[3] = { "the", "this", "that" };
	for (int i = 0; i < 3; i++)
	{
		if (a.find(x[i], 0) != string::npos)return false;
	}
	return true;
}
int main()
{
	
	string a, b;
	while (getline(cin, a))
	{
		while (check(a))
		{
			a = henkan(a);
		}
		cout << a << endl;
	}
	
}