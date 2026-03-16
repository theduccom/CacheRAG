#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 'a'&&a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	cout << a << endl;
}