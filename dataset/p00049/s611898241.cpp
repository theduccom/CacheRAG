#include<iostream>
using namespace std;

int hash(string s)
{
	if (s == "A") return 0;
	if (s == "B") return 1;
	if (s == "AB") return 2;
	if (s == "O") return 3;
}

int main()
{
	int type[4] = {0};
	int i;
	string s;
	char c;

	while (cin>>i>>c>>s)
		type[hash(s)]++;

	for (i = 0; i < 4; i++)
		cout<<type[i]<<endl;

	return 0;
}