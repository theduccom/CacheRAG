// 2011/07/12 Tazoe

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	int ang = 90;

	while(true){
		string str;
		cin >> str;

		for(int i=0; i<str.size(); i++)
			if(str[i]==',')
				str[i] = ' ';

		istringstream ist(str);
		int d, r;
		ist >> d >> r;
		if(d==0&&r==0)
			break;

		x += (double)d*cos(M_PI*(double)ang/180.0);
		y += (double)d*sin(M_PI*(double)ang/180.0);
		ang -= r;
	}

	cout << (int)x << endl;
	cout << (int)y << endl;

	return 0;
}