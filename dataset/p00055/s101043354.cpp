#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a;
	
	while ( cin >> a ) cout << fixed << setprecision(6) << a * 211.0 / 27.0 << endl;
	
	return 0;
}