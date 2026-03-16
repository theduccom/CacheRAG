#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double v, y;
	
	while (cin >> v){
		y = (v * v) / 19.6;
		double n = (y + 5) / 5;
		cout << (int)ceil(n) << endl;
	}
	return (0);
}