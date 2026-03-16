#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int weights[10] = { 512, 256, 128, 64, 32, 16, 8, 4, 2, 1 };
	vector<int> ans;
	int n;

	while (cin >> n)
	{
		ans.clear();
		for (int i = 0; i < 10; ++i)
		{
			if (n >= weights[i])
			{
				n -= weights[i];
				ans.push_back(weights[i]);
			}
		}

		//??????????????????
		for (int i = ans.size() - 1; i >= 0; --i)
		{
			cout << ans[i];
			if (i != 0) cout << " ";
		}

		cout << endl;
	}

	return 0;
}