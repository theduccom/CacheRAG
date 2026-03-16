// 2011/07/12 Tazoe

#include <iostream>
#include <string>
using namespace std;

int trn(char rom)
{
	switch(rom){
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}

	return 0;
}

int main()
{
	while(true){
		string str;
		cin >> str;
		if(cin.eof())
			break;

		int sum = 0;
		for(int i=0; i<str.size()-1; i++)
			if(trn(str[i])>=trn(str[i+1]))
				sum += trn(str[i]);
			else
				sum -= trn(str[i]);
		sum += trn(str[str.size()-1]);

		cout << sum << endl;
	}

	return 0;
}