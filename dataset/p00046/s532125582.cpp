#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double high[50] = {};
	int i = 0;
	while (cin >> high[i]) {
		i++;
	}
	sort(high, high + i);
	cout << high[i-1] - high[0] << endl;


	return 0;
}