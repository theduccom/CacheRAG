// 2011/07/02 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int rct = 0;
	int lzn = 0;

	while(true){
		string str;
		cin >> str;
		if(cin.eof())
			break;

		for(int i=0; i<str.size(); i++)
			if(str[i]==',')
				str[i] = ' ';

		istringstream ist(str);
		int a, b, c;
		ist >> a >> b >> c;

		if(a*a+b*b==c*c)
			rct++;
		if(a==b)
			lzn++;
	}

	cout << rct << endl;
	cout << lzn << endl;

	return 0;
}