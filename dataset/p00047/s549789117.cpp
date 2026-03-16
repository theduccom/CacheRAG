#include <iostream>
#include <string>
using namespace std;

int main()
{
	int p[3] = { 1, 0, 0 };
	string str;
	while (cin >> str)
	{
		int a = str[0]-'A', b = str[2]-'A';
		int tmp = p[a];
		p[a] = p[b];
		p[b] = tmp;
	}

	for (int i=0; i<3; i++)
		if (p[i]) cout << (char) ('A'+i) << endl;
}