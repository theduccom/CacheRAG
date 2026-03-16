#include<iostream>
#include<map>
using namespace std;

int main()
{
	char cupName[3] = {'A', 'B', 'C'};
	map<char, int> cup;
	char c1, c2;
	int i;

	cup['A'] = 1;
	cup['B'] = 0;
	cup['C'] = 0;
	while (scanf("%1c,%1c", &c1, &c2) != EOF) {
		cin.ignore(0xFF, '\n');
		cup[c1] ^= cup[c2];
		cup[c2] ^= cup[c1];
		cup[c1] ^= cup[c2];
	}

	for (i = 0; i < 3; i++)
		if (cup[cupName[i]]) cout<<cupName[i]<<endl;

	return 0;
}