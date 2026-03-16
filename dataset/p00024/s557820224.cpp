#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double v;
	double c = 4.9 / 9.8 / 9.8 / 5.0;
	while (cin >> v){
		int floor = int(ceil(c * v * v)) + 1;
		cout << floor << "\n";
	}
	return 0;
}