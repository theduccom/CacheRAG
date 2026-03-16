#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n = 0, i;
	char s[101] = "", t[101] = "";
	while (cin >> s)
	{
		if (cin.eof()) break;
		for (i = strlen(s)-1; i >= 0; i--)
		{
			t[strlen(s)-1-i] = s[i];
		}
		t[strlen(s)] = '\0';
		if (strcmp(s, t) == 0) n++;
	}
	cout << n << endl;
}