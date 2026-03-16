#include <iostream>
using namespace std;
int main()
{
	int p, n, s = 0, t = 0, c = 0;
	char b;
	while (1)
	{
		cin >> p;
		if (cin.eof()) break;
		cin >> b >> n;
		s += p * n;
		t += n;
		c++;
	}
	cout << s << endl << (int)((double)t / c + 0.5) << endl;
}