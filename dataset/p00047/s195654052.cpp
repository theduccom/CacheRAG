// 2011/07/12 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char bal = 'A';

	while(true){
		string str;
		cin >> str;
		if(cin.eof())
			break;

		if(str[0]==bal)
			bal = str[2];
		else if(str[2]==bal)
			bal = str[0];
	}

	cout << bal << endl;

	return 0;
}