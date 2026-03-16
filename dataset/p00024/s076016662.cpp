#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double min_v;
	
	while (cin >> min_v) {
		double crack_height = (min_v * min_v) / 19.6;
		int N = ceil( (crack_height)/5.0 ) + 1;
		cout << N << endl;
	}
		
	return 0;
}