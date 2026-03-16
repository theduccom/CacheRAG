#include <iostream>
using namespace std;

int main()
{
	long double v, t, y;
	int count=0;
	int ans[100];
	while (cin >> v) {
		int n = 0;
		t = v / 9.8;
		y = 4.9*t*t;
		while(1){
			n++;
			if (y <= 5 * n - 5) {
				ans[count] = n;
				break;
			}
		}
		count++;
	}
	for (int a = 0; a < count; a++)
		cout << ans[a] << endl;
}