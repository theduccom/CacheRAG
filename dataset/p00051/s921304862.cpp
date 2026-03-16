#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, su, parts[8], max, min;

	cin >> n;

	for (int i = 0; i < n; i++){
		max = min = 0;
		cin >> su;
		for (int j = 0; j < 8; j++){
			parts[j] = su % 10;
			su /= 10;
		}
		sort(parts, parts + 8);
		for(int j = 0; j < 8; j++){
			min *= 10;
			min += parts[j];
		}
		reverse(parts, parts + 8);
		for (int j = 0; j < 8; j++){
			max *= 10;
			max += parts[j];
		}
		cout << max - min << endl;
	}

		return (0);
}