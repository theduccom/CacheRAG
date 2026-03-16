#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t[4] = {0}, n;
	char c;
	string s;
	while (1)
	{
		cin >> n;
		if (cin.eof()) break;
		cin >> c >> s;
		if (s == "A")	t[0]++;
		if (s == "B")	t[1]++;
		if (s == "AB")	t[2]++;
		if (s == "O")	t[3]++;
	}
	cout << t[0] << endl << t[1] << endl << t[2] << endl << t[3] << endl;
}