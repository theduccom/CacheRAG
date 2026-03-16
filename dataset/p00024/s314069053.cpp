#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	double t,v,y;
	double h;
	int N;

	while( cin >> v ){
		t = v / 9.8;
		y = 4.9 * t * t;
		N = ( y + 5 ) / 5;
		N++;
		cout << N << endl;
	}
}