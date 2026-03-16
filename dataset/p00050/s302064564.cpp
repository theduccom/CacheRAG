#include <iostream>
using namespace std;

/** Problem0050 : Apple and Peach **/
int main()
{
	string str;
	
	while (getline(cin, str)) {
		for (int i=0; str[i] != '\0'; i++) {
			if (str[i] == 'a') {
				if (str[i+1]=='p' && str[i+2]=='p' && str[i+3]=='l' && str[i+4]=='e') {
					cout << "peach";
					i+=4;
				} else {
					cout << "a";
				}
			} else if (str[i] == 'p') {
				if (str[i+1]=='e' && str[i+2]=='a' && str[i+3]=='c' && str[i+4]=='h') {
					cout << "apple";
					i+=4;
				} else {
					cout << "p";
				}
			} else
				cout << str[i];
		}
		cout << endl;
	}
	return 0;
}