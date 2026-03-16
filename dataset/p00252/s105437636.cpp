#include <iostream>
using namespace std;

int main()
{

	bool b1, b2, b3;

	cin >> b1 >> b2 >> b3;

	if( b1 ) {
		if( !b2 ) cout << "Close" << endl;
		else cout << "Open" << endl;
	}
	else if( b3 ) cout << "Open" << endl;
	else cout << "Close" << endl;

	return 0;

}