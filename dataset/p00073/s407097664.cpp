#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int a = 0;
	long long int b = 0;
	while (1)
	{
		cin >> a;
		cin >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		long long int c = a*a*(a*a + 4 * b*b) * 10000000000;
		long long int d = sqrt(c);
		cout << a * a + d / 100000 << '.' << d % 100000 << endl;
	}
	
	
	return 0;
}