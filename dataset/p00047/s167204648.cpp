#include <iostream>
using namespace std;
int main()
{
	int p = 0;
	bool b[3] = {true, false, false};
	char c[3];
	while (1)
	{
		cin >> c[0];
		if (cin.eof()) break;
		cin >> c[1] >> c[2];
		swap(b[c[0]-'A'], b[c[2]-'A']);
		if (b[c[0]-'A'])
			p = c[0]-'A';
		if (b[c[2]-'A'])
			p = c[2]-'A';
	}
	cout << (char)('A'+p) << endl;
}