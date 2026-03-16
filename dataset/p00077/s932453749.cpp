#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string str;

	while (cin >> str)
	{
		for(int i=0; str[i] != '\0'; i++)
		{
			if(str[i] != '@'){
				cout << str[i];
			}else{
				/*char c = str[i+1];*/
				for(int j=0; j<str[i+1]-48 /*j<atoi(&c)*/; j++){
					cout << str[i+2];
				}
				i+=2;
			}
		}

		cout << endl;
	}

	return 0;
}