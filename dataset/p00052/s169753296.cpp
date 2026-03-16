#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		int ans = 0;
		while((n/5) != 0)
		{
			n /= 5;
			ans += n;
		}

		cout << ans << endl;
	}
	return 0;
}