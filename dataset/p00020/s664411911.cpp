#include <iostream>
using namespace std;
int main()
{
	char c, d = 'A' - 'a';
	while (cin.get(c)){
		if (c == '\n') break;
		if ('a' <= c && c <= 'z') c += d;
		cout << c;
	}
	cout << "\n";
	return 0;
}