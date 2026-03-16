#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	int p, d1, d2;
	int a,b;

	while( cin >> n && n != 0 ){
		a = 0;
		b = 0;
		for( int i = 0;i < n;i++ ){
			cin >> p >> d1 >> d2;
			if( a < d1 + d2 ){ a = d1 + d2; b = p; }
		}
		cout << b << ' ' << a << endl;
	}
	return 0;


}