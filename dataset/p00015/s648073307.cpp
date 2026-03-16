#include <iostream>
#include <string>
#include <utility>
using namespace std;
int toNumber(char c){
	switch (c)
	{
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	}
	return 0;
}
int main()
{
	int n, sa, sb, k, r, i;
	string a, b;
	int sum[100] = {};
	cin >> n;
	while (n--){
		cin >> a >> b;
		if (a.size() < b.size()) swap(a, b);
		sa = a.size();
		sb = b.size();
		if (sa > 80){
			cout << "overflow\n";
			continue;
		}
		k = i = 0;
		for (; i < sa; ++i){
			if (i < sb) k = toNumber(a[sa - 1 - i]) + toNumber(b[sb - 1 - i]) + k;
			else 		k = toNumber(a[sa - 1 - i]) + k;
			r = k % 10;
			k = k / 10;
			sum[i] = r;
		}
		if (0 != k) sum[i] = k;
		else --i;
		if (i >= 80){
			cout << "overflow\n";
			continue;
		}
		for (int d = i; d >= 0; --d)
			cout << sum[d];
		cout << "\n";
	}
	return 0;
}