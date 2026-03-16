// 2011/05/24 Tazoe

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

double trian(double x0, double y0, double x1, double y1, double x2, double y2)
{
	double a = sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
	double b = sqrt((x2-x0)*(x2-x0)+(y2-y0)*(y2-y0));
	double c = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

	double z = (a+b+c)/2.0;

	return sqrt(z*(z-a)*(z-b)*(z-c));
}

int main()
{
	double S = 0.0;

	double x[20], y[20];
	int i = 0;
	while(true){
		if(i>=20)
			break;

		string str;
		cin >> str;
		if(cin.eof())
			break;

		for(int j=0; j<str.size(); j++)
			if(str[j]==',')
				str[j] = ' ';

		istringstream ist(str);
		ist >> x[i] >> y[i];

		if(i>=2)
			S += trian(x[0], y[0], x[i-1], y[i-1], x[i], y[i]);

		i++;
	}

	cout.precision(8);
	cout << fixed << S << endl;

	return 0;
}