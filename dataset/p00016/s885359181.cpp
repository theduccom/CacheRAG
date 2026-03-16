#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;
void getValue(string& l, int& d, int& a)
{
	string::size_type p = l.find(',');
	d = atoi(l.substr(0, p).c_str());
	a = atoi(l.substr(p + 1).c_str());
}
int main()
{
	string line;
	int d, a;
	double x = 0.0, y = 0.0, angle = 90.0, toR = 3.14159265358979323846 / 180.0;
	while (true){
		cin >> line;
		getValue(line, d, a);
		if (0 == d && 0 == a)
			break;
		x += cos(angle * toR) * d;
		y += sin(angle * toR) * d;
		angle -= a;
	}
	cout << (int)x << "\n" << (int)y << "\n";
	return 0;
}