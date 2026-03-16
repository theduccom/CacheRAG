#include <iostream>
using namespace std;

int main()
{
	char str[200];

	while (cin >> str){
		for (int i = 0; str[i] != '\0'; i++){
			if (str[i] == '@'){
				for (int j = 0; j < str[i + 1] - '0'; j++){
					cout << str[i + 2];
				}
				i += 2;
			}
			else {
				cout << str[i];
			}
			
		}
		cout << endl;
	}
	return (0);
}