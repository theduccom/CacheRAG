#include<iostream>
#include<string>
using namespace std;

int parse(char c)
{
	switch(c){
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
	default:
		return 0;
	}
}

int main(void)
{
	string roman;
	int res = 0;
	int i;

	while(cin >> roman)
	{
		for(i=0; i<roman.size()-1; i++)
		{
			if( parse(roman[i]) >= parse(roman[i+1]) )
				res += parse(roman[i]);
			else
				res -= parse(roman[i]);
		}
		res += parse(roman[roman.size()-1]);
		cout << res << endl;
		res = 0;
	}

	return 0;
}