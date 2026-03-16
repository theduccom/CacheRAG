#include <iostream>

using namespace std;

int main()
{
	int rect_cnt = 0;
	int lzng_cnt = 0;
	int a, b, c;
	char dummy;
	
	while ( cin >> a >> dummy >> b >> dummy >> c ) {
		if (a==b) {
			lzng_cnt++; continue;
		}
		if ( a*a + b*b == c*c ) rect_cnt++;
	}
	
	cout << rect_cnt << endl << lzng_cnt << endl;
	
	return 0;
}