#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <functional>
#include <numeric>
#include <cmath>
#include <cstring>
#include <queue>

using namespace std;
int n, m;
vector<int> vege;

const int INF = 1 << 29;

int main(void)
{
	while(cin >> n >> m && n && m)
	{
		vege.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> vege[i];
		}

		sort(vege.begin(), vege.end(), greater<int>());
		int sum = accumulate(vege.begin(), vege.end(), 0);
		for (int i = 1; i - 1 < n / m; i++)
		{
			sum -= vege[i * m - 1];
		}
		cout << sum << endl;
	}
	return 0;
}