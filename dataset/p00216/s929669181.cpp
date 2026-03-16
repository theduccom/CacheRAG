#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int w;
	while (cin >> w)
	{
		if (w < 0) break;
		if (w <= 10)		cout << 3130 << endl;
		else if (w <= 20)	cout << 3130 - (w-10) * 125 << endl;
		else if (w <= 30)	cout << 1880 - (w-20) * 140 << endl;
		else				cout << 480 - (w-30) * 160 << endl;
	}
}