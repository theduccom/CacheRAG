#include <iostream>
using namespace std;

int main()
{
	int a[10], v1, v2;
	char c;

	while (cin >> a[0] >> c >> a[1] >> c >> a[2] >> c >> a[3] >> c 
				>> a[4] >> c >> a[5] >> c >> a[6] >> c >> a[7] >> c 
				>> a[8] >> c >> a[9] >> c >> v1 >> c >> v2) {
		
		int s = 0;

		for (int i = 0; i < 10; i++)
			s += a[i];

		double u = (double)(s * v1) / (double)(v1 + v2);

		int j = 0;

		while (u > 0) {
			u -= a[j];
			j++;
		}

		cout << j << endl;
	}

	return 0;
}
