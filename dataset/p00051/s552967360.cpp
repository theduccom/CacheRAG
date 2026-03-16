#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<char> Vec(8);
	vector<char> VecMax(8);
	vector<char> VecMin(8);
	while(n--)
	{
		for(int i = 0; i < 8; ++i)
		{
			cin >> Vec[i];
		}
		VecMax = Vec;
		VecMin = Vec;
		sort(VecMax.begin(), VecMax.end(), greater<char>());
		sort(VecMin.begin(), VecMin.end());
		int Max = 0;
		int Min = 0;
		int count = 1;
		for(int i = 7; i >= 0; --i)
		{
			Max += (VecMax[i] - '0') * count;
			Min += (VecMin[i] - '0') * count;
			count *= 10;
		}
		cout << Max - Min << endl;
	}
}

int main()
{
	solve();
	return(0);
}