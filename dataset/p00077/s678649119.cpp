#include <iostream>
using namespace std;

/** Problem0077 : Run Length **/
int main()
{
	char str[100];
	
	while (cin >> str) {
		for (int i=0; str[i] != '\0'; i++) {
			if (str[i] != '@')
				cout << str[i];
			else {
				for (int j=0; j<str[i+1]-'0'; j++)
					cout << str[i+2];
				i+=2;
			}
		}
		cout << endl;
	}
	return 0;
}