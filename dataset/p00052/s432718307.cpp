#include <iostream>
using namespace std;

int main()
{
	long long a, ans, re;

	while (cin >> a, a){
		re = 0;
		ans = 1;
		for (int i = 1; i <= a; i++){
			ans *= i;
			while (1){
				if (ans % 10 == 0){
					re++;
					ans /= 10;
				}
				else break;
			}
			ans %= 1000000;
		}
		cout << re << endl;
	}
	return (0);
}