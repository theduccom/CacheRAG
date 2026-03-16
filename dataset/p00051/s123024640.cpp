#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, seq;
	int num[10];
	
	cin >> n;
	for (; n > 0; n--){
		cin >> seq;
		for (int i = 0; i < 8; i++){
			num[i] = seq % 10;
			seq /= 10;
		}
		sort(num, num + 8);
		int res = 0;
		for (int i = 0; i < 8; i++){
			res *= 10;
			res += (num[7 - i] - num[i]);
		}
		cout << res << endl;
	}
	return (0);
}