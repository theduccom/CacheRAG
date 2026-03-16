#include <iostream>
#include <algorithm>

#define pow2(x) ((x) * (x))

using namespace std;

int main( void )
{
	int A, B, C;

	while (cin >> A >> B >> C, A | B | C)
	{
		int val = pow2(min(A, B)) + pow2(min(max(A, B), C));

		int n;
		cin >> n;

		for (int i=0; i < n; ++i)
		{
			int r;
			cin >> r;

			if (pow2(2 * r) > val)
				cout << "OK";
			else
				cout << "NA";
			cout << endl;
		}		
	}
	return 0;
}