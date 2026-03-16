#include<iostream>
using namespace std;
int main()
{
	int a = 4280, b, sum, ans;
	while(true)
	{
		cin >> b;
		if (b == -1) break;
		if (b <= 10)
		{
			sum = 1150;
			ans = a - sum;
			cout << ans << endl;
		}
		if (b > 10 && b <= 20)
		{
			sum = 1150 + (b-10) * 125;
			ans = a - sum;
			cout << ans << endl;
		}
		if (b > 20 && b <= 30)
		{
			sum = 1150 + 1250 + (b - 20) * 140;
			ans = a - sum;
			cout << ans << endl;
		}
		if (b > 30)
		{
			sum = 1150 + 1250 + 1400 + (b - 30) * 160;
			ans = a - sum;
			cout << ans << endl;
		}
	}
}